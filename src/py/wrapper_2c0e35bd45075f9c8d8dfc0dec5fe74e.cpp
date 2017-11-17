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
    template <> class ::clang::ExternCContextDecl const volatile * get_pointer<class ::clang::ExternCContextDecl const volatile >(class ::clang::ExternCContextDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_2c0e35bd45075f9c8d8dfc0dec5fe74e()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_f56d1a376318570c81f7b59d6124ffa8)(class ::clang::Decl const *) = ::clang::ExternCContextDecl::classof;
    bool  (*method_pointer_7c23f58f6b59552a8401fbe90c98b36c)(enum ::clang::Decl::Kind ) = ::clang::ExternCContextDecl::classofKind;
    class ::clang::DeclContext * (*method_pointer_176e548cecf25eac8b3a2fba8df60d4d)(class ::clang::ExternCContextDecl const *) = ::clang::ExternCContextDecl::castToDeclContext;
    class ::clang::ExternCContextDecl * (*method_pointer_721300149021541b9a6d3b05c2704914)(class ::clang::DeclContext const *) = ::clang::ExternCContextDecl::castFromDeclContext;
    boost::python::class_< class ::clang::ExternCContextDecl, autowig::Held< class ::clang::ExternCContextDecl >::Type, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_2c0e35bd45075f9c8d8dfc0dec5fe74e("ExternCContextDecl", "Declaration context for names declared as extern 'C' in C++. This is\nneither the semantic nor lexical context for such declarations, but is\nused to check for conflicts with other extern 'C' declarations. Example:\n\n", boost::python::no_init);
    class_2c0e35bd45075f9c8d8dfc0dec5fe74e.def("classof", method_pointer_f56d1a376318570c81f7b59d6124ffa8, "");
    class_2c0e35bd45075f9c8d8dfc0dec5fe74e.def("classof_kind", method_pointer_7c23f58f6b59552a8401fbe90c98b36c, "");
    class_2c0e35bd45075f9c8d8dfc0dec5fe74e.def("cast_to_decl_context", method_pointer_176e548cecf25eac8b3a2fba8df60d4d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_2c0e35bd45075f9c8d8dfc0dec5fe74e.def("cast_from_decl_context", method_pointer_721300149021541b9a6d3b05c2704914, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_2c0e35bd45075f9c8d8dfc0dec5fe74e.staticmethod("classof_kind");
    class_2c0e35bd45075f9c8d8dfc0dec5fe74e.staticmethod("classof");
    class_2c0e35bd45075f9c8d8dfc0dec5fe74e.staticmethod("cast_from_decl_context");
    class_2c0e35bd45075f9c8d8dfc0dec5fe74e.staticmethod("cast_to_decl_context");

    if(autowig::Held< class ::clang::ExternCContextDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::ExternCContextDecl >::Type, autowig::Held< class ::clang::Decl >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::clang::ExternCContextDecl >::Type, autowig::Held< class ::clang::DeclContext >::Type >();
    }

}