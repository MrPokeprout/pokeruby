const u8 gSpeciesNames[][POKEMON_NAME_LENGTH + 1] = {
    [SPECIES_NONE] = _("??????????"),
    [SPECIES_BULBASAUR] = _("Bulbizarre"),
    [SPECIES_IVYSAUR] = _("Herbizarre"),
    [SPECIES_VENUSAUR] = _("Florizarre"),
    [SPECIES_CHARMANDER] = _("Salamèche"),
    [SPECIES_CHARMELEON] = _("Reptincel"),
    [SPECIES_CHARIZARD] = _("Dracaufeu"),
    [SPECIES_SQUIRTLE] = _("Carapuce"),
    [SPECIES_WARTORTLE] = _("Carabaffe"),
    [SPECIES_BLASTOISE] = _("Tortank"),
    [SPECIES_CATERPIE] = _("Chenipan"),
    [SPECIES_METAPOD] = _("Chrysacier"),
    [SPECIES_BUTTERFREE] = _("Papilusion"),
    [SPECIES_WEEDLE] = _("Aspicot"),
    [SPECIES_KAKUNA] = _("Coconfort"),
    [SPECIES_BEEDRILL] = _("Dardagnan"),
    [SPECIES_PIDGEY] = _("Roucool"),
    [SPECIES_PIDGEOTTO] = _("Roucoups"),
    [SPECIES_PIDGEOT] = _("Roucarnage"),
    [SPECIES_RATTATA] = _("Rattata"),
    [SPECIES_RATICATE] = _("Rattatac"),
    [SPECIES_SPEAROW] = _("Piafabec"),
    [SPECIES_FEAROW] = _("Rapasdepic"),
    [SPECIES_EKANS] = _("Abo"),
    [SPECIES_ARBOK] = _("Arbok"),
    [SPECIES_PIKACHU] = _("Pikachu"),
    [SPECIES_RAICHU] = _("Raichu"),
    [SPECIES_SANDSHREW] = _("Sabelette"),
    [SPECIES_SANDSLASH] = _("Sablaireau"),
    [SPECIES_NIDORAN_F] = _("Nidoran♀"),
    [SPECIES_NIDORINA] = _("Nidorina"),
    [SPECIES_NIDOQUEEN] = _("Nidoqueen"),
    [SPECIES_NIDORAN_M] = _("Nidoran♂"),
    [SPECIES_NIDORINO] = _("Nidorino"),
    [SPECIES_NIDOKING] = _("Nidoking"),
    [SPECIES_CLEFAIRY] = _("Mélofée"),
    [SPECIES_CLEFABLE] = _("Mélodelfe"),
    [SPECIES_VULPIX] = _("Goupix"),
    [SPECIES_NINETALES] = _("Feunard"),
    [SPECIES_JIGGLYPUFF] = _("Rondoudou"),
    [SPECIES_WIGGLYTUFF] = _("Grodoudou"),
    [SPECIES_ZUBAT] = _("Nosferapti"),
    [SPECIES_GOLBAT] = _("Nosferalto"),
    [SPECIES_ODDISH] = _("Mystherbe"),
    [SPECIES_GLOOM] = _("Ortide"),
    [SPECIES_VILEPLUME] = _("Rafflesia"),
    [SPECIES_PARAS] = _("Paras"),
    [SPECIES_PARASECT] = _("Parasect"),
    [SPECIES_VENONAT] = _("Mimitoss"),
    [SPECIES_VENOMOTH] = _("Aéromite"),
    [SPECIES_DIGLETT] = _("Taupiqueur"),
    [SPECIES_DUGTRIO] = _("Triopikeur"),
    [SPECIES_MEOWTH] = _("Miaouss"),
    [SPECIES_PERSIAN] = _("Persian"),
    [SPECIES_PSYDUCK] = _("Psykokwak"),
    [SPECIES_GOLDUCK] = _("Akwakwak"),
    [SPECIES_MANKEY] = _("Férosinge"),
    [SPECIES_PRIMEAPE] = _("Colossinge"),
    [SPECIES_GROWLITHE] = _("Caninos"),
    [SPECIES_ARCANINE] = _("Arcanin"),
    [SPECIES_POLIWAG] = _("Ptitard"),
    [SPECIES_POLIWHIRL] = _("Têtarte"),
    [SPECIES_POLIWRATH] = _("Tartard"),
    [SPECIES_ABRA] = _("Abra"),
    [SPECIES_KADABRA] = _("Kadabra"),
    [SPECIES_ALAKAZAM] = _("Alakazam"),
    [SPECIES_MACHOP] = _("Machoc"),
    [SPECIES_MACHOKE] = _("Machopeur"),
    [SPECIES_MACHAMP] = _("Mackogneur"),
    [SPECIES_BELLSPROUT] = _("Chétiflor"),
    [SPECIES_WEEPINBELL] = _("Boustiflor"),
    [SPECIES_VICTREEBEL] = _("Empiflor"),
    [SPECIES_TENTACOOL] = _("Tentacool"),
    [SPECIES_TENTACRUEL] = _("Tentacruel"),
    [SPECIES_GEODUDE] = _("Racaillou"),
    [SPECIES_GRAVELER] = _("Gravalanch"),
    [SPECIES_GOLEM] = _("Grolem"),
    [SPECIES_PONYTA] = _("Ponyta"),
    [SPECIES_RAPIDASH] = _("Galopa"),
    [SPECIES_SLOWPOKE] = _("Ramoloss"),
    [SPECIES_SLOWBRO] = _("Flagadoss"),
    [SPECIES_MAGNEMITE] = _("Magnéti"),
    [SPECIES_MAGNETON] = _("Magnéton"),
    [SPECIES_FARFETCHD] = _("Canarticho"),
    [SPECIES_DODUO] = _("Doduo"),
    [SPECIES_DODRIO] = _("Dodrio"),
    [SPECIES_SEEL] = _("Otaria"),
    [SPECIES_DEWGONG] = _("Lamantine"),
    [SPECIES_GRIMER] = _("Tadmorv"),
    [SPECIES_MUK] = _("Grotadmorv"),
    [SPECIES_SHELLDER] = _("Kokiyas"),
    [SPECIES_CLOYSTER] = _("Crustabri"),
    [SPECIES_GASTLY] = _("Fantominus"),
    [SPECIES_HAUNTER] = _("Spectrum"),
    [SPECIES_GENGAR] = _("Ectoplasma"),
    [SPECIES_ONIX] = _("Onix"),
    [SPECIES_DROWZEE] = _("Soporifik"),
    [SPECIES_HYPNO] = _("Hypnomade"),
    [SPECIES_KRABBY] = _("Krabby"),
    [SPECIES_KINGLER] = _("Krabboss"),
    [SPECIES_VOLTORB] = _("Voltorbe"),
    [SPECIES_ELECTRODE] = _("Electrode"),
    [SPECIES_EXEGGCUTE] = _("Noeunoeuf"),
    [SPECIES_EXEGGUTOR] = _("Noadkoko"),
    [SPECIES_CUBONE] = _("Osselait"),
    [SPECIES_MAROWAK] = _("Ossatueur"),
    [SPECIES_HITMONLEE] = _("Kicklee"),
    [SPECIES_HITMONCHAN] = _("Tygnon"),
    [SPECIES_LICKITUNG] = _("Excelangue"),
    [SPECIES_KOFFING] = _("Smogo"),
    [SPECIES_WEEZING] = _("Smogogo"),
    [SPECIES_RHYHORN] = _("Rhinocorne"),
    [SPECIES_RHYDON] = _("Rhinoféros"),
    [SPECIES_CHANSEY] = _("Leveinard"),
    [SPECIES_TANGELA] = _("Saquedeneu"),
    [SPECIES_KANGASKHAN] = _("Kangourex"),
    [SPECIES_HORSEA] = _("Hypotrempe"),
    [SPECIES_SEADRA] = _("Hypocéan"),
    [SPECIES_GOLDEEN] = _("Poissirène"),
    [SPECIES_SEAKING] = _("Poissoroy"),
    [SPECIES_STARYU] = _("Stari"),
    [SPECIES_STARMIE] = _("Staross"),
    [SPECIES_MR_MIME] = _("M. Mime"),
    [SPECIES_SCYTHER] = _("Insécateur"),
    [SPECIES_JYNX] = _("Lippoutou"),
    [SPECIES_ELECTABUZZ] = _("Elektek"),
    [SPECIES_MAGMAR] = _("Magmar"),
    [SPECIES_PINSIR] = _("Scarabrute"),
    [SPECIES_TAUROS] = _("Tauros"),
    [SPECIES_MAGIKARP] = _("Magicarpe"),
    [SPECIES_GYARADOS] = _("Léviathor"),
    [SPECIES_LAPRAS] = _("Lokhlass"),
    [SPECIES_DITTO] = _("Métamorph"),
    [SPECIES_EEVEE] = _("Evoli"),
    [SPECIES_VAPOREON] = _("Aquali"),
    [SPECIES_JOLTEON] = _("Voltali"),
    [SPECIES_FLAREON] = _("Pyroli"),
    [SPECIES_PORYGON] = _("Porygon"),
    [SPECIES_OMANYTE] = _("Amonyta"),
    [SPECIES_OMASTAR] = _("Amonistar"),
    [SPECIES_KABUTO] = _("Kabuto"),
    [SPECIES_KABUTOPS] = _("Kabutops"),
    [SPECIES_AERODACTYL] = _("Ptéra"),
    [SPECIES_SNORLAX] = _("Ronflex"),
    [SPECIES_ARTICUNO] = _("Artikodin"),
    [SPECIES_ZAPDOS] = _("Electhor"),
    [SPECIES_MOLTRES] = _("Sulfura"),
    [SPECIES_DRATINI] = _("Minidraco"),
    [SPECIES_DRAGONAIR] = _("Draco"),
    [SPECIES_DRAGONITE] = _("Dracolosse"),
    [SPECIES_MEWTWO] = _("Mewtwo"),
    [SPECIES_MEW] = _("Mew"),
    [SPECIES_CHIKORITA] = _("Germignon"),
    [SPECIES_BAYLEEF] = _("Macronium"),
    [SPECIES_MEGANIUM] = _("Méganium"),
    [SPECIES_CYNDAQUIL] = _("Héricendre"),
    [SPECIES_QUILAVA] = _("Feurisson"),
    [SPECIES_TYPHLOSION] = _("Typhlosion"),
    [SPECIES_TOTODILE] = _("Kaiminus"),
    [SPECIES_CROCONAW] = _("Crocodil"),
    [SPECIES_FERALIGATR] = _("Aligatueur"),
    [SPECIES_SENTRET] = _("Fouinette"),
    [SPECIES_FURRET] = _("Fouinar"),
    [SPECIES_HOOTHOOT] = _("Hoothoot"),
    [SPECIES_NOCTOWL] = _("Noarfang"),
    [SPECIES_LEDYBA] = _("Coxy"),
    [SPECIES_LEDIAN] = _("Coxyclaque"),
    [SPECIES_SPINARAK] = _("Mimigal"),
    [SPECIES_ARIADOS] = _("Migalos"),
    [SPECIES_CROBAT] = _("Nostenfer"),
    [SPECIES_CHINCHOU] = _("Loupio"),
    [SPECIES_LANTURN] = _("Lanturn"),
    [SPECIES_PICHU] = _("Pichu"),
    [SPECIES_CLEFFA] = _("Mélo"),
    [SPECIES_IGGLYBUFF] = _("Toudoudou"),
    [SPECIES_TOGEPI] = _("Togepi"),
    [SPECIES_TOGETIC] = _("Togetic"),
    [SPECIES_NATU] = _("Natu"),
    [SPECIES_XATU] = _("Xatu"),
    [SPECIES_MAREEP] = _("Wattouat"),
    [SPECIES_FLAAFFY] = _("Lainergie"),
    [SPECIES_AMPHAROS] = _("Pharamp"),
    [SPECIES_BELLOSSOM] = _("Joliflor"),
    [SPECIES_MARILL] = _("Marill"),
    [SPECIES_AZUMARILL] = _("Azumarill"),
    [SPECIES_SUDOWOODO] = _("Simularbre"),
    [SPECIES_POLITOED] = _("Tarpaud"),
    [SPECIES_HOPPIP] = _("Granivol"),
    [SPECIES_SKIPLOOM] = _("Floravol"),
    [SPECIES_JUMPLUFF] = _("Cotovol"),
    [SPECIES_AIPOM] = _("Capumain"),
    [SPECIES_SUNKERN] = _("Tournegrin"),
    [SPECIES_SUNFLORA] = _("Héliatronc"),
    [SPECIES_YANMA] = _("Yanma"),
    [SPECIES_WOOPER] = _("Axoloto"),
    [SPECIES_QUAGSIRE] = _("Maraiste"),
    [SPECIES_ESPEON] = _("Mentali"),
    [SPECIES_UMBREON] = _("Noctali"),
    [SPECIES_MURKROW] = _("Cornèbre"),
    [SPECIES_SLOWKING] = _("Roigada"),
    [SPECIES_MISDREAVUS] = _("Feuforêve"),
    [SPECIES_UNOWN] = _("Zarbi"),
    [SPECIES_WOBBUFFET] = _("Qulbutoké"),
    [SPECIES_GIRAFARIG] = _("Girafarig"),
    [SPECIES_PINECO] = _("Pomdepik"),
    [SPECIES_FORRETRESS] = _("Foretress"),
    [SPECIES_DUNSPARCE] = _("Insolourdo"),
    [SPECIES_GLIGAR] = _("Scorplane"),
    [SPECIES_STEELIX] = _("Steelix"),
    [SPECIES_SNUBBULL] = _("Snubbull"),
    [SPECIES_GRANBULL] = _("Granbull"),
    [SPECIES_QWILFISH] = _("Qwilfish"),
    [SPECIES_SCIZOR] = _("Cizayox"),
    [SPECIES_SHUCKLE] = _("Caratroc"),
    [SPECIES_HERACROSS] = _("Scarhino"),
    [SPECIES_SNEASEL] = _("Farfuret"),
    [SPECIES_TEDDIURSA] = _("Teddiursa"),
    [SPECIES_URSARING] = _("Ursaring"),
    [SPECIES_SLUGMA] = _("Limagma"),
    [SPECIES_MAGCARGO] = _("Volcaropod"),
    [SPECIES_SWINUB] = _("Marcacrin"),
    [SPECIES_PILOSWINE] = _("Cochignon"),
    [SPECIES_CORSOLA] = _("Corayon"),
    [SPECIES_REMORAID] = _("Rémoraid"),
    [SPECIES_OCTILLERY] = _("Octillery"),
    [SPECIES_DELIBIRD] = _("Cadoizo"),
    [SPECIES_MANTINE] = _("Démanta"),
    [SPECIES_SKARMORY] = _("Airmure"),
    [SPECIES_HOUNDOUR] = _("Malosse"),
    [SPECIES_HOUNDOOM] = _("Démolosse"),
    [SPECIES_KINGDRA] = _("Hyporoi"),
    [SPECIES_PHANPY] = _("Phanpy"),
    [SPECIES_DONPHAN] = _("Donphan"),
    [SPECIES_PORYGON2] = _("Porygon2"),
    [SPECIES_STANTLER] = _("Cerfrousse"),
    [SPECIES_SMEARGLE] = _("Queulorior"),
    [SPECIES_TYROGUE] = _("Debugant"),
    [SPECIES_HITMONTOP] = _("Kapoera"),
    [SPECIES_SMOOCHUM] = _("Lippouti"),
    [SPECIES_ELEKID] = _("Elekid"),
    [SPECIES_MAGBY] = _("Magby"),
    [SPECIES_MILTANK] = _("Ecrémeuh"),
    [SPECIES_BLISSEY] = _("Leuphorie"),
    [SPECIES_RAIKOU] = _("Raikou"),
    [SPECIES_ENTEI] = _("Entei"),
    [SPECIES_SUICUNE] = _("Suicune"),
    [SPECIES_LARVITAR] = _("Embrylex"),
    [SPECIES_PUPITAR] = _("Ymphect"),
    [SPECIES_TYRANITAR] = _("Tyranocif"),
    [SPECIES_LUGIA] = _("Lugia"),
    [SPECIES_HO_OH] = _("Ho-Oh"),
    [SPECIES_CELEBI] = _("Celebi"),
    [SPECIES_OLD_UNOWN_B] = _("?"),
    [SPECIES_OLD_UNOWN_C] = _("?"),
    [SPECIES_OLD_UNOWN_D] = _("?"),
    [SPECIES_OLD_UNOWN_E] = _("?"),
    [SPECIES_OLD_UNOWN_F] = _("?"),
    [SPECIES_OLD_UNOWN_G] = _("?"),
    [SPECIES_OLD_UNOWN_H] = _("?"),
    [SPECIES_OLD_UNOWN_I] = _("?"),
    [SPECIES_OLD_UNOWN_J] = _("?"),
    [SPECIES_OLD_UNOWN_K] = _("?"),
    [SPECIES_OLD_UNOWN_L] = _("?"),
    [SPECIES_OLD_UNOWN_M] = _("?"),
    [SPECIES_OLD_UNOWN_N] = _("?"),
    [SPECIES_OLD_UNOWN_O] = _("?"),
    [SPECIES_OLD_UNOWN_P] = _("?"),
    [SPECIES_OLD_UNOWN_Q] = _("?"),
    [SPECIES_OLD_UNOWN_R] = _("?"),
    [SPECIES_OLD_UNOWN_S] = _("?"),
    [SPECIES_OLD_UNOWN_T] = _("?"),
    [SPECIES_OLD_UNOWN_U] = _("?"),
    [SPECIES_OLD_UNOWN_V] = _("?"),
    [SPECIES_OLD_UNOWN_W] = _("?"),
    [SPECIES_OLD_UNOWN_X] = _("?"),
    [SPECIES_OLD_UNOWN_Y] = _("?"),
    [SPECIES_OLD_UNOWN_Z] = _("?"),
    [SPECIES_TREECKO] = _("Arcko"),
    [SPECIES_GROVYLE] = _("Massko"),
    [SPECIES_SCEPTILE] = _("Jungko"),
    [SPECIES_TORCHIC] = _("Poussifeu"),
    [SPECIES_COMBUSKEN] = _("Galifeu"),
    [SPECIES_BLAZIKEN] = _("Braségali"),
    [SPECIES_MUDKIP] = _("Gobou"),
    [SPECIES_MARSHTOMP] = _("Flobio"),
    [SPECIES_SWAMPERT] = _("Laggron"),
    [SPECIES_POOCHYENA] = _("Medhyèna"),
    [SPECIES_MIGHTYENA] = _("Grahyèna"),
    [SPECIES_ZIGZAGOON] = _("Zigzaton"),
    [SPECIES_LINOONE] = _("Linéon"),
    [SPECIES_WURMPLE] = _("Chenipotte"),
    [SPECIES_SILCOON] = _("Armulys"),
    [SPECIES_BEAUTIFLY] = _("Charmillon"),
    [SPECIES_CASCOON] = _("Blindalys"),
    [SPECIES_DUSTOX] = _("Papinox"),
    [SPECIES_LOTAD] = _("Nénupiot"),
    [SPECIES_LOMBRE] = _("Lombre"),
    [SPECIES_LUDICOLO] = _("Ludicolo"),
    [SPECIES_SEEDOT] = _("Grainipiot"),
    [SPECIES_NUZLEAF] = _("Pifeuil"),
    [SPECIES_SHIFTRY] = _("Tengalice"),
    [SPECIES_NINCADA] = _("Ningale"),
    [SPECIES_NINJASK] = _("Ninjask"),
    [SPECIES_SHEDINJA] = _("Munja"),
    [SPECIES_TAILLOW] = _("Nirondelle"),
    [SPECIES_SWELLOW] = _("Hélédelle"),
    [SPECIES_SHROOMISH] = _("Balignon"),
    [SPECIES_BRELOOM] = _("Chapignon"),
    [SPECIES_SPINDA] = _("Spinda"),
    [SPECIES_WINGULL] = _("Goélise"),
    [SPECIES_PELIPPER] = _("Bekipan"),
    [SPECIES_SURSKIT] = _("Arakdo"),
    [SPECIES_MASQUERAIN] = _("Maskadra"),
    [SPECIES_WAILMER] = _("Wailmer"),
    [SPECIES_WAILORD] = _("Wailord"),
    [SPECIES_SKITTY] = _("Skitty"),
    [SPECIES_DELCATTY] = _("Delcatty"),
    [SPECIES_KECLEON] = _("Kecleon"),
    [SPECIES_BALTOY] = _("Balbuto"),
    [SPECIES_CLAYDOL] = _("Kaorine"),
    [SPECIES_NOSEPASS] = _("Tarinor"),
    [SPECIES_TORKOAL] = _("Chartor"),
    [SPECIES_SABLEYE] = _("Ténéfix"),
    [SPECIES_BARBOACH] = _("Barloche"),
    [SPECIES_WHISCASH] = _("Barbicha"),
    [SPECIES_LUVDISC] = _("Lovdisc"),
    [SPECIES_CORPHISH] = _("Ecrapince"),
    [SPECIES_CRAWDAUNT] = _("Colhomard"),
    [SPECIES_FEEBAS] = _("Barpau"),
    [SPECIES_MILOTIC] = _("Milobellus"),
    [SPECIES_CARVANHA] = _("Carvanha"),
    [SPECIES_SHARPEDO] = _("Sharpedo"),
    [SPECIES_TRAPINCH] = _("Kraknoix"),
    [SPECIES_VIBRAVA] = _("Vibraninf"),
    [SPECIES_FLYGON] = _("Libégon"),
    [SPECIES_MAKUHITA] = _("Makuhita"),
    [SPECIES_HARIYAMA] = _("Hariyama"),
    [SPECIES_ELECTRIKE] = _("Dynavolt"),
    [SPECIES_MANECTRIC] = _("Electsprint"),
    [SPECIES_NUMEL] = _("Chamallot"),
    [SPECIES_CAMERUPT] = _("Camérupt"),
    [SPECIES_SPHEAL] = _("Obali"),
    [SPECIES_SEALEO] = _("Phogleur"),
    [SPECIES_WALREIN] = _("Kaimorse"),
    [SPECIES_CACNEA] = _("Cacnea"),
    [SPECIES_CACTURNE] = _("Cacturne"),
    [SPECIES_SNORUNT] = _("Stalgamin"),
    [SPECIES_GLALIE] = _("Oniglali"),
    [SPECIES_LUNATONE] = _("Séléroc"),
    [SPECIES_SOLROCK] = _("Solaroc"),
    [SPECIES_AZURILL] = _("Azurill"),
    [SPECIES_SPOINK] = _("Spoink"),
    [SPECIES_GRUMPIG] = _("Groret"),
    [SPECIES_PLUSLE] = _("Posipi"),
    [SPECIES_MINUN] = _("Négapi"),
    [SPECIES_MAWILE] = _("Mysdibule"),
    [SPECIES_MEDITITE] = _("Méditikka"),
    [SPECIES_MEDICHAM] = _("Charmina"),
    [SPECIES_SWABLU] = _("Tylton"),
    [SPECIES_ALTARIA] = _("Altaria"),
    [SPECIES_WYNAUT] = _("Okéoké"),
    [SPECIES_DUSKULL] = _("Skelénox"),
    [SPECIES_DUSCLOPS] = _("Téraclope"),
    [SPECIES_ROSELIA] = _("Rosélia"),
    [SPECIES_SLAKOTH] = _("Parecool"),
    [SPECIES_VIGOROTH] = _("Vigoroth"),
    [SPECIES_SLAKING] = _("Monaflèmit"),
    [SPECIES_GULPIN] = _("Gloupti"),
    [SPECIES_SWALOT] = _("Avaltout"),
    [SPECIES_TROPIUS] = _("Tropius"),
    [SPECIES_WHISMUR] = _("Chuchmur"),
    [SPECIES_LOUDRED] = _("Ramboum"),
    [SPECIES_EXPLOUD] = _("Brouhabam"),
    [SPECIES_CLAMPERL] = _("Coquiperl"),
    [SPECIES_HUNTAIL] = _("Serpang"),
    [SPECIES_GOREBYSS] = _("Rosabyss"),
    [SPECIES_ABSOL] = _("Absol"),
    [SPECIES_SHUPPET] = _("Polichombr"),
    [SPECIES_BANETTE] = _("Branette"),
    [SPECIES_SEVIPER] = _("Séviper"),
    [SPECIES_ZANGOOSE] = _("Mangriff"),
    [SPECIES_RELICANTH] = _("Relicanth"),
    [SPECIES_ARON] = _("Galekid"),
    [SPECIES_LAIRON] = _("Galegon"),
    [SPECIES_AGGRON] = _("Galeking"),
    [SPECIES_CASTFORM] = _("Morphéo"),
    [SPECIES_VOLBEAT] = _("Muciole"),
    [SPECIES_ILLUMISE] = _("Lumivole"),
    [SPECIES_LILEEP] = _("Lilia"),
    [SPECIES_CRADILY] = _("Vacilys"),
    [SPECIES_ANORITH] = _("Anorith"),
    [SPECIES_ARMALDO] = _("Armaldo"),
    [SPECIES_RALTS] = _("Tarsal"),
    [SPECIES_KIRLIA] = _("Kirlia"),
    [SPECIES_GARDEVOIR] = _("Gardevoir"),
    [SPECIES_BAGON] = _("Draby"),
    [SPECIES_SHELGON] = _("Drackhaus"),
    [SPECIES_SALAMENCE] = _("Drattak"),
    [SPECIES_BELDUM] = _("Terhal"),
    [SPECIES_METANG] = _("Métang"),
    [SPECIES_METAGROSS] = _("Métalosse"),
    [SPECIES_REGIROCK] = _("Regirok"),
    [SPECIES_REGICE] = _("Regice"),
    [SPECIES_REGISTEEL] = _("Registeel"),
    [SPECIES_KYOGRE] = _("Kyogre"),
    [SPECIES_GROUDON] = _("Groudon"),
    [SPECIES_RAYQUAZA] = _("Rayquaza"),
    [SPECIES_LATIAS] = _("Latias"),
    [SPECIES_LATIOS] = _("Latios"),
    [SPECIES_JIRACHI] = _("Jirachi"),
    [SPECIES_DEOXYS] = _("Deoxys"),
    [SPECIES_CHIMECHO] = _("Eoko"),
};
