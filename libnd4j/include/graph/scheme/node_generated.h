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



#ifndef FLATBUFFERS_GENERATED_NODE_SD_GRAPH_H_
#define FLATBUFFERS_GENERATED_NODE_SD_GRAPH_H_

#include "flatbuffers/flatbuffers.h"

#include "array_generated.h"
#include "properties_generated.h"
#include "utils_generated.h"

namespace sd {
namespace graph {

struct FlatNode;
struct FlatNodeBuilder;

struct FlatNode FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef FlatNodeBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_ID = 4,
    VT_NAME = 6,
    VT_OPTYPE = 8,
    VT_OPNUM = 10,
    VT_PROPERTIES = 12,
    VT_INPUT = 14,
    VT_INPUTPAIRED = 16,
    VT_OUTPUT = 18,
    VT_EXTRAPARAMS = 20,
    VT_EXTRAINTEGER = 22,
    VT_EXTRABOOLS = 24,
    VT_DIMENSIONS = 26,
    VT_DEVICE = 28,
    VT_SCOPE_ID = 30,
    VT_SCOPE_NAME = 32,
    VT_OUTPUTNAMES = 34,
    VT_OPNAME = 36,
    VT_OUTPUTTYPES = 38,
    VT_SCALAR = 40,
    VT_CONTROLDEPS = 42,
    VT_VARCONTROLDEPS = 44,
    VT_CONTROLDEPFOR = 46,
    VT_EXTRATYPES = 48,
    VT_EXTRASTRINGS = 50
  };
  int32_t id() const {
    return GetField<int32_t>(VT_ID, 0);
  }
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  sd::graph::OpType opType() const {
    return static_cast<sd::graph::OpType>(GetField<int8_t>(VT_OPTYPE, 0));
  }
  int64_t opNum() const {
    return GetField<int64_t>(VT_OPNUM, 0);
  }
  const flatbuffers::Vector<flatbuffers::Offset<sd::graph::FlatProperties>> *properties() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<sd::graph::FlatProperties>> *>(VT_PROPERTIES);
  }
  const flatbuffers::Vector<int32_t> *input() const {
    return GetPointer<const flatbuffers::Vector<int32_t> *>(VT_INPUT);
  }
  const flatbuffers::Vector<flatbuffers::Offset<sd::graph::IntPair>> *inputPaired() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<sd::graph::IntPair>> *>(VT_INPUTPAIRED);
  }
  const flatbuffers::Vector<int32_t> *output() const {
    return GetPointer<const flatbuffers::Vector<int32_t> *>(VT_OUTPUT);
  }
  const flatbuffers::Vector<double> *extraParams() const {
    return GetPointer<const flatbuffers::Vector<double> *>(VT_EXTRAPARAMS);
  }
  const flatbuffers::Vector<int64_t> *extraInteger() const {
    return GetPointer<const flatbuffers::Vector<int64_t> *>(VT_EXTRAINTEGER);
  }
  const flatbuffers::Vector<uint8_t> *extraBools() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_EXTRABOOLS);
  }
  const flatbuffers::Vector<int32_t> *dimensions() const {
    return GetPointer<const flatbuffers::Vector<int32_t> *>(VT_DIMENSIONS);
  }
  int32_t device() const {
    return GetField<int32_t>(VT_DEVICE, 0);
  }
  int32_t scope_id() const {
    return GetField<int32_t>(VT_SCOPE_ID, 0);
  }
  const flatbuffers::String *scope_name() const {
    return GetPointer<const flatbuffers::String *>(VT_SCOPE_NAME);
  }
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *outputNames() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(VT_OUTPUTNAMES);
  }
  const flatbuffers::String *opName() const {
    return GetPointer<const flatbuffers::String *>(VT_OPNAME);
  }
  const flatbuffers::Vector<int8_t> *outputTypes() const {
    return GetPointer<const flatbuffers::Vector<int8_t> *>(VT_OUTPUTTYPES);
  }
  const sd::graph::FlatArray *scalar() const {
    return GetPointer<const sd::graph::FlatArray *>(VT_SCALAR);
  }
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *controlDeps() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(VT_CONTROLDEPS);
  }
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *varControlDeps() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(VT_VARCONTROLDEPS);
  }
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *controlDepFor() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(VT_CONTROLDEPFOR);
  }
  const flatbuffers::Vector<int8_t> *extraTypes() const {
    return GetPointer<const flatbuffers::Vector<int8_t> *>(VT_EXTRATYPES);
  }
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *extraStrings() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(VT_EXTRASTRINGS);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_ID) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           VerifyField<int8_t>(verifier, VT_OPTYPE) &&
           VerifyField<int64_t>(verifier, VT_OPNUM) &&
           VerifyOffset(verifier, VT_PROPERTIES) &&
           verifier.VerifyVector(properties()) &&
           verifier.VerifyVectorOfTables(properties()) &&
           VerifyOffset(verifier, VT_INPUT) &&
           verifier.VerifyVector(input()) &&
           VerifyOffset(verifier, VT_INPUTPAIRED) &&
           verifier.VerifyVector(inputPaired()) &&
           verifier.VerifyVectorOfTables(inputPaired()) &&
           VerifyOffset(verifier, VT_OUTPUT) &&
           verifier.VerifyVector(output()) &&
           VerifyOffset(verifier, VT_EXTRAPARAMS) &&
           verifier.VerifyVector(extraParams()) &&
           VerifyOffset(verifier, VT_EXTRAINTEGER) &&
           verifier.VerifyVector(extraInteger()) &&
           VerifyOffset(verifier, VT_EXTRABOOLS) &&
           verifier.VerifyVector(extraBools()) &&
           VerifyOffset(verifier, VT_DIMENSIONS) &&
           verifier.VerifyVector(dimensions()) &&
           VerifyField<int32_t>(verifier, VT_DEVICE) &&
           VerifyField<int32_t>(verifier, VT_SCOPE_ID) &&
           VerifyOffset(verifier, VT_SCOPE_NAME) &&
           verifier.VerifyString(scope_name()) &&
           VerifyOffset(verifier, VT_OUTPUTNAMES) &&
           verifier.VerifyVector(outputNames()) &&
           verifier.VerifyVectorOfStrings(outputNames()) &&
           VerifyOffset(verifier, VT_OPNAME) &&
           verifier.VerifyString(opName()) &&
           VerifyOffset(verifier, VT_OUTPUTTYPES) &&
           verifier.VerifyVector(outputTypes()) &&
           VerifyOffset(verifier, VT_SCALAR) &&
           verifier.VerifyTable(scalar()) &&
           VerifyOffset(verifier, VT_CONTROLDEPS) &&
           verifier.VerifyVector(controlDeps()) &&
           verifier.VerifyVectorOfStrings(controlDeps()) &&
           VerifyOffset(verifier, VT_VARCONTROLDEPS) &&
           verifier.VerifyVector(varControlDeps()) &&
           verifier.VerifyVectorOfStrings(varControlDeps()) &&
           VerifyOffset(verifier, VT_CONTROLDEPFOR) &&
           verifier.VerifyVector(controlDepFor()) &&
           verifier.VerifyVectorOfStrings(controlDepFor()) &&
           VerifyOffset(verifier, VT_EXTRATYPES) &&
           verifier.VerifyVector(extraTypes()) &&
           VerifyOffset(verifier, VT_EXTRASTRINGS) &&
           verifier.VerifyVector(extraStrings()) &&
           verifier.VerifyVectorOfStrings(extraStrings()) &&
           verifier.EndTable();
  }
};

