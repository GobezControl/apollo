/******************************************************************************
 * Copyright 2019 The CiDi Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

#ifndef MODULES_DRIVERS_CIDIV2X_STREAM_UTILS_H_
#define MODULES_DRIVERS_CIDIV2X_STREAM_UTILS_H_

#include <string>

#include "modules/drivers/cidiv2x/stream/proto/config.pb.h"

namespace apollo {
namespace drivers {
namespace cidiv2x {

bool parse_config_text(const std::string &filename, config::Config *config);


}  // namespace cidiv2x
}  // namespace drivers
}  // namespace apollo

#endif  // MODULES_DRIVERS_CIDIV2X_STREAM_UTILS_H_
