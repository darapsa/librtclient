#ifndef RTCLIENT_USER_H
#define RTCLIENT_USER_H

enum rtclient_user_lang {
	RTCLIENT_USER_LANG_NONE = 0
	, RTCLIENT_USER_LANG_AR
	, RTCLIENT_USER_LANG_EU
	, RTCLIENT_USER_LANG_NB
	, RTCLIENT_USER_LANG_BG
	, RTCLIENT_USER_LANG_CA
	, RTCLIENT_USER_LANG_ZH_CN
	, RTCLIENT_USER_LANG_ZH_TW
	, RTCLIENT_USER_LANG_HR
	, RTCLIENT_USER_LANG_CS
	, RTCLIENT_USER_LANG_DA
	, RTCLIENT_USER_LANG_NL
	, RTCLIENT_USER_LANG_EN
	, RTCLIENT_USER_LANG_EN_GB
	, RTCLIENT_USER_LANG_ET
	, RTCLIENT_USER_LANG_FI
	, RTCLIENT_USER_LANG_FR
	, RTCLIENT_USER_LANG_DE
	, RTCLIENT_USER_LANG_EL
	, RTCLIENT_USER_LANG_HU
	, RTCLIENT_USER_LANG_IS
	, RTCLIENT_USER_LANG_ID
	, RTCLIENT_USER_LANG_IT
	, RTCLIENT_USER_LANG_JA
	, RTCLIENT_USER_LANG_LV
	, RTCLIENT_USER_LANG_LT
	, RTCLIENT_USER_LANG_NN
	, RTCLIENT_USER_LANG_FA
	, RTCLIENT_USER_LANG_PL
	, RTCLIENT_USER_LANG_PT
	, RTCLIENT_USER_LANG_PT_BR
	, RTCLIENT_USER_LANG_PT_PT
	, RTCLIENT_USER_LANG_RO
	, RTCLIENT_USER_LANG_RU
	, RTCLIENT_USER_LANG_SR
	, RTCLIENT_USER_LANG_SK
	, RTCLIENT_USER_LANG_SL
	, RTCLIENT_USER_LANG_ES
	, RTCLIENT_USER_LANG_SV
	, RTCLIENT_USER_LANG_TR
};

