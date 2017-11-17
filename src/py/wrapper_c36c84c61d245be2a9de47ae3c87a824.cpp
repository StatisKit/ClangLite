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
    template <> class ::clang::PointerType const volatile * get_pointer<class ::clang::PointerType const volatile >(class ::clang::PointerType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c36c84c61d245be2a9de47ae3c87a824()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::QualType  (::clang::PointerType::*method_pointer_7021b7996796525db4137ebe32e04d8c)() const = &::clang::PointerType::getPointeeType;
    bool  (::clang::PointerType::*method_pointer_e3ff63a8111a5ef2b6b6802f060ef9a8)() const = &::clang::PointerType::isSugared;
    class ::clang::QualType  (::clang::PointerType::*method_pointer_b3a12e54b87b572591874024e45bb43f)() const = &::clang::PointerType::desugar;
    bool  (*method_pointer_c5412972a3fb530f9aa6397a506b069b)(class ::clang::Type const *) = ::clang::PointerType::classof;
    boost::python::class_< class ::clang::PointerType, autowig::Held< class ::clang::PointerType >::Type, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_c36c84c61d245be2a9de47ae3c87a824("PointerType", "", boost::python::no_init);
    class_c36c84c61d245be2a9de47ae3c87a824.def("get_pointee_type", method_pointer_7021b7996796525db4137ebe32e04d8c, "");
    class_c36c84c61d245be2a9de47ae3c87a824.def("is_sugared", method_pointer_e3ff63a8111a5ef2b6b6802f060ef9a8, "");
    class_c36c84c61d245be2a9de47ae3c87a824.def("desugar", method_pointer_b3a12e54b87b572591874024e45bb43f, "");
    class_c36c84c61d245be2a9de47ae3c87a824.def("classof", method_pointer_c5412972a3fb530f9aa6397a506b069b, "");
    class_c36c84c61d245be2a9de47ae3c87a824.staticmethod("classof");

    if(autowig::Held< class ::clang::PointerType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::PointerType >::Type, autowig::Held< class ::clang::Type >::Type >();
    }

}