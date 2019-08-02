/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_DataForwardingNotPossible_H_
#define	_DataForwardingNotPossible_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DataForwardingNotPossible {
	DataForwardingNotPossible_data_forwarding_not_possible	= 0
	/*
	 * Enumeration is extensible
	 */
} e_DataForwardingNotPossible;

/* DataForwardingNotPossible */
typedef long	 DataForwardingNotPossible_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DataForwardingNotPossible;
asn_struct_free_f DataForwardingNotPossible_free;
asn_struct_print_f DataForwardingNotPossible_print;
asn_constr_check_f DataForwardingNotPossible_constraint;
ber_type_decoder_f DataForwardingNotPossible_decode_ber;
der_type_encoder_f DataForwardingNotPossible_encode_der;
xer_type_decoder_f DataForwardingNotPossible_decode_xer;
xer_type_encoder_f DataForwardingNotPossible_encode_xer;
oer_type_decoder_f DataForwardingNotPossible_decode_oer;
oer_type_encoder_f DataForwardingNotPossible_encode_oer;
per_type_decoder_f DataForwardingNotPossible_decode_uper;
per_type_encoder_f DataForwardingNotPossible_encode_uper;
per_type_decoder_f DataForwardingNotPossible_decode_aper;
per_type_encoder_f DataForwardingNotPossible_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _DataForwardingNotPossible_H_ */
#include <asn_internal.h>
