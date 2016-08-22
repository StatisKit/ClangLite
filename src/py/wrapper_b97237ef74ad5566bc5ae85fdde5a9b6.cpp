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
    bool  (::clang::DeclContext::*method_pointer_54c04c7c1b3e52c4b6cd545abc2080be)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Encloses;
    bool  (::clang::DeclContext::*method_pointer_2c7ffe41e1355a15b53d710641ea08d3)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Equals;
    bool  (::clang::DeclContext::*method_pointer_f6006eec5ad253bc8ff140b904fc7d91)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::InEnclosingNamespaceSetOf;
    void  (::clang::DeclContext::*method_pointer_9d977661701453f996079d0f00cec75f)(class ::clang::Decl  *) = &::clang::DeclContext::addDecl;
    void  (::clang::DeclContext::*method_pointer_9d57f3b6965e5336b679279cd9768dbb)(class ::clang::Decl  *) = &::clang::DeclContext::addDeclInternal;
    void  (::clang::DeclContext::*method_pointer_341d02a64f065ba7b6642d91e3cb1b7b)(class ::clang::Decl  *) = &::clang::DeclContext::addHiddenDecl;
    bool  (*method_pointer_8e730e4e773755edb3b48a439defcf3b)(class ::clang::Decl  const *) = ::clang::DeclContext::classof;
    bool  (*method_pointer_9c82701f7455566fb623c6309b77d59e)(class ::clang::DeclContext  const *) = ::clang::DeclContext::classof;
    bool  (::clang::DeclContext::*method_pointer_5667e2cf8c9b510f8af3b17e5724b5d7)(class ::clang::Decl  *) const = &::clang::DeclContext::containsDecl;
    bool  (::clang::DeclContext::*method_pointer_47ab610240445afe859b99469a16d27e)() const = &::clang::DeclContext::decls_empty;
    void  (::clang::DeclContext::*method_pointer_bd64cba856d75008850711dc394ed1b2)() const = &::clang::DeclContext::dumpDeclContext;
    void  (::clang::DeclContext::*method_pointer_13890be86c0a5cacad2b41422a44ee36)() const = &::clang::DeclContext::dumpLookups;
    enum ::clang::Decl::Kind  (::clang::DeclContext::*method_pointer_19109eaaf7e85782a7eeb8fd7f70b206)() const = &::clang::DeclContext::getDeclKind;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_25b50f9f0e9d5504b3f82978babf18cb)() const = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_2ef8fe6b548659b1a5c28f45796238b1)() = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_a0b35c0757935736bfcd1ca43bd0d942)() = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_fd55aab52a01575f82d39d0db5b5c609)() const = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_064d00b6e6495f39810c25898cb465cc)() = &::clang::DeclContext::getLookupParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_35016b761b12555abff4e2d5379d4c52)() const = &::clang::DeclContext::getLookupParent;
    class ::clang::Decl  * (::clang::DeclContext::*method_pointer_a07f4b9db5dc56c98d87fb02e7eb7b6b)() = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::Decl  const * (::clang::DeclContext::*method_pointer_8a98de4036d5578fa57b9376726163e7)() const = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::RecordDecl  * (::clang::DeclContext::*method_pointer_b09efcd2cb0655f9b3877247a524a44d)() = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::RecordDecl  const * (::clang::DeclContext::*method_pointer_7ece9d508c9a53c29dd592b513962db4)() const = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_405d3c890647595f8580e464644ef5e4)() = &::clang::DeclContext::getParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_3c5a6a294733533d9245232de3dfd956)() const = &::clang::DeclContext::getParent;
    class ::clang::ASTContext  & (::clang::DeclContext::*method_pointer_2b29f3673fae51a0948324fbbe1fb816)() const = &::clang::DeclContext::getParentASTContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_c35f40400ffb5d5493939a530a219140)() = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_f0154f3d8b465e09b7be57bcebcd0f99)() const = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_f700d23af96a5f66b52b87cd4c732473)() const = &::clang::DeclContext::getRedeclContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_253319aca92a56b6aab3a0840d4de9af)() = &::clang::DeclContext::getRedeclContext;
    bool  (::clang::DeclContext::*method_pointer_04d8b30826d2570bab265032097c22df)() const = &::clang::DeclContext::hasExternalLexicalStorage;
    bool  (::clang::DeclContext::*method_pointer_5cc2c7f2f7b052399e9673266eda247b)() const = &::clang::DeclContext::hasExternalVisibleStorage;
    bool  (::clang::DeclContext::*method_pointer_8955341f701a58be81ba8b4c9b64486c)() const = &::clang::DeclContext::isClosure;
    bool  (::clang::DeclContext::*method_pointer_62ca2f62b13b5bf1b36b6b911ea0e142)(class ::clang::Decl  const *) const = &::clang::DeclContext::isDeclInLexicalTraversal;
    bool  (::clang::DeclContext::*method_pointer_64ab4e02615b594e8a27bed8962f2dba)() const = &::clang::DeclContext::isDependentContext;
    bool  (::clang::DeclContext::*method_pointer_2aa6967ba8085acea572e56033f672ef)() const = &::clang::DeclContext::isExternCContext;
    bool  (::clang::DeclContext::*method_pointer_31d1ae57b3905f02baa999a6be2a907f)() const = &::clang::DeclContext::isExternCXXContext;
    bool  (::clang::DeclContext::*method_pointer_0c8ed19c73d6590c91b953e721ca55ed)() const = &::clang::DeclContext::isFileContext;
    bool  (::clang::DeclContext::*method_pointer_32b82ca60d135c8f9064cb83be8e4100)() const = &::clang::DeclContext::isFunctionOrMethod;
    bool  (::clang::DeclContext::*method_pointer_4ea0f1093b2855e0ada247d745df038a)() const = &::clang::DeclContext::isInlineNamespace;
    bool  (::clang::DeclContext::*method_pointer_1cbce8f326dd5f6cb032103ef1fa38ce)() const = &::clang::DeclContext::isLookupContext;
    bool  (::clang::DeclContext::*method_pointer_e021bf748e9151058ecc4764955f31f5)() const = &::clang::DeclContext::isNamespace;
    bool  (::clang::DeclContext::*method_pointer_2737581e5e6e5987bc66e6bf9b218c21)() const = &::clang::DeclContext::isObjCContainer;
    bool  (::clang::DeclContext::*method_pointer_c40fc86394c351f7b418fa1e1886ffd6)() const = &::clang::DeclContext::isRecord;
    bool  (::clang::DeclContext::*method_pointer_f74bafbde64357c59c73496c5de04d00)() const = &::clang::DeclContext::isStdNamespace;
    bool  (::clang::DeclContext::*method_pointer_949884206a0f59e0af2957e8550d3481)() const = &::clang::DeclContext::isTranslationUnit;
    bool  (::clang::DeclContext::*method_pointer_e1a9b222410f52e8816086eea01b835a)() const = &::clang::DeclContext::isTransparentContext;
    void  (::clang::DeclContext::*method_pointer_f5ae2eaf733c5409a3aa1e67d5bedf2b)(class ::clang::NamedDecl  *) = &::clang::DeclContext::makeDeclVisibleInContext;
    void  (::clang::DeclContext::*method_pointer_6bf125a8e69a5cd380e881e29a256460)(class ::clang::Decl  *) = &::clang::DeclContext::removeDecl;
    void  (::clang::DeclContext::*method_pointer_31e6ae525275536a99ac0d85c6217002)(bool ) = &::clang::DeclContext::setHasExternalLexicalStorage;
    void  (::clang::DeclContext::*method_pointer_9a97ea950af3583db977bc16ce410f56)(bool ) = &::clang::DeclContext::setHasExternalVisibleStorage;
    void  (::clang::DeclContext::*method_pointer_332bcee89a1c5c428ddc47d2925cf081)() = &::clang::DeclContext::setMustBuildLookupTable;
    bool  (::clang::DeclContext::*method_pointer_8788fdc311da53e5953cbd4b054e333b)(bool ) = &::clang::DeclContext::setUseQualifiedLookup;
    bool  (::clang::DeclContext::*method_pointer_8d38ad3d0e005553891468e93b5a4566)() const = &::clang::DeclContext::shouldUseQualifiedLookup;
    boost::python::class_< class ::clang::DeclContext, autowig::HeldType< class ::clang::DeclContext >, boost::noncopyable > class_b97237ef74ad5566bc5ae85fdde5a9b6("DeclContext", "", boost::python::no_init);
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("encloses", method_pointer_54c04c7c1b3e52c4b6cd545abc2080be, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("equals", method_pointer_2c7ffe41e1355a15b53d710641ea08d3, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("in_enclosing_namespace_set_of", method_pointer_f6006eec5ad253bc8ff140b904fc7d91, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl", method_pointer_9d977661701453f996079d0f00cec75f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl_internal", method_pointer_9d57f3b6965e5336b679279cd9768dbb, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_hidden_decl", method_pointer_341d02a64f065ba7b6642d91e3cb1b7b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_8e730e4e773755edb3b48a439defcf3b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_9c82701f7455566fb623c6309b77d59e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("contains_decl", method_pointer_5667e2cf8c9b510f8af3b17e5724b5d7, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("decls_empty", method_pointer_47ab610240445afe859b99469a16d27e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_decl_context", method_pointer_bd64cba856d75008850711dc394ed1b2, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_lookups", method_pointer_13890be86c0a5cacad2b41422a44ee36, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_decl_kind", method_pointer_19109eaaf7e85782a7eeb8fd7f70b206, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_25b50f9f0e9d5504b3f82978babf18cb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_2ef8fe6b548659b1a5c28f45796238b1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_a0b35c0757935736bfcd1ca43bd0d942, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_fd55aab52a01575f82d39d0db5b5c609, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_064d00b6e6495f39810c25898cb465cc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_35016b761b12555abff4e2d5379d4c52, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_a07f4b9db5dc56c98d87fb02e7eb7b6b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_8a98de4036d5578fa57b9376726163e7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_b09efcd2cb0655f9b3877247a524a44d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_7ece9d508c9a53c29dd592b513962db4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_405d3c890647595f8580e464644ef5e4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_3c5a6a294733533d9245232de3dfd956, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent_ast_context", method_pointer_2b29f3673fae51a0948324fbbe1fb816, boost::python::return_internal_reference<>(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_c35f40400ffb5d5493939a530a219140, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_f0154f3d8b465e09b7be57bcebcd0f99, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_f700d23af96a5f66b52b87cd4c732473, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_253319aca92a56b6aab3a0840d4de9af, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_lexical_storage", method_pointer_04d8b30826d2570bab265032097c22df, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_visible_storage", method_pointer_5cc2c7f2f7b052399e9673266eda247b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_closure", method_pointer_8955341f701a58be81ba8b4c9b64486c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_decl_in_lexical_traversal", method_pointer_62ca2f62b13b5bf1b36b6b911ea0e142, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_dependent_context", method_pointer_64ab4e02615b594e8a27bed8962f2dba, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_c_context", method_pointer_2aa6967ba8085acea572e56033f672ef, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_cxx_context", method_pointer_31d1ae57b3905f02baa999a6be2a907f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_file_context", method_pointer_0c8ed19c73d6590c91b953e721ca55ed, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_function_or_method", method_pointer_32b82ca60d135c8f9064cb83be8e4100, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_inline_namespace", method_pointer_4ea0f1093b2855e0ada247d745df038a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_lookup_context", method_pointer_1cbce8f326dd5f6cb032103ef1fa38ce, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_namespace", method_pointer_e021bf748e9151058ecc4764955f31f5, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_obj_c_container", method_pointer_2737581e5e6e5987bc66e6bf9b218c21, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_record", method_pointer_c40fc86394c351f7b418fa1e1886ffd6, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_std_namespace", method_pointer_f74bafbde64357c59c73496c5de04d00, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_translation_unit", method_pointer_949884206a0f59e0af2957e8550d3481, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_transparent_context", method_pointer_e1a9b222410f52e8816086eea01b835a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("make_decl_visible_in_context", method_pointer_f5ae2eaf733c5409a3aa1e67d5bedf2b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("remove_decl", method_pointer_6bf125a8e69a5cd380e881e29a256460, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_lexical_storage", method_pointer_31e6ae525275536a99ac0d85c6217002, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_visible_storage", method_pointer_9a97ea950af3583db977bc16ce410f56, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_must_build_lookup_table", method_pointer_332bcee89a1c5c428ddc47d2925cf081, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_use_qualified_lookup", method_pointer_8788fdc311da53e5953cbd4b054e333b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("should_use_qualified_lookup", method_pointer_8d38ad3d0e005553891468e93b5a4566, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.staticmethod("classof");

}