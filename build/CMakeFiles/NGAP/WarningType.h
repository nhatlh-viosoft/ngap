/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/lehongnhat/workspace/ngapv2/NGAP-PDU-Descriptions.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/lehongnhat/workspace/ngapv2/build/CMakeFiles/NGAP`
 */

#ifndef	_WarningType_H_
#define	_WarningType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* WarningType */
typedef OCTET_STRING_t	 WarningType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_WarningType;
asn_struct_free_f WarningType_free;
asn_struct_print_f WarningType_print;
asn_constr_check_f WarningType_constraint;
ber_type_decoder_f WarningType_decode_ber;
der_type_encoder_f WarningType_encode_der;
xer_type_decoder_f WarningType_decode_xer;
xer_type_encoder_f WarningType_encode_xer;
per_type_decoder_f WarningType_decode_uper;
per_type_encoder_f WarningType_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _WarningType_H_ */
#include <asn_internal.h>
