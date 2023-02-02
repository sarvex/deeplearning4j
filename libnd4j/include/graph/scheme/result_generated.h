/*
 *  ******************************************************************************
 *  *
 *  *
 *  * This program and the accompanying materials are made available under the
 *  * terms of the Apache License, Version 2.0 which is available at
 *  * https://www.apache.org/licenses/LICENSE-2.0.
 *  *
 *  *  See the NOTICE file distributed with this work for additional
 *  *  information regarding copyright ownership.
 *  * Unless required by applicable law or agreed to in writing, software
 *  * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 *  * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 *  * License for the specific language governing permissions and limitations
 *  * under the License.
 *  *
 *  * SPDX-License-Identifier: Apache-2.0
 *  *****************************************************************************
 */



#ifndef FLATBUFFERS_GENERATED_RESULT_SD_GRAPH_H_
#define FLATBUFFERS_GENERATED_RESULT_SD_GRAPH_H_

#include "flatbuffers/flatbuffers.h"

#include "array_generated.h"
#include "node_generated.h"
#include "properties_generated.h"
#include "utils_generated.h"
#include "variable_generated.h"

namespace sd {
namespace graph {

struct FlatTiming;
struct FlatTimingBuilder;

struct FlatResult;
struct FlatResultBuilder;

struct FlatTiming FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef FlatTimingBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_ID = 4,
    VT_NAME = 6,
    VT_TIMING = 8
  };
  int32_t id() const {
    return GetField<int32_t>(VT_ID, 0);
  }
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  const sd::graph::LongPair *timing() const {
    return GetPointer<const sd::graph::LongPair *>(VT_TIMING);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_ID) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           VerifyOffset(verifier, VT_TIMING) &&
           verifier.VerifyTable(timing()) &&
           verifier.EndTable();
  }
};

struct FlatTimingBuilder {
  typedef FlatTiming Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_id(int32_t id) {
    fbb_.AddElement<int32_t>(FlatTiming::VT_ID, id, 0);
  }
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(FlatTiming::VT_NAME, name);
  }
  void add_timing(flatbuffers::Offset<sd::graph::LongPair> timing) {
    fbb_.AddOffset(FlatTiming::VT_TIMING, timing);
  }
  explicit FlatTimingBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  FlatTimingBuilder &operator=(const FlatTimingBuilder &);
  flatbuffers::Offset<FlatTiming> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<FlatTiming>(end);
    return o;
  }
};

inline flatbuffers::Offset<FlatTiming> CreateFlatTiming(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t id = 0,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    flatbuffers::Offset<sd::graph::LongPair> timing = 0) {
  FlatTimingBuilder builder_(_fbb);
  builder_.add_timing(timing);
  builder_.add_name(name);
  builder_.add_id(id);
  return builder_.Finish();
}

inline flatbuffers::Offset<FlatTiming> CreateFlatTimingDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t id = 0,
    const char *name = nullptr,
    flatbuffers::Offset<sd::graph::LongPair> timing = 0) {
  auto name__ = name ? _fbb.CreateString(name) : 0;
  return sd::graph::CreateFlatTiming(
      _fbb,
      id,
      name__,
      timing);
}

struct FlatResult FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef FlatResultBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_ID = 4,
    VT_VARIABLES = 6,
    VT_TIMING = 8,
    VT_FOOTPRINTFORWARD = 10,
    VT_FOOTPRINTBACKWARD = 12
  };
  int64_t id() const {
    return GetField<int64_t>(VT_ID, 0);
  }
  const flatbuffers::Vector<flatbuffers::Offset<sd::graph::FlatVariable>> *variables() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<sd::graph::FlatVariable>> *>(VT_VARIABLES);
  }
  const flatbuffers::Vector<flatbuffers::Offset<sd::graph::FlatTiming>> *timing() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<sd::graph::FlatTiming>> *>(VT_TIMING);
  }
  int64_t footprintForward() const {
    return GetField<int64_t>(VT_FOOTPRINTFORWARD, 0);
  }
  int64_t footprintBackward() const {
    return GetField<int64_t>(VT_FOOTPRINTBACKWARD, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int64_t>(verifier, VT_ID) &&
           VerifyOffset(verifier, VT_VARIABLES) &&
           verifier.VerifyVector(variables()) &&
           verifier.VerifyVectorOfTables(variables()) &&
           VerifyOffset(verifier, VT_TIMING) &&
           verifier.VerifyVector(timing()) &&
           verifier.VerifyVectorOfTables(timing()) &&
           VerifyField<int64_t>(verifier, VT_FOOTPRINTFORWARD) &&
           VerifyField<int64_t>(verifier, VT_FOOTPRINTBACKWARD) &&
           verifier.EndTable();
  }
};

