/*	EQEMu: Everquest Server Emulator
	Copyright (C) 2001-2002 EQEMu Development Team (http://eqemu.org)

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; version 2 of the License.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY except by those people which sell it, which
	are required to give you total support for your newly bought product;
	without even the implied warranty of MERCHANTABILITY or FITNESS FOR
	A PARTICULAR PURPOSE. See the GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
*/
#ifndef RACES_H
#define RACES_H
#include "../common/types.h"

#define MALE 0
#define FEMALE 1
#define NEUTER 2

//theres a big list straight from the client below.

#define HUMAN				1
#define BARBARIAN			2
#define ERUDITE				3
#define WOOD_ELF			4
#define HIGH_ELF			5
#define DARK_ELF			6
#define HALF_ELF			7
#define DWARF				8
#define TROLL				9
#define OGRE				10
#define HALFLING			11
#define GNOME				12
#define WEREWOLF			14
#define BROWNIE				15
#define FAIRY				25
#define FUNGUSMAN			28
#define WOLF				42
#define BEAR				43
#define FREEPORT_GUARD		44
#define KOBOLD				48
#define LAVA_DRAGON			49
#define LION				50
#define MIMIC				52
#define HUMAN_BEGGER		55
#define PIXIE				56
#define DRACNID				57
#define SKELETON			60
#define TIGER				63
#define VAMPIRE				65
#define HIGHPASS_CITIZEN	67
#define WISP				69
#define ZOMBIE				70
#define	SHIP				72
#define LAUNCH				73
#define FROGLOK				74
#define ELEMENTAL			75
#define NERIAK_CITIZEN		77
#define ERUDITE_CITIZEN		78
#define BIXIE				79
#define RIVERVALE_CITIZEN	81
#define CLOCKWORK_GNOME		88
#define HALAS_CITIZEN		90
#define ALLIGATOR			91
#define GROBB_CITIZEN		92
#define OGGOK_CITIZEN		93
#define KALADIM_CITIZEN		94
#define ELF_VAMPIRE			98
#define FELGUARD			106
#define EYE_OF_ZOMM			108
#define FAYGUARD			112
#define GHOST_SHIP			114
#define DWARF_GHOST			117
#define ERUDITE_GHOST		118
#define WOLF_ELEMENTAL		120
#define INVISIBLE_MAN		127
#define IKSAR				128
#define VAHSHIR				130
#define CONTROLLED_BOAT		141
#define MINOR_ILLUSION		142
#define TREEFORM			143
#define GOO					145
#define WURM				158
#define IKSAR_SKELETON		161
#define VELIOUS_DRAGON		184
#define GHOST_DRAGON		196
#define PRISMATIC_DRAGON	198
#define EARTH_ELEMENTAL		209
#define AIR_ELEMENTAL		210
#define WATER_ELEMENTAL		211
#define FIRE_ELEMENTAL		212
#define HORSE				216
#define TELEPORT_MAN		240
#define MITHANIEL_MARR		296
#define EMU_RACE_NPC		131069 // was 65533
#define EMU_RACE_PET		131070 // was 65534
#define EMU_RACE_UNKNOWN	131071 // was 65535

// player race values
#define PLAYER_RACE_UNKNOWN		0
#define PLAYER_RACE_HUMAN		1
#define PLAYER_RACE_BARBARIAN	2
#define PLAYER_RACE_ERUDITE		3
#define PLAYER_RACE_WOOD_ELF	4
#define PLAYER_RACE_HIGH_ELF	5
#define PLAYER_RACE_DARK_ELF	6
#define PLAYER_RACE_HALF_ELF	7
#define PLAYER_RACE_DWARF		8
#define PLAYER_RACE_TROLL		9
#define PLAYER_RACE_OGRE		10
#define PLAYER_RACE_HALFLING	11
#define PLAYER_RACE_GNOME		12
#define PLAYER_RACE_IKSAR		13
#define PLAYER_RACE_VAHSHIR		14

#define PLAYER_RACE_COUNT		14

#define PLAYER_RACE_EMU_NPC		15
#define PLAYER_RACE_EMU_PET		16
#define PLAYER_RACE_EMU_COUNT	17

