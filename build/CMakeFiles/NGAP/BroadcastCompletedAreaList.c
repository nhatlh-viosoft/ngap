/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/lehongnhat/workspace/ngapv2/NGAP-PDU-Descriptions.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/lehongnhat/workspace/ngapv2/build/CMakeFiles/NGAP`
 */

#include "BroadcastCompletedAreaList.h"

static asn_per_constraints_t asn_PER_type_BroadcastCompletedAreaList_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_BroadcastCompletedAreaList_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BroadcastCompletedAreaList, choice.cellIDBroadcastEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIDBroadcastEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellIDBroadcastEUTRA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BroadcastCompletedAreaList, choice.tAIBroadcastEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TAIBroadcastEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tAIBroadcastEUTRA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BroadcastCompletedAreaList, choice.emergencyAreaIDBroadcastEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EmergencyAreaIDBroadcastEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"emergencyAreaIDBroadcastEUTRA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BroadcastCompletedAreaList, choice.cellIDBroadcastNR),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIDBroadcastNR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellIDBroadcastNR"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BroadcastCompletedAreaList, choice.tAIBroadcastNR),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TAIBroadcastNR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tAIBroadcastNR"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BroadcastCompletedAreaList, choice.emergencyAreaIDBroadcastNR),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EmergencyAreaIDBroadcastNR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"emergencyAreaIDBroadcastNR"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BroadcastCompletedAreaList, choice.choice_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolIE_SingleContainer_130P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"choice-Extensions"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_BroadcastCompletedAreaList_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellIDBroadcastEUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tAIBroadcastEUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* emergencyAreaIDBroadcastEUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* cellIDBroadcastNR */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* tAIBroadcastNR */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* emergencyAreaIDBroadcastNR */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* choice-Extensions */
};
static asn_CHOICE_specifics_t asn_SPC_BroadcastCompletedAreaList_specs_1 = {
	sizeof(struct BroadcastCompletedAreaList),
	offsetof(struct BroadcastCompletedAreaList, _asn_ctx),
	offsetof(struct BroadcastCompletedAreaList, present),
	sizeof(((struct BroadcastCompletedAreaList *)0)->present),
	asn_MAP_BroadcastCompletedAreaList_tag2el_1,
	7,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_BroadcastCompletedAreaList = {
	"BroadcastCompletedAreaList",
	"BroadcastCompletedAreaList",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_BroadcastCompletedAreaList_constr_1, CHOICE_constraint },
	asn_MBR_BroadcastCompletedAreaList_1,
	7,	/* Elements count */
	&asn_SPC_BroadcastCompletedAreaList_specs_1	/* Additional specs */
};

