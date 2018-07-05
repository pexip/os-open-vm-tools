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

#ifndef DiagRequestXmlRoots_h_
#define DiagRequestXmlRoots_h_


#include "Doc/DiagRequestDoc/CDiagRequestDoc.h"

#include "Doc/DocXml/DiagRequestXml/DiagRequestXmlLink.h"

namespace Caf {

	namespace XmlRoots {

		/// Saves the DiagRequestDoc to a string.
		std::string DIAGREQUESTXML_LINKAGE saveDiagRequestToString(
			const SmartPtrCDiagRequestDoc diagRequestDoc);

		/// Parses the DiagRequestDoc from the string.
		SmartPtrCDiagRequestDoc DIAGREQUESTXML_LINKAGE parseDiagRequestFromString(
			const std::string xml);

		/// Saves the DiagRequestDoc to a file.
		void DIAGREQUESTXML_LINKAGE saveDiagRequestToFile(
			const SmartPtrCDiagRequestDoc diagRequestDoc,
			const std::string filePath);

		/// Parses the DiagRequestDoc from the file.
		SmartPtrCDiagRequestDoc DIAGREQUESTXML_LINKAGE parseDiagRequestFromFile(
			const std::string filePath);
	}
}

#endif /* DiagRequestXmlRoots_h_ */
