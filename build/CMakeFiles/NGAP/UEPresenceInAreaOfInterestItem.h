/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/lehongnhat/workspace/ngapv2/NGAP-PDU-Descriptions.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/lehongnhat/workspace/ngapv2/build/CMakeFiles/NGAP`
 */

#ifndef	_UEPresenceInAreaOfInterestItem_H_
#define	_UEPresenceInAreaOfInterestItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LocationReportingReferenceID.h"
#include "UEPresence.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* UEPresenceInAreaOfInterestItem */
typedef struct UEPresenceInAreaOfInterestItem {
	LocationReportingReferenceID_t	 locationReportingReferenceID;
	UEPresence_t	 uEPresence;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEPresenceInAreaOfInterestItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEPresenceInAreaOfInterestItem;
extern asn_SEQUENCE_specifics_t asn_SPC_UEPresenceInAreaOfInterestItem_specs_1;
extern asn_TYPE_member_t asn_MBR_UEPresenceInAreaOfInterestItem_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _UEPresenceInAreaOfInterestItem_H_ */
#include <asn_internal.h>
