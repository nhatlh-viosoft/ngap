/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/lehongnhat/workspace/ngapv2/NGAP-PDU-Descriptions.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/lehongnhat/workspace/ngapv2/build/CMakeFiles/NGAP`
 */

#ifndef	_TNLAssociationUsage_H_
#define	_TNLAssociationUsage_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TNLAssociationUsage {
	TNLAssociationUsage_ue	= 0,
	TNLAssociationUsage_non_ue	= 1,
	TNLAssociationUsage_both	= 2
	/*
	 * Enumeration is extensible
	 */
} e_TNLAssociationUsage;

/* TNLAssociationUsage */
typedef long	 TNLAssociationUsage_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_TNLAssociationUsage_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_TNLAssociationUsage;
extern const asn_INTEGER_specifics_t asn_SPC_TNLAssociationUsage_specs_1;
asn_struct_free_f TNLAssociationUsage_free;
asn_struct_print_f TNLAssociationUsage_print;
asn_constr_check_f TNLAssociationUsage_constraint;
ber_type_decoder_f TNLAssociationUsage_decode_ber;
der_type_encoder_f TNLAssociationUsage_encode_der;
xer_type_decoder_f TNLAssociationUsage_decode_xer;
xer_type_encoder_f TNLAssociationUsage_encode_xer;
per_type_decoder_f TNLAssociationUsage_decode_uper;
per_type_encoder_f TNLAssociationUsage_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _TNLAssociationUsage_H_ */
#include <asn_internal.h>
