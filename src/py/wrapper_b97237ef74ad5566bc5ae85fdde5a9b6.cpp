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
    bool  (::clang::DeclContext::*method_pointer_69fbc2638efb5abd88dbe297130c732c)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Encloses;
    bool  (::clang::DeclContext::*method_pointer_25c2a57f7ae153029755205682f8d7e7)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Equals;
    bool  (::clang::DeclContext::*method_pointer_d818b3e6f2fb53d7bf2ae838f07f9476)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::InEnclosingNamespaceSetOf;
    void  (::clang::DeclContext::*method_pointer_0397399952385f9caec07ddcc9359c4c)(class ::clang::Decl  *) = &::clang::DeclContext::addDecl;
    void  (::clang::DeclContext::*method_pointer_a2e5f0cf7df15a6d9942e24b7744521b)(class ::clang::Decl  *) = &::clang::DeclContext::addDeclInternal;
    void  (::clang::DeclContext::*method_pointer_3621f9f9c51054d1bd7906189c79c477)(class ::clang::Decl  *) = &::clang::DeclContext::addHiddenDecl;
    bool  (*method_pointer_7a76749e57675a2b9cc96b4c2774f153)(class ::clang::DeclContext  const *) = ::clang::DeclContext::classof;
    bool  (*method_pointer_c97d1ddeb0b55756bc4cf3d6beb89378)(class ::clang::Decl  const *) = ::clang::DeclContext::classof;
    bool  (::clang::DeclContext::*method_pointer_d03ba3f5456556da938c76d4c9626bb2)(class ::clang::Decl  *) const = &::clang::DeclContext::containsDecl;
    bool  (::clang::DeclContext::*method_pointer_0508528f63715fd5816ec07a81e5351b)() const = &::clang::DeclContext::decls_empty;
    void  (::clang::DeclContext::*method_pointer_eb03eb12ece6550087fcab44e43caa33)() const = &::clang::DeclContext::dumpDeclContext;
    void  (::clang::DeclContext::*method_pointer_b867a0330beb5596a028f6e266cb3dd0)() const = &::clang::DeclContext::dumpLookups;
    enum ::clang::Decl::Kind  (::clang::DeclContext::*method_pointer_ca3c2968d8f2553082ab0faf3b600053)() const = &::clang::DeclContext::getDeclKind;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_970dfdde6f315bc2b19306ca14f126a8)() = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_ddac04739ce752f9bbf8da88a0c8259b)() const = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_239fd9fdca8e5cf8969cfe31f95c60e9)() = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_300ec54536105d23ad71c01abe083472)() const = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_0f6c9a8966e4535b8b8ece67e3eb3dee)() const = &::clang::DeclContext::getLookupParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_de5f9bfcfd4e50ceb200f038725bf744)() = &::clang::DeclContext::getLookupParent;
    class ::clang::Decl  * (::clang::DeclContext::*method_pointer_12aeed5b18be525cb4f91d312756c63a)() = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::Decl  const * (::clang::DeclContext::*method_pointer_447ee34796405cd181df8535c008038d)() const = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::RecordDecl  const * (::clang::DeclContext::*method_pointer_20ef4da3b2e353138aa3c5605e9fb7a4)() const = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::RecordDecl  * (::clang::DeclContext::*method_pointer_8cee5f8f4db651d99dfb2b3f141e4859)() = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_56ae2ccebd6f57fdb4e4892aa0b8c2bf)() const = &::clang::DeclContext::getParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_b0275311440157d6bfddf64f16041398)() = &::clang::DeclContext::getParent;
    class ::clang::ASTContext  & (::clang::DeclContext::*method_pointer_9c8d33e265b65cfc9d34361275eeeb3c)() const = &::clang::DeclContext::getParentASTContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_d724ce1bceca5377a8463864897f92b4)() = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_6e602e5b66385317aaf562b442afa9a4)() const = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_ef837dca8254520ca0345d3de27c8ff3)() const = &::clang::DeclContext::getRedeclContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_f410243a63d859cfbf44fe80f4b5422d)() = &::clang::DeclContext::getRedeclContext;
    bool  (::clang::DeclContext::*method_pointer_f3f872bb481c591cb37aeb7c338de76a)() const = &::clang::DeclContext::hasExternalLexicalStorage;
    bool  (::clang::DeclContext::*method_pointer_f2da56ba3a695d5ca0e4bd857464bda6)() const = &::clang::DeclContext::hasExternalVisibleStorage;
    bool  (::clang::DeclContext::*method_pointer_45ad706f488d55aa9eb4b87ebafbe1d6)() const = &::clang::DeclContext::isClosure;
    bool  (::clang::DeclContext::*method_pointer_79ed0e3f653d52fe9c57e06720fa72bc)(class ::clang::Decl  const *) const = &::clang::DeclContext::isDeclInLexicalTraversal;
    bool  (::clang::DeclContext::*method_pointer_735990db555a5eee993446aad13d0e46)() const = &::clang::DeclContext::isDependentContext;
    bool  (::clang::DeclContext::*method_pointer_3b7b79e7447e519ab51010e446cbb7c5)() const = &::clang::DeclContext::isExternCContext;
    bool  (::clang::DeclContext::*method_pointer_a04f21ec364d56589c139ab44b47a732)() const = &::clang::DeclContext::isExternCXXContext;
    bool  (::clang::DeclContext::*method_pointer_47e65c88c9ae55d3ab9f6a94634211a3)() const = &::clang::DeclContext::isFileContext;
    bool  (::clang::DeclContext::*method_pointer_3dd62dc6f07a546395a2f4fc0ba2d2d6)() const = &::clang::DeclContext::isFunctionOrMethod;
    bool  (::clang::DeclContext::*method_pointer_825c109cf5115bf2b2045c45979db5d4)() const = &::clang::DeclContext::isInlineNamespace;
    bool  (::clang::DeclContext::*method_pointer_d856285d219051d7a5ad831506c3c38a)() const = &::clang::DeclContext::isLookupContext;
    bool  (::clang::DeclContext::*method_pointer_317b4d68b88757debff86086b5db4ced)() const = &::clang::DeclContext::isNamespace;
    bool  (::clang::DeclContext::*method_pointer_a8ed2d2572a354b89b8cfab7ca291390)() const = &::clang::DeclContext::isObjCContainer;
    bool  (::clang::DeclContext::*method_pointer_aa27874e67655a169cdd4be4cd87d6b6)() const = &::clang::DeclContext::isRecord;
    bool  (::clang::DeclContext::*method_pointer_a3a6f6d420ad5ee2bb00d2d87de3cd3a)() const = &::clang::DeclContext::isStdNamespace;
    bool  (::clang::DeclContext::*method_pointer_ffc23395078e58938696a083e4381b1a)() const = &::clang::DeclContext::isTranslationUnit;
    bool  (::clang::DeclContext::*method_pointer_13f3e97a36355ddcb778c4ca0d4b8ea1)() const = &::clang::DeclContext::isTransparentContext;
    void  (::clang::DeclContext::*method_pointer_c0d4256448925f7eb3f4b5fd6b42b503)(class ::clang::NamedDecl  *) = &::clang::DeclContext::makeDeclVisibleInContext;
    void  (::clang::DeclContext::*method_pointer_a86151225f0d5456a62f0ab569c95dc7)(class ::clang::Decl  *) = &::clang::DeclContext::removeDecl;
    void  (::clang::DeclContext::*method_pointer_f691bdcf3e0952eea6bb45150a6dbae6)(bool ) = &::clang::DeclContext::setHasExternalLexicalStorage;
    void  (::clang::DeclContext::*method_pointer_83902752725d56699a0ee241413536e2)(bool ) = &::clang::DeclContext::setHasExternalVisibleStorage;
    void  (::clang::DeclContext::*method_pointer_622d32d3a5b85e20896ef5e79759fe9d)() = &::clang::DeclContext::setMustBuildLookupTable;
    bool  (::clang::DeclContext::*method_pointer_73c1b85c729954e5b627a821b2e3851f)(bool ) = &::clang::DeclContext::setUseQualifiedLookup;
    bool  (::clang::DeclContext::*method_pointer_ceca56b5d21a5764a374cdbf57ca1a1b)() const = &::clang::DeclContext::shouldUseQualifiedLookup;
    struct function_group
    {
        static class ::clang::EnumDecl  * function_9327696b065f5ea6a018a1829c114b6b(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_enum(parameter_0); }
        static class ::clang::NamespaceDecl  * function_fb6436a6a3155df7b4b596ae637d0c0c(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_namespace(parameter_0); }
        static class ::clang::RecordDecl  * function_54db3e95ada656b39b71ffc5b2bc4032(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_record(parameter_0); }
        static class ::clang::TranslationUnitDecl  * function_46f7022d2c5855a19462f774a700ae7c(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_translation_unit(parameter_0); }
        static class ::boost::python::list  function_84f87f65c42f5b76b3bc139475c64570(class ::clang::DeclContext  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::DeclContext, autowig::HeldType< class ::clang::DeclContext >, boost::noncopyable > class_b97237ef74ad5566bc5ae85fdde5a9b6("DeclContext", "", boost::python::no_init);
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("encloses", method_pointer_69fbc2638efb5abd88dbe297130c732c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("equals", method_pointer_25c2a57f7ae153029755205682f8d7e7, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("in_enclosing_namespace_set_of", method_pointer_d818b3e6f2fb53d7bf2ae838f07f9476, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl", method_pointer_0397399952385f9caec07ddcc9359c4c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl_internal", method_pointer_a2e5f0cf7df15a6d9942e24b7744521b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_hidden_decl", method_pointer_3621f9f9c51054d1bd7906189c79c477, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_7a76749e57675a2b9cc96b4c2774f153, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_c97d1ddeb0b55756bc4cf3d6beb89378, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("contains_decl", method_pointer_d03ba3f5456556da938c76d4c9626bb2, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("decls_empty", method_pointer_0508528f63715fd5816ec07a81e5351b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_decl_context", method_pointer_eb03eb12ece6550087fcab44e43caa33, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_lookups", method_pointer_b867a0330beb5596a028f6e266cb3dd0, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_decl_kind", method_pointer_ca3c2968d8f2553082ab0faf3b600053, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_970dfdde6f315bc2b19306ca14f126a8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_ddac04739ce752f9bbf8da88a0c8259b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_239fd9fdca8e5cf8969cfe31f95c60e9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_300ec54536105d23ad71c01abe083472, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_0f6c9a8966e4535b8b8ece67e3eb3dee, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_de5f9bfcfd4e50ceb200f038725bf744, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_12aeed5b18be525cb4f91d312756c63a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_447ee34796405cd181df8535c008038d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_20ef4da3b2e353138aa3c5605e9fb7a4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_8cee5f8f4db651d99dfb2b3f141e4859, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_56ae2ccebd6f57fdb4e4892aa0b8c2bf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_b0275311440157d6bfddf64f16041398, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent_ast_context", method_pointer_9c8d33e265b65cfc9d34361275eeeb3c, boost::python::return_internal_reference<>(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_d724ce1bceca5377a8463864897f92b4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_6e602e5b66385317aaf562b442afa9a4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_ef837dca8254520ca0345d3de27c8ff3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_f410243a63d859cfbf44fe80f4b5422d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_lexical_storage", method_pointer_f3f872bb481c591cb37aeb7c338de76a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_visible_storage", method_pointer_f2da56ba3a695d5ca0e4bd857464bda6, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_closure", method_pointer_45ad706f488d55aa9eb4b87ebafbe1d6, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_decl_in_lexical_traversal", method_pointer_79ed0e3f653d52fe9c57e06720fa72bc, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_dependent_context", method_pointer_735990db555a5eee993446aad13d0e46, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_c_context", method_pointer_3b7b79e7447e519ab51010e446cbb7c5, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_cxx_context", method_pointer_a04f21ec364d56589c139ab44b47a732, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_file_context", method_pointer_47e65c88c9ae55d3ab9f6a94634211a3, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_function_or_method", method_pointer_3dd62dc6f07a546395a2f4fc0ba2d2d6, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_inline_namespace", method_pointer_825c109cf5115bf2b2045c45979db5d4, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_lookup_context", method_pointer_d856285d219051d7a5ad831506c3c38a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_namespace", method_pointer_317b4d68b88757debff86086b5db4ced, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_obj_c_container", method_pointer_a8ed2d2572a354b89b8cfab7ca291390, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_record", method_pointer_aa27874e67655a169cdd4be4cd87d6b6, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_std_namespace", method_pointer_a3a6f6d420ad5ee2bb00d2d87de3cd3a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_translation_unit", method_pointer_ffc23395078e58938696a083e4381b1a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_transparent_context", method_pointer_13f3e97a36355ddcb778c4ca0d4b8ea1, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("make_decl_visible_in_context", method_pointer_c0d4256448925f7eb3f4b5fd6b42b503, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("remove_decl", method_pointer_a86151225f0d5456a62f0ab569c95dc7, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_lexical_storage", method_pointer_f691bdcf3e0952eea6bb45150a6dbae6, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_visible_storage", method_pointer_83902752725d56699a0ee241413536e2, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_must_build_lookup_table", method_pointer_622d32d3a5b85e20896ef5e79759fe9d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_use_qualified_lookup", method_pointer_73c1b85c729954e5b627a821b2e3851f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("should_use_qualified_lookup", method_pointer_ceca56b5d21a5764a374cdbf57ca1a1b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.staticmethod("classof");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_enum", function_group::function_9327696b065f5ea6a018a1829c114b6b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_namespace", function_group::function_fb6436a6a3155df7b4b596ae637d0c0c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_record", function_group::function_54db3e95ada656b39b71ffc5b2bc4032, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_translation_unit", function_group::function_46f7022d2c5855a19462f774a700ae7c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_children", function_group::function_84f87f65c42f5b76b3bc139475c64570, "");

}