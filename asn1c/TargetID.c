/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#include "TargetID.h"

#include "TargetRANNodeID.h"
#include "TargeteNB-ID.h"
#include "ProtocolIE-SingleContainer.h"
static asn_oer_constraints_t asn_OER_type_TargetID_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_TargetID_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_TargetID_1[] = {
	{ ATF_POINTER, 0, offsetof(struct TargetID, choice.targetRANNodeID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TargetRANNodeID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"targetRANNodeID"
		},
	{ ATF_POINTER, 0, offsetof(struct TargetID, choice.targeteNB_ID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TargeteNB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"targeteNB-ID"
		},
	{ ATF_POINTER, 0, offsetof(struct TargetID, choice.choice_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolIE_SingleContainer_130P19,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"choice-Extensions"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_TargetID_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* targetRANNodeID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* targeteNB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* choice-Extensions */
};
static asn_CHOICE_specifics_t asn_SPC_TargetID_specs_1 = {
	sizeof(struct TargetID),
	offsetof(struct TargetID, _asn_ctx),
	offsetof(struct TargetID, present),
	sizeof(((struct TargetID *)0)->present),
	asn_MAP_TargetID_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_TargetID = {
	"TargetID",
	"TargetID",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_TargetID_constr_1, &asn_PER_type_TargetID_constr_1, CHOICE_constraint },
	asn_MBR_TargetID_1,
	3,	/* Elements count */
	&asn_SPC_TargetID_specs_1	/* Additional specs */
};

