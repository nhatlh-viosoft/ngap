/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_HandoverFlag_H_
#define	_HandoverFlag_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HandoverFlag {
	HandoverFlag_handover_preparation	= 0
	/*
	 * Enumeration is extensible
	 */
} e_HandoverFlag;

/* HandoverFlag */
typedef long	 HandoverFlag_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HandoverFlag;
asn_struct_free_f HandoverFlag_free;
asn_struct_print_f HandoverFlag_print;
asn_constr_check_f HandoverFlag_constraint;
ber_type_decoder_f HandoverFlag_decode_ber;
der_type_encoder_f HandoverFlag_encode_der;
xer_type_decoder_f HandoverFlag_decode_xer;
xer_type_encoder_f HandoverFlag_encode_xer;
oer_type_decoder_f HandoverFlag_decode_oer;
oer_type_encoder_f HandoverFlag_encode_oer;
per_type_decoder_f HandoverFlag_decode_uper;
per_type_encoder_f HandoverFlag_encode_uper;
per_type_decoder_f HandoverFlag_decode_aper;
per_type_encoder_f HandoverFlag_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _HandoverFlag_H_ */
#include <asn_internal.h>
