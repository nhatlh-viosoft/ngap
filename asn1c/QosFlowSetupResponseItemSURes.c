/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#include "QosFlowSetupResponseItemSURes.h"

#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_QosFlowSetupResponseItemSURes_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct QosFlowSetupResponseItemSURes, qosFlowIdentifier),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QosFlowIdentifier,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"qosFlowIdentifier"
		},
	{ ATF_POINTER, 1, offsetof(struct QosFlowSetupResponseItemSURes, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_178P140,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_QosFlowSetupResponseItemSURes_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_QosFlowSetupResponseItemSURes_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_QosFlowSetupResponseItemSURes_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* qosFlowIdentifier */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_QosFlowSetupResponseItemSURes_specs_1 = {
	sizeof(struct QosFlowSetupResponseItemSURes),
	offsetof(struct QosFlowSetupResponseItemSURes, _asn_ctx),
	asn_MAP_QosFlowSetupResponseItemSURes_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_QosFlowSetupResponseItemSURes_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_QosFlowSetupResponseItemSURes = {
	"QosFlowSetupResponseItemSURes",
	"QosFlowSetupResponseItemSURes",
	&asn_OP_SEQUENCE,
	asn_DEF_QosFlowSetupResponseItemSURes_tags_1,
	sizeof(asn_DEF_QosFlowSetupResponseItemSURes_tags_1)
		/sizeof(asn_DEF_QosFlowSetupResponseItemSURes_tags_1[0]), /* 1 */
	asn_DEF_QosFlowSetupResponseItemSURes_tags_1,	/* Same as above */
	sizeof(asn_DEF_QosFlowSetupResponseItemSURes_tags_1)
		/sizeof(asn_DEF_QosFlowSetupResponseItemSURes_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_QosFlowSetupResponseItemSURes_1,
	2,	/* Elements count */
	&asn_SPC_QosFlowSetupResponseItemSURes_specs_1	/* Additional specs */
};

