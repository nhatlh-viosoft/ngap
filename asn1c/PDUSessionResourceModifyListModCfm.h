/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_PDUSessionResourceModifyListModCfm_H_
#define	_PDUSessionResourceModifyListModCfm_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PDUSessionResourceModifyItemModCfm;

/* PDUSessionResourceModifyListModCfm */
typedef struct PDUSessionResourceModifyListModCfm {
	A_SEQUENCE_OF(struct PDUSessionResourceModifyItemModCfm) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDUSessionResourceModifyListModCfm_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDUSessionResourceModifyListModCfm;

#ifdef __cplusplus
}
#endif

#endif	/* _PDUSessionResourceModifyListModCfm_H_ */
#include <asn_internal.h>
