/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_ASN_CC.asn"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted -fskeletons-copy`
 */

#include "PrioritizationResponseStatus.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_PrioritizationResponseStatus_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_PrioritizationResponseStatus_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  7 }	/* (0..7,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_PrioritizationResponseStatus_value2enum_1[] = {
	{ 0,	7,	"unknown" },
	{ 1,	9,	"requested" },
	{ 2,	10,	"processing" },
	{ 3,	17,	"watchOtherTraffic" },
	{ 4,	7,	"granted" },
	{ 5,	8,	"rejected" },
	{ 6,	11,	"maxPresence" },
	{ 7,	15,	"reserviceLocked" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_PrioritizationResponseStatus_enum2value_1[] = {
	4,	/* granted(4) */
	6,	/* maxPresence(6) */
	2,	/* processing(2) */
	5,	/* rejected(5) */
	1,	/* requested(1) */
	7,	/* reserviceLocked(7) */
	0,	/* unknown(0) */
	3	/* watchOtherTraffic(3) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_PrioritizationResponseStatus_specs_1 = {
	asn_MAP_PrioritizationResponseStatus_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_PrioritizationResponseStatus_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	9,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_PrioritizationResponseStatus_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_PrioritizationResponseStatus = {
	"PrioritizationResponseStatus",
	"PrioritizationResponseStatus",
	&asn_OP_NativeEnumerated,
	asn_DEF_PrioritizationResponseStatus_tags_1,
	sizeof(asn_DEF_PrioritizationResponseStatus_tags_1)
		/sizeof(asn_DEF_PrioritizationResponseStatus_tags_1[0]), /* 1 */
	asn_DEF_PrioritizationResponseStatus_tags_1,	/* Same as above */
	sizeof(asn_DEF_PrioritizationResponseStatus_tags_1)
		/sizeof(asn_DEF_PrioritizationResponseStatus_tags_1[0]), /* 1 */
	{ &asn_OER_type_PrioritizationResponseStatus_constr_1, &asn_PER_type_PrioritizationResponseStatus_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_PrioritizationResponseStatus_specs_1	/* Additional specs */
};

