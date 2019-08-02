/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_PDUSessionResourceSwitchedList_H_
#define	_PDUSessionResourceSwitchedList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PDUSessionResourceSwitchedItem;

/* PDUSessionResourceSwitchedList */
typedef struct PDUSessionResourceSwitchedList {
	A_SEQUENCE_OF(struct PDUSessionResourceSwitchedItem) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDUSessionResourceSwitchedList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDUSessionResourceSwitchedList;

#ifdef __cplusplus
}
#endif

#endif	/* _PDUSessionResourceSwitchedList_H_ */
#include <asn_internal.h>
