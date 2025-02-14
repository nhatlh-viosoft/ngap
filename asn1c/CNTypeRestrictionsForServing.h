/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_CNTypeRestrictionsForServing_H_
#define	_CNTypeRestrictionsForServing_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CNTypeRestrictionsForServing {
	CNTypeRestrictionsForServing_epc_forbidden	= 0
	/*
	 * Enumeration is extensible
	 */
} e_CNTypeRestrictionsForServing;

/* CNTypeRestrictionsForServing */
typedef long	 CNTypeRestrictionsForServing_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CNTypeRestrictionsForServing;
asn_struct_free_f CNTypeRestrictionsForServing_free;
asn_struct_print_f CNTypeRestrictionsForServing_print;
asn_constr_check_f CNTypeRestrictionsForServing_constraint;
ber_type_decoder_f CNTypeRestrictionsForServing_decode_ber;
der_type_encoder_f CNTypeRestrictionsForServing_encode_der;
xer_type_decoder_f CNTypeRestrictionsForServing_decode_xer;
xer_type_encoder_f CNTypeRestrictionsForServing_encode_xer;
oer_type_decoder_f CNTypeRestrictionsForServing_decode_oer;
oer_type_encoder_f CNTypeRestrictionsForServing_encode_oer;
per_type_decoder_f CNTypeRestrictionsForServing_decode_uper;
per_type_encoder_f CNTypeRestrictionsForServing_encode_uper;
per_type_decoder_f CNTypeRestrictionsForServing_decode_aper;
per_type_encoder_f CNTypeRestrictionsForServing_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _CNTypeRestrictionsForServing_H_ */
#include <asn_internal.h>
