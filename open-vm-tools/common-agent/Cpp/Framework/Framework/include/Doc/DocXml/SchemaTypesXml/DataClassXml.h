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

#ifndef DataClassXml_h_
#define DataClassXml_h_


#include "Doc/SchemaTypesDoc/CDataClassDoc.h"

#include "Doc/DocXml/SchemaTypesXml/SchemaTypesXmlLink.h"
#include "Xml/XmlUtils/CXmlElement.h"

namespace Caf {

	/// Streams the DataClass class to/from XML
	namespace DataClassXml {

		/// Adds the DataClassDoc into the XML.
		void SCHEMATYPESXML_LINKAGE add(
			const SmartPtrCDataClassDoc dataClassDoc,
			const SmartPtrCXmlElement thisXml);

		/// Parses the DataClassDoc from the XML.
		SmartPtrCDataClassDoc SCHEMATYPESXML_LINKAGE parse(
			const SmartPtrCXmlElement thisXml);
	}
}

#endif