struct FlatNodeBuilder {
  typedef FlatNode Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_id(int32_t id) {
    fbb_.AddElement<int32_t>(FlatNode::VT_ID, id, 0);
  }
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(FlatNode::VT_NAME, name);
  }
  void add_opType(sd::graph::OpType opType) {
    fbb_.AddElement<int8_t>(FlatNode::VT_OPTYPE, static_cast<int8_t>(opType), 0);
  }
  void add_opNum(int64_t opNum) {
    fbb_.AddElement<int64_t>(FlatNode::VT_OPNUM, opNum, 0);
  }
  void add_properties(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<sd::graph::FlatProperties>>> properties) {
    fbb_.AddOffset(FlatNode::VT_PROPERTIES, properties);
  }
  void add_input(flatbuffers::Offset<flatbuffers::Vector<int32_t>> input) {
    fbb_.AddOffset(FlatNode::VT_INPUT, input);
  }
  void add_inputPaired(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<sd::graph::IntPair>>> inputPaired) {
    fbb_.AddOffset(FlatNode::VT_INPUTPAIRED, inputPaired);
  }
  void add_output(flatbuffers::Offset<flatbuffers::Vector<int32_t>> output) {
    fbb_.AddOffset(FlatNode::VT_OUTPUT, output);
  }
  void add_extraParams(flatbuffers::Offset<flatbuffers::Vector<double>> extraParams) {
    fbb_.AddOffset(FlatNode::VT_EXTRAPARAMS, extraParams);
  }
  void add_extraInteger(flatbuffers::Offset<flatbuffers::Vector<int64_t>> extraInteger) {
    fbb_.AddOffset(FlatNode::VT_EXTRAINTEGER, extraInteger);
  }
  void add_extraBools(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> extraBools) {
    fbb_.AddOffset(FlatNode::VT_EXTRABOOLS, extraBools);
  }
  void add_dimensions(flatbuffers::Offset<flatbuffers::Vector<int32_t>> dimensions) {
    fbb_.AddOffset(FlatNode::VT_DIMENSIONS, dimensions);
  }
  void add_device(int32_t device) {
    fbb_.AddElement<int32_t>(FlatNode::VT_DEVICE, device, 0);
  }
  void add_scope_id(int32_t scope_id) {
    fbb_.AddElement<int32_t>(FlatNode::VT_SCOPE_ID, scope_id, 0);
  }
  void add_scope_name(flatbuffers::Offset<flatbuffers::String> scope_name) {
    fbb_.AddOffset(FlatNode::VT_SCOPE_NAME, scope_name);
  }
  void add_outputNames(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> outputNames) {
    fbb_.AddOffset(FlatNode::VT_OUTPUTNAMES, outputNames);
  }
  void add_opName(flatbuffers::Offset<flatbuffers::String> opName) {
    fbb_.AddOffset(FlatNode::VT_OPNAME, opName);
  }
  void add_outputTypes(flatbuffers::Offset<flatbuffers::Vector<int8_t>> outputTypes) {
    fbb_.AddOffset(FlatNode::VT_OUTPUTTYPES, outputTypes);
  }
  void add_scalar(flatbuffers::Offset<sd::graph::FlatArray> scalar) {
    fbb_.AddOffset(FlatNode::VT_SCALAR, scalar);
  }
  void add_controlDeps(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> controlDeps) {
    fbb_.AddOffset(FlatNode::VT_CONTROLDEPS, controlDeps);
  }
  void add_varControlDeps(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> varControlDeps) {
    fbb_.AddOffset(FlatNode::VT_VARCONTROLDEPS, varControlDeps);
  }
  void add_controlDepFor(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> controlDepFor) {
    fbb_.AddOffset(FlatNode::VT_CONTROLDEPFOR, controlDepFor);
  }
  void add_extraTypes(flatbuffers::Offset<flatbuffers::Vector<int8_t>> extraTypes) {
    fbb_.AddOffset(FlatNode::VT_EXTRATYPES, extraTypes);
  }
  void add_extraStrings(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> extraStrings) {
    fbb_.AddOffset(FlatNode::VT_EXTRASTRINGS, extraStrings);
  }
  explicit FlatNodeBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  FlatNodeBuilder &operator=(const FlatNodeBuilder &);
  flatbuffers::Offset<FlatNode> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<FlatNode>(end);
    return o;
  }
};

