/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_UserLocationInformationN3IWF_H_
#define	_UserLocationInformationN3IWF_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TransportLayerAddress.h"
#include "PortNumber.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* UserLocationInformationN3IWF */
typedef struct UserLocationInformationN3IWF {
	TransportLayerAddress_t	 iPAddress;
	PortNumber_t	 portNumber;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UserLocationInformationN3IWF_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UserLocationInformationN3IWF;
extern asn_SEQUENCE_specifics_t asn_SPC_UserLocationInformationN3IWF_specs_1;
extern asn_TYPE_member_t asn_MBR_UserLocationInformationN3IWF_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _UserLocationInformationN3IWF_H_ */
#include <asn_internal.h>
