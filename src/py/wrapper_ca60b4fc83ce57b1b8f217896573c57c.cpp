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
    template <> class ::clang::LValueReferenceType const volatile * get_pointer<class ::clang::LValueReferenceType const volatile >(class ::clang::LValueReferenceType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ca60b4fc83ce57b1b8f217896573c57c()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::LValueReferenceType::*method_pointer_a392b76d939e5322901265b03d2455d2)() const = &::clang::LValueReferenceType::isSugared;
    class ::clang::QualType  (::clang::LValueReferenceType::*method_pointer_bd233f6783815c9397b379d4eabe8bd7)() const = &::clang::LValueReferenceType::desugar;
    bool  (*method_pointer_5fb415f086275c28931aad42f67f2430)(class ::clang::Type const *) = ::clang::LValueReferenceType::classof;
    boost::python::class_< class ::clang::LValueReferenceType, autowig::Held< class ::clang::LValueReferenceType >::Type, boost::python::bases< class ::clang::ReferenceType >, boost::noncopyable > class_ca60b4fc83ce57b1b8f217896573c57c("LValueReferenceType", "", boost::python::no_init);
    class_ca60b4fc83ce57b1b8f217896573c57c.def("is_sugared", method_pointer_a392b76d939e5322901265b03d2455d2, "");
    class_ca60b4fc83ce57b1b8f217896573c57c.def("desugar", method_pointer_bd233f6783815c9397b379d4eabe8bd7, "");
    class_ca60b4fc83ce57b1b8f217896573c57c.def("classof", method_pointer_5fb415f086275c28931aad42f67f2430, "");
    class_ca60b4fc83ce57b1b8f217896573c57c.staticmethod("classof");

    if(autowig::Held< class ::clang::LValueReferenceType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::LValueReferenceType >::Type, autowig::Held< class ::clang::ReferenceType >::Type >();
    }

}