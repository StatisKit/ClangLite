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
    template <> class ::clang::TemplateDecl const volatile * get_pointer<class ::clang::TemplateDecl const volatile >(class ::clang::TemplateDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_6ad42784eaff547697796c119fd8c30f()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::NamedDecl * (::clang::TemplateDecl::*method_pointer_8e923e09f8d85043871ed4c79c6f3285)() const = &::clang::TemplateDecl::getTemplatedDecl;
    bool  (*method_pointer_82cedffb8c6f5b63aa9c7e1fab902e70)(class ::clang::Decl const *) = ::clang::TemplateDecl::classof;
    bool  (*method_pointer_30e71c321ace5ff8975bf710816334b8)(enum ::clang::Decl::Kind ) = ::clang::TemplateDecl::classofKind;
    bool  (::clang::TemplateDecl::*method_pointer_38cefaeeea8859c0ad8032b409a12ae6)() const = &::clang::TemplateDecl::isConcept;
    void  (::clang::TemplateDecl::*method_pointer_48fa123fd5f556f2b8d8305debb15cc6)() = &::clang::TemplateDecl::setConcept;
    boost::python::class_< class ::clang::TemplateDecl, autowig::Held< class ::clang::TemplateDecl >::Type, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_6ad42784eaff547697796c119fd8c30f("TemplateDecl", "The base class of all kinds of template declarations (e.g., class,\nfunction, etc.).\n\nThe TemplateDecl class stores the list of template parameters and a\nreference to the templated scoped declaration: the underlying AST node.\n\n", boost::python::no_init);
    class_6ad42784eaff547697796c119fd8c30f.def("get_templated_decl", method_pointer_8e923e09f8d85043871ed4c79c6f3285, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.NamedDecl`\n\n");
    class_6ad42784eaff547697796c119fd8c30f.def("classof", method_pointer_82cedffb8c6f5b63aa9c7e1fab902e70, "");
    class_6ad42784eaff547697796c119fd8c30f.def("classof_kind", method_pointer_30e71c321ace5ff8975bf710816334b8, "");
    class_6ad42784eaff547697796c119fd8c30f.def("is_concept", method_pointer_38cefaeeea8859c0ad8032b409a12ae6, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_6ad42784eaff547697796c119fd8c30f.def("set_concept", method_pointer_48fa123fd5f556f2b8d8305debb15cc6, "");
    class_6ad42784eaff547697796c119fd8c30f.staticmethod("classof_kind");
    class_6ad42784eaff547697796c119fd8c30f.staticmethod("classof");

    if(autowig::Held< class ::clang::TemplateDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::TemplateDecl >::Type, autowig::Held< class ::clang::NamedDecl >::Type >();
    }

}