// player race bits
#define PLAYER_RACE_UNKNOWN_BIT		0
#define PLAYER_RACE_HUMAN_BIT		1
#define PLAYER_RACE_BARBARIAN_BIT	2
#define PLAYER_RACE_ERUDITE_BIT		4
#define PLAYER_RACE_WOOD_ELF_BIT	8
#define PLAYER_RACE_HIGH_ELF_BIT	16
#define PLAYER_RACE_DARK_ELF_BIT	32
#define PLAYER_RACE_HALF_ELF_BIT	64
#define PLAYER_RACE_DWARF_BIT		128
#define PLAYER_RACE_TROLL_BIT		256
#define PLAYER_RACE_OGRE_BIT		512
#define PLAYER_RACE_HALFLING_BIT	1024
#define PLAYER_RACE_GNOME_BIT		2048
#define PLAYER_RACE_IKSAR_BIT		4096
#define PLAYER_RACE_VAHSHIR_BIT		8192

#define PLAYER_RACE_ALL_MASK		16383

#define RT_ABHORRENT				193
#define RT_AIR_ELEMENTAL			210
#define RT_AIR_MEPHIT				291
#define RT_AKHEVA					230
#define RT_ALLIGATOR				91
#define RT_AMYGDALAN				99
#define RT_ANIMATED_ARMOR			323
#define RT_ANIMATED_HAND			166
#define RT_ARACHNID					326
#define RT_ARMADILLO				87
#define RT_AVIAK					13
#define RT_BANSHEE					250
#define RT_BARBARIAN				2
#define RT_BARBARIAN_2				90
#define RT_BAT						34
#define RT_BAT_2					260
#define RT_BEAR						43
#define RT_BEAR_2					305
#define RT_BEETLE					22
#define RT_BEGGAR					55
#define RT_BERTOXXULOUS				152
#define RT_BERTOXXULOUS_2			255
#define RT_BIXIE					79
#define RT_BLOOD_RAVEN				279
#define RT_BOAT						141
#define RT_BOT_PORTAL				329
#define RT_BRISTLEBANE				153
#define RT_BROKEN_CLOCKWORK			274
#define RT_BRONTOTHERIUM			169
#define RT_BROWNIE					15
#define RT_BUBONIAN					268
#define RT_BUBONIAN_UNDERLING		269
#define RT_BURYNAI					144
#define RT_CAZIC_THULE				95
#define RT_CENTAUR					16
#define RT_CLAM						115
#define RT_CLOCKWORK_BEETLE			276
#define RT_CLOCKWORK_BRAIN			249
#define RT_CLOCKWORK_GNOME			88
#define RT_CLOCKWORK_GOLEM			248
#define RT_COCKATRICE				96
#define RT_COLDAIN					183
#define RT_CRAB						302
#define RT_CROCODILE				259
#define RT_CRYSTAL_SPIDER			327
#define RT_DAISY_MAN				97
#define RT_DARK_ELF					6
#define RT_DARK_ELF_2				77
#define RT_DEMI_LICH				45
#define RT_DERVISH					100
#define RT_DEVOURER					159
#define RT_DIRE_WOLF				171
#define RT_DISEASED_FIEND			253
#define RT_DJINN					126
#define RT_DRACHNID					57
#define RT_DRAGLOCK					132
#define RT_DRAGON					49
#define RT_DRAGON_2					122
#define RT_DRAGON_3					165
#define RT_DRAGON_4					184
#define RT_DRAGON_5					192
#define RT_DRAGON_6					195
#define RT_DRAGON_7					196
#define RT_DRAGON_8					198
#define RT_DRAGON_9					304
#define RT_DRAKE					89
#define RT_DRIXIE					113
#define RT_DROLVARG					133
#define RT_DRYAD					243
#define RT_DWARF					8
#define RT_DWARF_2					94
#define RT_EARTH_ELEMENTAL			209
#define RT_EARTH_MEPHIT				292
#define RT_EEL						35
#define RT_EFREETI					101
#define RT_EFREETI_2				320
#define RT_ELEMENTAL				75
#define RT_ENCHANTED_ARMOR			175
#define RT_EROLLISI					150
#define RT_ERUDITE					3
#define RT_ERUDITE_2				78
#define RT_EVAN_TEST				204
#define RT_EVIL_EYE					21
#define RT_EYE						108
#define RT_FAIRY					25
#define RT_FAUN						182
#define RT_FAY_DRAKE				154
#define RT_FENNIN_RO				284
#define RT_FIEND					300
#define RT_FIRE_ELEMENTAL			212
#define RT_FIRE_MEPHIT				293
#define RT_FISH						24
#define RT_FISH_2					148
#define RT_FLY						245
#define RT_FROGLOK					26
#define RT_FROGLOK_2				27
#define RT_FUNGAL_FIEND				218
#define RT_FUNGUSMAN				28
#define RT_GALORIAN					228
#define RT_GARGOYLE					29
#define RT_GASBAG					30
#define RT_GELATINOUS_CUBE			31
#define RT_GEONID					178
#define RT_GHOST					32
#define RT_GHOST_2					117
#define RT_GHOST_3					118
#define RT_GHOST_SHIP				114
#define RT_GHOUL					33
#define RT_GIANT					18
#define RT_GIANT_2					140
#define RT_GIANT_3					188
#define RT_GIANT_4					189
#define RT_GIANT_5					306
#define RT_GIANT_6					307
#define RT_GIANT_7					308
#define RT_GIANT_8					309
#define RT_GIANT_9					310
#define RT_GIANT_10					311
#define RT_GIANT_11					312
#define RT_GIANT_CLOCKWORK			275
#define RT_GNOLL					39
#define RT_GNOME					12
#define RT_GOBLIN					40
#define RT_GOBLIN_2					59
#define RT_GOBLIN_3					137
#define RT_GOLEM					17
#define RT_GOO						145
#define RT_GORGON					121
#define RT_GORILLA					41
#define RT_GRIEG_VENEFICUS			231
#define RT_GRIFFIN					47
#define RT_GRIMLING					202
#define RT_GROUND_SHAKER			233
#define RT_GUARD					44
#define RT_GUARD_2					106
#define RT_GUARD_3					112
#define RT_GUARD_4					239
#define RT_GUARD_OF_JUSTICE			251
#define RT_HAG						185
#define RT_HALF_ELF					7
#define RT_HALFLING					11
#define RT_HALFLING_2				81
#define RT_HARPY					111
#define RT_HIGH_ELF					5
#define RT_HIPPOGRIFF				186
#define RT_HOLGRESH					168
#define RT_HORSE					216
#define RT_HRAQUIS					261
#define RT_HUMAN					1
#define RT_HUMAN_2					67
#define RT_HUMAN_3					71
#define RT_ICE_SPECTRE				174
#define RT_IKSAR					128
#define RT_IKSAR_2					139
#define RT_IKSAR_GOLEM				160
#define RT_IKSAR_SPIRIT				147
#define RT_IMP						46
#define RT_INNORUUK					123
#define RT_INVISIBLE_MAN			127
#define RT_JUNK_BEAST				273
#define RT_KARANA					278
#define RT_KEDGE					103
#define RT_KERRAN					23
#define RT_KNIGHT_OF_PESTILENCE		266
#define RT_KOBOLD					48
#define RT_KRAKEN					315
#define RT_LAUNCH					73
#define RT_LEECH					104
#define RT_LIGHTCRAWLER				223
#define RT_LION						50
#define RT_LIZARD_MAN				51
#define RT_MALARIAN					265
#define RT_MAMMOTH					107
#define RT_MAN_EATING_PLANT			162
#define RT_MANTICORE				172
#define RT_MERMAID					110
#define RT_MIMIC					52
#define RT_MINI_POM					252
#define RT_MINOTAUR					53
#define RT_MITHANIEL_MARR			296
#define RT_MOSQUITO					134
#define RT_MOUTH_OF_INSANITY		281
#define RT_NETHERBIAN				229
#define RT_NIGHTMARE				287
#define RT_NIGHTMARE_GARGOYLE		280
#define RT_NIGHTMARE_GOBLIN			277
#define RT_NIGHTMARE_MEPHIT			294
#define RT_NIGHTMARE_WRAITH			264
#define RT_NILBORIEN				317
#define RT_NYMPH					242
#define RT_OGRE						10
#define RT_OGRE_2					93
#define RT_ORC						54
#define RT_OTHMIR					190
#define RT_OWLBEAR					206
#define RT_PEGASUS					125
#define RT_PHOENIX					303
#define RT_PIRANHA					74
#define RT_PIXIE					56
#define RT_POISON_FROG				316
#define RT_PUMA						76
#define RT_PUSLING					270
#define RT_RALLOS_ZEK				66
#define RT_RALLOS_ZEK_2				288
#define RT_RALLOS_ZEK_MINION		325
#define RT_RAPTOR					163
#define RT_RAT						36
#define RT_RATMAN					156
#define RT_REANIMATED_HAND			80
#define RT_RECUSO					237
#define RT_RHINO_BEETLE				207
#define RT_RHINOCEROS				135
#define RT_ROCKHOPPER				200
#define RT_RONNIE_TEST				197
#define RT_SABER_TOOTHED_CAT		119
#define RT_SARNAK					131
#define RT_SARNAK_GOLEM				164
#define RT_SARNAK_SPIRIT			146
#define RT_SARYRN					283
#define RT_SCARECROW				82
#define RT_SCARLET_CHEETAH			221
#define RT_SCORPION					129
#define RT_SCORPION_2				149
#define RT_SEA_TURTLE				194
#define RT_SEAHORSE					116
#define RT_SERU						236
#define RT_SHADE					224
#define RT_SHADEL					205
#define RT_SHARK					61
#define RT_SHIKNAR					199
#define RT_SHIP						72
#define RT_SHISSAR					217
#define RT_SHRIEKER					227
#define RT_SIREN					187
#define RT_SKELETAL_HORSE			282
#define RT_SKELETON					60
#define RT_SKUNK					83
#define RT_SNAKE					37
#define RT_SNAKE_ELEMENTAL			84
#define RT_SNOW_DERVISH				170
#define RT_SNOW_RABBIT				176
#define RT_SOLUSEK_RO				58
#define RT_SOLUSEK_RO_2				247
#define RT_SOLUSEK_RO_GUARD			254
#define RT_SONIC_WOLF				232
#define RT_SOUL_DEVOURER			286
#define RT_SPECTRE					85
#define RT_SPHINX					86
#define RT_SPIDER					38
#define RT_STONEGRABBER				220
#define RT_STORMRIDER				272
#define RT_SUCCULENT				167
#define RT_SUN_REVENANT				226
#define RT_SUNFLOWER				225
#define RT_SWORDFISH				105
#define RT_TADPOLE					102
#define RT_TALLON_ZEK				290
#define RT_TAREW_MARR				246
#define RT_TEGI						215
#define RT_TELEPORT_MAN				240
#define RT_TENTACLE_TERROR			68
#define RT_TERRIS_THULE				257
#define RT_TEST_OBJECT				301
#define RT_THE_RATHE				298
#define RT_THE_TRIBUNAL				256
#define RT_THOUGHT_HORROR			214
#define RT_TIGER					63
#define RT_TIN_SOLDIER				263
#define RT_TORMENTOR				285
#define RT_TOTEM					173
#define RT_TRAKANON					19
#define RT_TRANQUILION				262
#define RT_TREANT					64
#define RT_TREANT_2					244
#define RT_TRIBUNAL					151
#define RT_TROLL					9
#define RT_TROLL_2					92
#define RT_TUNARE					62
#define RT_ULTHORK					191
#define RT_UNDEAD_FOOTMAN			324
#define RT_UNDEAD_IKSAR				161
#define RT_UNDEAD_KNIGHT			297
#define RT_UNDEAD_SARNAK			155
#define RT_UNDERBULK				201
#define RT_UNICORN					124
#define RT_UNKNOWN_RACE				0
#define RT_UNKNOWN_RACE_2			142
#define RT_UNKNOWN_RACE_3			143
#define RT_UNKNOWN_RACE_4			179
#define RT_UNKNOWN_RACE_5			180
#define RT_VAH_SHIR					130
#define RT_VAH_SHIR_2				238
#define RT_VAH_SHIR_SKELETON		234
#define RT_VALLON_ZEK				289
#define RT_VALORIAN					318
#define RT_VALORIAN_2				322
#define RT_VAMPIRE					65
#define RT_VAMPIRE_2				98
#define RT_VAMPIRE_3				208
#define RT_VAMPIRE_4				219
#define RT_VEGEROG					258
#define RT_VENRIL_SATHIR			20
#define RT_WALRUS					177
#define RT_WAR_BOAR					319
#define RT_WAR_BOAR_2				321
#define RT_WAR_WRAITH				313
#define RT_WASP						109
#define RT_WATER_ELEMENTAL			211
#define RT_WATER_MEPHIT				271
#define RT_WEREWOLF					14
#define RT_WEREWOLF_2				241
#define RT_WETFANG_MINNOW			213
#define RT_WILL_O_WISP				69
#define RT_WOLF						42
#define RT_WOLF_2					120
#define RT_WOOD_ELF					4
#define RT_WORM						203
#define RT_WRETCH					235
#define RT_WRULON					314
#define RT_WURM						158
#define RT_WYVERN					157
#define RT_XALGOZ					136
#define RT_XEGONY					299
#define RT_YAKKAR					181
#define RT_YETI						138
#define RT_ZEBUXORUK				295
#define RT_ZEBUXORUKS_CAGE			328
#define RT_ZELNIAK					222
#define RT_ZOMBIE					70

