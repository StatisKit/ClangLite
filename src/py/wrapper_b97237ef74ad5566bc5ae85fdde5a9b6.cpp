#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_b97237ef74ad5566bc5ae85fdde5a9b6()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::DeclContext::*method_pointer_033815f3939659b2932d64984f20404d)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Encloses;
    bool  (::clang::DeclContext::*method_pointer_7231bce2ebf35c24b87eaac4e8c44e56)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Equals;
    bool  (::clang::DeclContext::*method_pointer_4bc6eed566af59b1978f7c8772498f07)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::InEnclosingNamespaceSetOf;
    void  (::clang::DeclContext::*method_pointer_44fa8d854d795edbb28bdacfe8e53f6d)(class ::clang::Decl  *) = &::clang::DeclContext::addDecl;
    void  (::clang::DeclContext::*method_pointer_2080d94b3c315021a5830bc28b8399ff)(class ::clang::Decl  *) = &::clang::DeclContext::addDeclInternal;
    void  (::clang::DeclContext::*method_pointer_82bf9d5086ee56e6ab679c5468bb36da)(class ::clang::Decl  *) = &::clang::DeclContext::addHiddenDecl;
    bool  (*method_pointer_0146586a842b5d85bb768eae9ba61864)(class ::clang::DeclContext  const *) = ::clang::DeclContext::classof;
    bool  (*method_pointer_abb57da43e9854cfb9e4c9f3bb137c7a)(class ::clang::Decl  const *) = ::clang::DeclContext::classof;
    bool  (::clang::DeclContext::*method_pointer_3727761a07b65a73b1fc62d6e9573309)(class ::clang::Decl  *) const = &::clang::DeclContext::containsDecl;
    bool  (::clang::DeclContext::*method_pointer_10db52ed5205506d9fad21dbfc6ae416)() const = &::clang::DeclContext::decls_empty;
    void  (::clang::DeclContext::*method_pointer_873dc50902d35ebfa03518df579b819b)() const = &::clang::DeclContext::dumpDeclContext;
    void  (::clang::DeclContext::*method_pointer_a6009237c09d5e7fa133e433de39aac7)() const = &::clang::DeclContext::dumpLookups;
    enum ::clang::Decl::Kind  (::clang::DeclContext::*method_pointer_ad9f625e40a75724999ab5224066752e)() const = &::clang::DeclContext::getDeclKind;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_f8ae32450f8158b9a17a10ea4071d942)() = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_741f497d0d0650ccba83bab9ff1143d5)() const = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_af30754150565fef9bc92d654f54f129)() const = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_a5f5b8773aba5e4a805bc20d1e8cb959)() = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_a71580f7119c5a90b2bbe3390b397788)() = &::clang::DeclContext::getLookupParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_cf5e59bdb3675f62a605af94fd738120)() const = &::clang::DeclContext::getLookupParent;
    class ::clang::Decl  * (::clang::DeclContext::*method_pointer_10c89c3ae5d051f8aeefad185ffe0e3b)() = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::Decl  const * (::clang::DeclContext::*method_pointer_367cf369149c5fbdbbe8758f458b2342)() const = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_42881a2adc205ba597b62a90d1d2a9ad)() const = &::clang::DeclContext::getParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_bd827584f1645e85bd096a0835965f66)() = &::clang::DeclContext::getParent;
    class ::clang::ASTContext  & (::clang::DeclContext::*method_pointer_f3acef7f3d575b8dbe62810716580e92)() const = &::clang::DeclContext::getParentASTContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_f676b3382c4b57ea9d614e5a503cbb6a)() const = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_94e1e771375b5db98bb56e8dce00bce4)() = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_2574979e6f1656ec85b9f04eb3a216ab)() const = &::clang::DeclContext::getRedeclContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_331cd6148f83576b9580068c77a7e71b)() = &::clang::DeclContext::getRedeclContext;
    bool  (::clang::DeclContext::*method_pointer_3dac57378faa55faaab2f34e7238be57)() const = &::clang::DeclContext::hasExternalLexicalStorage;
    bool  (::clang::DeclContext::*method_pointer_d805f484e8e359f68968a0387ad965c4)() const = &::clang::DeclContext::hasExternalVisibleStorage;
    bool  (::clang::DeclContext::*method_pointer_b6bfb4e3525e55ea9d412618332e21d9)() const = &::clang::DeclContext::isClosure;
    bool  (::clang::DeclContext::*method_pointer_580af69d7b765319ae1ee8b383978b84)(class ::clang::Decl  const *) const = &::clang::DeclContext::isDeclInLexicalTraversal;
    bool  (::clang::DeclContext::*method_pointer_3eb47ec39b165a08898d37a1ec6a1aa2)() const = &::clang::DeclContext::isDependentContext;
    bool  (::clang::DeclContext::*method_pointer_15566dd4e8a35a09ba321c9f70bc4a56)() const = &::clang::DeclContext::isExternCContext;
    bool  (::clang::DeclContext::*method_pointer_3d6cfe8fa80d56918436bb6ea85ce3fe)() const = &::clang::DeclContext::isExternCXXContext;
    bool  (::clang::DeclContext::*method_pointer_396d986760c3584f950401c16499deb4)() const = &::clang::DeclContext::isFileContext;
    bool  (::clang::DeclContext::*method_pointer_2f147ddf4dd95537b9199d77b084f452)() const = &::clang::DeclContext::isFunctionOrMethod;
    bool  (::clang::DeclContext::*method_pointer_da7d228466175a148bf552d2f493f497)() const = &::clang::DeclContext::isInlineNamespace;
    bool  (::clang::DeclContext::*method_pointer_5507115063a150ff92b5aa8ade5be51a)() const = &::clang::DeclContext::isLookupContext;
    bool  (::clang::DeclContext::*method_pointer_8d2a117db5065343b717d77035af6819)() const = &::clang::DeclContext::isNamespace;
    bool  (::clang::DeclContext::*method_pointer_7185470f86ac5dea91180f4e9a1cee42)() const = &::clang::DeclContext::isObjCContainer;
    bool  (::clang::DeclContext::*method_pointer_1e1d940f07a5529d9ef5675a76b4e1b9)() const = &::clang::DeclContext::isRecord;
    bool  (::clang::DeclContext::*method_pointer_5c258c6a5dc55be5a6002af9040fc7d5)() const = &::clang::DeclContext::isStdNamespace;
    bool  (::clang::DeclContext::*method_pointer_4a81e79bea01594f9a163671034cdae8)() const = &::clang::DeclContext::isTranslationUnit;
    bool  (::clang::DeclContext::*method_pointer_396a6364bfc15335883e09aacce62bcb)() const = &::clang::DeclContext::isTransparentContext;
    void  (::clang::DeclContext::*method_pointer_f09c4aea97a05986a384b0b1816dd7f6)(class ::clang::Decl  *) = &::clang::DeclContext::removeDecl;
    void  (::clang::DeclContext::*method_pointer_675fc7fc91865f7ea9bdb53cba6b3f80)(bool ) = &::clang::DeclContext::setHasExternalLexicalStorage;
    void  (::clang::DeclContext::*method_pointer_0bafc1d8459f5d26a91e6de766b5eab4)(bool ) = &::clang::DeclContext::setHasExternalVisibleStorage;
    void  (::clang::DeclContext::*method_pointer_8d97c5280ebd5f4790c2d3f0666f40e1)() = &::clang::DeclContext::setMustBuildLookupTable;
    bool  (::clang::DeclContext::*method_pointer_150ae782e9ce5461aad2f3f487c27089)(bool ) = &::clang::DeclContext::setUseQualifiedLookup;
    bool  (::clang::DeclContext::*method_pointer_3f74921b11b759d0bef7a30de8379446)() const = &::clang::DeclContext::shouldUseQualifiedLookup;
    struct function_group
    {
        static class ::boost::python::list  function_b2ebe3701527509a8bd412d2cc356b4f(class ::clang::DeclContext  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::DeclContext, autowig::HeldType< class ::clang::DeclContext >, boost::noncopyable > class_b97237ef74ad5566bc5ae85fdde5a9b6("DeclContext", "", boost::python::no_init);
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("encloses", method_pointer_033815f3939659b2932d64984f20404d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("equals", method_pointer_7231bce2ebf35c24b87eaac4e8c44e56, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("in_enclosing_namespace_set_of", method_pointer_4bc6eed566af59b1978f7c8772498f07, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl", method_pointer_44fa8d854d795edbb28bdacfe8e53f6d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl_internal", method_pointer_2080d94b3c315021a5830bc28b8399ff, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_hidden_decl", method_pointer_82bf9d5086ee56e6ab679c5468bb36da, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_0146586a842b5d85bb768eae9ba61864, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_abb57da43e9854cfb9e4c9f3bb137c7a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("contains_decl", method_pointer_3727761a07b65a73b1fc62d6e9573309, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("decls_empty", method_pointer_10db52ed5205506d9fad21dbfc6ae416, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_decl_context", method_pointer_873dc50902d35ebfa03518df579b819b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_lookups", method_pointer_a6009237c09d5e7fa133e433de39aac7, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_decl_kind", method_pointer_ad9f625e40a75724999ab5224066752e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_f8ae32450f8158b9a17a10ea4071d942, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_741f497d0d0650ccba83bab9ff1143d5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_af30754150565fef9bc92d654f54f129, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_a5f5b8773aba5e4a805bc20d1e8cb959, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_a71580f7119c5a90b2bbe3390b397788, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_cf5e59bdb3675f62a605af94fd738120, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_10c89c3ae5d051f8aeefad185ffe0e3b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_367cf369149c5fbdbbe8758f458b2342, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_42881a2adc205ba597b62a90d1d2a9ad, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_bd827584f1645e85bd096a0835965f66, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent_ast_context", method_pointer_f3acef7f3d575b8dbe62810716580e92, boost::python::return_internal_reference<>(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_f676b3382c4b57ea9d614e5a503cbb6a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_94e1e771375b5db98bb56e8dce00bce4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_2574979e6f1656ec85b9f04eb3a216ab, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_331cd6148f83576b9580068c77a7e71b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_lexical_storage", method_pointer_3dac57378faa55faaab2f34e7238be57, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_visible_storage", method_pointer_d805f484e8e359f68968a0387ad965c4, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_closure", method_pointer_b6bfb4e3525e55ea9d412618332e21d9, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_decl_in_lexical_traversal", method_pointer_580af69d7b765319ae1ee8b383978b84, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_dependent_context", method_pointer_3eb47ec39b165a08898d37a1ec6a1aa2, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_c_context", method_pointer_15566dd4e8a35a09ba321c9f70bc4a56, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_cxx_context", method_pointer_3d6cfe8fa80d56918436bb6ea85ce3fe, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_file_context", method_pointer_396d986760c3584f950401c16499deb4, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_function_or_method", method_pointer_2f147ddf4dd95537b9199d77b084f452, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_inline_namespace", method_pointer_da7d228466175a148bf552d2f493f497, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_lookup_context", method_pointer_5507115063a150ff92b5aa8ade5be51a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_namespace", method_pointer_8d2a117db5065343b717d77035af6819, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_obj_c_container", method_pointer_7185470f86ac5dea91180f4e9a1cee42, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_record", method_pointer_1e1d940f07a5529d9ef5675a76b4e1b9, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_std_namespace", method_pointer_5c258c6a5dc55be5a6002af9040fc7d5, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_translation_unit", method_pointer_4a81e79bea01594f9a163671034cdae8, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_transparent_context", method_pointer_396a6364bfc15335883e09aacce62bcb, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("remove_decl", method_pointer_f09c4aea97a05986a384b0b1816dd7f6, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_lexical_storage", method_pointer_675fc7fc91865f7ea9bdb53cba6b3f80, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_visible_storage", method_pointer_0bafc1d8459f5d26a91e6de766b5eab4, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_must_build_lookup_table", method_pointer_8d97c5280ebd5f4790c2d3f0666f40e1, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_use_qualified_lookup", method_pointer_150ae782e9ce5461aad2f3f487c27089, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("should_use_qualified_lookup", method_pointer_3f74921b11b759d0bef7a30de8379446, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.staticmethod("classof");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_children", function_group::function_b2ebe3701527509a8bd412d2cc356b4f, "");

}