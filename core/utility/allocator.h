// Copyright (c) 2020, Qihoo, Inc.  All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//       http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef TENSORNET_UTILITY_ALLOCATOR_H_
#define TENSORNET_UTILITY_ALLOCATOR_H_

#include <atomic>
#include <random>
#include <ctime>

namespace tensornet {

template<typename T>
class Allocator {
public:
    Allocator()
        : type_size_(0) {
    }

    void TypeSize(int type_size) {
        assert(type_size >= sizeof(T));
    }

private:
    int type_size_;
};

} // namespace tensornet

#endif // TENSORNET_UTILITY_ALLOCATOR_H_

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