const char* GetRaceIDName(uint16 race_id);
const char* GetRaceIDNamePlural(uint16 race_id);
const char* GetPlayerRaceName(uint32 player_race_value);
const char* GetGenderName(uint32 gender_id);

bool IsPlayerRace(uint16 race_id);
uint32 GetPlayerRaceBit(uint16 race_id);
uint32 GetPlayerRaceValue(uint16 race_id);

uint16 GetRaceIDFromPlayerRaceValue(uint32 player_race_value);
uint16 GetRaceIDFromPlayerRaceBit(uint32 player_race_bit);

float GetRaceGenderDefaultHeight(int race, int gender);

// player race-/gender-based model feature validators
namespace PlayerAppearance
{
	bool IsValidBeard(uint16 race_id, uint8 gender_id, uint8 beard_value, bool use_luclin = true);
	bool IsValidBeardColor(uint16 race_id, uint8 gender_id, uint8 beard_color_value, bool use_luclin = true);
	bool IsValidDetail(uint16 race_id, uint8 gender_id, uint32 detail_value, bool use_luclin = true);
	bool IsValidEyeColor(uint16 race_id, uint8 gender_id, uint8 eye_color_value, bool use_luclin = true);
	bool IsValidFace(uint16 race_id, uint8 gender_id, uint8 face_value, bool use_luclin = true);
	bool IsValidHair(uint16 race_id, uint8 gender_id, uint8 hair_value, bool use_luclin = true);
	bool IsValidHairColor(uint16 race_id, uint8 gender_id, uint8 hair_color_value, bool use_luclin = true);
	bool IsValidHead(uint16 race_id, uint8 gender_id, uint8 head_value, bool use_luclin = true);
	bool IsValidWoad(uint16 race_id, uint8 gender_id, uint8 woad_value, bool use_luclin = true);
}

