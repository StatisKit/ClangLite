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
    template <> class ::clang::TypeAliasTemplateDecl const volatile * get_pointer<class ::clang::TypeAliasTemplateDecl const volatile >(class ::clang::TypeAliasTemplateDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_19f2e9be2a19546ea2b5c16dcb943e36()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TypeAliasDecl * (::clang::TypeAliasTemplateDecl::*method_pointer_92f0c5703a845875830a32e9a9cdbdf0)() const = &::clang::TypeAliasTemplateDecl::getTemplatedDecl;
    class ::clang::TypeAliasTemplateDecl * (::clang::TypeAliasTemplateDecl::*method_pointer_19e38818e5995c98a503a6e06eef670c)() = &::clang::TypeAliasTemplateDecl::getCanonicalDecl;
    class ::clang::TypeAliasTemplateDecl const * (::clang::TypeAliasTemplateDecl::*method_pointer_51bc98d4e5b751dc9d4f277c7119c336)() const = &::clang::TypeAliasTemplateDecl::getCanonicalDecl;
    class ::clang::TypeAliasTemplateDecl * (::clang::TypeAliasTemplateDecl::*method_pointer_9b4f829df9695f04966c3579c8f91c44)() = &::clang::TypeAliasTemplateDecl::getPreviousDecl;
    class ::clang::TypeAliasTemplateDecl const * (::clang::TypeAliasTemplateDecl::*method_pointer_08da488b26c25ed19152c194de98fea2)() const = &::clang::TypeAliasTemplateDecl::getPreviousDecl;
    class ::clang::TypeAliasTemplateDecl * (::clang::TypeAliasTemplateDecl::*method_pointer_21212176034c501cbf2236dbc37612aa)() const = &::clang::TypeAliasTemplateDecl::getInstantiatedFromMemberTemplate;
    class ::clang::TypeAliasTemplateDecl * (*method_pointer_21f40cbf27c3543c841f243e1b77ee11)(class ::clang::ASTContext &, unsigned int ) = ::clang::TypeAliasTemplateDecl::CreateDeserialized;
    bool  (*method_pointer_f308a8e811215c80a130624632513b04)(class ::clang::Decl const *) = ::clang::TypeAliasTemplateDecl::classof;
    bool  (*method_pointer_9364c7fed91c5b769f6378f3d4e0391a)(enum ::clang::Decl::Kind ) = ::clang::TypeAliasTemplateDecl::classofKind;
    boost::python::class_< class ::clang::TypeAliasTemplateDecl, autowig::Held< class ::clang::TypeAliasTemplateDecl >::Type, boost::python::bases< class ::clang::RedeclarableTemplateDecl >, boost::noncopyable > class_19f2e9be2a19546ea2b5c16dcb943e36("TypeAliasTemplateDecl", "Declaration of an alias template.\n\nFor example:\n\n", boost::python::no_init);
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_templated_decl", method_pointer_92f0c5703a845875830a32e9a9cdbdf0, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.TypeAliasDecl`\n\n");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_canonical_decl", method_pointer_19e38818e5995c98a503a6e06eef670c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_canonical_decl", method_pointer_51bc98d4e5b751dc9d4f277c7119c336, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_previous_decl", method_pointer_9b4f829df9695f04966c3579c8f91c44, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieve the previous declaration of this function template, or NULL if\nno such declaration exists.\n\n:Return Type:\n    :py:class:`clanglite.clang.TypeAliasTemplateDecl`\n\n");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_previous_decl", method_pointer_08da488b26c25ed19152c194de98fea2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieve the previous declaration of this function template, or NULL if\nno such declaration exists.\n\n:Return Type:\n    :py:class:`clanglite.clang.TypeAliasTemplateDecl`\n\n");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("get_instantiated_from_member_template", method_pointer_21212176034c501cbf2236dbc37612aa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("create_deserialized", method_pointer_21f40cbf27c3543c841f243e1b77ee11, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Create an empty alias template node.\n\n:Parameters:\n  - `C` (:py:class:`clanglite.clang.ASTContext`) - Undocumented\n  - `ID` (:cpp:any:`unsigned` int) - Undocumented\n\n:Return Type:\n    :py:class:`clanglite.clang.TypeAliasTemplateDecl`\n\n");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("classof", method_pointer_f308a8e811215c80a130624632513b04, "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.def("classof_kind", method_pointer_9364c7fed91c5b769f6378f3d4e0391a, "");
    class_19f2e9be2a19546ea2b5c16dcb943e36.staticmethod("classof_kind");
    class_19f2e9be2a19546ea2b5c16dcb943e36.staticmethod("create_deserialized");
    class_19f2e9be2a19546ea2b5c16dcb943e36.staticmethod("classof");

    if(autowig::Held< class ::clang::TypeAliasTemplateDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::TypeAliasTemplateDecl >::Type, autowig::Held< class ::clang::RedeclarableTemplateDecl >::Type >();
    }

}