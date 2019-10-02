#include <stdlib.h>
#include "post.h"
#include "rtclient/ticket.h"

typedef struct rtclient_ticket rtclient_ticket;
typedef struct rtclient_ticket_history_attachment rtclient_ticket_history_attachment;
typedef struct rtclient_ticket_history_list rtclient_ticket_history_list;

void rtclient_ticket_new(const char *queue
			, const char *requestor
			, const char *subject
			, const char *cc
			, const char *admin_cc
			, const char *owner
			, const char *status
			, const char *priority
			, const char *initial_priority
			, const char *final_priority
			, const char *time_estimated
			, const char *starts
			, const char *due
			, const char *text)
{
	post("REST/1.0/ticket/new", (const char *[]){
			"ticket/new", "id"
			, queue, "Queue"
			, requestor, "Requestor"
			, subject, "Subject"
			, cc, "Cc"
			, admin_cc, "AdminCc"
			, owner, "Owner"
			, status, "Status"
			, priority, "Priority"
			, initial_priority, "InitialPriority"
			, final_priority, "FinalPriority"
			, time_estimated, "TimeEstimated"
			, starts, "Starts"
			, due, "Due"
			, text, "Text"
			}, 28);
}

static size_t history_handler(void *contents, size_t size, size_t nmemb
		, void *writedata)
{
	size_t realsize = size * nmemb;
	char response[realsize + 1];
	memcpy(response, contents, realsize);
	response[realsize] = '\0';

	return realsize;
}

