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
    template <> class ::clang::DependentSizedArrayType const volatile * get_pointer<class ::clang::DependentSizedArrayType const volatile >(class ::clang::DependentSizedArrayType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_47d43e4eda7252d2bec0204a93977671()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::SourceLocation  (::clang::DependentSizedArrayType::*method_pointer_682f079c6e9256a69397721d0e3a7500)() const = &::clang::DependentSizedArrayType::getLBracketLoc;
    class ::clang::SourceLocation  (::clang::DependentSizedArrayType::*method_pointer_2b1237176cbc56b4a67a194c401047eb)() const = &::clang::DependentSizedArrayType::getRBracketLoc;
    bool  (::clang::DependentSizedArrayType::*method_pointer_ab751aa73f695031971b64f3c5085f0d)() const = &::clang::DependentSizedArrayType::isSugared;
    class ::clang::QualType  (::clang::DependentSizedArrayType::*method_pointer_8ac7367c465551a38f93999defacfd6d)() const = &::clang::DependentSizedArrayType::desugar;
    bool  (*method_pointer_d3e800454abd5db3937147a6bfd4d680)(class ::clang::Type const *) = ::clang::DependentSizedArrayType::classof;
    boost::python::class_< class ::clang::DependentSizedArrayType, autowig::Held< class ::clang::DependentSizedArrayType >::Type, boost::python::bases< class ::clang::ArrayType >, boost::noncopyable > class_47d43e4eda7252d2bec0204a93977671("DependentSizedArrayType", "", boost::python::no_init);
    class_47d43e4eda7252d2bec0204a93977671.def("get_l_bracket_loc", method_pointer_682f079c6e9256a69397721d0e3a7500, "");
    class_47d43e4eda7252d2bec0204a93977671.def("get_r_bracket_loc", method_pointer_2b1237176cbc56b4a67a194c401047eb, "");
    class_47d43e4eda7252d2bec0204a93977671.def("is_sugared", method_pointer_ab751aa73f695031971b64f3c5085f0d, "");
    class_47d43e4eda7252d2bec0204a93977671.def("desugar", method_pointer_8ac7367c465551a38f93999defacfd6d, "");
    class_47d43e4eda7252d2bec0204a93977671.def("classof", method_pointer_d3e800454abd5db3937147a6bfd4d680, "");
    class_47d43e4eda7252d2bec0204a93977671.staticmethod("classof");

    if(autowig::Held< class ::clang::DependentSizedArrayType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::DependentSizedArrayType >::Type, autowig::Held< class ::clang::ArrayType >::Type >();
    }

}