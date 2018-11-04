// Copyright [2017-2018] UMR MISTEA INRA, UMR LEPSE INRA,                //
//                       UMR AGAP CIRAD, EPI Virtual Plants Inria        //
// Copyright [2015-2016] UMR AGAP CIRAD, EPI Virtual Plants Inria        //
//                                                                       //
// This file is part of the AutoWIG project. More information can be     //
// found at                                                              //
//                                                                       //
//     http://autowig.rtfd.io                                            //
//                                                                       //
// The Apache Software Foundation (ASF) licenses this file to you under  //
// the Apache License, Version 2.0 (the "License"); you may not use this //
// file except in compliance with the License. You should have received  //
// a copy of the Apache License, Version 2.0 along with this file; see   //
// the file LICENSE. If not, you may obtain a copy of the License at     //
//                                                                       //
//     http://www.apache.org/licenses/LICENSE-2.0                        //
//                                                                       //
// Unless required by applicable law or agreed to in writing, software   //
// distributed under the License is distributed on an "AS IS" BASIS,     //
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or       //
// mplied. See the License for the specific language governing           //
// permissions and limitations under the License.                        //

#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::FileID const volatile * get_pointer<class ::clang::FileID const volatile >(class ::clang::FileID const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_b1580b6f5457571a867a2347d7b1f865()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::FileID::*method_pointer_a2de043c5e1b5973bd96085e9ca023a7)() const = &::clang::FileID::isValid;
    bool  (::clang::FileID::*method_pointer_8bf8694510d856cf9efe8860ebb4a64f)() const = &::clang::FileID::isInvalid;
    bool  (::clang::FileID::*method_pointer_5bd9b6b07b4256a49da1384ce2ff036b)(class ::clang::FileID const &) const = &::clang::FileID::operator==;
    bool  (::clang::FileID::*method_pointer_7567e012b0485fa2990a536eca0bf364)(class ::clang::FileID const &) const = &::clang::FileID::operator<;
    bool  (::clang::FileID::*method_pointer_b28453fdc8205bbf809a7a262508d636)(class ::clang::FileID const &) const = &::clang::FileID::operator<=;
    bool  (::clang::FileID::*method_pointer_5bb96d0bbe9e548b9eec893efeb32b9e)(class ::clang::FileID const &) const = &::clang::FileID::operator!=;
    bool  (::clang::FileID::*method_pointer_3cc8e98de315577f980ea291f2a029c6)(class ::clang::FileID const &) const = &::clang::FileID::operator>;
    bool  (::clang::FileID::*method_pointer_9afacb81ce2c5d3da794c38debddd0f0)(class ::clang::FileID const &) const = &::clang::FileID::operator>=;
    class ::clang::FileID  (*method_pointer_aab4faec1936510eb177541ad22621a6)() = ::clang::FileID::getSentinel;
    unsigned int  (::clang::FileID::*method_pointer_c9e884cb5b3e578a9ab51a03e5baa5b5)() const = &::clang::FileID::getHashValue;
    boost::python::class_< class ::clang::FileID, autowig::Held< class ::clang::FileID >::Type > class_b1580b6f5457571a867a2347d7b1f865("FileID", "An opaque identifier used by SourceManager which refers to a source file\n(MemoryBuffer) along with its #include path and #line data.\n\n", boost::python::no_init);
    class_b1580b6f5457571a867a2347d7b1f865.def(boost::python::init<  >(""));
    class_b1580b6f5457571a867a2347d7b1f865.def(boost::python::init< class ::clang::FileID const & >(""));
    class_b1580b6f5457571a867a2347d7b1f865.def("is_valid", method_pointer_a2de043c5e1b5973bd96085e9ca023a7, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_invalid", method_pointer_8bf8694510d856cf9efe8860ebb4a64f, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__eq__", method_pointer_5bd9b6b07b4256a49da1384ce2ff036b, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__lt__", method_pointer_7567e012b0485fa2990a536eca0bf364, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__le__", method_pointer_b28453fdc8205bbf809a7a262508d636, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__neq__", method_pointer_5bb96d0bbe9e548b9eec893efeb32b9e, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__gt__", method_pointer_3cc8e98de315577f980ea291f2a029c6, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__ge__", method_pointer_9afacb81ce2c5d3da794c38debddd0f0, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("get_sentinel", method_pointer_aab4faec1936510eb177541ad22621a6, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("get_hash_value", method_pointer_c9e884cb5b3e578a9ab51a03e5baa5b5, "");
    class_b1580b6f5457571a867a2347d7b1f865.staticmethod("get_sentinel");

}