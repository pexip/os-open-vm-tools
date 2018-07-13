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

#include "Doc/CafCoreTypesDoc/CRequestInstanceParameterDoc.h"
#include "Xml/XmlUtils/CXmlElement.h"
#include "Doc/DocXml/CafCoreTypesXml/RequestInstanceParameterXml.h"

using namespace Caf;

void RequestInstanceParameterXml::add(
	const SmartPtrCRequestInstanceParameterDoc requestInstanceParameterDoc,
	const SmartPtrCXmlElement thisXml) {
	CAF_CM_STATIC_FUNC_VALIDATE("RequestInstanceParameterXml", "add");

	CAF_CM_ENTER {
		CAF_CM_VALIDATE_SMARTPTR(requestInstanceParameterDoc);
		CAF_CM_VALIDATE_SMARTPTR(thisXml);

		const std::string nameVal = requestInstanceParameterDoc->getName();
		CAF_CM_VALIDATE_STRING(nameVal);
		thisXml->addAttribute("name", nameVal);

		const std::string classNamespaceVal = requestInstanceParameterDoc->getClassNamespace();
		CAF_CM_VALIDATE_STRING(classNamespaceVal);
		thisXml->addAttribute("classNamespace", classNamespaceVal);

		const std::string classNameVal = requestInstanceParameterDoc->getClassName();
		CAF_CM_VALIDATE_STRING(classNameVal);
		thisXml->addAttribute("className", classNameVal);

		const std::string classVersionVal = requestInstanceParameterDoc->getClassVersion();
		CAF_CM_VALIDATE_STRING(classVersionVal);
		thisXml->addAttribute("classVersion", classVersionVal);

		const std::deque<std::string> valueVal =
			requestInstanceParameterDoc->getValue();
		if (! valueVal.empty()) {
			for (TConstIterator<std::deque<std::string> > valueIter(valueVal);
				valueIter; valueIter++) {
				thisXml->appendValue(*valueIter);
			}
		}
	}
	CAF_CM_EXIT;
}

SmartPtrCRequestInstanceParameterDoc RequestInstanceParameterXml::parse(
	const SmartPtrCXmlElement thisXml) {
	CAF_CM_STATIC_FUNC_VALIDATE("RequestInstanceParameterXml", "parse");

	SmartPtrCRequestInstanceParameterDoc requestInstanceParameterDoc;

	CAF_CM_ENTER {
		CAF_CM_VALIDATE_SMARTPTR(thisXml);

		const std::string nameStrVal =
			thisXml->findRequiredAttribute("name");
		const std::string nameVal = nameStrVal;

		const std::string classNamespaceStrVal =
			thisXml->findRequiredAttribute("classNamespace");
		const std::string classNamespaceVal = classNamespaceStrVal;

		const std::string classNameStrVal =
			thisXml->findRequiredAttribute("className");
		const std::string classNameVal = classNameStrVal;

		const std::string classVersionStrVal =
			thisXml->findRequiredAttribute("classVersion");
		const std::string classVersionVal = classVersionStrVal;

		const CXmlElement::SmartPtrCElementCollection valueChildrenXml =
			thisXml->getAllChildren();

		std::deque<std::string> valueVal;
		if (! valueChildrenXml.IsNull() && ! valueChildrenXml->empty()) {
			for (TConstIterator<CXmlElement::CElementCollection> valueXmlIter(*valueChildrenXml);
				valueXmlIter; valueXmlIter++) {
				const SmartPtrCXmlElement valueXml = valueXmlIter->second;
				const std::string valueDoc = valueXml->saveToStringRaw();
				valueVal.push_back(valueDoc);
			}
		}

		requestInstanceParameterDoc.CreateInstance();
		requestInstanceParameterDoc->initialize(
			nameVal,
			classNamespaceVal,
			classNameVal,
			classVersionVal,
			valueVal);
	}
	CAF_CM_EXIT;

	return requestInstanceParameterDoc;
}

