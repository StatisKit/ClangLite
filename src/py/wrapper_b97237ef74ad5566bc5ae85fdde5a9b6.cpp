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
    bool  (::clang::DeclContext::*method_pointer_d4c06063af4e5b9498d5d3fbb18a8463)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Encloses;
    bool  (::clang::DeclContext::*method_pointer_a3f8670edf09538aab9507bac75da26f)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Equals;
    bool  (::clang::DeclContext::*method_pointer_4df0afe72b32570f80dbe28c679582b4)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::InEnclosingNamespaceSetOf;
    void  (::clang::DeclContext::*method_pointer_d6df2a93134c5afbb45b4077fb5372e7)(class ::clang::Decl  *) = &::clang::DeclContext::addDecl;
    void  (::clang::DeclContext::*method_pointer_7bcece87a27c5989955b9bdd179a34a2)(class ::clang::Decl  *) = &::clang::DeclContext::addDeclInternal;
    void  (::clang::DeclContext::*method_pointer_8151c2bb454954f3bd48c9e8167f945b)(class ::clang::Decl  *) = &::clang::DeclContext::addHiddenDecl;
    bool  (*method_pointer_3d66ee9343f855f0a95884d8ce575318)(class ::clang::DeclContext  const *) = ::clang::DeclContext::classof;
    bool  (*method_pointer_34b8419be358552da3002e3ac10420d4)(class ::clang::Decl  const *) = ::clang::DeclContext::classof;
    bool  (::clang::DeclContext::*method_pointer_80c4ff3e56ea53d0a946eaf16899cdb6)(class ::clang::Decl  *) const = &::clang::DeclContext::containsDecl;
    bool  (::clang::DeclContext::*method_pointer_9164daa55ada5a55a6a5ce8397fbe972)() const = &::clang::DeclContext::decls_empty;
    void  (::clang::DeclContext::*method_pointer_62cee4ae73fd5f3cafc3e80288fb765c)() const = &::clang::DeclContext::dumpDeclContext;
    void  (::clang::DeclContext::*method_pointer_c8f0f48d58305352b2175045df8f38ab)() const = &::clang::DeclContext::dumpLookups;
    enum ::clang::Decl::Kind  (::clang::DeclContext::*method_pointer_d801d4cd72d8589a80e46283844ad954)() const = &::clang::DeclContext::getDeclKind;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_ee9874111838582cb25b6a8ae8370429)() = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_18f590c044ef51439a364f9d21f56b99)() const = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_f4ce2b12d8db56838bc593befd8afb81)() const = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_da74fcdc8ad357b78a8743831230095c)() = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_05f0d8f38e7d599e9ae8b1650bae6b47)() const = &::clang::DeclContext::getLookupParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_aef4bf608fe853edb5f911407c1b9b5b)() = &::clang::DeclContext::getLookupParent;
    class ::clang::Decl  const * (::clang::DeclContext::*method_pointer_28892879db2b5facbe6cdaca8a3ad7c9)() const = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::Decl  * (::clang::DeclContext::*method_pointer_8bb293887eec5c2eb132c958a2b7cc69)() = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::RecordDecl  const * (::clang::DeclContext::*method_pointer_5c598781ca1e5eefae53ba3fa919055b)() const = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::RecordDecl  * (::clang::DeclContext::*method_pointer_d8565a301fa25f868f507ba1e64773a8)() = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_3ba7e716eb6153e2949e437a1e21f218)() = &::clang::DeclContext::getParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_9d4e285c240d5fb0b3f67f5adc04c6ca)() const = &::clang::DeclContext::getParent;
    class ::clang::ASTContext  & (::clang::DeclContext::*method_pointer_e4dd3eade8d357e0b3a6ad94f413406f)() const = &::clang::DeclContext::getParentASTContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_4b33e5eef37f52429db6ce2874dc5e01)() = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_846cd76c4f5c5f779337a3018fc901a0)() const = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_485fa58d947b5384b647b99e6513e2ec)() const = &::clang::DeclContext::getRedeclContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_c2695bd8414555489e3e9eabfd242afa)() = &::clang::DeclContext::getRedeclContext;
    bool  (::clang::DeclContext::*method_pointer_23d0cd9a55685a65bc326d8d6952fb39)() const = &::clang::DeclContext::hasExternalLexicalStorage;
    bool  (::clang::DeclContext::*method_pointer_644b9e47b5f25204899d77ee017477d5)() const = &::clang::DeclContext::hasExternalVisibleStorage;
    bool  (::clang::DeclContext::*method_pointer_f414f3a682785f02bc8fa6296bbddf26)() const = &::clang::DeclContext::isClosure;
    bool  (::clang::DeclContext::*method_pointer_2948f6cd5b2b5a8c96a8a40d85f36b36)(class ::clang::Decl  const *) const = &::clang::DeclContext::isDeclInLexicalTraversal;
    bool  (::clang::DeclContext::*method_pointer_377f46d1c1945bdca8d13517492091da)() const = &::clang::DeclContext::isDependentContext;
    bool  (::clang::DeclContext::*method_pointer_384063b976c9568bb6fb9c32460bc1c4)() const = &::clang::DeclContext::isExternCContext;
    bool  (::clang::DeclContext::*method_pointer_866c34abf71a5b9abb58c10c29e940d9)() const = &::clang::DeclContext::isExternCXXContext;
    bool  (::clang::DeclContext::*method_pointer_a7a73e6ea41a56c0ac26937453b61711)() const = &::clang::DeclContext::isFileContext;
    bool  (::clang::DeclContext::*method_pointer_80bd5342ac315dbd926622bf1045fd90)() const = &::clang::DeclContext::isFunctionOrMethod;
    bool  (::clang::DeclContext::*method_pointer_8cca365e24b65fb1ba5dd35fd75efb64)() const = &::clang::DeclContext::isInlineNamespace;
    bool  (::clang::DeclContext::*method_pointer_b7e3a3e8e73f561f8c4a420fdfe42a6c)() const = &::clang::DeclContext::isLookupContext;
    bool  (::clang::DeclContext::*method_pointer_009d270466bb5622829c0201bddaa8b7)() const = &::clang::DeclContext::isNamespace;
    bool  (::clang::DeclContext::*method_pointer_ec5cc3280ca55ae8ada6d4a0358939f9)() const = &::clang::DeclContext::isObjCContainer;
    bool  (::clang::DeclContext::*method_pointer_583817a7038652b7941c7ee1aa99bea5)() const = &::clang::DeclContext::isRecord;
    bool  (::clang::DeclContext::*method_pointer_2541b269660855e9b6264363c6191a66)() const = &::clang::DeclContext::isStdNamespace;
    bool  (::clang::DeclContext::*method_pointer_8b2d6f18de395abc9640fce3e858c272)() const = &::clang::DeclContext::isTranslationUnit;
    bool  (::clang::DeclContext::*method_pointer_63d91efa6aff568d8e9831e7d5872303)() const = &::clang::DeclContext::isTransparentContext;
    void  (::clang::DeclContext::*method_pointer_5a5e0f0314a150d3a3a9fc4cbc3faa3b)(class ::clang::NamedDecl  *) = &::clang::DeclContext::makeDeclVisibleInContext;
    void  (::clang::DeclContext::*method_pointer_b256e07d7bf45f50a00b7825af523f62)(class ::clang::Decl  *) = &::clang::DeclContext::removeDecl;
    void  (::clang::DeclContext::*method_pointer_7af3932b98185df0bf3ee0dc370d0144)(bool ) = &::clang::DeclContext::setHasExternalLexicalStorage;
    void  (::clang::DeclContext::*method_pointer_07b29f713be85daeb95182cbabc9e117)(bool ) = &::clang::DeclContext::setHasExternalVisibleStorage;
    void  (::clang::DeclContext::*method_pointer_afdf6cc245745666a8e6ccb3d8d0dbf9)() = &::clang::DeclContext::setMustBuildLookupTable;
    bool  (::clang::DeclContext::*method_pointer_71eb4e0e505a535ab09e88bc457162fa)(bool ) = &::clang::DeclContext::setUseQualifiedLookup;
    bool  (::clang::DeclContext::*method_pointer_9762bfb7c6455a0c8d8f9adb41d25def)() const = &::clang::DeclContext::shouldUseQualifiedLookup;
    struct function_group
    {
        static class ::clang::EnumDecl  * function_b66627918dc55cad9a3ed60d5eee0915(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_enum(parameter_0); }
        static class ::clang::NamespaceDecl  * function_82f1b2d2d53051dca0f3db15bae6bbb5(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_namespace(parameter_0); }
        static class ::clang::RecordDecl  * function_e7ddf7974bb65e629cd49c161f909a4b(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_record(parameter_0); }
        static class ::clang::TranslationUnitDecl  * function_b40a8e54e2965d0f833504fe3a0090ef(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_translation_unit(parameter_0); }
        static class ::boost::python::list  function_9e18df8d205658d8815027602ac34c12(class ::clang::DeclContext  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::DeclContext, autowig::HeldType< class ::clang::DeclContext >, boost::noncopyable > class_b97237ef74ad5566bc5ae85fdde5a9b6("DeclContext", "", boost::python::no_init);
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("encloses", method_pointer_d4c06063af4e5b9498d5d3fbb18a8463, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("equals", method_pointer_a3f8670edf09538aab9507bac75da26f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("in_enclosing_namespace_set_of", method_pointer_4df0afe72b32570f80dbe28c679582b4, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl", method_pointer_d6df2a93134c5afbb45b4077fb5372e7, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl_internal", method_pointer_7bcece87a27c5989955b9bdd179a34a2, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_hidden_decl", method_pointer_8151c2bb454954f3bd48c9e8167f945b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_3d66ee9343f855f0a95884d8ce575318, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_34b8419be358552da3002e3ac10420d4, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("contains_decl", method_pointer_80c4ff3e56ea53d0a946eaf16899cdb6, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("decls_empty", method_pointer_9164daa55ada5a55a6a5ce8397fbe972, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_decl_context", method_pointer_62cee4ae73fd5f3cafc3e80288fb765c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_lookups", method_pointer_c8f0f48d58305352b2175045df8f38ab, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_decl_kind", method_pointer_d801d4cd72d8589a80e46283844ad954, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_ee9874111838582cb25b6a8ae8370429, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_18f590c044ef51439a364f9d21f56b99, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_f4ce2b12d8db56838bc593befd8afb81, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_da74fcdc8ad357b78a8743831230095c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_05f0d8f38e7d599e9ae8b1650bae6b47, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_aef4bf608fe853edb5f911407c1b9b5b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_28892879db2b5facbe6cdaca8a3ad7c9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_8bb293887eec5c2eb132c958a2b7cc69, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_5c598781ca1e5eefae53ba3fa919055b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_d8565a301fa25f868f507ba1e64773a8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_3ba7e716eb6153e2949e437a1e21f218, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_9d4e285c240d5fb0b3f67f5adc04c6ca, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent_ast_context", method_pointer_e4dd3eade8d357e0b3a6ad94f413406f, boost::python::return_internal_reference<>(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_4b33e5eef37f52429db6ce2874dc5e01, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_846cd76c4f5c5f779337a3018fc901a0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_485fa58d947b5384b647b99e6513e2ec, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_c2695bd8414555489e3e9eabfd242afa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_lexical_storage", method_pointer_23d0cd9a55685a65bc326d8d6952fb39, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_visible_storage", method_pointer_644b9e47b5f25204899d77ee017477d5, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_closure", method_pointer_f414f3a682785f02bc8fa6296bbddf26, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_decl_in_lexical_traversal", method_pointer_2948f6cd5b2b5a8c96a8a40d85f36b36, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_dependent_context", method_pointer_377f46d1c1945bdca8d13517492091da, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_c_context", method_pointer_384063b976c9568bb6fb9c32460bc1c4, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_cxx_context", method_pointer_866c34abf71a5b9abb58c10c29e940d9, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_file_context", method_pointer_a7a73e6ea41a56c0ac26937453b61711, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_function_or_method", method_pointer_80bd5342ac315dbd926622bf1045fd90, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_inline_namespace", method_pointer_8cca365e24b65fb1ba5dd35fd75efb64, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_lookup_context", method_pointer_b7e3a3e8e73f561f8c4a420fdfe42a6c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_namespace", method_pointer_009d270466bb5622829c0201bddaa8b7, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_obj_c_container", method_pointer_ec5cc3280ca55ae8ada6d4a0358939f9, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_record", method_pointer_583817a7038652b7941c7ee1aa99bea5, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_std_namespace", method_pointer_2541b269660855e9b6264363c6191a66, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_translation_unit", method_pointer_8b2d6f18de395abc9640fce3e858c272, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_transparent_context", method_pointer_63d91efa6aff568d8e9831e7d5872303, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("make_decl_visible_in_context", method_pointer_5a5e0f0314a150d3a3a9fc4cbc3faa3b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("remove_decl", method_pointer_b256e07d7bf45f50a00b7825af523f62, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_lexical_storage", method_pointer_7af3932b98185df0bf3ee0dc370d0144, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_visible_storage", method_pointer_07b29f713be85daeb95182cbabc9e117, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_must_build_lookup_table", method_pointer_afdf6cc245745666a8e6ccb3d8d0dbf9, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_use_qualified_lookup", method_pointer_71eb4e0e505a535ab09e88bc457162fa, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("should_use_qualified_lookup", method_pointer_9762bfb7c6455a0c8d8f9adb41d25def, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.staticmethod("classof");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_enum", function_group::function_b66627918dc55cad9a3ed60d5eee0915, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_namespace", function_group::function_82f1b2d2d53051dca0f3db15bae6bbb5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_record", function_group::function_e7ddf7974bb65e629cd49c161f909a4b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_translation_unit", function_group::function_b40a8e54e2965d0f833504fe3a0090ef, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_children", function_group::function_9e18df8d205658d8815027602ac34c12, "");

}