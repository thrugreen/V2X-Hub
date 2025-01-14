/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AddGrpB"
 * 	found in "J2735_201603_ASN_CC.asn"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted -fskeletons-copy`
 */

#include "AddGrpB_DayOfWeek.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_AddGrpB_DayOfWeek_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_AddGrpB_DayOfWeek_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_AddGrpB_DayOfWeek_value2enum_1[] = {
	{ 0,	7,	"unknown" },
	{ 1,	6,	"monday" },
	{ 2,	7,	"tuesday" },
	{ 3,	9,	"wednesday" },
	{ 4,	8,	"thursday" },
	{ 5,	6,	"friday" },
	{ 6,	8,	"saturday" },
	{ 7,	6,	"sunday" }
};
static const unsigned int asn_MAP_AddGrpB_DayOfWeek_enum2value_1[] = {
	5,	/* friday(5) */
	1,	/* monday(1) */
	6,	/* saturday(6) */
	7,	/* sunday(7) */
	4,	/* thursday(4) */
	2,	/* tuesday(2) */
	0,	/* unknown(0) */
	3	/* wednesday(3) */
};
const asn_INTEGER_specifics_t asn_SPC_AddGrpB_DayOfWeek_specs_1 = {
	asn_MAP_AddGrpB_DayOfWeek_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_AddGrpB_DayOfWeek_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_AddGrpB_DayOfWeek_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_AddGrpB_DayOfWeek = {
	"DayOfWeek",
	"DayOfWeek",
	&asn_OP_NativeEnumerated,
	asn_DEF_AddGrpB_DayOfWeek_tags_1,
	sizeof(asn_DEF_AddGrpB_DayOfWeek_tags_1)
		/sizeof(asn_DEF_AddGrpB_DayOfWeek_tags_1[0]), /* 1 */
	asn_DEF_AddGrpB_DayOfWeek_tags_1,	/* Same as above */
	sizeof(asn_DEF_AddGrpB_DayOfWeek_tags_1)
		/sizeof(asn_DEF_AddGrpB_DayOfWeek_tags_1[0]), /* 1 */
	{ &asn_OER_type_AddGrpB_DayOfWeek_constr_1, &asn_PER_type_AddGrpB_DayOfWeek_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_AddGrpB_DayOfWeek_specs_1	/* Additional specs */
};

