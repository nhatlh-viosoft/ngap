/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_PWSFailedCellIDList_H_
#define	_PWSFailedCellIDList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PWSFailedCellIDList_PR {
	PWSFailedCellIDList_PR_NOTHING,	/* No components present */
	PWSFailedCellIDList_PR_eUTRA_CGI_PWSFailedList,
	PWSFailedCellIDList_PR_nR_CGI_PWSFailedList,
	PWSFailedCellIDList_PR_choice_Extensions
} PWSFailedCellIDList_PR;

/* Forward declarations */
struct EUTRA_CGIList;
struct NR_CGIList;
struct ProtocolIE_SingleContainer;

/* PWSFailedCellIDList */
typedef struct PWSFailedCellIDList {
	PWSFailedCellIDList_PR present;
	union PWSFailedCellIDList_u {
		struct EUTRA_CGIList	*eUTRA_CGI_PWSFailedList;
		struct NR_CGIList	*nR_CGI_PWSFailedList;
		struct ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PWSFailedCellIDList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PWSFailedCellIDList;

#ifdef __cplusplus
}
#endif

#endif	/* _PWSFailedCellIDList_H_ */
#include <asn_internal.h>