static size_t history_l_handler(void *contents, size_t size, size_t nmemb
		, void *writedata)
{
	size_t realsize = size * nmemb;
	char response[realsize + 1];
	memcpy(response, contents, realsize);
	response[realsize] = '\0';
	char histories[strlen(response) + 1];
	strcpy(histories, response);
	rtclient_ticket_history_list **listptr
		= (rtclient_ticket_history_list **)writedata;

	char *linesaveptr = NULL;
	char *line = strtok_r(response, "\n", &linesaveptr);
	if (strstr(line, "200 Ok")) {
		line = strtok_r(NULL, "\n", &linesaveptr);
		char *hashsaveptr = NULL;
		char *hash = strtok_r(line, " ", &hashsaveptr);
		hash = strtok_r(NULL, " ", &hashsaveptr);
		char *length = strtok(hash, "/");
		(*listptr)->length = atoi(length);

		rtclient_ticket_history_list *ptr = realloc(*listptr
				, sizeof(*listptr)
				+ (*listptr)->length
				* sizeof(struct rtclient_ticket_history));
		*listptr = ptr;
		rtclient_ticket_history_list *list = *listptr;

		char *historysaveptr = NULL;
		char *history = strtok_r(histories, "#", &historysaveptr);
		history = strtok_r(NULL, "#", &historysaveptr);
		char *linesaveptr = NULL, *line = NULL;
		char *tokensaveptr = NULL, *token = NULL;
		for (size_t i = 0; i < list->length; i++) {
			list->histories[i]
				= malloc(sizeof(struct rtclient_ticket_history));
			struct rtclient_ticket_history *ticket_history
				= list->histories[i];
			line = strtok_r(history, "\n", &linesaveptr);
			line = strtok_r(NULL, "\n", &linesaveptr);
			do {
				token = strtok_r(line, ":", &tokensaveptr);
				if (!strcmp(token, "id")) {
					token = strtok_r(NULL, ":", &tokensaveptr);
					ticket_history->id = atoi(++token);
				} else if (!strcmp(token, "Ticket")) {
					token = strtok_r(NULL, ":", &tokensaveptr);
					ticket_history->ticket = atoi(++token);
				} else if (!strcmp(token, "TimeTaken")) {
					token = strtok_r(NULL, ":", &tokensaveptr);
					ticket_history->time_taken = atoi(++token);
				} else if (!strcmp(token, "Type")) {
					token = strtok_r(NULL, ":", &tokensaveptr);
					if (!strcmp(++token, "Create"))
						ticket_history->type
							= RTCLIENT_TICKET_HISTORY_TYPE_CREATE;
					else if (!strcmp(token, "EmailRecord"))
						ticket_history->type
							= RTCLIENT_TICKET_HISTORY_TYPE_EMAIL_RECORD;
					else if (!strcmp(token, "Set"))
						ticket_history->type
							= RTCLIENT_TICKET_HISTORY_TYPE_SET;
					else if (!strcmp(token, "SetWatcher"))
						ticket_history->type
							= RTCLIENT_TICKET_HISTORY_TYPE_SET_WATCHER;
					else if (!strcmp(token, "Status"))
						ticket_history->type
							= RTCLIENT_TICKET_HISTORY_TYPE_STATUS;
					else
						ticket_history->type
							= RTCLIENT_TICKET_HISTORY_TYPE_UNKNOWN;
				} else if (!strcmp(token, "Field")) {
					token = strtok_r(NULL, ":", &tokensaveptr);
					if (!strcmp(++token, "Priority"))
						ticket_history->field
							= RTCLIENT_TICKET_HISTORY_FIELD_PRIORITY;
					else if (!strcmp(token, "Status"))
						ticket_history->field
							= RTCLIENT_TICKET_HISTORY_FIELD_STATUS;
					else if (!strcmp(token, "Owner"))
						ticket_history->field
							= RTCLIENT_TICKET_HISTORY_FIELD_OWNER;
					else
						ticket_history->field
							= RTCLIENT_TICKET_HISTORY_FIELD_NONE;
				} else if (!strcmp(token, "OldValue")) {
					token = strtok_r(NULL, ":", &tokensaveptr);
					if (token && strcmp(token, "")) {
						ticket_history->old_value
							= malloc(strlen(token));
						strcpy(ticket_history->old_value
								, ++token);
					} else
						ticket_history->old_value = NULL;
				} else if (!strcmp(token, "NewValue")) {
					token = strtok_r(NULL, ":", &tokensaveptr);
					if (token && strcmp(token, "")) {
						ticket_history->new_value
							= malloc(strlen(token));
						strcpy(ticket_history->new_value
								, ++token);
					} else
						ticket_history->new_value = NULL;
				} else if (!strcmp(token, "Data")) {
					token = strtok_r(NULL, ":", &tokensaveptr);
					if (token && strcmp(token, "")) {
						ticket_history->data
							= malloc(strlen(token));
						strcpy(ticket_history->data
								, ++token);
					} else
						ticket_history->data = NULL;
				} else if (!strcmp(token, "Description")) {
					token = strtok_r(NULL, ":", &tokensaveptr);
					ticket_history->description
						= malloc(strlen(token));
					strcpy(ticket_history->description
							, ++token);
				} else if (!strcmp(token, "Content")) {
					if (ticket_history->type
							== RTCLIENT_TICKET_HISTORY_TYPE_EMAIL_RECORD) {
						ticket_history->content = NULL;
						break;
					}
					token = strtok_r(NULL, ":", &tokensaveptr);
					ticket_history->content
						= malloc(strlen(token));
					strcpy(ticket_history->content, ++token);
					/*
					while ((history = strtok_r(NULL, "#"
									, &historysaveptr))) {
						list->length--;
						char *ptr = realloc(ticket_history
								->content
								, strlen
								(ticket_history
								 ->content)
								+ strlen(history)
								+ 2);
						ticket_history->content = ptr;
						sprintf(ticket_history->content
								, "%s#%s"
								, ticket_history
								->content
								, history);
					}
					*/
					while ((line = strtok_r(NULL, "\n"
								, &linesaveptr))) {
						if (!strncmp(line, "Creator", 7)) {
							ticket_history->creator
								= malloc(strlen(line)
										- 8);
							line += 9;
							strcpy(ticket_history->creator
									, line);
							break;
						}
						char *ptr = realloc(ticket_history
								->content
								, strlen
								(ticket_history
								 ->content)
								+ strlen(line)
								+ 2);
						ticket_history->content = ptr;
						sprintf(ticket_history->content
								, "%s\n%s"
								, ticket_history
								->content
								, line);
					}
				} else if (!strcmp(token, "Creator")) {
					token = strtok_r(NULL, ":", &tokensaveptr);
					ticket_history->creator
						= malloc(strlen(token));
					strcpy(ticket_history->creator, ++token);
				} else if (!strcmp(token, "Created")) {
					ticket_history->created
						= malloc(sizeof(struct tm));
					ticket_history->created->tm_isdst = -1;
					token = strtok_r(NULL, ":", &tokensaveptr);
					char *tmsaveptr = NULL;
					char *tm = strtok_r(token, " "
							, &tmsaveptr);
					char *datesaveptr = NULL;
					char *date = strtok_r(tm, "-"
							, &datesaveptr);
					ticket_history->created->tm_year
						= atoi(date) - 1900;
					date = strtok_r(NULL, "-", &datesaveptr);
					ticket_history->created->tm_mon
						= atoi(date) - 1;
					date = strtok_r(NULL, "-", &datesaveptr);
					ticket_history->created->tm_mday
						= atoi(date);
					tm = strtok_r(NULL, " ", &tmsaveptr);
					ticket_history->created->tm_hour
						= atoi(tm);
					token = strtok_r(NULL, ":", &tokensaveptr);
					ticket_history->created->tm_min
						= atoi(token);
					token = strtok_r(NULL, ":", &tokensaveptr);
					ticket_history->created->tm_sec
						= atoi(token);
				} else if (!strcmp(token, "Attachments")) {
					token = strtok_r(NULL, ":", &tokensaveptr);
					ticket_history->attachments = NULL;
					break;
				}
			}  while ((line = strtok_r(NULL, "\n", &linesaveptr)));

			history = strtok_r(NULL, "#", &historysaveptr);
		}
	} else {
		free(*listptr);
		*listptr = NULL;
#ifdef DEBUG
#ifdef ANDROID
		__android_log_print(ANDROID_LOG_INFO, "librtclient"
				, "%s response status:\n%s", __func__, line);
#else
		printf("%s response status:\n%s\n", __func__, line);
#endif // ANDROID
#endif // DEBUG
	}

	return realsize;
}

