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
    template <> class ::clang::NamespaceDecl const volatile * get_pointer<class ::clang::NamespaceDecl const volatile >(class ::clang::NamespaceDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_9a20f9773af45c788737982cd20471fd()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::NamespaceDecl * (*method_pointer_1fd7c1c422d55f8b81d9aacb35c7ba68)(class ::clang::ASTContext &, unsigned int ) = ::clang::NamespaceDecl::CreateDeserialized;
    bool  (::clang::NamespaceDecl::*method_pointer_19a9ca550ec45548acceb460e451b4f5)() const = &::clang::NamespaceDecl::isAnonymousNamespace;
    bool  (::clang::NamespaceDecl::*method_pointer_1c18df3342d25bb8b5bc6e2bc5a7aa7b)() const = &::clang::NamespaceDecl::isInline;
    void  (::clang::NamespaceDecl::*method_pointer_3b6c428dd7c75d54b6c1005942162131)(bool ) = &::clang::NamespaceDecl::setInline;
    class ::clang::NamespaceDecl * (::clang::NamespaceDecl::*method_pointer_a95339b7cdb55da98fe28707d81d1d5c)() = &::clang::NamespaceDecl::getOriginalNamespace;
    class ::clang::NamespaceDecl const * (::clang::NamespaceDecl::*method_pointer_348cb33819525f16a4169e53b103a46d)() const = &::clang::NamespaceDecl::getOriginalNamespace;
    bool  (::clang::NamespaceDecl::*method_pointer_030f806421e85597abf304f6cf359769)() const = &::clang::NamespaceDecl::isOriginalNamespace;
    class ::clang::NamespaceDecl * (::clang::NamespaceDecl::*method_pointer_d7bd83e29ac458088c13046e07ceeffe)() const = &::clang::NamespaceDecl::getAnonymousNamespace;
    void  (::clang::NamespaceDecl::*method_pointer_c2bd8b704c3358f98a33a01c2b6fc667)(class ::clang::NamespaceDecl *) = &::clang::NamespaceDecl::setAnonymousNamespace;
    class ::clang::NamespaceDecl * (::clang::NamespaceDecl::*method_pointer_a3297f7a88bb531ab04c6af767cbf4fb)() = &::clang::NamespaceDecl::getCanonicalDecl;
    class ::clang::NamespaceDecl const * (::clang::NamespaceDecl::*method_pointer_17bef617bbf05aec9a17f3b09be5931b)() const = &::clang::NamespaceDecl::getCanonicalDecl;
    class ::clang::SourceLocation  (::clang::NamespaceDecl::*method_pointer_02d87028a8d15e69a954d974096613c3)() const = &::clang::NamespaceDecl::getLocStart;
    class ::clang::SourceLocation  (::clang::NamespaceDecl::*method_pointer_9aa8e21626bc55d7b3d8eb9b1f1be8db)() const = &::clang::NamespaceDecl::getRBraceLoc;
    void  (::clang::NamespaceDecl::*method_pointer_6e84dbcae4de5f82937cde987b775291)(class ::clang::SourceLocation ) = &::clang::NamespaceDecl::setLocStart;
    void  (::clang::NamespaceDecl::*method_pointer_b381ddd942e15a74b7faa2c16a4cef75)(class ::clang::SourceLocation ) = &::clang::NamespaceDecl::setRBraceLoc;
    bool  (*method_pointer_b3da6b6893c756428fe606df4bc91630)(class ::clang::Decl const *) = ::clang::NamespaceDecl::classof;
    bool  (*method_pointer_99417e0748bd590d8f82ab4cb81c4003)(enum ::clang::Decl::Kind ) = ::clang::NamespaceDecl::classofKind;
    class ::clang::DeclContext * (*method_pointer_6b2fc75bb7af5c53b00e47cc0612b57d)(class ::clang::NamespaceDecl const *) = ::clang::NamespaceDecl::castToDeclContext;
    class ::clang::NamespaceDecl * (*method_pointer_fa71452dc9e75467ae8e92c9a071d970)(class ::clang::DeclContext const *) = ::clang::NamespaceDecl::castFromDeclContext;
    boost::python::class_< class ::clang::NamespaceDecl, autowig::Held< class ::clang::NamespaceDecl >::Type, boost::python::bases< class ::clang::NamedDecl, class ::clang::DeclContext >, boost::noncopyable > class_9a20f9773af45c788737982cd20471fd("NamespaceDecl", "", boost::python::no_init);
    class_9a20f9773af45c788737982cd20471fd.def("create_deserialized", method_pointer_1fd7c1c422d55f8b81d9aacb35c7ba68, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("is_anonymous_namespace", method_pointer_19a9ca550ec45548acceb460e451b4f5, "Returns true if this is an anonymous namespace declaration.\n\nFor example:\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_9a20f9773af45c788737982cd20471fd.def("is_inline", method_pointer_1c18df3342d25bb8b5bc6e2bc5a7aa7b, "Returns true if this is an inline namespace declaration.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_9a20f9773af45c788737982cd20471fd.def("set_inline", method_pointer_3b6c428dd7c75d54b6c1005942162131, "Set whether this is an inline namespace declaration.\n\n:Parameter:\n    `Inline` (:cpp:any:`bool`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_9a20f9773af45c788737982cd20471fd.def("get_original_namespace", method_pointer_a95339b7cdb55da98fe28707d81d1d5c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Get the original (first) namespace declaration.\n\n:Return Type:\n    :py:class:`clanglite.clang.NamespaceDecl`\n\n");
    class_9a20f9773af45c788737982cd20471fd.def("get_original_namespace", method_pointer_348cb33819525f16a4169e53b103a46d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Get the original (first) namespace declaration.\n\n:Return Type:\n    :py:class:`clanglite.clang.NamespaceDecl`\n\n");
    class_9a20f9773af45c788737982cd20471fd.def("is_original_namespace", method_pointer_030f806421e85597abf304f6cf359769, "Return true if this declaration is an original (first) declaration of\nthe namespace. This is false for non-original (subsequent) namespace\ndeclarations and anonymous namespaces.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_9a20f9773af45c788737982cd20471fd.def("get_anonymous_namespace", method_pointer_d7bd83e29ac458088c13046e07ceeffe, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieve the anonymous namespace nested inside this namespace, if any.\n\n:Return Type:\n    :py:class:`clanglite.clang.NamespaceDecl`\n\n");
    class_9a20f9773af45c788737982cd20471fd.def("set_anonymous_namespace", method_pointer_c2bd8b704c3358f98a33a01c2b6fc667, "");
    class_9a20f9773af45c788737982cd20471fd.def("get_canonical_decl", method_pointer_a3297f7a88bb531ab04c6af767cbf4fb, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.NamespaceDecl`\n\n");
    class_9a20f9773af45c788737982cd20471fd.def("get_canonical_decl", method_pointer_17bef617bbf05aec9a17f3b09be5931b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_loc_start", method_pointer_02d87028a8d15e69a954d974096613c3, "");
    class_9a20f9773af45c788737982cd20471fd.def("get_r_brace_loc", method_pointer_9aa8e21626bc55d7b3d8eb9b1f1be8db, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_loc_start", method_pointer_6e84dbcae4de5f82937cde987b775291, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_r_brace_loc", method_pointer_b381ddd942e15a74b7faa2c16a4cef75, "");
    class_9a20f9773af45c788737982cd20471fd.def("classof", method_pointer_b3da6b6893c756428fe606df4bc91630, "");
    class_9a20f9773af45c788737982cd20471fd.def("classof_kind", method_pointer_99417e0748bd590d8f82ab4cb81c4003, "");
    class_9a20f9773af45c788737982cd20471fd.def("cast_to_decl_context", method_pointer_6b2fc75bb7af5c53b00e47cc0612b57d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("cast_from_decl_context", method_pointer_fa71452dc9e75467ae8e92c9a071d970, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.staticmethod("classof_kind");
    class_9a20f9773af45c788737982cd20471fd.staticmethod("create_deserialized");
    class_9a20f9773af45c788737982cd20471fd.staticmethod("classof");
    class_9a20f9773af45c788737982cd20471fd.staticmethod("cast_from_decl_context");
    class_9a20f9773af45c788737982cd20471fd.staticmethod("cast_to_decl_context");

    if(autowig::Held< class ::clang::NamespaceDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::NamespaceDecl >::Type, autowig::Held< class ::clang::NamedDecl >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::clang::NamespaceDecl >::Type, autowig::Held< class ::clang::DeclContext >::Type >();
    }

}