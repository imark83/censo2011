

// CODIGO DE PROVINCIA
char *cpro[52]={"Alava", "Albacete", "Alicante", "Almeria", "Avila", "Badajoz",
		"Baleares", "Barcelona", "Burgos", "Caceres", "Cadiz", "Castellon",
		"Ciudad Real", "Cordoba", "Coruna", "Cuenca", "Girona", "Granada",
		"Guadalajara", "Gipuzkoa", "Huelva", "Huesca", "Jaén", "Leon", "Lleida",
		"La Rioja", "Lugo", "Madrid", "Malaga", "Murcia", "Navarra", "Ourense",
		"Asturias", "Palencia", "Las Palmas", "Pontevedra", "Salamanca",
		"Santa Cruz de Tenerife", "Cantabria", "Segovia", "Sevilla", "Soria",
		"Tarragona", "Teruel", "Toledo", "Valencia", "Valladolid", "Bizkaia",
		"Zamora", "Zaragoza", "Ceuta", "Melilla"};

// CODIGO DE PAIS 
struct _cpais {
	int index;
	char *pais;
};

struct _cpais cpais [] = {
{102, "AUSTRIA"},
{103, "BELGICA"},
{104, "BULGARIA"},
{106, "CHIPRE"},
{107, "DINAMARCA"},
{108, "ESPAÑA"},
{109, "FINLANDIA"},
{110, "FRANCIA"},
{111, "GRECIA"},
{112, "HUNGRIA"},
{113, "IRLANDA"},
{115, "ITALIA"},
{117, "LUXEMBURGO"},
{118, "MALTA"},
{121, "PAISES BAJOS"},
{122, "POLONIA"},
{123, "PORTUGAL"},
{125, "REINO UNIDO"},
{126, "ALEMANIA"},
{128, "RUMANIA"},
{131, "SUECIA"},
{136, "LETONIA"},
{141, "ESTONIA"},
{142, "LITUANIA"},
{143, "REPUBLICA CHECA"},
{144, "REPUBLICA ESLOVACA"},
{147, "ESLOVENIA"},
{198, "OTROS PAISES O TERRITORIOS DE LA UNION EUROPEA"},
{101, "ALBANIA"},
{114, "ISLANDIA"},
{116, "LIECHTENSTEIN"},
{119, "MONACO"},
{120, "NORUEGA"},
{124, "ANDORRA"},
{129, "SAN MARINO"},
{130, "SANTA SEDE"},
{132, "SUIZA"},
{135, "UCRANIA"},
{137, "MOLDAVIA"},
{138, "BELARUS"},
{139, "GEORGIA"},
{145, "BOSNIA Y HERZEGOVINA"},
{146, "CROACIA"},
{148, "ARMENIA"},
{154, "RUSIA"},
{156, "MACEDONIA "},
{157, "SERBIA"},
{158, "MONTENEGRO"},
{170, "GUERNESEY"},
{171, "SVALBARD Y JAN MAYEN"},
{172, "ISLAS FEROE"},
{173, "ISLA DE MAN"},
{174, "GIBRALTAR"},
{175, "ISLAS DEL CANAL"},
{176, "JERSEY"},
{177, "ISLAS ALAND"},
{436, "TURQUIA"},
{199, "OTROS PAISES O TERRITORIOS DEL RESTO DE EUROPA"},
{201, "BURKINA FASO"},
{202, "ANGOLA"},
{203, "ARGELIA"},
{204, "BENIN"},
{205, "BOTSWANA"},
{206, "BURUNDI"},
{207, "CABO VERDE"},
{208, "CAMERUN"},
{209, "COMORES"},
{210, "CONGO"},
{211, "COSTA DE MARFIL"},
{212, "DJIBOUTI"},
{213, "EGIPTO"},
{214, "ETIOPIA"},
{215, "GABON"},
{216, "GAMBIA"},
{217, "GHANA"},
{218, "GUINEA"},
{219, "GUINEA-BISSAU"},
{220, "GUINEA ECUATORIAL"},
{221, "KENIA"},
{222, "LESOTHO"},
{223, "LIBERIA"},
{224, "LIBIA"},
{225, "MADAGASCAR"},
{226, "MALAWI"},
{227, "MALI"},
{228, "MARRUECOS"},
{229, "MAURICIO"},
{230, "MAURITANIA"},
{231, "MOZAMBIQUE"},
{232, "NAMIBIA"},
{233, "NIGER"},
{234, "NIGERIA"},
{235, "REPUBLICA CENTROAFRICANA"},
{236, "SUDAFRICA"},
{237, "RUANDA"},
{238, "SANTO TOME Y PRINCIPE"},
{239, "SENEGAL"},
{240, "SEYCHELLES"},
{241, "SIERRA LEONA"},
{242, "SOMALIA"},
{243, "SUDAN"},
{244, "SWAZILANDIA"},
{245, "TANZANIA"},
{246, "CHAD"},
{247, "TOGO"},
{248, "TUNEZ"},
{249, "UGANDA"},
{250, "REP.DEMOCRATICA DEL CONGO"},
{251, "ZAMBIA"},
{252, "ZIMBABWE"},
{253, "ERITREA"},
{260, "SANTA HELENA"},
{261, "REUNION"},
{262, "MAYOTTE"},
{263, "SAHARA OCCIDENTAL"},
{299, "OTROS PAISES O TERRITORIOS DE AFRICA"},
{301, "CANADA"},
{302, "ESTADOS UNIDOS DE AMERICA"},
{303, "MEXICO"},
{370, "SAN PEDRO Y MIQUELON "},
{371, "GROENLANDIA"},
{396, "OTROS PAISES  O TERRITORIOS DE AMERICA DEL NORTE"},
{310, "ANTIGUA Y BARBUDA"},
{311, "BAHAMAS"},
{312, "BARBADOS"},
{313, "BELICE"},
{314, "COSTA RICA"},
{315, "CUBA"},
{316, "DOMINICA"},
{317, "EL SALVADOR"},
{318, "GRANADA"},
{319, "GUATEMALA"},
{320, "HAITI"},
{321, "HONDURAS"},
{322, "JAMAICA"},
{323, "NICARAGUA"},
{324, "PANAMA"},
{325, "SAN VICENTE Y LAS GRANADINAS"},
{326, "REPUBLICA DOMINICANA"},
{327, "TRINIDAD Y TOBAGO"},
{328, "SANTA LUCIA"},
{329, "SAN CRISTOBAL Y NIEVES"},
{380, "ISLAS CAIMÁN"},
{381, "ISLAS TURCAS Y CAICOS"},
{382, "ISLAS VÍRGENES DE LOS ESTADOS UNIDOS"},
{383, "GUADALUPE"},
{384, "ANTILLAS HOLANDESAS"},
{385, "SAN MARTIN (PARTE FRANCESA)"},
{386, "ARUBA"},
{387, "MONTSERRAT"},
{388, "ANGUILLA"},
{389, "SAN BARTOLOME"},
{390, "MARTINICA"},
{391, "PUERTO RICO"},
{392, "BERMUDAS"},
{393, "ISLAS VIRGENES BRITANICAS"},
{398, "OTROS PAISES O TERRITORIOS DEL CARIBE Y AMERICA CENTRAL"},
{340, "ARGENTINA"},
{341, "BOLIVIA"},
{342, "BRASIL"},
{343, "COLOMBIA"},
{344, "CHILE"},
{345, "ECUADOR"},
{346, "GUYANA"},
{347, "PARAGUAY"},
{348, "PERU"},
{349, "SURINAM"},
{350, "URUGUAY"},
{351, "VENEZUELA"},
{394, "GUAYANA FRANCESA"},
{395, "ISLAS MALVINAS"},
{399, "OTROS PAISES O TERRITORIOS  DE SUDAMERICA"},
{401, "AFGANISTAN"},
{402, "ARABIA SAUDI"},
{403, "BAHREIN"},
{404, "BANGLADESH"},
{405, "MYANMAR"},
{407, "CHINA"},
{408, "EMIRATOS ARABES UNIDOS"},
{409, "FILIPINAS"},
{410, "INDIA"},
{411, "INDONESIA"},
{412, "IRAQ"},
{413, "IRAN"},
{414, "ISRAEL"},
{415, "JAPON"},
{416, "JORDANIA"},
{417, "CAMBOYA"},
{418, "KUWAIT"},
{419, "LAOS"},
{420, "LIBANO"},
{421, "MALASIA"},
{422, "MALDIVAS"},
{423, "MONGOLIA"},
{424, "NEPAL"},
{425, "OMAN"},
{426, "PAKISTAN"},
{427, "QATAR"},
{430, "COREA"},
{431, "COREA DEL NORTE "},
{432, "SINGAPUR"},
{433, "SIRIA"},
{434, "SRI LANKA"},
{435, "TAILANDIA"},
{437, "VIETNAM"},
{439, "BRUNEI"},
{440, "ISLAS MARSHALL"},
{441, "YEMEN"},
{442, "AZERBAIYAN"},
{443, "KAZAJSTAN"},
{444, "KIRGUISTAN"},
{445, "TADYIKISTAN"},
{446, "TURKMENISTAN"},
{447, "UZBEKISTAN"},
{448, "ISLAS MARIANAS DEL NORTE"},
{449, "PALESTINA"},
{450, "HONG KONG"},
{453, "BHUTÁN"},
{454, "GUAM"},
{455, "MACAO"},
{499, "OTROS PAISES O TERRITORIOS DE ASIA"},
{501, "AUSTRALIA"},
{502, "FIJI"},
{504, "NUEVA ZELANDA"},
{505, "PAPUA NUEVA GUINEA"},
{506, "ISLAS SALOMON"},
{507, "SAMOA"},
{508, "TONGA"},
{509, "VANUATU"},
{511, "MICRONESIA"},
{512, "TUVALU"},
{513, "ISLAS COOK"},
{515, "NAURU"},
{516, "PALAOS"},
{517, "TIMOR ORIENTAL"},
{520, "POLINESIA FRANCESA"},
{521, "ISLA NORFOLK"},
{522, "KIRIBATI"},
{523, "NIUE"},
{524, "ISLAS PITCAIRN"},
{525, "TOKELAU"},
{526, "NUEVA CALEDONIA"},
{527, "WALLIS Y FORTUNA"},
{528, "SAMOA AMERICANA"},
{599, "OTROS PAISES O TERRITORIOS DE OCEANIA"}};