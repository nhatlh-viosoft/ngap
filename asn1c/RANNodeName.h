/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_RANNodeName_H_
#define	_RANNodeName_H_


#include <asn_application.h>

/* Including external dependencies */
#include <PrintableString.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RANNodeName */
typedef PrintableString_t	 RANNodeName_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANNodeName;
asn_struct_free_f RANNodeName_free;
asn_struct_print_f RANNodeName_print;
asn_constr_check_f RANNodeName_constraint;
ber_type_decoder_f RANNodeName_decode_ber;
der_type_encoder_f RANNodeName_encode_der;
xer_type_decoder_f RANNodeName_decode_xer;
xer_type_encoder_f RANNodeName_encode_xer;
oer_type_decoder_f RANNodeName_decode_oer;
oer_type_encoder_f RANNodeName_encode_oer;
per_type_decoder_f RANNodeName_decode_uper;
per_type_encoder_f RANNodeName_encode_uper;
per_type_decoder_f RANNodeName_decode_aper;
per_type_encoder_f RANNodeName_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RANNodeName_H_ */
#include <asn_internal.h>
