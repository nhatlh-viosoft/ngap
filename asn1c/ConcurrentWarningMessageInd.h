/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_ConcurrentWarningMessageInd_H_
#define	_ConcurrentWarningMessageInd_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ConcurrentWarningMessageInd {
	ConcurrentWarningMessageInd_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_ConcurrentWarningMessageInd;

/* ConcurrentWarningMessageInd */
typedef long	 ConcurrentWarningMessageInd_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ConcurrentWarningMessageInd;
asn_struct_free_f ConcurrentWarningMessageInd_free;
asn_struct_print_f ConcurrentWarningMessageInd_print;
asn_constr_check_f ConcurrentWarningMessageInd_constraint;
ber_type_decoder_f ConcurrentWarningMessageInd_decode_ber;
der_type_encoder_f ConcurrentWarningMessageInd_encode_der;
xer_type_decoder_f ConcurrentWarningMessageInd_decode_xer;
xer_type_encoder_f ConcurrentWarningMessageInd_encode_xer;
oer_type_decoder_f ConcurrentWarningMessageInd_decode_oer;
oer_type_encoder_f ConcurrentWarningMessageInd_encode_oer;
per_type_decoder_f ConcurrentWarningMessageInd_decode_uper;
per_type_encoder_f ConcurrentWarningMessageInd_encode_uper;
per_type_decoder_f ConcurrentWarningMessageInd_decode_aper;
per_type_encoder_f ConcurrentWarningMessageInd_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ConcurrentWarningMessageInd_H_ */
#include <asn_internal.h>