void rtclient_ticket_history(rtclient_ticket_history_list **listptr
		, unsigned int id, bool long_format)
{
	*listptr = malloc(sizeof(rtclient_ticket_history_list));
	(*listptr)->length = 0;
	if (long_format)
		request(history_l_handler, (void *)listptr, NULL, "%s%u%s"
				, "REST/1.0/ticket/", id, "/history?format=l");
	else
		request(history_handler, (void *)listptr, NULL, "%s%u%s"
				, "REST/1.0/ticket/", id, "/history");
}

void rtclient_ticket_history_free(struct rtclient_ticket_history *history)
{
	if (history->attachments) {
		for(size_t i = 0; i < history->attachments->length; i++) {
			rtclient_ticket_history_attachment *attachment
				= history->attachments->attachments[i];
			if (attachment->file_name)
				free(attachment->file_name);
			free(attachment);
		}
		free(history->attachments);
	}
	free(history->created);
	free(history->creator);
	free(history->content);
	free(history->description);
	if (history->data)
		free(history->data);
	if (history->new_value)
		free(history->new_value);
	if (history->old_value)
		free(history->old_value);
	free(history);
	history = NULL;
}

void rtclient_ticket_history_list_free(struct rtclient_ticket_history_list *list)
{
	for (size_t i = 0; i < list->length; i++)
		rtclient_ticket_history_free(list->histories[i]);
	free(list);
	list = NULL;
}
