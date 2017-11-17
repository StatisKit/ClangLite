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
    template <> class ::clang::DeclContext const volatile * get_pointer<class ::clang::DeclContext const volatile >(class ::clang::DeclContext const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_b97237ef74ad5566bc5ae85fdde5a9b6()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    enum ::clang::Decl::Kind  (::clang::DeclContext::*method_pointer_28c24fdc140056a0b868244f21cfe876)() const = &::clang::DeclContext::getDeclKind;
    class ::clang::DeclContext * (::clang::DeclContext::*method_pointer_43ccc9c9ca885ac2b9d01bf0ce13c6ba)() = &::clang::DeclContext::getParent;
    class ::clang::DeclContext const * (::clang::DeclContext::*method_pointer_a8bd33c5a0c35c9d8c7f7dbee5a150d4)() const = &::clang::DeclContext::getParent;
    class ::clang::DeclContext * (::clang::DeclContext::*method_pointer_ad3342c5e59652a1810f13876474c71c)() = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext const * (::clang::DeclContext::*method_pointer_bf6352a704a453ab9747da20ed98a7ef)() const = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext * (::clang::DeclContext::*method_pointer_6eb9e90e04945afe9d0aff4930583974)() = &::clang::DeclContext::getLookupParent;
    class ::clang::DeclContext const * (::clang::DeclContext::*method_pointer_5cf289bd6dd15670ac8b98ec479f3460)() const = &::clang::DeclContext::getLookupParent;
    class ::clang::ASTContext & (::clang::DeclContext::*method_pointer_51c0154e0e1a52b8aaf13c194a57ded6)() const = &::clang::DeclContext::getParentASTContext;
    bool  (::clang::DeclContext::*method_pointer_779387bd412f5d01815abd9b9d5b1683)() const = &::clang::DeclContext::isClosure;
    bool  (::clang::DeclContext::*method_pointer_41aa2e34744f5f56a92984e6cd392253)() const = &::clang::DeclContext::isObjCContainer;
    bool  (::clang::DeclContext::*method_pointer_ff8e73fae6aa589eb56ba979262c1612)() const = &::clang::DeclContext::isFunctionOrMethod;
    bool  (::clang::DeclContext::*method_pointer_5459a4c216395259ae4b79f336d44195)() const = &::clang::DeclContext::isLookupContext;
    bool  (::clang::DeclContext::*method_pointer_467e9a5b008c5815aad645739d0ecf78)() const = &::clang::DeclContext::isFileContext;
    bool  (::clang::DeclContext::*method_pointer_c60d4a6a11e655fd97c843f72abc1a4a)() const = &::clang::DeclContext::isTranslationUnit;
    bool  (::clang::DeclContext::*method_pointer_89ff34f91372570eae634f087d0554be)() const = &::clang::DeclContext::isRecord;
    bool  (::clang::DeclContext::*method_pointer_57e12f6c1f915b559fcbfb9afd5f7246)() const = &::clang::DeclContext::isNamespace;
    bool  (::clang::DeclContext::*method_pointer_8e288f3e932e594ebf7833cb9ca444e7)() const = &::clang::DeclContext::isStdNamespace;
    bool  (::clang::DeclContext::*method_pointer_93145153a93d5744abd915b045e5b1f1)() const = &::clang::DeclContext::isInlineNamespace;
    bool  (::clang::DeclContext::*method_pointer_b590e5bbd0005ecaafba5cd695539a7c)() const = &::clang::DeclContext::isDependentContext;
    bool  (::clang::DeclContext::*method_pointer_8c0b12d9bb525559bfe9b3e88a4657af)() const = &::clang::DeclContext::isTransparentContext;
    bool  (::clang::DeclContext::*method_pointer_9bef7cd06cd5539bbcf8ed4fa3ff79a7)() const = &::clang::DeclContext::isExternCContext;
    class ::clang::LinkageSpecDecl const * (::clang::DeclContext::*method_pointer_69213aeec039585a900d8b1c0eae4f10)() const = &::clang::DeclContext::getExternCContext;
    bool  (::clang::DeclContext::*method_pointer_03979321febe5b1983b40ff39a1e8431)() const = &::clang::DeclContext::isExternCXXContext;
    bool  (::clang::DeclContext::*method_pointer_2e70bb8474e8598c8dcd4f95374ee6a4)(class ::clang::DeclContext const *) const = &::clang::DeclContext::Equals;
    bool  (::clang::DeclContext::*method_pointer_e6861d98b4095c1aac8cd95ee50e89b7)(class ::clang::DeclContext const *) const = &::clang::DeclContext::Encloses;
    class ::clang::Decl * (::clang::DeclContext::*method_pointer_fc3ef3b589cf59adb30e0b32e0e0c6ee)() = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::Decl const * (::clang::DeclContext::*method_pointer_c41633e25df25c69b30fb736cf6a6726)() const = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::DeclContext * (::clang::DeclContext::*method_pointer_87ee69f18f205e81b1bcf4c82cfebd89)() = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext const * (::clang::DeclContext::*method_pointer_79f3559aabd35678b567322f14e60e44)() const = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext * (::clang::DeclContext::*method_pointer_793a1c590ab85137bc818335b12d9a36)() = &::clang::DeclContext::getRedeclContext;
    class ::clang::DeclContext const * (::clang::DeclContext::*method_pointer_9077739098fc5e5fa5fcd99dc2b9372d)() const = &::clang::DeclContext::getRedeclContext;
    class ::clang::DeclContext * (::clang::DeclContext::*method_pointer_3f4349c6ca9555eaa7a21ce3912f4061)() = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext const * (::clang::DeclContext::*method_pointer_6cb74f7a0406533d955a81eb5edb2c14)() const = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::RecordDecl * (::clang::DeclContext::*method_pointer_8f817c0a2a665ba5b91a8d385d2723b2)() = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::RecordDecl const * (::clang::DeclContext::*method_pointer_cc2bd58923a05a4887356f9682272398)() const = &::clang::DeclContext::getOuterLexicalRecordContext;
    bool  (::clang::DeclContext::*method_pointer_f7817d3dcec2515e9e55ff0502f9f333)(class ::clang::DeclContext const *) const = &::clang::DeclContext::InEnclosingNamespaceSetOf;
    bool  (::clang::DeclContext::*method_pointer_a822cbf522e055cdb3b62ecac24f3497)() const = &::clang::DeclContext::decls_empty;
    void  (::clang::DeclContext::*method_pointer_9473e385edbc51e5b0ae2c1013dbb8c5)(class ::clang::Decl *) = &::clang::DeclContext::addDecl;
    void  (::clang::DeclContext::*method_pointer_2125240f35e55864bb2c8267ef9e0b62)(class ::clang::Decl *) = &::clang::DeclContext::addDeclInternal;
    void  (::clang::DeclContext::*method_pointer_7ccfd2f4cc555a2fb3356360a1c543e7)(class ::clang::Decl *) = &::clang::DeclContext::addHiddenDecl;
    void  (::clang::DeclContext::*method_pointer_9e30eaaa2d1e54e89ea4a8b63758d3ce)(class ::clang::Decl *) = &::clang::DeclContext::removeDecl;
    bool  (::clang::DeclContext::*method_pointer_41f39def3d99599181c470f9b02206f9)(class ::clang::Decl *) const = &::clang::DeclContext::containsDecl;
    void  (::clang::DeclContext::*method_pointer_806d796076b45be5acb32c74b8dcf675)(class ::clang::NamedDecl *) = &::clang::DeclContext::makeDeclVisibleInContext;
    void  (::clang::DeclContext::*method_pointer_c63b13feb79b507b8dfb9d4626a116bf)() = &::clang::DeclContext::setMustBuildLookupTable;
    bool  (::clang::DeclContext::*method_pointer_8005397db2e0525ab9036b7c24b487b1)() const = &::clang::DeclContext::hasExternalLexicalStorage;
    void  (::clang::DeclContext::*method_pointer_94573b3de7b45c649a5675cf70e0f9ed)(bool ) = &::clang::DeclContext::setHasExternalLexicalStorage;
    bool  (::clang::DeclContext::*method_pointer_c827dac5eb0055e7b5ea7d0be746ef9c)() const = &::clang::DeclContext::hasExternalVisibleStorage;
    void  (::clang::DeclContext::*method_pointer_fa608a26a2fe5a22b83737eacff3ba71)(bool ) = &::clang::DeclContext::setHasExternalVisibleStorage;
    bool  (::clang::DeclContext::*method_pointer_38e20efe603752688e87d80bd1dcbc02)(class ::clang::Decl const *) const = &::clang::DeclContext::isDeclInLexicalTraversal;
    bool  (::clang::DeclContext::*method_pointer_ef7554be94f45bbdb039139025e89680)(bool ) = &::clang::DeclContext::setUseQualifiedLookup;
    bool  (::clang::DeclContext::*method_pointer_aae65797a93157c2a019e4fe88484797)() const = &::clang::DeclContext::shouldUseQualifiedLookup;
    bool  (*method_pointer_4533db9809cf5c26a8ae67ba251dd361)(class ::clang::Decl const *) = ::clang::DeclContext::classof;
    bool  (*method_pointer_087c6fc3b75e5f48901abdda8b340374)(class ::clang::DeclContext const *) = ::clang::DeclContext::classof;
    void  (::clang::DeclContext::*method_pointer_3bac27b9e0b150bb82b23903f60371aa)() const = &::clang::DeclContext::dumpDeclContext;
    void  (::clang::DeclContext::*method_pointer_e2e0e643137b5163a6888ed2dd63ffdb)() const = &::clang::DeclContext::dumpLookups;
    struct function_group
    {
        static class ::boost::python::list  function_2918fad8c2ff5268b6d763ec72d2dbff(class ::clang::DeclContext & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
        static class ::clang::TranslationUnitDecl * function_a4fd994e51fd58818507ad61d92d875a(class ::clang::DeclContext * parameter_0)
        { return ::clanglite::as_translation_unit(parameter_0); }
        static class ::clang::NamespaceDecl * function_2a86b0e3c9625c72b24b6ab56afb8000(class ::clang::DeclContext * parameter_0)
        { return ::clanglite::as_namespace(parameter_0); }
        static class ::clang::RecordDecl * function_e8c5d7782e8b5cfab870044661d2bc9b(class ::clang::DeclContext * parameter_0)
        { return ::clanglite::as_record(parameter_0); }
        static class ::clang::EnumDecl * function_cf5f5e5e745153b88255965b3ae2b2f7(class ::clang::DeclContext * parameter_0)
        { return ::clanglite::as_enum(parameter_0); }
    };
    boost::python::class_< class ::clang::DeclContext, autowig::Held< class ::clang::DeclContext >::Type > class_b97237ef74ad5566bc5ae85fdde5a9b6("DeclContext", "", boost::python::no_init);
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def(boost::python::init< class ::clang::DeclContext const & >(""));
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_decl_kind", method_pointer_28c24fdc140056a0b868244f21cfe876, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_43ccc9c9ca885ac2b9d01bf0ce13c6ba, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.DeclContext`\n\n");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_a8bd33c5a0c35c9d8c7f7dbee5a150d4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_ad3342c5e59652a1810f13876474c71c, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.DeclContext`\n\n");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_bf6352a704a453ab9747da20ed98a7ef, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_6eb9e90e04945afe9d0aff4930583974, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_5cf289bd6dd15670ac8b98ec479f3460, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent_ast_context", method_pointer_51c0154e0e1a52b8aaf13c194a57ded6, boost::python::return_internal_reference<>(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_closure", method_pointer_779387bd412f5d01815abd9b9d5b1683, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_obj_c_container", method_pointer_41aa2e34744f5f56a92984e6cd392253, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_function_or_method", method_pointer_ff8e73fae6aa589eb56ba979262c1612, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_lookup_context", method_pointer_5459a4c216395259ae4b79f336d44195, "Test whether the context supports looking up names.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_file_context", method_pointer_467e9a5b008c5815aad645739d0ecf78, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_translation_unit", method_pointer_c60d4a6a11e655fd97c843f72abc1a4a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_record", method_pointer_89ff34f91372570eae634f087d0554be, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_namespace", method_pointer_57e12f6c1f915b559fcbfb9afd5f7246, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_std_namespace", method_pointer_8e288f3e932e594ebf7833cb9ca444e7, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_inline_namespace", method_pointer_93145153a93d5744abd915b045e5b1f1, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_dependent_context", method_pointer_b590e5bbd0005ecaafba5cd695539a7c, "Determines whether this context is dependent on a template parameter.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_transparent_context", method_pointer_8c0b12d9bb525559bfe9b3e88a4657af, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_c_context", method_pointer_9bef7cd06cd5539bbcf8ed4fa3ff79a7, "Determines whether this context or some of its ancestors is a linkage\nspecification context that specifies C linkage.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_extern_c_context", method_pointer_69213aeec039585a900d8b1c0eae4f10, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieve the nearest enclosing C linkage specification context.\n\n:Return Type:\n    :py:class:`clanglite.clang.LinkageSpecDecl`\n\n");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_cxx_context", method_pointer_03979321febe5b1983b40ff39a1e8431, "Determines whether this context or some of its ancestors is a linkage\nspecification context that specifies C++ linkage.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("equals", method_pointer_2e70bb8474e8598c8dcd4f95374ee6a4, "Determine whether this declaration context is equivalent to the\ndeclaration context DC.\n\n:Parameter:\n    `DC` (:py:class:`clanglite.clang.DeclContext`) - Undocumented\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("encloses", method_pointer_e6861d98b4095c1aac8cd95ee50e89b7, "Determine whether this declaration context encloses the declaration\ncontext DC.\n\n:Parameter:\n    `DC` (:py:class:`clanglite.clang.DeclContext`) - Undocumented\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_fc3ef3b589cf59adb30e0b32e0e0c6ee, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Find the nearest non-closure ancestor of this context, i.e. the\ninnermost semantic parent of this context which is not a closure. A\ncontext may be its own non-closure ancestor.\n\n:Return Type:\n    :py:class:`clanglite.clang.Decl`\n\n");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_c41633e25df25c69b30fb736cf6a6726, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_87ee69f18f205e81b1bcf4c82cfebd89, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.DeclContext`\n\n");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_79f3559aabd35678b567322f14e60e44, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_793a1c590ab85137bc818335b12d9a36, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.DeclContext`\n\n");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_9077739098fc5e5fa5fcd99dc2b9372d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_3f4349c6ca9555eaa7a21ce3912f4061, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieve the nearest enclosing namespace context.\n\n:Return Type:\n    :py:class:`clanglite.clang.DeclContext`\n\n");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_6cb74f7a0406533d955a81eb5edb2c14, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_8f817c0a2a665ba5b91a8d385d2723b2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieve the outermost lexically enclosing record context.\n\n:Return Type:\n    :py:class:`clanglite.clang.RecordDecl`\n\n");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_cc2bd58923a05a4887356f9682272398, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("in_enclosing_namespace_set_of", method_pointer_f7817d3dcec2515e9e55ff0502f9f333, "Test if this context is part of the enclosing namespace set of the\ncontext NS, as defined in C++0x [namespace.def]p9. If either context\nisn't a namespace, this is equivalent to Equals().\n\nThe enclosing namespace set of a namespace is the namespace and, if it\nis inline, its enclosing namespace, recursively.\n\n:Parameter:\n    `NS` (:py:class:`clanglite.clang.DeclContext`) - Undocumented\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("decls_empty", method_pointer_a822cbf522e055cdb3b62ecac24f3497, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl", method_pointer_9473e385edbc51e5b0ae2c1013dbb8c5, ":Parameter:\n    `D` (:py:class:`clanglite.clang.Decl`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl_internal", method_pointer_2125240f35e55864bb2c8267ef9e0b62, ":Parameter:\n    `D` (:py:class:`clanglite.clang.Decl`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_hidden_decl", method_pointer_7ccfd2f4cc555a2fb3356360a1c543e7, ":Parameter:\n    `D` (:py:class:`clanglite.clang.Decl`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("remove_decl", method_pointer_9e30eaaa2d1e54e89ea4a8b63758d3ce, ":Parameter:\n    `D` (:py:class:`clanglite.clang.Decl`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("contains_decl", method_pointer_41f39def3d99599181c470f9b02206f9, ":Parameter:\n    `D` (:py:class:`clanglite.clang.Decl`) - Undocumented\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("make_decl_visible_in_context", method_pointer_806d796076b45be5acb32c74b8dcf675, ":Parameter:\n    `D` (:py:class:`clanglite.clang.NamedDecl`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_must_build_lookup_table", method_pointer_c63b13feb79b507b8dfb9d4626a116bf, "Mark that there are external lexical declarations that we need to\ninclude in our lookup table (and that are not available as external\nvisible lookups). These extra lookup results will be found by walking\nthe lexical declarations of this context. This should be used only if\nsetHasExternalLexicalStorage() has been called on any decl context for\nwhich this is the primary context.\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_lexical_storage", method_pointer_8005397db2e0525ab9036b7c24b487b1, "Whether this DeclContext has external storage containing additional\ndeclarations that are lexically in this context.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_lexical_storage", method_pointer_94573b3de7b45c649a5675cf70e0f9ed, "State whether this DeclContext has external storage for declarations\nlexically in this context.\n\n:Parameter:\n    `ES` (:cpp:any:`bool`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_visible_storage", method_pointer_c827dac5eb0055e7b5ea7d0be746ef9c, "Whether this DeclContext has external storage containing additional\ndeclarations that are visible in this context.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_visible_storage", method_pointer_fa608a26a2fe5a22b83737eacff3ba71, "State whether this DeclContext has external storage for declarations\nvisible in this context.\n\n:Parameter:\n    `ES` (:cpp:any:`bool`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_decl_in_lexical_traversal", method_pointer_38e20efe603752688e87d80bd1dcbc02, "Determine whether the given declaration is stored in the list of\ndeclarations lexically within this context.\n\n:Parameter:\n    `D` (:py:class:`clanglite.clang.Decl`) - Undocumented\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_use_qualified_lookup", method_pointer_ef7554be94f45bbdb039139025e89680, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("should_use_qualified_lookup", method_pointer_aae65797a93157c2a019e4fe88484797, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_4533db9809cf5c26a8ae67ba251dd361, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_087c6fc3b75e5f48901abdda8b340374, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_decl_context", method_pointer_3bac27b9e0b150bb82b23903f60371aa, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_lookups", method_pointer_e2e0e643137b5163a6888ed2dd63ffdb, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.staticmethod("classof");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_children", function_group::function_2918fad8c2ff5268b6d763ec72d2dbff, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_translation_unit", function_group::function_a4fd994e51fd58818507ad61d92d875a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_namespace", function_group::function_2a86b0e3c9625c72b24b6ab56afb8000, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_record", function_group::function_e8c5d7782e8b5cfab870044661d2bc9b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_enum", function_group::function_cf5f5e5e745153b88255965b3ae2b2f7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

}