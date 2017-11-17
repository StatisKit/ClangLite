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
    template <> class ::clang::AttributedType const volatile * get_pointer<class ::clang::AttributedType const volatile >(class ::clang::AttributedType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_1d580556003654da9f00e93300e8c7d9()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_262e98ffbbe25a3d9e827680d4810c5a)() const = &::clang::AttributedType::getModifiedType;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_b7cb074d87de5043bfb1276561b63e4d)() const = &::clang::AttributedType::getEquivalentType;
    bool  (::clang::AttributedType::*method_pointer_9d2b250a31a15765a8e0b293ae29ce1f)() const = &::clang::AttributedType::isSugared;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_a9f094b684855942b472378a81f9ff10)() const = &::clang::AttributedType::desugar;
    bool  (::clang::AttributedType::*method_pointer_58f6a74c443954df9880ec7f14dabfd8)() const = &::clang::AttributedType::isQualifier;
    bool  (::clang::AttributedType::*method_pointer_3776f362fc9d5531a94d59477f5871a5)() const = &::clang::AttributedType::isMSTypeSpec;
    bool  (::clang::AttributedType::*method_pointer_7f4e0c93278d5cbeb45e6bb8910e623e)() const = &::clang::AttributedType::isCallingConv;
    bool  (*method_pointer_dbc4e9e8f9de5e0ab1170774fe2ea3c9)(class ::clang::Type const *) = ::clang::AttributedType::classof;
    boost::python::class_< class ::clang::AttributedType, autowig::Held< class ::clang::AttributedType >::Type, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_1d580556003654da9f00e93300e8c7d9("AttributedType", "", boost::python::no_init);
    class_1d580556003654da9f00e93300e8c7d9.def("get_modified_type", method_pointer_262e98ffbbe25a3d9e827680d4810c5a, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_equivalent_type", method_pointer_b7cb074d87de5043bfb1276561b63e4d, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_sugared", method_pointer_9d2b250a31a15765a8e0b293ae29ce1f, "");
    class_1d580556003654da9f00e93300e8c7d9.def("desugar", method_pointer_a9f094b684855942b472378a81f9ff10, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_qualifier", method_pointer_58f6a74c443954df9880ec7f14dabfd8, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_1d580556003654da9f00e93300e8c7d9.def("is_ms_type_spec", method_pointer_3776f362fc9d5531a94d59477f5871a5, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_calling_conv", method_pointer_7f4e0c93278d5cbeb45e6bb8910e623e, "");
    class_1d580556003654da9f00e93300e8c7d9.def("classof", method_pointer_dbc4e9e8f9de5e0ab1170774fe2ea3c9, "");
    class_1d580556003654da9f00e93300e8c7d9.staticmethod("classof");

    if(autowig::Held< class ::clang::AttributedType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::AttributedType >::Type, autowig::Held< class ::clang::Type >::Type >();
    }

}