/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_VolumeTimedReportList_H_
#define	_VolumeTimedReportList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct VolumeTimedReport_Item;

/* VolumeTimedReportList */
typedef struct VolumeTimedReportList {
	A_SEQUENCE_OF(struct VolumeTimedReport_Item) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VolumeTimedReportList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VolumeTimedReportList;
extern asn_SET_OF_specifics_t asn_SPC_VolumeTimedReportList_specs_1;
extern asn_TYPE_member_t asn_MBR_VolumeTimedReportList_1[1];
extern asn_per_constraints_t asn_PER_type_VolumeTimedReportList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _VolumeTimedReportList_H_ */
#include <asn_internal.h>
