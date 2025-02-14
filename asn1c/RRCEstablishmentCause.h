/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_RRCEstablishmentCause_H_
#define	_RRCEstablishmentCause_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCEstablishmentCause {
	RRCEstablishmentCause_emergency	= 0,
	RRCEstablishmentCause_highPriorityAccess	= 1,
	RRCEstablishmentCause_mt_Access	= 2,
	RRCEstablishmentCause_mo_Signalling	= 3,
	RRCEstablishmentCause_mo_Data	= 4,
	RRCEstablishmentCause_mo_VoiceCall	= 5,
	RRCEstablishmentCause_mo_VideoCall	= 6,
	RRCEstablishmentCause_mo_SMS	= 7,
	RRCEstablishmentCause_mps_PriorityAccess	= 8,
	RRCEstablishmentCause_mcs_PriorityAccess	= 9,
	/*
	 * Enumeration is extensible
	 */
	RRCEstablishmentCause_notAvailable	= 10
} e_RRCEstablishmentCause;

/* RRCEstablishmentCause */
typedef long	 RRCEstablishmentCause_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCEstablishmentCause;
asn_struct_free_f RRCEstablishmentCause_free;
asn_struct_print_f RRCEstablishmentCause_print;
asn_constr_check_f RRCEstablishmentCause_constraint;
ber_type_decoder_f RRCEstablishmentCause_decode_ber;
der_type_encoder_f RRCEstablishmentCause_encode_der;
xer_type_decoder_f RRCEstablishmentCause_decode_xer;
xer_type_encoder_f RRCEstablishmentCause_encode_xer;
oer_type_decoder_f RRCEstablishmentCause_decode_oer;
oer_type_encoder_f RRCEstablishmentCause_encode_oer;
per_type_decoder_f RRCEstablishmentCause_decode_uper;
per_type_encoder_f RRCEstablishmentCause_encode_uper;
per_type_decoder_f RRCEstablishmentCause_decode_aper;
per_type_encoder_f RRCEstablishmentCause_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RRCEstablishmentCause_H_ */
#include <asn_internal.h>
