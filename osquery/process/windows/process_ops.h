/**
 *  Copyright (c) 2014-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed as defined on the LICENSE file found in the
 *  root directory of this source tree.
 */

#pragma once

#include <osquery/utils/system/system.h>
// clang-format off
#include <LM.h>
// clang-format on

#include <vector>

#include <osquery/system.h>
#include <osquery/logger.h>
#include <osquery/process/process.h>

namespace osquery {

/**
* @brief Windows helper function used by to convert a binary SID struct into a
* string.
*
* @returns string representation of the binary SID struct.
*/
std::string psidToString(PSID sid);

/**
 * @brief Windows helper function to lookup a SID from a username
 *
 * @returns a unique_ptr to a PSID
 */
std::unique_ptr<BYTE[]> getSidFromUsername(std::wstring accountName);

/**
 * @brief Get the relative identifier (RID) from a security identifier (SID).
 *
 * @returns the RID represented as an unsigned long integer.
 */
unsigned long getRidFromSid(PSID sidPtr);

} // namespace osquery
