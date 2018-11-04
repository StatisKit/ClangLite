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
    template <> class ::clang::DecltypeType const volatile * get_pointer<class ::clang::DecltypeType const volatile >(class ::clang::DecltypeType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_973074796ca857b3a9a2c7a922cd35ae()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::QualType  (::clang::DecltypeType::*method_pointer_465231cefe0654f4afcd7c131ae6444a)() const = &::clang::DecltypeType::getUnderlyingType;
    class ::clang::QualType  (::clang::DecltypeType::*method_pointer_c5ef3c79017a5e4186cb6eb50bdf15a5)() const = &::clang::DecltypeType::desugar;
    bool  (::clang::DecltypeType::*method_pointer_332f7fd0693658a0b28d4d16ae3cfaca)() const = &::clang::DecltypeType::isSugared;
    bool  (*method_pointer_57f6791f71475947af8ba2d46d7f31a4)(class ::clang::Type const *) = ::clang::DecltypeType::classof;
    boost::python::class_< class ::clang::DecltypeType, autowig::Held< class ::clang::DecltypeType >::Type, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_973074796ca857b3a9a2c7a922cd35ae("DecltypeType", "", boost::python::no_init);
    class_973074796ca857b3a9a2c7a922cd35ae.def("get_underlying_type", method_pointer_465231cefe0654f4afcd7c131ae6444a, "");
    class_973074796ca857b3a9a2c7a922cd35ae.def("desugar", method_pointer_c5ef3c79017a5e4186cb6eb50bdf15a5, "Remove a single level of sugar.\n\n:Return Type:\n    :py:class:`clanglite.clang.QualType`\n\n");
    class_973074796ca857b3a9a2c7a922cd35ae.def("is_sugared", method_pointer_332f7fd0693658a0b28d4d16ae3cfaca, "Returns whether this type directly provides sugar.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_973074796ca857b3a9a2c7a922cd35ae.def("classof", method_pointer_57f6791f71475947af8ba2d46d7f31a4, "");
    class_973074796ca857b3a9a2c7a922cd35ae.staticmethod("classof");

    if(autowig::Held< class ::clang::DecltypeType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::DecltypeType >::Type, autowig::Held< class ::clang::Type >::Type >();
    }

}