/**
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *     https://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "cpp_reserved_words.hh"

#include "Compiler.hh"

#include <fstream>
#include <boost/test/included/unit_test_framework.hpp>

#ifdef min
#undef min
#endif

#ifdef max
#undef max
#endif


using std::unique_ptr;
using std::map;
using std::string;
using std::vector;
using std::ifstream;

using avro::ValidSchema;
using avro::OutputStream;
using avro::InputStream;
using avro::Encoder;
using avro::Decoder;
using avro::EncoderPtr;
using avro::DecoderPtr;
using avro::memoryInputStream;
using avro::memoryOutputStream;
using avro::binaryEncoder;
using avro::validatingEncoder;
using avro::binaryDecoder;
using avro::validatingDecoder;


void testCppReservedWords()
{
    // Simply including the generated header is enough to test this.
    // the header will not compile if reserved words were used
}

boost::unit_test::test_suite*
init_unit_test_suite(int argc, char* argv[])
{
    boost::unit_test::test_suite* ts = BOOST_TEST_SUITE("Code generator tests");
    ts->add(BOOST_TEST_CASE(testCppReservedWords));
    return ts;
}