inline flatbuffers::Offset<FlatNode> CreateFlatNode(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t id = 0,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    sd::graph::OpType opType = sd::graph::OpType_TRANSFORM_FLOAT,
    int64_t opNum = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<sd::graph::FlatProperties>>> properties = 0,
    flatbuffers::Offset<flatbuffers::Vector<int32_t>> input = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<sd::graph::IntPair>>> inputPaired = 0,
    flatbuffers::Offset<flatbuffers::Vector<int32_t>> output = 0,
    flatbuffers::Offset<flatbuffers::Vector<double>> extraParams = 0,
    flatbuffers::Offset<flatbuffers::Vector<int64_t>> extraInteger = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> extraBools = 0,
    flatbuffers::Offset<flatbuffers::Vector<int32_t>> dimensions = 0,
    int32_t device = 0,
    int32_t scope_id = 0,
    flatbuffers::Offset<flatbuffers::String> scope_name = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> outputNames = 0,
    flatbuffers::Offset<flatbuffers::String> opName = 0,
    flatbuffers::Offset<flatbuffers::Vector<int8_t>> outputTypes = 0,
    flatbuffers::Offset<sd::graph::FlatArray> scalar = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> controlDeps = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> varControlDeps = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> controlDepFor = 0,
    flatbuffers::Offset<flatbuffers::Vector<int8_t>> extraTypes = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> extraStrings = 0) {
  FlatNodeBuilder builder_(_fbb);
  builder_.add_opNum(opNum);
  builder_.add_extraStrings(extraStrings);
  builder_.add_extraTypes(extraTypes);
  builder_.add_controlDepFor(controlDepFor);
  builder_.add_varControlDeps(varControlDeps);
  builder_.add_controlDeps(controlDeps);
  builder_.add_scalar(scalar);
  builder_.add_outputTypes(outputTypes);
  builder_.add_opName(opName);
  builder_.add_outputNames(outputNames);
  builder_.add_scope_name(scope_name);
  builder_.add_scope_id(scope_id);
  builder_.add_device(device);
  builder_.add_dimensions(dimensions);
  builder_.add_extraBools(extraBools);
  builder_.add_extraInteger(extraInteger);
  builder_.add_extraParams(extraParams);
  builder_.add_output(output);
  builder_.add_inputPaired(inputPaired);
  builder_.add_input(input);
  builder_.add_properties(properties);
  builder_.add_name(name);
  builder_.add_id(id);
  builder_.add_opType(opType);
  return builder_.Finish();
}

