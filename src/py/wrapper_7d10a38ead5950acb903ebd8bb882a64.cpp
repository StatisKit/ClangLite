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
    template <> class ::clang::DependentSizedExtVectorType const volatile * get_pointer<class ::clang::DependentSizedExtVectorType const volatile >(class ::clang::DependentSizedExtVectorType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_7d10a38ead5950acb903ebd8bb882a64()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::QualType  (::clang::DependentSizedExtVectorType::*method_pointer_f91f23f0fd375062ae158b25dcad6834)() const = &::clang::DependentSizedExtVectorType::getElementType;
    class ::clang::SourceLocation  (::clang::DependentSizedExtVectorType::*method_pointer_f8a4f7dead185ec2b8e098f7bd4d6172)() const = &::clang::DependentSizedExtVectorType::getAttributeLoc;
    bool  (::clang::DependentSizedExtVectorType::*method_pointer_137a2faf33fe59a59d5bc6fa22773297)() const = &::clang::DependentSizedExtVectorType::isSugared;
    class ::clang::QualType  (::clang::DependentSizedExtVectorType::*method_pointer_ed6b22c67de15c75bc0fede3c2eb5ac2)() const = &::clang::DependentSizedExtVectorType::desugar;
    bool  (*method_pointer_739102925faa5693a39e5e597c74456a)(class ::clang::Type const *) = ::clang::DependentSizedExtVectorType::classof;
    boost::python::class_< class ::clang::DependentSizedExtVectorType, autowig::Held< class ::clang::DependentSizedExtVectorType >::Type, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_7d10a38ead5950acb903ebd8bb882a64("DependentSizedExtVectorType", "", boost::python::no_init);
    class_7d10a38ead5950acb903ebd8bb882a64.def("get_element_type", method_pointer_f91f23f0fd375062ae158b25dcad6834, "");
    class_7d10a38ead5950acb903ebd8bb882a64.def("get_attribute_loc", method_pointer_f8a4f7dead185ec2b8e098f7bd4d6172, "");
    class_7d10a38ead5950acb903ebd8bb882a64.def("is_sugared", method_pointer_137a2faf33fe59a59d5bc6fa22773297, "");
    class_7d10a38ead5950acb903ebd8bb882a64.def("desugar", method_pointer_ed6b22c67de15c75bc0fede3c2eb5ac2, "");
    class_7d10a38ead5950acb903ebd8bb882a64.def("classof", method_pointer_739102925faa5693a39e5e597c74456a, "");
    class_7d10a38ead5950acb903ebd8bb882a64.staticmethod("classof");

    if(autowig::Held< class ::clang::DependentSizedExtVectorType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::DependentSizedExtVectorType >::Type, autowig::Held< class ::clang::Type >::Type >();
    }

}