struct FlatResultBuilder {
  typedef FlatResult Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_id(int64_t id) {
    fbb_.AddElement<int64_t>(FlatResult::VT_ID, id, 0);
  }
  void add_variables(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<sd::graph::FlatVariable>>> variables) {
    fbb_.AddOffset(FlatResult::VT_VARIABLES, variables);
  }
  void add_timing(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<sd::graph::FlatTiming>>> timing) {
    fbb_.AddOffset(FlatResult::VT_TIMING, timing);
  }
  void add_footprintForward(int64_t footprintForward) {
    fbb_.AddElement<int64_t>(FlatResult::VT_FOOTPRINTFORWARD, footprintForward, 0);
  }
  void add_footprintBackward(int64_t footprintBackward) {
    fbb_.AddElement<int64_t>(FlatResult::VT_FOOTPRINTBACKWARD, footprintBackward, 0);
  }
  explicit FlatResultBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  FlatResultBuilder &operator=(const FlatResultBuilder &);
  flatbuffers::Offset<FlatResult> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<FlatResult>(end);
    return o;
  }
};

inline flatbuffers::Offset<FlatResult> CreateFlatResult(
    flatbuffers::FlatBufferBuilder &_fbb,
    int64_t id = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<sd::graph::FlatVariable>>> variables = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<sd::graph::FlatTiming>>> timing = 0,
    int64_t footprintForward = 0,
    int64_t footprintBackward = 0) {
  FlatResultBuilder builder_(_fbb);
  builder_.add_footprintBackward(footprintBackward);
  builder_.add_footprintForward(footprintForward);
  builder_.add_id(id);
  builder_.add_timing(timing);
  builder_.add_variables(variables);
  return builder_.Finish();
}

inline flatbuffers::Offset<FlatResult> CreateFlatResultDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    int64_t id = 0,
    const std::vector<flatbuffers::Offset<sd::graph::FlatVariable>> *variables = nullptr,
    const std::vector<flatbuffers::Offset<sd::graph::FlatTiming>> *timing = nullptr,
    int64_t footprintForward = 0,
    int64_t footprintBackward = 0) {
  auto variables__ = variables ? _fbb.CreateVector<flatbuffers::Offset<sd::graph::FlatVariable>>(*variables) : 0;
  auto timing__ = timing ? _fbb.CreateVector<flatbuffers::Offset<sd::graph::FlatTiming>>(*timing) : 0;
  return sd::graph::CreateFlatResult(
      _fbb,
      id,
      variables__,
      timing__,
      footprintForward,
      footprintBackward);
}

inline const sd::graph::FlatResult *GetFlatResult(const void *buf) {
  return flatbuffers::GetRoot<sd::graph::FlatResult>(buf);
}

inline const sd::graph::FlatResult *GetSizePrefixedFlatResult(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<sd::graph::FlatResult>(buf);
}

inline bool VerifyFlatResultBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<sd::graph::FlatResult>(nullptr);
}

inline bool VerifySizePrefixedFlatResultBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<sd::graph::FlatResult>(nullptr);
}

inline void FinishFlatResultBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<sd::graph::FlatResult> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedFlatResultBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<sd::graph::FlatResult> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace graph
}  // namespace sd

#endif  // FLATBUFFERS_GENERATED_RESULT_SD_GRAPH_H_
