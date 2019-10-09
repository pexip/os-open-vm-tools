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

#include "Doc/DocXml/ProviderRequestXml/ProviderCollectSchemaRequestXml.h"
#include "Doc/DocXml/ProviderRequestXml/ProviderRequestXml.h"

#include "Doc/ProviderRequestDoc/CProviderCollectSchemaRequestDoc.h"
#include "Doc/ProviderRequestDoc/CProviderRequestDoc.h"
#include "Xml/XmlUtils/CXmlElement.h"
#include "Doc/DocXml/ProviderRequestXml/ProviderRequestXmlRoots.h"

using namespace Caf;

std::string XmlRoots::saveProviderCollectSchemaRequestToString(
	const SmartPtrCProviderCollectSchemaRequestDoc providerCollectSchemaRequestDoc) {
	CAF_CM_STATIC_FUNC_VALIDATE("XmlRoots", "saveProviderCollectSchemaRequestToString");

	std::string rc;

	CAF_CM_ENTER {
		CAF_CM_VALIDATE_SMARTPTR(providerCollectSchemaRequestDoc);

		const std::string schemaNamespace = DocXmlUtils::getSchemaNamespace("fx");
		const std::string schemaLocation = DocXmlUtils::getSchemaLocation("fx/ProviderRequest.xsd");

		const SmartPtrCXmlElement rootXml = CXmlUtils::createRootElement(
			"providerCollectSchemaRequest", schemaNamespace, schemaLocation);
		ProviderCollectSchemaRequestXml::add(providerCollectSchemaRequestDoc, rootXml);

		rc = rootXml->saveToString();
	}
	CAF_CM_EXIT;

	return rc;
}

SmartPtrCProviderCollectSchemaRequestDoc XmlRoots::parseProviderCollectSchemaRequestFromString(
	const std::string xml) {
	CAF_CM_STATIC_FUNC_VALIDATE("XmlRoots", "parseProviderCollectSchemaRequestFromString");

	SmartPtrCProviderCollectSchemaRequestDoc providerCollectSchemaRequestDoc;

	CAF_CM_ENTER {
		CAF_CM_VALIDATE_STRING(xml);

		const SmartPtrCXmlElement rootXml = CXmlUtils::parseString(xml, "caf:providerCollectSchemaRequest");
		providerCollectSchemaRequestDoc = ProviderCollectSchemaRequestXml::parse(rootXml);
	}
	CAF_CM_EXIT;

	return providerCollectSchemaRequestDoc;
}

void XmlRoots::saveProviderCollectSchemaRequestToFile(
	const SmartPtrCProviderCollectSchemaRequestDoc providerCollectSchemaRequestDoc,
	const std::string filePath) {
	CAF_CM_STATIC_FUNC_LOG_VALIDATE("XmlRoots", "saveProviderCollectSchemaRequestToFile");

	CAF_CM_ENTER {
		CAF_CM_VALIDATE_SMARTPTR(providerCollectSchemaRequestDoc);
		CAF_CM_VALIDATE_STRING(filePath);

		CAF_CM_LOG_DEBUG_VA1("Saving to file - %s", filePath.c_str());

		const std::string providerCollectSchemaRequestStr =
			saveProviderCollectSchemaRequestToString(providerCollectSchemaRequestDoc);
		FileSystemUtils::saveTextFile(filePath, providerCollectSchemaRequestStr);
	}
	CAF_CM_EXIT;
}

SmartPtrCProviderCollectSchemaRequestDoc XmlRoots::parseProviderCollectSchemaRequestFromFile(
	const std::string filePath) {
	CAF_CM_STATIC_FUNC_VALIDATE("XmlRoots", "parseProviderCollectSchemaRequestFromFile");

	SmartPtrCProviderCollectSchemaRequestDoc providerCollectSchemaRequestDoc;

	CAF_CM_ENTER {
		CAF_CM_VALIDATE_STRING(filePath);

		const SmartPtrCXmlElement rootXml = CXmlUtils::parseFile(filePath, "caf:providerCollectSchemaRequest");
		providerCollectSchemaRequestDoc = ProviderCollectSchemaRequestXml::parse(rootXml);
	}
	CAF_CM_EXIT;

	return providerCollectSchemaRequestDoc;
}

std::string XmlRoots::saveProviderRequestToString(
	const SmartPtrCProviderRequestDoc providerRequestDoc) {
	CAF_CM_STATIC_FUNC_VALIDATE("XmlRoots", "saveProviderRequestToString");

	std::string rc;

	CAF_CM_ENTER {
		CAF_CM_VALIDATE_SMARTPTR(providerRequestDoc);

		const std::string schemaNamespace = DocXmlUtils::getSchemaNamespace("fx");
		const std::string schemaLocation = DocXmlUtils::getSchemaLocation("fx/ProviderRequest.xsd");

		const SmartPtrCXmlElement rootXml = CXmlUtils::createRootElement(
			"providerRequest", schemaNamespace, schemaLocation);
		ProviderRequestXml::add(providerRequestDoc, rootXml);

		rc = rootXml->saveToString();
	}
	CAF_CM_EXIT;

	return rc;
}

SmartPtrCProviderRequestDoc XmlRoots::parseProviderRequestFromString(
	const std::string xml) {
	CAF_CM_STATIC_FUNC_VALIDATE("XmlRoots", "parseProviderRequestFromString");

	SmartPtrCProviderRequestDoc providerRequestDoc;

	CAF_CM_ENTER {
		CAF_CM_VALIDATE_STRING(xml);

		const SmartPtrCXmlElement rootXml = CXmlUtils::parseString(xml, "caf:providerRequest");
		providerRequestDoc = ProviderRequestXml::parse(rootXml);
	}
	CAF_CM_EXIT;

	return providerRequestDoc;
}

void XmlRoots::saveProviderRequestToFile(
	const SmartPtrCProviderRequestDoc providerRequestDoc,
	const std::string filePath) {
	CAF_CM_STATIC_FUNC_LOG_VALIDATE("XmlRoots", "saveProviderRequestToFile");

	CAF_CM_ENTER {
		CAF_CM_VALIDATE_SMARTPTR(providerRequestDoc);
		CAF_CM_VALIDATE_STRING(filePath);

		CAF_CM_LOG_DEBUG_VA1("Saving to file - %s", filePath.c_str());

		const std::string providerRequestStr =
			saveProviderRequestToString(providerRequestDoc);
		FileSystemUtils::saveTextFile(filePath, providerRequestStr);
	}
	CAF_CM_EXIT;
}

SmartPtrCProviderRequestDoc XmlRoots::parseProviderRequestFromFile(
	const std::string filePath) {
	CAF_CM_STATIC_FUNC_VALIDATE("XmlRoots", "parseProviderRequestFromFile");

	SmartPtrCProviderRequestDoc providerRequestDoc;

	CAF_CM_ENTER {
		CAF_CM_VALIDATE_STRING(filePath);

		const SmartPtrCXmlElement rootXml = CXmlUtils::parseFile(filePath, "caf:providerRequest");
		providerRequestDoc = ProviderRequestXml::parse(rootXml);
	}
	CAF_CM_EXIT;

	return providerRequestDoc;
}