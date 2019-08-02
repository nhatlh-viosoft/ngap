/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-PDU-Contents"
 * 	found in "../NGAP-PDU-Contents.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_PrivateMessage_H_
#define	_PrivateMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PrivateIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PrivateMessage */
typedef struct PrivateMessage {
	PrivateIE_Container_194P0_t	 privateIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PrivateMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PrivateMessage;
extern asn_SEQUENCE_specifics_t asn_SPC_PrivateMessage_specs_1;
extern asn_TYPE_member_t asn_MBR_PrivateMessage_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _PrivateMessage_H_ */
#include <asn_internal.h>
