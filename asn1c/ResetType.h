/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_ResetType_H_
#define	_ResetType_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ResetAll.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ResetType_PR {
	ResetType_PR_NOTHING,	/* No components present */
	ResetType_PR_nG_Interface,
	ResetType_PR_partOfNG_Interface,
	ResetType_PR_choice_Extensions
} ResetType_PR;

/* Forward declarations */
struct UE_associatedLogicalNG_connectionList;
struct ProtocolIE_SingleContainer;

/* ResetType */
typedef struct ResetType {
	ResetType_PR present;
	union ResetType_u {
		ResetAll_t	 nG_Interface;
		struct UE_associatedLogicalNG_connectionList	*partOfNG_Interface;
		struct ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ResetType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ResetType;

#ifdef __cplusplus
}
#endif

#endif	/* _ResetType_H_ */
#include <asn_internal.h>
