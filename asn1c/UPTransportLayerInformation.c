/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#include "UPTransportLayerInformation.h"

#include "GTPTunnel.h"
#include "ProtocolIE-SingleContainer.h"
static asn_oer_constraints_t asn_OER_type_UPTransportLayerInformation_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_UPTransportLayerInformation_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_UPTransportLayerInformation_1[] = {
	{ ATF_POINTER, 0, offsetof(struct UPTransportLayerInformation, choice.gTPTunnel),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GTPTunnel,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gTPTunnel"
		},
	{ ATF_POINTER, 0, offsetof(struct UPTransportLayerInformation, choice.choice_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolIE_SingleContainer_130P23,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"choice-Extensions"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_UPTransportLayerInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gTPTunnel */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* choice-Extensions */
};
asn_CHOICE_specifics_t asn_SPC_UPTransportLayerInformation_specs_1 = {
	sizeof(struct UPTransportLayerInformation),
	offsetof(struct UPTransportLayerInformation, _asn_ctx),
	offsetof(struct UPTransportLayerInformation, present),
	sizeof(((struct UPTransportLayerInformation *)0)->present),
	asn_MAP_UPTransportLayerInformation_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_UPTransportLayerInformation = {
	"UPTransportLayerInformation",
	"UPTransportLayerInformation",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_UPTransportLayerInformation_constr_1, &asn_PER_type_UPTransportLayerInformation_constr_1, CHOICE_constraint },
	asn_MBR_UPTransportLayerInformation_1,
	2,	/* Elements count */
	&asn_SPC_UPTransportLayerInformation_specs_1	/* Additional specs */
};

