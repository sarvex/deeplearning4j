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


package org.nd4j.graph;

import java.nio.*;
import java.lang.*;
import java.nio.ByteOrder;
import java.util.*;
import com.google.flatbuffers.*;

@SuppressWarnings("unused")
public final class FlatVariable extends Table {
  public static void ValidateVersion() { Constants.FLATBUFFERS_1_12_0(); }
  public static FlatVariable getRootAsFlatVariable(ByteBuffer _bb) { return getRootAsFlatVariable(_bb, new FlatVariable()); }
  public static FlatVariable getRootAsFlatVariable(ByteBuffer _bb, FlatVariable obj) { _bb.order(ByteOrder.LITTLE_ENDIAN); return (obj.__assign(_bb.getInt(_bb.position()) + _bb.position(), _bb)); }
  public void __init(int _i, ByteBuffer _bb) { __reset(_i, _bb); }
  public FlatVariable __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public org.nd4j.graph.IntPair id() { return id(new org.nd4j.graph.IntPair()); }
  public org.nd4j.graph.IntPair id(org.nd4j.graph.IntPair obj) { int o = __offset(4); return o != 0 ? obj.__assign(__indirect(o + bb_pos), bb) : null; }
  public String name() { int o = __offset(6); return o != 0 ? __string(o + bb_pos) : null; }
  public ByteBuffer nameAsByteBuffer() { return __vector_as_bytebuffer(6, 1); }
  public ByteBuffer nameInByteBuffer(ByteBuffer _bb) { return __vector_in_bytebuffer(_bb, 6, 1); }
  public byte dtype() { int o = __offset(8); return o != 0 ? bb.get(o + bb_pos) : 0; }
  public long shape(int j) { int o = __offset(10); return o != 0 ? bb.getLong(__vector(o) + j * 8) : 0; }
  public int shapeLength() { int o = __offset(10); return o != 0 ? __vector_len(o) : 0; }
  public LongVector shapeVector() { return shapeVector(new LongVector()); }
  public LongVector shapeVector(LongVector obj) { int o = __offset(10); return o != 0 ? obj.__assign(__vector(o), bb) : null; }
  public ByteBuffer shapeAsByteBuffer() { return __vector_as_bytebuffer(10, 8); }
  public ByteBuffer shapeInByteBuffer(ByteBuffer _bb) { return __vector_in_bytebuffer(_bb, 10, 8); }
  public org.nd4j.graph.FlatArray ndarray() { return ndarray(new org.nd4j.graph.FlatArray()); }
  public org.nd4j.graph.FlatArray ndarray(org.nd4j.graph.FlatArray obj) { int o = __offset(12); return o != 0 ? obj.__assign(__indirect(o + bb_pos), bb) : null; }
  public int device() { int o = __offset(14); return o != 0 ? bb.getInt(o + bb_pos) : 0; }
  public byte variabletype() { int o = __offset(16); return o != 0 ? bb.get(o + bb_pos) : 0; }
  public String controlDeps(int j) { int o = __offset(18); return o != 0 ? __string(__vector(o) + j * 4) : null; }
  public int controlDepsLength() { int o = __offset(18); return o != 0 ? __vector_len(o) : 0; }
  public StringVector controlDepsVector() { return controlDepsVector(new StringVector()); }
  public StringVector controlDepsVector(StringVector obj) { int o = __offset(18); return o != 0 ? obj.__assign(__vector(o), 4, bb) : null; }
  public String controlDepForOp(int j) { int o = __offset(20); return o != 0 ? __string(__vector(o) + j * 4) : null; }
  public int controlDepForOpLength() { int o = __offset(20); return o != 0 ? __vector_len(o) : 0; }
  public StringVector controlDepForOpVector() { return controlDepForOpVector(new StringVector()); }
  public StringVector controlDepForOpVector(StringVector obj) { int o = __offset(20); return o != 0 ? obj.__assign(__vector(o), 4, bb) : null; }
  public String controlDepsForVar(int j) { int o = __offset(22); return o != 0 ? __string(__vector(o) + j * 4) : null; }
  public int controlDepsForVarLength() { int o = __offset(22); return o != 0 ? __vector_len(o) : 0; }
  public StringVector controlDepsForVarVector() { return controlDepsForVarVector(new StringVector()); }
  public StringVector controlDepsForVarVector(StringVector obj) { int o = __offset(22); return o != 0 ? obj.__assign(__vector(o), 4, bb) : null; }

