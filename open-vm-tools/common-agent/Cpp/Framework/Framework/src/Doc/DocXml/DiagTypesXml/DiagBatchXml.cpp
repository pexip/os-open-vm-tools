/*
 *  Author: bwilliams
 *  Created: April 6, 2012
 *
 *  Copyright (C) 2012-2016 VMware, Inc.  All rights reserved. -- VMware Confidential
 *
 *  This code was generated by the script "build/dev/codeGen/genCppXml". Please
 *  speak to Brian W. before modifying it by hand.
 *
 */

#include "stdafx.h"

#include "Doc/DocXml/DiagTypesXml/DiagCollectInstancesXml.h"
#include "Doc/DocXml/DiagTypesXml/DiagDeleteValueCollectionXml.h"
#include "Doc/DocXml/DiagTypesXml/DiagSetValueCollectionXml.h"

#include "Doc/DiagTypesDoc/CDiagBatchDoc.h"
#include "Doc/DiagTypesDoc/CDiagCollectInstancesDoc.h"
#include "Doc/DiagTypesDoc/CDiagDeleteValueCollectionDoc.h"
#include "Doc/DiagTypesDoc/CDiagSetValueCollectionDoc.h"
#include "Xml/XmlUtils/CXmlElement.h"
#include "Doc/DocXml/DiagTypesXml/DiagBatchXml.h"

using namespace Caf;

void DiagBatchXml::add(
	const SmartPtrCDiagBatchDoc diagBatchDoc,
	const SmartPtrCXmlElement thisXml) {
	CAF_CM_STATIC_FUNC_VALIDATE("DiagBatchXml", "add");

	CAF_CM_ENTER {
		CAF_CM_VALIDATE_SMARTPTR(diagBatchDoc);
		CAF_CM_VALIDATE_SMARTPTR(thisXml);

		const SmartPtrCDiagCollectInstancesDoc collectInstancesVal =
			diagBatchDoc->getCollectInstances();
		if (! collectInstancesVal.IsNull()) {
			const SmartPtrCXmlElement collectInstancesXml =
				thisXml->createAndAddElement("collectInstances");
			DiagCollectInstancesXml::add(collectInstancesVal, collectInstancesXml);
		}

		const SmartPtrCDiagSetValueCollectionDoc setValueCollectionVal =
			diagBatchDoc->getSetValueCollection();
		if (! setValueCollectionVal.IsNull()) {
			const SmartPtrCXmlElement setValueCollectionXml =
				thisXml->createAndAddElement("setValueCollection");
			DiagSetValueCollectionXml::add(setValueCollectionVal, setValueCollectionXml);
		}

		const SmartPtrCDiagDeleteValueCollectionDoc deleteValueCollectionVal =
			diagBatchDoc->getDeleteValueCollection();
		if (! deleteValueCollectionVal.IsNull()) {
			const SmartPtrCXmlElement deleteValueCollectionXml =
				thisXml->createAndAddElement("deleteValueCollection");
			DiagDeleteValueCollectionXml::add(deleteValueCollectionVal, deleteValueCollectionXml);
		}
	}
	CAF_CM_EXIT;
}

SmartPtrCDiagBatchDoc DiagBatchXml::parse(
	const SmartPtrCXmlElement thisXml) {
	CAF_CM_STATIC_FUNC_VALIDATE("DiagBatchXml", "parse");

	SmartPtrCDiagBatchDoc diagBatchDoc;

	CAF_CM_ENTER {
		CAF_CM_VALIDATE_SMARTPTR(thisXml);

		const SmartPtrCXmlElement collectInstancesXml =
			thisXml->findOptionalChild("collectInstances");

		SmartPtrCDiagCollectInstancesDoc collectInstancesVal;
		if (! collectInstancesXml.IsNull()) {
			collectInstancesVal = DiagCollectInstancesXml::parse(collectInstancesXml);
		}

		const SmartPtrCXmlElement setValueCollectionXml =
			thisXml->findOptionalChild("setValueCollection");

		SmartPtrCDiagSetValueCollectionDoc setValueCollectionVal;
		if (! setValueCollectionXml.IsNull()) {
			setValueCollectionVal = DiagSetValueCollectionXml::parse(setValueCollectionXml);
		}

		const SmartPtrCXmlElement deleteValueCollectionXml =
			thisXml->findOptionalChild("deleteValueCollection");

		SmartPtrCDiagDeleteValueCollectionDoc deleteValueCollectionVal;
		if (! deleteValueCollectionXml.IsNull()) {
			deleteValueCollectionVal = DiagDeleteValueCollectionXml::parse(deleteValueCollectionXml);
		}

		diagBatchDoc.CreateInstance();
		diagBatchDoc->initialize(
			collectInstancesVal,
			setValueCollectionVal,
			deleteValueCollectionVal);
	}
	CAF_CM_EXIT;

	return diagBatchDoc;
}

