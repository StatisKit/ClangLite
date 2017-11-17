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
    template <> class ::clang::PragmaDetectMismatchDecl const volatile * get_pointer<class ::clang::PragmaDetectMismatchDecl const volatile >(class ::clang::PragmaDetectMismatchDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_6cf5fc1ba526524098edbb6432f5752d()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::PragmaDetectMismatchDecl * (*method_pointer_a2f9ef8e44c65dd1a7770e264f5446cc)(class ::clang::ASTContext &, unsigned int , unsigned int ) = ::clang::PragmaDetectMismatchDecl::CreateDeserialized;
    class ::llvm::StringRef  (::clang::PragmaDetectMismatchDecl::*method_pointer_6a47147625f1511b8603116a43c6b971)() const = &::clang::PragmaDetectMismatchDecl::getName;
    class ::llvm::StringRef  (::clang::PragmaDetectMismatchDecl::*method_pointer_e328a67aca225b55a081cd3176fe37c4)() const = &::clang::PragmaDetectMismatchDecl::getValue;
    bool  (*method_pointer_0deb0b6177aa53a9b6a8b53a5a905822)(class ::clang::Decl const *) = ::clang::PragmaDetectMismatchDecl::classof;
    bool  (*method_pointer_2b97473c6638509c8faf841cbff23e25)(enum ::clang::Decl::Kind ) = ::clang::PragmaDetectMismatchDecl::classofKind;
    boost::python::class_< class ::clang::PragmaDetectMismatchDecl, autowig::Held< class ::clang::PragmaDetectMismatchDecl >::Type, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_6cf5fc1ba526524098edbb6432f5752d("PragmaDetectMismatchDecl", "Represents a ``#pragma detect_mismatch`` line. Always a child of\nTranslationUnitDecl.\n\n", boost::python::no_init);
    class_6cf5fc1ba526524098edbb6432f5752d.def("create_deserialized", method_pointer_a2f9ef8e44c65dd1a7770e264f5446cc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6cf5fc1ba526524098edbb6432f5752d.def("get_name", method_pointer_6a47147625f1511b8603116a43c6b971, "");
    class_6cf5fc1ba526524098edbb6432f5752d.def("get_value", method_pointer_e328a67aca225b55a081cd3176fe37c4, "");
    class_6cf5fc1ba526524098edbb6432f5752d.def("classof", method_pointer_0deb0b6177aa53a9b6a8b53a5a905822, "");
    class_6cf5fc1ba526524098edbb6432f5752d.def("classof_kind", method_pointer_2b97473c6638509c8faf841cbff23e25, "");
    class_6cf5fc1ba526524098edbb6432f5752d.staticmethod("classof_kind");
    class_6cf5fc1ba526524098edbb6432f5752d.staticmethod("create_deserialized");
    class_6cf5fc1ba526524098edbb6432f5752d.staticmethod("classof");

    if(autowig::Held< class ::clang::PragmaDetectMismatchDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::PragmaDetectMismatchDecl >::Type, autowig::Held< class ::clang::Decl >::Type >();
    }

}