  public static int createFlatVariable(FlatBufferBuilder builder,
      int idOffset,
      int nameOffset,
      byte dtype,
      int shapeOffset,
      int ndarrayOffset,
      int device,
      byte variabletype,
      int controlDepsOffset,
      int controlDepForOpOffset,
      int controlDepsForVarOffset) {
    builder.startTable(10);
    FlatVariable.addControlDepsForVar(builder, controlDepsForVarOffset);
    FlatVariable.addControlDepForOp(builder, controlDepForOpOffset);
    FlatVariable.addControlDeps(builder, controlDepsOffset);
    FlatVariable.addDevice(builder, device);
    FlatVariable.addNdarray(builder, ndarrayOffset);
    FlatVariable.addShape(builder, shapeOffset);
    FlatVariable.addName(builder, nameOffset);
    FlatVariable.addId(builder, idOffset);
    FlatVariable.addVariabletype(builder, variabletype);
    FlatVariable.addDtype(builder, dtype);
    return FlatVariable.endFlatVariable(builder);
  }

  public static void startFlatVariable(FlatBufferBuilder builder) { builder.startTable(10); }
  public static void addId(FlatBufferBuilder builder, int idOffset) { builder.addOffset(0, idOffset, 0); }
  public static void addName(FlatBufferBuilder builder, int nameOffset) { builder.addOffset(1, nameOffset, 0); }
  public static void addDtype(FlatBufferBuilder builder, byte dtype) { builder.addByte(2, dtype, 0); }
  public static void addShape(FlatBufferBuilder builder, int shapeOffset) { builder.addOffset(3, shapeOffset, 0); }
  public static int createShapeVector(FlatBufferBuilder builder, long[] data) { builder.startVector(8, data.length, 8); for (int i = data.length - 1; i >= 0; i--) builder.addLong(data[i]); return builder.endVector(); }
  public static void startShapeVector(FlatBufferBuilder builder, int numElems) { builder.startVector(8, numElems, 8); }
  public static void addNdarray(FlatBufferBuilder builder, int ndarrayOffset) { builder.addOffset(4, ndarrayOffset, 0); }
  public static void addDevice(FlatBufferBuilder builder, int device) { builder.addInt(5, device, 0); }
  public static void addVariabletype(FlatBufferBuilder builder, byte variabletype) { builder.addByte(6, variabletype, 0); }
  public static void addControlDeps(FlatBufferBuilder builder, int controlDepsOffset) { builder.addOffset(7, controlDepsOffset, 0); }
  public static int createControlDepsVector(FlatBufferBuilder builder, int[] data) { builder.startVector(4, data.length, 4); for (int i = data.length - 1; i >= 0; i--) builder.addOffset(data[i]); return builder.endVector(); }
  public static void startControlDepsVector(FlatBufferBuilder builder, int numElems) { builder.startVector(4, numElems, 4); }
  public static void addControlDepForOp(FlatBufferBuilder builder, int controlDepForOpOffset) { builder.addOffset(8, controlDepForOpOffset, 0); }
  public static int createControlDepForOpVector(FlatBufferBuilder builder, int[] data) { builder.startVector(4, data.length, 4); for (int i = data.length - 1; i >= 0; i--) builder.addOffset(data[i]); return builder.endVector(); }
  public static void startControlDepForOpVector(FlatBufferBuilder builder, int numElems) { builder.startVector(4, numElems, 4); }
  public static void addControlDepsForVar(FlatBufferBuilder builder, int controlDepsForVarOffset) { builder.addOffset(9, controlDepsForVarOffset, 0); }
  public static int createControlDepsForVarVector(FlatBufferBuilder builder, int[] data) { builder.startVector(4, data.length, 4); for (int i = data.length - 1; i >= 0; i--) builder.addOffset(data[i]); return builder.endVector(); }
  public static void startControlDepsForVarVector(FlatBufferBuilder builder, int numElems) { builder.startVector(4, numElems, 4); }
  public static int endFlatVariable(FlatBufferBuilder builder) {
    int o = builder.endTable();
    return o;
  }
  public static void finishFlatVariableBuffer(FlatBufferBuilder builder, int offset) { builder.finish(offset); }
  public static void finishSizePrefixedFlatVariableBuffer(FlatBufferBuilder builder, int offset) { builder.finishSizePrefixed(offset); }

  public static final class Vector extends BaseVector {
    public Vector __assign(int _vector, int _element_size, ByteBuffer _bb) { __reset(_vector, _element_size, _bb); return this; }

    public FlatVariable get(int j) { return get(new FlatVariable(), j); }
    public FlatVariable get(FlatVariable obj, int j) {  return obj.__assign(__indirect(__element(j), bb), bb); }
  }
}

