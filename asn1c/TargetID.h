/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_TargetID_H_
#define	_TargetID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TargetID_PR {
	TargetID_PR_NOTHING,	/* No components present */
	TargetID_PR_targetRANNodeID,
	TargetID_PR_targeteNB_ID,
	TargetID_PR_choice_Extensions
} TargetID_PR;

/* Forward declarations */
struct TargetRANNodeID;
struct TargeteNB_ID;
struct ProtocolIE_SingleContainer;

/* TargetID */
typedef struct TargetID {
	TargetID_PR present;
	union TargetID_u {
		struct TargetRANNodeID	*targetRANNodeID;
		struct TargeteNB_ID	*targeteNB_ID;
		struct ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TargetID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TargetID;

#ifdef __cplusplus
}
#endif

#endif	/* _TargetID_H_ */
#include <asn_internal.h>
