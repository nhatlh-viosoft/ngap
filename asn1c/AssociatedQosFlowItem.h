/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_AssociatedQosFlowItem_H_
#define	_AssociatedQosFlowItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "QosFlowIdentifier.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AssociatedQosFlowItem__qosFlowMappingIndication {
	AssociatedQosFlowItem__qosFlowMappingIndication_ul	= 0,
	AssociatedQosFlowItem__qosFlowMappingIndication_dl	= 1
	/*
	 * Enumeration is extensible
	 */
} e_AssociatedQosFlowItem__qosFlowMappingIndication;

/* Forward declarations */
struct ProtocolExtensionContainer;

/* AssociatedQosFlowItem */
typedef struct AssociatedQosFlowItem {
	QosFlowIdentifier_t	 qosFlowIdentifier;
	long	*qosFlowMappingIndication;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AssociatedQosFlowItem_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_qosFlowMappingIndication_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_AssociatedQosFlowItem;
extern asn_SEQUENCE_specifics_t asn_SPC_AssociatedQosFlowItem_specs_1;
extern asn_TYPE_member_t asn_MBR_AssociatedQosFlowItem_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _AssociatedQosFlowItem_H_ */
#include <asn_internal.h>
