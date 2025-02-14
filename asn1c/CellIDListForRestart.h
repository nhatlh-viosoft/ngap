/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_CellIDListForRestart_H_
#define	_CellIDListForRestart_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CellIDListForRestart_PR {
	CellIDListForRestart_PR_NOTHING,	/* No components present */
	CellIDListForRestart_PR_eUTRA_CGIListforRestart,
	CellIDListForRestart_PR_nR_CGIListforRestart,
	CellIDListForRestart_PR_choice_Extensions
} CellIDListForRestart_PR;

/* Forward declarations */
struct EUTRA_CGIList;
struct NR_CGIList;
struct ProtocolIE_SingleContainer;

/* CellIDListForRestart */
typedef struct CellIDListForRestart {
	CellIDListForRestart_PR present;
	union CellIDListForRestart_u {
		struct EUTRA_CGIList	*eUTRA_CGIListforRestart;
		struct NR_CGIList	*nR_CGIListforRestart;
		struct ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellIDListForRestart_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellIDListForRestart;

#ifdef __cplusplus
}
#endif

#endif	/* _CellIDListForRestart_H_ */
#include <asn_internal.h>
