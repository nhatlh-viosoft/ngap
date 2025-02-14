/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_DelayCritical_H_
#define	_DelayCritical_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DelayCritical {
	DelayCritical_delay_critical	= 0,
	DelayCritical_non_delay_critical	= 1
	/*
	 * Enumeration is extensible
	 */
} e_DelayCritical;

/* DelayCritical */
typedef long	 DelayCritical_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_DelayCritical_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_DelayCritical;
extern const asn_INTEGER_specifics_t asn_SPC_DelayCritical_specs_1;
asn_struct_free_f DelayCritical_free;
asn_struct_print_f DelayCritical_print;
asn_constr_check_f DelayCritical_constraint;
ber_type_decoder_f DelayCritical_decode_ber;
der_type_encoder_f DelayCritical_encode_der;
xer_type_decoder_f DelayCritical_decode_xer;
xer_type_encoder_f DelayCritical_encode_xer;
oer_type_decoder_f DelayCritical_decode_oer;
oer_type_encoder_f DelayCritical_encode_oer;
per_type_decoder_f DelayCritical_decode_uper;
per_type_encoder_f DelayCritical_encode_uper;
per_type_decoder_f DelayCritical_decode_aper;
per_type_encoder_f DelayCritical_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _DelayCritical_H_ */
#include <asn_internal.h>