enum rtclient_user_timezone {
	RTCLIENT_USER_TIMEZONE_NONE = 0
	, RTCLIENT_USER_TIMEZONE_Africa_Abidjan
	, RTCLIENT_USER_TIMEZONE_Africa_Accra
	, RTCLIENT_USER_TIMEZONE_Africa_Algiers
	, RTCLIENT_USER_TIMEZONE_Africa_Bissau
	, RTCLIENT_USER_TIMEZONE_Africa_Cairo
	, RTCLIENT_USER_TIMEZONE_Africa_Casablanca
	, RTCLIENT_USER_TIMEZONE_Africa_Ceuta
	, RTCLIENT_USER_TIMEZONE_Africa_El_Aaiun
	, RTCLIENT_USER_TIMEZONE_Africa_Johannesburg
	, RTCLIENT_USER_TIMEZONE_Africa_Juba
	, RTCLIENT_USER_TIMEZONE_Africa_Khartoum
	, RTCLIENT_USER_TIMEZONE_Africa_Lagos
	, RTCLIENT_USER_TIMEZONE_Africa_Maputo
	, RTCLIENT_USER_TIMEZONE_Africa_Monrovia
	, RTCLIENT_USER_TIMEZONE_Africa_Nairobi
	, RTCLIENT_USER_TIMEZONE_Africa_Ndjamena
	, RTCLIENT_USER_TIMEZONE_Africa_Sao_Tome
	, RTCLIENT_USER_TIMEZONE_Africa_Tripoli
	, RTCLIENT_USER_TIMEZONE_Africa_Tunis
	, RTCLIENT_USER_TIMEZONE_Africa_Windhoek
	, RTCLIENT_USER_TIMEZONE_America_Adak
	, RTCLIENT_USER_TIMEZONE_America_Anchorage
	, RTCLIENT_USER_TIMEZONE_America_Araguaina
	, RTCLIENT_USER_TIMEZONE_America_Argentina_Buenos_Aires
	, RTCLIENT_USER_TIMEZONE_America_Argentina_Catamarca
	, RTCLIENT_USER_TIMEZONE_America_Argentina_Cordoba
	, RTCLIENT_USER_TIMEZONE_America_Argentina_Jujuy
	, RTCLIENT_USER_TIMEZONE_America_Argentina_La_Rioja
	, RTCLIENT_USER_TIMEZONE_America_Argentina_Mendoza
	, RTCLIENT_USER_TIMEZONE_America_Argentina_Rio_Gallegos
	, RTCLIENT_USER_TIMEZONE_America_Argentina_Salta
	, RTCLIENT_USER_TIMEZONE_America_Argentina_San_Juan
	, RTCLIENT_USER_TIMEZONE_America_Argentina_San_Luis
	, RTCLIENT_USER_TIMEZONE_America_Argentina_Tucuman
	, RTCLIENT_USER_TIMEZONE_America_Argentina_Ushuaia
	, RTCLIENT_USER_TIMEZONE_America_Asuncion
	, RTCLIENT_USER_TIMEZONE_America_Atikokan
	, RTCLIENT_USER_TIMEZONE_America_Bahia
	, RTCLIENT_USER_TIMEZONE_America_Bahia_Banderas
	, RTCLIENT_USER_TIMEZONE_America_Barbados
	, RTCLIENT_USER_TIMEZONE_America_Belem
	, RTCLIENT_USER_TIMEZONE_America_Belize
	, RTCLIENT_USER_TIMEZONE_America_Blanc_Sablon
	, RTCLIENT_USER_TIMEZONE_America_Boa_Vista
	, RTCLIENT_USER_TIMEZONE_America_Bogota
	, RTCLIENT_USER_TIMEZONE_America_Boise
	, RTCLIENT_USER_TIMEZONE_America_Cambridge_Bay
	, RTCLIENT_USER_TIMEZONE_America_Campo_Grande
	, RTCLIENT_USER_TIMEZONE_America_Cancun
	, RTCLIENT_USER_TIMEZONE_America_Caracas
	, RTCLIENT_USER_TIMEZONE_America_Cayenne
	, RTCLIENT_USER_TIMEZONE_America_Chicago
	, RTCLIENT_USER_TIMEZONE_America_Chihuahua
	, RTCLIENT_USER_TIMEZONE_America_Costa_Rica
	, RTCLIENT_USER_TIMEZONE_America_Creston
	, RTCLIENT_USER_TIMEZONE_America_Cuiaba
	, RTCLIENT_USER_TIMEZONE_America_Curacao
	, RTCLIENT_USER_TIMEZONE_America_Danmarkshavn
	, RTCLIENT_USER_TIMEZONE_America_Dawson
	, RTCLIENT_USER_TIMEZONE_America_Dawson_Creek
	, RTCLIENT_USER_TIMEZONE_America_Denver
	, RTCLIENT_USER_TIMEZONE_America_Detroit
	, RTCLIENT_USER_TIMEZONE_America_Edmonton
	, RTCLIENT_USER_TIMEZONE_America_Eirunepe
	, RTCLIENT_USER_TIMEZONE_America_El_Salvador
	, RTCLIENT_USER_TIMEZONE_America_Fortclient_Nelson
	, RTCLIENT_USER_TIMEZONE_America_Fortaleza
	, RTCLIENT_USER_TIMEZONE_America_Glace_Bay
	, RTCLIENT_USER_TIMEZONE_America_Godthab
	, RTCLIENT_USER_TIMEZONE_America_Goose_Bay
	, RTCLIENT_USER_TIMEZONE_America_Grand_Turk
	, RTCLIENT_USER_TIMEZONE_America_Guatemala
	, RTCLIENT_USER_TIMEZONE_America_Guayaquil
	, RTCLIENT_USER_TIMEZONE_America_Guyana
	, RTCLIENT_USER_TIMEZONE_America_Halifax
	, RTCLIENT_USER_TIMEZONE_America_Havana
	, RTCLIENT_USER_TIMEZONE_America_Hermosillo
	, RTCLIENT_USER_TIMEZONE_America_Indiana_Indianapolis
	, RTCLIENT_USER_TIMEZONE_America_Indiana_Knox
	, RTCLIENT_USER_TIMEZONE_America_Indiana_Marengo
	, RTCLIENT_USER_TIMEZONE_America_Indiana_Petersburg
	, RTCLIENT_USER_TIMEZONE_America_Indiana_Tell_City
	, RTCLIENT_USER_TIMEZONE_America_Indiana_Vevay
	, RTCLIENT_USER_TIMEZONE_America_Indiana_Vincennes
	, RTCLIENT_USER_TIMEZONE_America_Indiana_Winamac
	, RTCLIENT_USER_TIMEZONE_America_Inuvik
	, RTCLIENT_USER_TIMEZONE_America_Iqaluit
	, RTCLIENT_USER_TIMEZONE_America_Jamaica
	, RTCLIENT_USER_TIMEZONE_America_Juneau
	, RTCLIENT_USER_TIMEZONE_America_Kentucky_Louisville
	, RTCLIENT_USER_TIMEZONE_America_Kentucky_Monticello
	, RTCLIENT_USER_TIMEZONE_America_La_Paz
	, RTCLIENT_USER_TIMEZONE_America_Lima
	, RTCLIENT_USER_TIMEZONE_America_Los_Angeles
	, RTCLIENT_USER_TIMEZONE_America_Maceio
	, RTCLIENT_USER_TIMEZONE_America_Managua
	, RTCLIENT_USER_TIMEZONE_America_Manaus
	, RTCLIENT_USER_TIMEZONE_America_Martinique
	, RTCLIENT_USER_TIMEZONE_America_Matamoros
	, RTCLIENT_USER_TIMEZONE_America_Mazatlan
	, RTCLIENT_USER_TIMEZONE_America_Menominee
	, RTCLIENT_USER_TIMEZONE_America_Merida
	, RTCLIENT_USER_TIMEZONE_America_Metlakatla
	, RTCLIENT_USER_TIMEZONE_America_Mexico_City
	, RTCLIENT_USER_TIMEZONE_America_Miquelon
	, RTCLIENT_USER_TIMEZONE_America_Moncton
	, RTCLIENT_USER_TIMEZONE_America_Monterrey
	, RTCLIENT_USER_TIMEZONE_America_Montevideo
	, RTCLIENT_USER_TIMEZONE_America_Nassau
	, RTCLIENT_USER_TIMEZONE_America_New_York
	, RTCLIENT_USER_TIMEZONE_America_Nipigon
	, RTCLIENT_USER_TIMEZONE_America_Nome
	, RTCLIENT_USER_TIMEZONE_America_Noronha
	, RTCLIENT_USER_TIMEZONE_America_North_Dakota_Beulah
	, RTCLIENT_USER_TIMEZONE_America_North_Dakota_Center
	, RTCLIENT_USER_TIMEZONE_America_North_Dakota_New_Salem
	, RTCLIENT_USER_TIMEZONE_America_Ojinaga
	, RTCLIENT_USER_TIMEZONE_America_Panama
	, RTCLIENT_USER_TIMEZONE_America_Pangnirtung
	, RTCLIENT_USER_TIMEZONE_America_Paramaribo
	, RTCLIENT_USER_TIMEZONE_America_Phoenix
	, RTCLIENT_USER_TIMEZONE_America_Portclient_au_Prince
	, RTCLIENT_USER_TIMEZONE_America_Portclient_of_Spain
	, RTCLIENT_USER_TIMEZONE_America_Porto_Velho
	, RTCLIENT_USER_TIMEZONE_America_Puerto_Rico
	, RTCLIENT_USER_TIMEZONE_America_Punta_Arenas
	, RTCLIENT_USER_TIMEZONE_America_Rainy_River
	, RTCLIENT_USER_TIMEZONE_America_Rankin_Inlet
	, RTCLIENT_USER_TIMEZONE_America_Recife
	, RTCLIENT_USER_TIMEZONE_America_Regina
	, RTCLIENT_USER_TIMEZONE_America_Resolute
	, RTCLIENT_USER_TIMEZONE_America_Rio_Branco
	, RTCLIENT_USER_TIMEZONE_America_Santarem
	, RTCLIENT_USER_TIMEZONE_America_Santiago
	, RTCLIENT_USER_TIMEZONE_America_Santo_Domingo
	, RTCLIENT_USER_TIMEZONE_America_Sao_Paulo
	, RTCLIENT_USER_TIMEZONE_America_Scoresbysund
	, RTCLIENT_USER_TIMEZONE_America_Sitka
	, RTCLIENT_USER_TIMEZONE_America_St_Johns
	, RTCLIENT_USER_TIMEZONE_America_Swift_Current
	, RTCLIENT_USER_TIMEZONE_America_Tegucigalpa
	, RTCLIENT_USER_TIMEZONE_America_Thule
	, RTCLIENT_USER_TIMEZONE_America_Thunder_Bay
	, RTCLIENT_USER_TIMEZONE_America_Tijuana
	, RTCLIENT_USER_TIMEZONE_America_Toronto
	, RTCLIENT_USER_TIMEZONE_America_Vancouver
	, RTCLIENT_USER_TIMEZONE_America_Whitehorse
	, RTCLIENT_USER_TIMEZONE_America_Winnipeg
	, RTCLIENT_USER_TIMEZONE_America_Yakutat
	, RTCLIENT_USER_TIMEZONE_America_Yellowknife
	, RTCLIENT_USER_TIMEZONE_Antarctica_Casey
	, RTCLIENT_USER_TIMEZONE_Antarctica_Davis
	, RTCLIENT_USER_TIMEZONE_Antarctica_DumontDUrville
	, RTCLIENT_USER_TIMEZONE_Antarctica_Macquarie
	, RTCLIENT_USER_TIMEZONE_Antarctica_Mawson
	, RTCLIENT_USER_TIMEZONE_Antarctica_Palmer
	, RTCLIENT_USER_TIMEZONE_Antarctica_Rothera
	, RTCLIENT_USER_TIMEZONE_Antarctica_Syowa
	, RTCLIENT_USER_TIMEZONE_Antarctica_Troll
	, RTCLIENT_USER_TIMEZONE_Antarctica_Vostok
	, RTCLIENT_USER_TIMEZONE_Asia_Almaty
	, RTCLIENT_USER_TIMEZONE_Asia_Amman
	, RTCLIENT_USER_TIMEZONE_Asia_Anadyr
	, RTCLIENT_USER_TIMEZONE_Asia_Aqtau
	, RTCLIENT_USER_TIMEZONE_Asia_Aqtobe
	, RTCLIENT_USER_TIMEZONE_Asia_Ashgabat
	, RTCLIENT_USER_TIMEZONE_Asia_Atyrau
	, RTCLIENT_USER_TIMEZONE_Asia_Baghdad
	, RTCLIENT_USER_TIMEZONE_Asia_Baku
	, RTCLIENT_USER_TIMEZONE_Asia_Bangkok
	, RTCLIENT_USER_TIMEZONE_Asia_Barnaul
	, RTCLIENT_USER_TIMEZONE_Asia_Beirut
	, RTCLIENT_USER_TIMEZONE_Asia_Bishkek
	, RTCLIENT_USER_TIMEZONE_Asia_Brunei
	, RTCLIENT_USER_TIMEZONE_Asia_Chita
	, RTCLIENT_USER_TIMEZONE_Asia_Choibalsan
	, RTCLIENT_USER_TIMEZONE_Asia_Colombo
	, RTCLIENT_USER_TIMEZONE_Asia_Damascus
	, RTCLIENT_USER_TIMEZONE_Asia_Dhaka
	, RTCLIENT_USER_TIMEZONE_Asia_Dili
	, RTCLIENT_USER_TIMEZONE_Asia_Dubai
	, RTCLIENT_USER_TIMEZONE_Asia_Dushanbe
	, RTCLIENT_USER_TIMEZONE_Asia_Famagusta
	, RTCLIENT_USER_TIMEZONE_Asia_Gaza
	, RTCLIENT_USER_TIMEZONE_Asia_Hebron
	, RTCLIENT_USER_TIMEZONE_Asia_Ho_Chi_Minh
	, RTCLIENT_USER_TIMEZONE_Asia_Hong_Kong
	, RTCLIENT_USER_TIMEZONE_Asia_Hovd
	, RTCLIENT_USER_TIMEZONE_Asia_Irkutsk
	, RTCLIENT_USER_TIMEZONE_Asia_Jakarta
	, RTCLIENT_USER_TIMEZONE_Asia_Jayapura
	, RTCLIENT_USER_TIMEZONE_Asia_Jerusalem
	, RTCLIENT_USER_TIMEZONE_Asia_Kabul
	, RTCLIENT_USER_TIMEZONE_Asia_Kamchatka
	, RTCLIENT_USER_TIMEZONE_Asia_Karachi
	, RTCLIENT_USER_TIMEZONE_Asia_Kathmandu
	, RTCLIENT_USER_TIMEZONE_Asia_Khandyga
	, RTCLIENT_USER_TIMEZONE_Asia_Kolkata
	, RTCLIENT_USER_TIMEZONE_Asia_Krasnoyarsk
	, RTCLIENT_USER_TIMEZONE_Asia_Kuala_Lumpur
	, RTCLIENT_USER_TIMEZONE_Asia_Kuching
	, RTCLIENT_USER_TIMEZONE_Asia_Macau
	, RTCLIENT_USER_TIMEZONE_Asia_Magadan
	, RTCLIENT_USER_TIMEZONE_Asia_Makassar
	, RTCLIENT_USER_TIMEZONE_Asia_Manila
	, RTCLIENT_USER_TIMEZONE_Asia_Nicosia
	, RTCLIENT_USER_TIMEZONE_Asia_Novokuznetsk
	, RTCLIENT_USER_TIMEZONE_Asia_Novosibirsk
	, RTCLIENT_USER_TIMEZONE_Asia_Omsk
	, RTCLIENT_USER_TIMEZONE_Asia_Oral
	, RTCLIENT_USER_TIMEZONE_Asia_Pontianak
	, RTCLIENT_USER_TIMEZONE_Asia_Pyongyang
	, RTCLIENT_USER_TIMEZONE_Asia_Qatar
	, RTCLIENT_USER_TIMEZONE_Asia_Qostanay
	, RTCLIENT_USER_TIMEZONE_Asia_Qyzylorda
	, RTCLIENT_USER_TIMEZONE_Asia_Riyadh
	, RTCLIENT_USER_TIMEZONE_Asia_Sakhalin
	, RTCLIENT_USER_TIMEZONE_Asia_Samarkand
	, RTCLIENT_USER_TIMEZONE_Asia_Seoul
	, RTCLIENT_USER_TIMEZONE_Asia_Shanghai
	, RTCLIENT_USER_TIMEZONE_Asia_Singapore
	, RTCLIENT_USER_TIMEZONE_Asia_Srednekolymsk
	, RTCLIENT_USER_TIMEZONE_Asia_Taipei
	, RTCLIENT_USER_TIMEZONE_Asia_Tashkent
	, RTCLIENT_USER_TIMEZONE_Asia_Tbilisi
	, RTCLIENT_USER_TIMEZONE_Asia_Tehran
	, RTCLIENT_USER_TIMEZONE_Asia_Thimphu
	, RTCLIENT_USER_TIMEZONE_Asia_Tokyo
	, RTCLIENT_USER_TIMEZONE_Asia_Tomsk
	, RTCLIENT_USER_TIMEZONE_Asia_Ulaanbaatar
	, RTCLIENT_USER_TIMEZONE_Asia_Urumqi
	, RTCLIENT_USER_TIMEZONE_Asia_Ust_Nera
	, RTCLIENT_USER_TIMEZONE_Asia_Vladivostok
	, RTCLIENT_USER_TIMEZONE_Asia_Yakutsk
	, RTCLIENT_USER_TIMEZONE_Asia_Yangon
	, RTCLIENT_USER_TIMEZONE_Asia_Yekaterinburg
	, RTCLIENT_USER_TIMEZONE_Asia_Yerevan
	, RTCLIENT_USER_TIMEZONE_Atlantic_Azores
	, RTCLIENT_USER_TIMEZONE_Atlantic_Bermuda
	, RTCLIENT_USER_TIMEZONE_Atlantic_Canary
	, RTCLIENT_USER_TIMEZONE_Atlantic_Cape_Verde
	, RTCLIENT_USER_TIMEZONE_Atlantic_Faroe
	, RTCLIENT_USER_TIMEZONE_Atlantic_Madeira
	, RTCLIENT_USER_TIMEZONE_Atlantic_Reykjavik
	, RTCLIENT_USER_TIMEZONE_Atlantic_South_Georgia
	, RTCLIENT_USER_TIMEZONE_Atlantic_Stanley
	, RTCLIENT_USER_TIMEZONE_Australia_Adelaide
	, RTCLIENT_USER_TIMEZONE_Australia_Brisbane
	, RTCLIENT_USER_TIMEZONE_Australia_Broken_Hill
	, RTCLIENT_USER_TIMEZONE_Australia_Currie
	, RTCLIENT_USER_TIMEZONE_Australia_Darwin
	, RTCLIENT_USER_TIMEZONE_Australia_Eucla
	, RTCLIENT_USER_TIMEZONE_Australia_Hobart
	, RTCLIENT_USER_TIMEZONE_Australia_Lindeman
	, RTCLIENT_USER_TIMEZONE_Australia_Lord_Howe
	, RTCLIENT_USER_TIMEZONE_Australia_Melbourne
	, RTCLIENT_USER_TIMEZONE_Australia_Perth
	, RTCLIENT_USER_TIMEZONE_Australia_Sydney
	, RTCLIENT_USER_TIMEZONE_CET
	, RTCLIENT_USER_TIMEZONE_CST6CDT
	, RTCLIENT_USER_TIMEZONE_EET
	, RTCLIENT_USER_TIMEZONE_EST
	, RTCLIENT_USER_TIMEZONE_EST5EDT
	, RTCLIENT_USER_TIMEZONE_Europe_Amsterdam
	, RTCLIENT_USER_TIMEZONE_Europe_Andorra
	, RTCLIENT_USER_TIMEZONE_Europe_Astrakhan
	, RTCLIENT_USER_TIMEZONE_Europe_Athens
	, RTCLIENT_USER_TIMEZONE_Europe_Belgrade
	, RTCLIENT_USER_TIMEZONE_Europe_Berlin
	, RTCLIENT_USER_TIMEZONE_Europe_Brussels
	, RTCLIENT_USER_TIMEZONE_Europe_Bucharest
	, RTCLIENT_USER_TIMEZONE_Europe_Budapest
	, RTCLIENT_USER_TIMEZONE_Europe_Chisinau
	, RTCLIENT_USER_TIMEZONE_Europe_Copenhagen
	, RTCLIENT_USER_TIMEZONE_Europe_Dublin
	, RTCLIENT_USER_TIMEZONE_Europe_Gibraltar
	, RTCLIENT_USER_TIMEZONE_Europe_Helsinki
	, RTCLIENT_USER_TIMEZONE_Europe_Istanbul
	, RTCLIENT_USER_TIMEZONE_Europe_Kaliningrad
	, RTCLIENT_USER_TIMEZONE_Europe_Kiev
	, RTCLIENT_USER_TIMEZONE_Europe_Kirov
	, RTCLIENT_USER_TIMEZONE_Europe_Lisbon
	, RTCLIENT_USER_TIMEZONE_Europe_London
	, RTCLIENT_USER_TIMEZONE_Europe_Luxembourg
	, RTCLIENT_USER_TIMEZONE_Europe_Madrid
	, RTCLIENT_USER_TIMEZONE_Europe_Malta
	, RTCLIENT_USER_TIMEZONE_Europe_Minsk
	, RTCLIENT_USER_TIMEZONE_Europe_Monaco
	, RTCLIENT_USER_TIMEZONE_Europe_Moscow
	, RTCLIENT_USER_TIMEZONE_Europe_Oslo
	, RTCLIENT_USER_TIMEZONE_Europe_Paris
	, RTCLIENT_USER_TIMEZONE_Europe_Prague
	, RTCLIENT_USER_TIMEZONE_Europe_Riga
	, RTCLIENT_USER_TIMEZONE_Europe_Rome
	, RTCLIENT_USER_TIMEZONE_Europe_Samara
	, RTCLIENT_USER_TIMEZONE_Europe_Saratov
	, RTCLIENT_USER_TIMEZONE_Europe_Simferopol
	, RTCLIENT_USER_TIMEZONE_Europe_Sofia
	, RTCLIENT_USER_TIMEZONE_Europe_Stockholm
	, RTCLIENT_USER_TIMEZONE_Europe_Tallinn
	, RTCLIENT_USER_TIMEZONE_Europe_Tirane
	, RTCLIENT_USER_TIMEZONE_Europe_Ulyanovsk
	, RTCLIENT_USER_TIMEZONE_Europe_Uzhgorod
	, RTCLIENT_USER_TIMEZONE_Europe_Vienna
	, RTCLIENT_USER_TIMEZONE_Europe_Vilnius
	, RTCLIENT_USER_TIMEZONE_Europe_Volgograd
	, RTCLIENT_USER_TIMEZONE_Europe_Warsaw
	, RTCLIENT_USER_TIMEZONE_Europe_Zaporozhye
	, RTCLIENT_USER_TIMEZONE_Europe_Zurich
	, RTCLIENT_USER_TIMEZONE_HST
	, RTCLIENT_USER_TIMEZONE_Indian_Chagos
	, RTCLIENT_USER_TIMEZONE_Indian_Christmas
	, RTCLIENT_USER_TIMEZONE_Indian_Cocos
	, RTCLIENT_USER_TIMEZONE_Indian_Kerguelen
	, RTCLIENT_USER_TIMEZONE_Indian_Mahe
	, RTCLIENT_USER_TIMEZONE_Indian_Maldives
	, RTCLIENT_USER_TIMEZONE_Indian_Mauritius
	, RTCLIENT_USER_TIMEZONE_Indian_Reunion
	, RTCLIENT_USER_TIMEZONE_MET
	, RTCLIENT_USER_TIMEZONE_MST
	, RTCLIENT_USER_TIMEZONE_MST7MDT
	, RTCLIENT_USER_TIMEZONE_PST8PDT
	, RTCLIENT_USER_TIMEZONE_Pacific_Apia
	, RTCLIENT_USER_TIMEZONE_Pacific_Auckland
	, RTCLIENT_USER_TIMEZONE_Pacific_Bougainville
	, RTCLIENT_USER_TIMEZONE_Pacific_Chatham
	, RTCLIENT_USER_TIMEZONE_Pacific_Chuuk
	, RTCLIENT_USER_TIMEZONE_Pacific_Easter
	, RTCLIENT_USER_TIMEZONE_Pacific_Efate
	, RTCLIENT_USER_TIMEZONE_Pacific_Enderbury
	, RTCLIENT_USER_TIMEZONE_Pacific_Fakaofo
	, RTCLIENT_USER_TIMEZONE_Pacific_Fiji
	, RTCLIENT_USER_TIMEZONE_Pacific_Funafuti
	, RTCLIENT_USER_TIMEZONE_Pacific_Galapagos
	, RTCLIENT_USER_TIMEZONE_Pacific_Gambier
	, RTCLIENT_USER_TIMEZONE_Pacific_Guadalcanal
	, RTCLIENT_USER_TIMEZONE_Pacific_Guam
	, RTCLIENT_USER_TIMEZONE_Pacific_Honolulu
	, RTCLIENT_USER_TIMEZONE_Pacific_Kiritimati
	, RTCLIENT_USER_TIMEZONE_Pacific_Kosrae
	, RTCLIENT_USER_TIMEZONE_Pacific_Kwajalein
	, RTCLIENT_USER_TIMEZONE_Pacific_Majuro
	, RTCLIENT_USER_TIMEZONE_Pacific_Marquesas
	, RTCLIENT_USER_TIMEZONE_Pacific_Nauru
	, RTCLIENT_USER_TIMEZONE_Pacific_Niue
	, RTCLIENT_USER_TIMEZONE_Pacific_Norfolk
	, RTCLIENT_USER_TIMEZONE_Pacific_Noumea
	, RTCLIENT_USER_TIMEZONE_Pacific_Pago_Pago
	, RTCLIENT_USER_TIMEZONE_Pacific_Palau
	, RTCLIENT_USER_TIMEZONE_Pacific_Pitcairn
	, RTCLIENT_USER_TIMEZONE_Pacific_Pohnpei
	, RTCLIENT_USER_TIMEZONE_Pacific_Portclient_Moresby
	, RTCLIENT_USER_TIMEZONE_Pacific_Rarotonga
	, RTCLIENT_USER_TIMEZONE_Pacific_Tahiti
	, RTCLIENT_USER_TIMEZONE_Pacific_Tarawa
	, RTCLIENT_USER_TIMEZONE_Pacific_Tongatapu
	, RTCLIENT_USER_TIMEZONE_Pacific_Wake
	, RTCLIENT_USER_TIMEZONE_Pacific_Wallis
	, RTCLIENT_USER_TIMEZONE_UTC
	, RTCLIENT_USER_TIMEZONE_WET
};

