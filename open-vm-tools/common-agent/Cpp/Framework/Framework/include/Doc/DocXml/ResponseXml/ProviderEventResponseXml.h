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

#ifndef ProviderEventResponseXml_h_
#define ProviderEventResponseXml_h_


#include "Doc/ResponseDoc/CProviderEventResponseDoc.h"

#include "Doc/DocXml/ResponseXml/ResponseXmlLink.h"
#include "Xml/XmlUtils/CXmlElement.h"

namespace Caf {

	/// Streams the ProviderEventResponse class to/from XML
	namespace ProviderEventResponseXml {

		/// Adds the ProviderEventResponseDoc into the XML.
		void RESPONSEXML_LINKAGE add(
			const SmartPtrCProviderEventResponseDoc providerEventResponseDoc,
			const SmartPtrCXmlElement thisXml);

		/// Parses the ProviderEventResponseDoc from the XML.
		SmartPtrCProviderEventResponseDoc RESPONSEXML_LINKAGE parse(
			const SmartPtrCXmlElement thisXml);
	}
}

#endif
