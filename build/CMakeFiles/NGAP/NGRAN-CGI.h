/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/lehongnhat/workspace/ngapv2/NGAP-PDU-Descriptions.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/lehongnhat/workspace/ngapv2/build/CMakeFiles/NGAP`
 */

#ifndef	_NGRAN_CGI_H_
#define	_NGRAN_CGI_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR-CGI.h"
#include "EUTRA-CGI.h"
#include "ProtocolIE-SingleContainer.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGRAN_CGI_PR {
	NGRAN_CGI_PR_NOTHING,	/* No components present */
	NGRAN_CGI_PR_nR_CGI,
	NGRAN_CGI_PR_eUTRA_CGI,
	NGRAN_CGI_PR_choice_Extensions
} NGRAN_CGI_PR;

/* NGRAN-CGI */
typedef struct NGRAN_CGI {
	NGRAN_CGI_PR present;
	union NGRAN_CGI_u {
		NR_CGI_t	 nR_CGI;
		EUTRA_CGI_t	 eUTRA_CGI;
		ProtocolIE_SingleContainer_130P0_t	 choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGRAN_CGI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGRAN_CGI;
extern asn_CHOICE_specifics_t asn_SPC_NGRAN_CGI_specs_1;
extern asn_TYPE_member_t asn_MBR_NGRAN_CGI_1[3];
extern asn_per_constraints_t asn_PER_type_NGRAN_CGI_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NGRAN_CGI_H_ */
#include <asn_internal.h>