struct rtclient_user {
	unsigned int id;
	char *name;
	char *password;
	char *emailaddress;
	char *realname;
	char *nickname;
	char *organization;
	char *address1;
	char *address2;
	char *city;
	char *state;
	char *zip;
	char *country;
	char *homephone;
	char *workphone;
	char *mobilephone;
	char *pagerphone;
	char *contactinfo;
	char *comments;
	char *signature;
	char *gecos;
	enum rtclient_user_lang lang;
	enum rtclient_user_timezone timezone;
	bool privileged;
	bool disabled;
};

#ifdef __cplusplus
extern "C" {
#endif

	void rtclient_user_new(const char *name
			, const char *password
			, const char *emailaddress
			, const char *realname
			, const char *nickname
			, const char *organization
			, const char *address1
			, const char *address2
			, const char *city
			, const char *state
			, const char *zip
			, const char *country
			, const char *homephone
			, const char *workphone
			, const char *mobilephone
			, const char *pagerphone
			, const char *contactinfo
			, const char *comments
			, const char *signature
			, const char *gecos
			, enum rtclient_user_lang lang
			, enum rtclient_user_timezone timezone
			, bool disabled
			, bool privileged);
	void rtclient_user_showid(struct rtclient_user **userptr, unsigned int id);
	void rtclient_user_showname(struct rtclient_user **userptr, const char *name);
	void rtclient_user_free(struct rtclient_user *user);

#ifdef __cplusplus
}
#endif

#endif // RTCLIENT_USER_H
