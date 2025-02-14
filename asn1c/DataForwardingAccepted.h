/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_DataForwardingAccepted_H_
#define	_DataForwardingAccepted_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DataForwardingAccepted {
	DataForwardingAccepted_data_forwarding_accepted	= 0
	/*
	 * Enumeration is extensible
	 */
} e_DataForwardingAccepted;

/* DataForwardingAccepted */
typedef long	 DataForwardingAccepted_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_DataForwardingAccepted_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_DataForwardingAccepted;
extern const asn_INTEGER_specifics_t asn_SPC_DataForwardingAccepted_specs_1;
asn_struct_free_f DataForwardingAccepted_free;
asn_struct_print_f DataForwardingAccepted_print;
asn_constr_check_f DataForwardingAccepted_constraint;
ber_type_decoder_f DataForwardingAccepted_decode_ber;
der_type_encoder_f DataForwardingAccepted_encode_der;
xer_type_decoder_f DataForwardingAccepted_decode_xer;
xer_type_encoder_f DataForwardingAccepted_encode_xer;
oer_type_decoder_f DataForwardingAccepted_decode_oer;
oer_type_encoder_f DataForwardingAccepted_encode_oer;
per_type_decoder_f DataForwardingAccepted_decode_uper;
per_type_encoder_f DataForwardingAccepted_encode_uper;
per_type_decoder_f DataForwardingAccepted_decode_aper;
per_type_encoder_f DataForwardingAccepted_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _DataForwardingAccepted_H_ */
#include <asn_internal.h>
