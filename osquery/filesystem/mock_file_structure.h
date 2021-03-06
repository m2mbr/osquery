/**
 *  Copyright (c) 2014-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed as defined on the LICENSE file found in the
 *  root directory of this source tree.
 */

#pragma once

#include <boost/filesystem/path.hpp>

namespace osquery {

// generate a small directory structure for testing
boost::filesystem::path createMockFileStructure();

} // namespace