#define RACE_DOUG_0 0
#define RACE_HUMAN_1 1
#define RACE_BARBARIAN_2 2
#define RACE_ERUDITE_3 3
#define RACE_WOOD_ELF_4 4
#define RACE_HIGH_ELF_5 5
#define RACE_DARK_ELF_6 6
#define RACE_HALF_ELF_7 7
#define RACE_DWARF_8 8
#define RACE_TROLL_9 9
#define RACE_OGRE_10 10
#define RACE_HALFLING_11 11
#define RACE_GNOME_12 12
#define RACE_AVIAK_13 13
#define RACE_WEREWOLF_14 14
#define RACE_BROWNIE_15 15
#define RACE_CENTAUR_16 16
#define RACE_GOLEM_17 17
#define RACE_GIANT_18 18
#define RACE_TRAKANON_19 19
#define RACE_VENRIL_SATHIR_20 20
#define RACE_EVIL_EYE_21 21
#define RACE_BEETLE_22 22
#define RACE_KERRAN_23 23
#define RACE_FISH_24 24
#define RACE_FAIRY_25 25
#define RACE_FROGLOK_26 26
#define RACE_FROGLOK_GHOUL_27 27
#define RACE_FUNGUSMAN_28 28
#define RACE_GARGOYLE_29 29
#define RACE_GASBAG_30 30
#define RACE_GELATINOUS_CUBE_31 31
#define RACE_GHOST_32 32
#define RACE_GHOUL_33 33
#define RACE_GIANT_BAT_34 34
#define RACE_GIANT_EEL_35 35
#define RACE_GIANT_RAT_36 36
#define RACE_GIANT_SNAKE_37 37
#define RACE_GIANT_SPIDER_38 38
#define RACE_GNOLL_39 39
#define RACE_GOBLIN_40 40
#define RACE_GORILLA_41 41
#define RACE_WOLF_42 42
#define RACE_BEAR_43 43
#define RACE_FREEPORT_GUARD_44 44
#define RACE_DEMI_LICH_45 45
#define RACE_IMP_46 46
#define RACE_GRIFFIN_47 47
#define RACE_KOBOLD_48 48
#define RACE_LAVA_DRAGON_49 49
#define RACE_LION_50 50
#define RACE_LIZARD_MAN_51 51
#define RACE_MIMIC_52 52
#define RACE_MINOTAUR_53 53
#define RACE_ORC_54 54
#define RACE_HUMAN_BEGGAR_55 55
#define RACE_PIXIE_56 56
#define RACE_DRACNID_57 57
#define RACE_SOLUSEK_RO_58 58
#define RACE_BLOODGILL_59 59
#define RACE_SKELETON_60 60
#define RACE_SHARK_61 61
#define RACE_TUNARE_62 62
#define RACE_TIGER_63 63
#define RACE_TREANT_64 64
#define RACE_VAMPIRE_65 65
#define RACE_STATUE_OF_RALLOS_ZEK_66 66
#define RACE_HIGHPASS_CITIZEN_67 67
#define RACE_TENTACLE_68 68
#define RACE_WISP_69 69
#define RACE_ZOMBIE_70 70
#define RACE_QEYNOS_CITIZEN_71 71
#define RACE_SHIP_72 72
#define RACE_LAUNCH_73 73
#define RACE_PIRANHA_74 74
#define RACE_ELEMENTAL_75 75
#define RACE_PUMA_76 76
#define RACE_NERIAK_CITIZEN_77 77
#define RACE_ERUDITE_CITIZEN_78 78
#define RACE_BIXIE_79 79
#define RACE_REANIMATED_HAND_80 80
#define RACE_RIVERVALE_CITIZEN_81 81
#define RACE_SCARECROW_82 82
#define RACE_SKUNK_83 83
#define RACE_SNAKE_ELEMENTAL_84 84
#define RACE_SPECTRE_85 85
#define RACE_SPHINX_86 86
#define RACE_ARMADILLO_87 87
#define RACE_CLOCKWORK_GNOME_88 88
#define RACE_DRAKE_89 89
#define RACE_HALAS_CITIZEN_90 90
#define RACE_ALLIGATOR_91 91
#define RACE_GROBB_CITIZEN_92 92
#define RACE_OGGOK_CITIZEN_93 93
#define RACE_KALADIM_CITIZEN_94 94
#define RACE_CAZIC_THULE_95 95
#define RACE_COCKATRICE_96 96
#define RACE_DAISY_MAN_97 97
#define RACE_ELF_VAMPIRE_98 98
#define RACE_DENIZEN_99 99
#define RACE_DERVISH_100 100
#define RACE_EFREETI_101 101
#define RACE_FROGLOK_TADPOLE_102 102
#define RACE_PHINIGEL_AUTROPOS_103 103
#define RACE_LEECH_104 104
#define RACE_SWORDFISH_105 105
#define RACE_FELGUARD_106 106
#define RACE_MAMMOTH_107 107
#define RACE_EYE_OF_ZOMM_108 108
#define RACE_WASP_109 109
#define RACE_MERMAID_110 110
#define RACE_HARPIE_111 111
#define RACE_FAYGUARD_112 112
#define RACE_DRIXIE_113 113
#define RACE_GHOST_SHIP_114 114
#define RACE_CLAM_115 115
#define RACE_SEA_HORSE_116 116
#define RACE_DWARF_GHOST_117 117
#define RACE_ERUDITE_GHOST_118 118
#define RACE_SABERTOOTH_119 119
#define RACE_WOLF_ELEMENTAL_120 120
#define RACE_GORGON_121 121
#define RACE_DRAGON_SKELETON_122 122
#define RACE_INNORUUK_123 123
#define RACE_UNICORN_124 124
#define RACE_PEGASUS_125 125
#define RACE_DJINN_126 126
#define RACE_INVISIBLE_MAN_127 127
#define RACE_IKSAR_128 128
#define RACE_SCORPION_129 129
#define RACE_VAH_SHIR_130 130
#define RACE_SARNAK_131 131
#define RACE_DRAGLOCK_132 132
#define RACE_LYCANTHROPE_133 133
#define RACE_MOSQUITO_134 134
#define RACE_RHINO_135 135
#define RACE_XALGOZ_136 136
#define RACE_KUNARK_GOBLIN_137 137
#define RACE_YETI_138 138
#define RACE_IKSAR_CITIZEN_139 139
#define RACE_FOREST_GIANT_140 140
#define RACE_BOAT_141 141
#define RACE_MINOR_ILLUSION_142 142
#define RACE_TREE_ILLUSION_143 143
#define RACE_BURYNAI_144 144
#define RACE_GOO_145 145
#define RACE_SPECTRAL_SARNAK_146 146
#define RACE_SPECTRAL_IKSAR_147 147
#define RACE_KUNARK_FISH_148 148
#define RACE_IKSAR_SCORPION_149 149
#define RACE_EROLLISI_150 150
#define RACE_TRIBUNAL_151 151
#define RACE_BERTOXXULOUS_152 152
#define RACE_BRISTLEBANE_153 153
#define RACE_FAY_DRAKE_154 154
#define RACE_SARNAK_SKELETON_155 155
#define RACE_RATMAN_156 156
#define RACE_WYVERN_157 157
#define RACE_WURM_158 158
#define RACE_DEVOURER_159 159
#define RACE_IKSAR_GOLEM_160 160
#define RACE_IKSAR_SKELETON_161 161
#define RACE_MAN_EATING_PLANT_162 162
#define RACE_RAPTOR_163 163
#define RACE_SARNAK_GOLEM_164 164
#define RACE_WATER_DRAGON_165 165
#define RACE_IKSAR_HAND_166 166
#define RACE_SUCCULENT_167 167
#define RACE_HOLGRESH_168 168
#define RACE_BRONTOTHERIUM_169 169
#define RACE_SNOW_DERVISH_170 170
#define RACE_DIRE_WOLF_171 171
#define RACE_MANTICORE_172 172
#define RACE_TOTEM_173 173
#define RACE_COLD_SPECTRE_174 174
#define RACE_ENCHANTED_ARMOR_175 175
#define RACE_SNOW_BUNNY_176 176
#define RACE_WALRUS_177 177
#define RACE_ROCK_GEM_MAN_178 178
#define RACE_UNKNOWN179_179 179
#define RACE_UNKNOWN180_180 180
#define RACE_YAK_MAN_181 181
#define RACE_FAUN_182 182
#define RACE_COLDAIN_183 183
#define RACE_VELIOUS_DRAGON_184 184
#define RACE_HAG_185 185
#define RACE_HIPPOGRIFF_186 186
#define RACE_SIREN_187 187
#define RACE_FROST_GIANT_188 188
#define RACE_STORM_GIANT_189 189
#define RACE_OTTERMAN_190 190
#define RACE_WALRUS_MAN_191 191
#define RACE_CLOCKWORK_DRAGON_192 192
#define RACE_ABHORRENT_193 193
#define RACE_SEA_TURTLE_194 194
#define RACE_BLACK_AND_WHITE_DRAGON_195 195
#define RACE_GHOST_DRAGON_196 196
#define RACE_RONNIE_TEST_197 197
#define RACE_PRISMATIC_DRAGON_198 198
#define RACE_SHIKNAR_199 199
#define RACE_ROCKHOPPER_200 200
#define RACE_UNDERBULK_201 201
#define RACE_GRIMLING_202 202
#define RACE_VACUUM_WORM_203 203
#define RACE_EVAN_TEST_204 204
#define RACE_KAHLI_SHAH_205 205
#define RACE_OWLBEAR_206 206
#define RACE_RHINO_BEETLE_207 207
#define RACE_VAMPYRE_208 208
#define RACE_EARTH_ELEMENTAL_209 209
#define RACE_AIR_ELEMENTAL_210 210
#define RACE_WATER_ELEMENTAL_211 211
#define RACE_FIRE_ELEMENTAL_212 212
#define RACE_WETFANG_MINNOW_213 213
#define RACE_THOUGHT_HORROR_214 214
#define RACE_TEGI_215 215
#define RACE_HORSE_216 216
#define RACE_SHISSAR_217 217
#define RACE_FUNGAL_FIEND_218 218
#define RACE_VAMPIRE_VOLATALIS_219 219
#define RACE_STONEGRABBER_220 220
#define RACE_SCARLET_CHEETAH_221 221
#define RACE_ZELNIAK_222 222
#define RACE_LIGHTCRAWLER_223 223
#define RACE_SHADE_224 224
#define RACE_SUNFLOWER_225 225
#define RACE_KHATI_SHA_226 226
#define RACE_SHRIEKER_227 227
#define RACE_GALORIAN_228 228
#define RACE_NETHERBIAN_229 229
#define RACE_AKHEVAN_230 230
#define RACE_SPIRE_SPIRIT_231 231
#define RACE_SONIC_WOLF_232 232
#define RACE_GROUND_SHAKER_233 233
#define RACE_VAH_SHIR_SKELETON_234 234
#define RACE_MUTANT_HUMANOID_235 235
#define RACE_LORD_INQUISITOR_SERU_236 236
#define RACE_RECUSO_237 237
#define RACE_VAH_SHIR_KING_238 238
#define RACE_VAH_SHIR_GUARD_239 239
#define RACE_TELEPORT_MAN_240 240
#define RACE_LUJEIN_241 241
#define RACE_NAIAD_242 242
#define RACE_NYMPH_243 243
#define RACE_ENT_244 244
#define RACE_WRINNFLY_245 245
#define RACE_COIRNAV_246 246
#define RACE_SOLUSEK_RO_247 247
#define RACE_CLOCKWORK_GOLEM_248 248
#define RACE_CLOCKWORK_BRAIN_249 249
#define RACE_SPECTRAL_BANSHEE_250 250
#define RACE_GUARD_OF_JUSTICE_251 251
#define RACE_POM_CASTLE_252 252
#define RACE_DISEASE_BOSS_253 253
#define RACE_SOLUSEK_RO_GUARD_254 254
#define RACE_BERTOXXULOUS_NEW_255 255
#define RACE_TRIBUNAL_NEW_256 256
#define RACE_TERRIS_THULE_257 257
#define RACE_VEGEROG_258 258
#define RACE_CROCODILE_259 259
#define RACE_BAT_260 260
#define RACE_SLARGHILUG_261 261
#define RACE_TRANQUILION_262 262
#define RACE_TIN_SOLDIER_263 263
#define RACE_NIGHTMARE_WRAITH_264 264
#define RACE_MALARIAN_265 265
#define RACE_KNIGHT_OF_PESTILENCE_266 266
#define RACE_LEPERTOLOTH_267 267
#define RACE_BUBONIAN_BOSS_268 268
#define RACE_BUBONIAN_UNDERLING_269 269
#define RACE_PUSLING_270 270
#define RACE_WATER_MEPHIT_271 271
#define RACE_STORMRIDER_272 272
#define RACE_JUNK_BEAST_273 273
#define RACE_BROKEN_CLOCKWORK_274 274
#define RACE_GIANT_CLOCKWORK_275 275
#define RACE_CLOCKWORK_BEETLE_276 276
#define RACE_NIGHTMARE_GOBLIN_277 277
#define RACE_KARANA_278 278
#define RACE_BLOOD_RAVEN_279 279
#define RACE_NIGHTMARE_GARGOYLE_280 280
#define RACE_MOUTH_OF_INSANITY_281 281
#define RACE_SKELETAL_HORSE_282 282
#define RACE_SARYRN_283 283
#define RACE_FENNIN_RO_284 284
#define RACE_TORMENTOR_285 285
#define RACE_NECROMANCER_PRIEST_286 286
#define RACE_NIGHTMARE_287 287
#define RACE_NEW_RALLOS_ZEK_288 288
#define RACE_VALLON_ZEK_289 289
#define RACE_TALLON_ZEK_290 290
#define RACE_AIR_MEPHIT_291 291
#define RACE_EARTH_MEPHIT_292 292
#define RACE_FIRE_MEPHIT_293 293
#define RACE_NIGHTMARE_MEPHIT_294 294
#define RACE_ZEBUXORUK_295 295
#define RACE_MITHANIEL_MARR_296 296
#define RACE_KNIGHTMARE_RIDER_297 297
#define RACE_RATHE_COUNCILMAN_298 298
#define RACE_XEGONY_299 299
#define RACE_DEMON_300 300
#define RACE_TEST_OBJECT_301 301
#define RACE_LOBSTER_MONSTER_302 302
#define RACE_PHOENIX_303 303
#define RACE_QUARM_304 304
#define RACE_NEW_BEAR_305 305
#define RACE_EARTH_GOLEM_306 306
#define RACE_IRON_GOLEM_307 307
#define RACE_STORM_GOLEM_308 308
#define RACE_AIR_GOLEM_309 309
#define RACE_WOOD_GOLEM_310 310
#define RACE_FIRE_GOLEM_311 311
#define RACE_WATER_GOLEM_312 312
#define RACE_VEILED_GARGOYLE_313 313
#define RACE_LYNX_314 314
#define RACE_SQUID_315 315
#define RACE_FROG_316 316
#define RACE_FLYING_SERPENT_317 317
#define RACE_TACTICS_SOLDIER_318 318
#define RACE_ARMORED_BOAR_319 319
#define RACE_DJINNI_320 320
#define RACE_BOAR_321 321
#define RACE_KNIGHT_OF_MARR_322 322
#define RACE_ARMOR_OF_MARR_323 323
#define RACE_NIGHTMARE_KNIGHT_324 324
#define RACE_RALLOS_OGRE_325 325
#define RACE_ARACHNID_326 326
#define RACE_CRYSTAL_ARACHNID_327 327
#define RACE_TOWER_MODEL_328 328
#define RACE_PORTAL_329 329

#endif