inline flatbuffers::Offset<FlatNode> CreateFlatNodeDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t id = 0,
    const char *name = nullptr,
    sd::graph::OpType opType = sd::graph::OpType_TRANSFORM_FLOAT,
    int64_t opNum = 0,
    const std::vector<flatbuffers::Offset<sd::graph::FlatProperties>> *properties = nullptr,
    const std::vector<int32_t> *input = nullptr,
    const std::vector<flatbuffers::Offset<sd::graph::IntPair>> *inputPaired = nullptr,
    const std::vector<int32_t> *output = nullptr,
    const std::vector<double> *extraParams = nullptr,
    const std::vector<int64_t> *extraInteger = nullptr,
    const std::vector<uint8_t> *extraBools = nullptr,
    const std::vector<int32_t> *dimensions = nullptr,
    int32_t device = 0,
    int32_t scope_id = 0,
    const char *scope_name = nullptr,
    const std::vector<flatbuffers::Offset<flatbuffers::String>> *outputNames = nullptr,
    const char *opName = nullptr,
    const std::vector<int8_t> *outputTypes = nullptr,
    flatbuffers::Offset<sd::graph::FlatArray> scalar = 0,
    const std::vector<flatbuffers::Offset<flatbuffers::String>> *controlDeps = nullptr,
    const std::vector<flatbuffers::Offset<flatbuffers::String>> *varControlDeps = nullptr,
    const std::vector<flatbuffers::Offset<flatbuffers::String>> *controlDepFor = nullptr,
    const std::vector<int8_t> *extraTypes = nullptr,
    const std::vector<flatbuffers::Offset<flatbuffers::String>> *extraStrings = nullptr) {
  auto name__ = name ? _fbb.CreateString(name) : 0;
  auto properties__ = properties ? _fbb.CreateVector<flatbuffers::Offset<sd::graph::FlatProperties>>(*properties) : 0;
  auto input__ = input ? _fbb.CreateVector<int32_t>(*input) : 0;
  auto inputPaired__ = inputPaired ? _fbb.CreateVector<flatbuffers::Offset<sd::graph::IntPair>>(*inputPaired) : 0;
  auto output__ = output ? _fbb.CreateVector<int32_t>(*output) : 0;
  auto extraParams__ = extraParams ? _fbb.CreateVector<double>(*extraParams) : 0;
  auto extraInteger__ = extraInteger ? _fbb.CreateVector<int64_t>(*extraInteger) : 0;
  auto extraBools__ = extraBools ? _fbb.CreateVector<uint8_t>(*extraBools) : 0;
  auto dimensions__ = dimensions ? _fbb.CreateVector<int32_t>(*dimensions) : 0;
  auto scope_name__ = scope_name ? _fbb.CreateString(scope_name) : 0;
  auto outputNames__ = outputNames ? _fbb.CreateVector<flatbuffers::Offset<flatbuffers::String>>(*outputNames) : 0;
  auto opName__ = opName ? _fbb.CreateString(opName) : 0;
  auto outputTypes__ = outputTypes ? _fbb.CreateVector<int8_t>(*outputTypes) : 0;
  auto controlDeps__ = controlDeps ? _fbb.CreateVector<flatbuffers::Offset<flatbuffers::String>>(*controlDeps) : 0;
  auto varControlDeps__ = varControlDeps ? _fbb.CreateVector<flatbuffers::Offset<flatbuffers::String>>(*varControlDeps) : 0;
  auto controlDepFor__ = controlDepFor ? _fbb.CreateVector<flatbuffers::Offset<flatbuffers::String>>(*controlDepFor) : 0;
  auto extraTypes__ = extraTypes ? _fbb.CreateVector<int8_t>(*extraTypes) : 0;
  auto extraStrings__ = extraStrings ? _fbb.CreateVector<flatbuffers::Offset<flatbuffers::String>>(*extraStrings) : 0;
  return sd::graph::CreateFlatNode(
      _fbb,
      id,
      name__,
      opType,
      opNum,
      properties__,
      input__,
      inputPaired__,
      output__,
      extraParams__,
      extraInteger__,
      extraBools__,
      dimensions__,
      device,
      scope_id,
      scope_name__,
      outputNames__,
      opName__,
      outputTypes__,
      scalar,
      controlDeps__,
      varControlDeps__,
      controlDepFor__,
      extraTypes__,
      extraStrings__);
}

inline const sd::graph::FlatNode *GetFlatNode(const void *buf) {
  return flatbuffers::GetRoot<sd::graph::FlatNode>(buf);
}

inline const sd::graph::FlatNode *GetSizePrefixedFlatNode(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<sd::graph::FlatNode>(buf);
}

inline bool VerifyFlatNodeBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<sd::graph::FlatNode>(nullptr);
}

inline bool VerifySizePrefixedFlatNodeBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<sd::graph::FlatNode>(nullptr);
}

inline void FinishFlatNodeBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<sd::graph::FlatNode> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedFlatNodeBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<sd::graph::FlatNode> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace graph
}  // namespace sd

#endif  // FLATBUFFERS_GENERATED_NODE_SD_GRAPH_H_
