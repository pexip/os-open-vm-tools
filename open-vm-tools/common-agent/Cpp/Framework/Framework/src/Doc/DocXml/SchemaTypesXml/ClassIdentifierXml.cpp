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

#include "Doc/SchemaTypesDoc/CClassIdentifierDoc.h"
#include "Xml/XmlUtils/CXmlElement.h"
#include "Doc/DocXml/SchemaTypesXml/ClassIdentifierXml.h"

using namespace Caf;

void ClassIdentifierXml::add(
	const SmartPtrCClassIdentifierDoc classIdentifierDoc,
	const SmartPtrCXmlElement thisXml) {
	CAF_CM_STATIC_FUNC_VALIDATE("ClassIdentifierXml", "add");

	CAF_CM_ENTER {
		CAF_CM_VALIDATE_SMARTPTR(classIdentifierDoc);
		CAF_CM_VALIDATE_SMARTPTR(thisXml);

		const std::string namespaceValVal = classIdentifierDoc->getNamespaceVal();
		CAF_CM_VALIDATE_STRING(namespaceValVal);
		thisXml->addAttribute("namespace", namespaceValVal);

		const std::string nameVal = classIdentifierDoc->getName();
		CAF_CM_VALIDATE_STRING(nameVal);
		thisXml->addAttribute("name", nameVal);

		const std::string versionVal = classIdentifierDoc->getVersion();
		CAF_CM_VALIDATE_STRING(versionVal);
		thisXml->addAttribute("version", versionVal);
	}
	CAF_CM_EXIT;
}

SmartPtrCClassIdentifierDoc ClassIdentifierXml::parse(
	const SmartPtrCXmlElement thisXml) {
	CAF_CM_STATIC_FUNC_VALIDATE("ClassIdentifierXml", "parse");

	SmartPtrCClassIdentifierDoc classIdentifierDoc;

	CAF_CM_ENTER {
		CAF_CM_VALIDATE_SMARTPTR(thisXml);

		const std::string namespaceValStrVal =
			thisXml->findRequiredAttribute("namespace");
		const std::string namespaceValVal = namespaceValStrVal;

		const std::string nameStrVal =
			thisXml->findRequiredAttribute("name");
		const std::string nameVal = nameStrVal;

		const std::string versionStrVal =
			thisXml->findRequiredAttribute("version");
		const std::string versionVal = versionStrVal;

		classIdentifierDoc.CreateInstance();
		classIdentifierDoc->initialize(
			namespaceValVal,
			nameVal,
			versionVal);
	}
	CAF_CM_EXIT;

	return classIdentifierDoc;
}

