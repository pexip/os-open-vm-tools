/*********************************************************
 * Copyright (C) 2020 VMware, Inc. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation version 2.1 and no later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the Lesser GNU General Public
 * License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA.
 *
 *********************************************************/

#ifndef _SERVICEDISCOVERYINT_H_
#define _SERVICEDISCOVERYINT_H_

/**
 * @file serviceDiscoveryInt.h
 *
 * Declares few constants for the serviceDiscovery plugin.
 */

#define G_LOG_DOMAIN "serviceDiscovery"

#include <stdlib.h>

#include "vm_basic_types.h"
#include "vmware/tools/plugin.h"

/*
 * Maximum length of the data (either key or value) written to Namespace DB
 */
#define SERVICE_DISCOVERY_VALUE_MAX_SIZE (1024*15)

Bool PublishScriptOutputToNamespaceDB(ToolsAppCtx *ctx,
                                      const char *key,
                                      const char *script);
Bool WriteData(ToolsAppCtx *ctx,
               const char *key,
               const char *data,
               const size_t len);

#endif /* _SERVICEDISCOVERYINT_H_ */
