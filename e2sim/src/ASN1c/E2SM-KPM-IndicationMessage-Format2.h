/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "E2SM-KPM-v02.00.03.asn"
 * 	`asn1c -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example -D E2SM-KPM-v02.00.03`
 */

#ifndef	_E2SM_KPM_IndicationMessage_Format2_H_
#define	_E2SM_KPM_IndicationMessage_Format2_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SubscriptionID.h"
#include "CellObjectID.h"
#include "GranularityPeriod.h"
#include "MeasurementCondUEidList.h"
#include "MeasurementData.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* E2SM-KPM-IndicationMessage-Format2 */
typedef struct E2SM_KPM_IndicationMessage_Format2 {
	SubscriptionID_t	 subscriptID;
	CellObjectID_t	*cellObjID;	/* OPTIONAL */
	GranularityPeriod_t	*granulPeriod;	/* OPTIONAL */
	MeasurementCondUEidList_t	 measCondUEidList;
	MeasurementData_t	 measData;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2SM_KPM_IndicationMessage_Format2_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2SM_KPM_IndicationMessage_Format2;
extern asn_SEQUENCE_specifics_t asn_SPC_E2SM_KPM_IndicationMessage_Format2_specs_1;
extern asn_TYPE_member_t asn_MBR_E2SM_KPM_IndicationMessage_Format2_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _E2SM_KPM_IndicationMessage_Format2_H_ */
#include <asn_internal.h>