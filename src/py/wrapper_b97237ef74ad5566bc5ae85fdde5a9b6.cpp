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
    bool  (::clang::DeclContext::*method_pointer_2fcb6a743ad65fbca136504827f98891)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Encloses;
    bool  (::clang::DeclContext::*method_pointer_2e47caee391a5fa0b0661220ae2aca32)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Equals;
    bool  (::clang::DeclContext::*method_pointer_2e3ebfe3be5e51efac9ee6feb3498229)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::InEnclosingNamespaceSetOf;
    void  (::clang::DeclContext::*method_pointer_a616b0941ec451c0b9f61467e61cdbf1)(class ::clang::Decl  *) = &::clang::DeclContext::addDecl;
    void  (::clang::DeclContext::*method_pointer_058e0dee37ac5961b4b6c03aa1f91932)(class ::clang::Decl  *) = &::clang::DeclContext::addDeclInternal;
    void  (::clang::DeclContext::*method_pointer_c9edf58d70e65ab186076a0a37b459fd)(class ::clang::Decl  *) = &::clang::DeclContext::addHiddenDecl;
    bool  (*method_pointer_5a1ccdfdf1ea53c5aee4a474d9721208)(class ::clang::Decl  const *) = ::clang::DeclContext::classof;
    bool  (*method_pointer_5f30c1a52b2f5394a82de9732f538346)(class ::clang::DeclContext  const *) = ::clang::DeclContext::classof;
    bool  (::clang::DeclContext::*method_pointer_c71b884c21b3569f88e4bca0fa7e76bc)(class ::clang::Decl  *) const = &::clang::DeclContext::containsDecl;
    bool  (::clang::DeclContext::*method_pointer_cba934024cc45f1f8b2291a5abdb2045)() const = &::clang::DeclContext::decls_empty;
    void  (::clang::DeclContext::*method_pointer_5117c924533c5321a0dfed5fb96cfe10)() const = &::clang::DeclContext::dumpDeclContext;
    void  (::clang::DeclContext::*method_pointer_a0518669c3e45df18e4214167af9d930)() const = &::clang::DeclContext::dumpLookups;
    enum ::clang::Decl::Kind  (::clang::DeclContext::*method_pointer_826c5ab1f59d58c4984e82eaa6a0ca75)() const = &::clang::DeclContext::getDeclKind;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_3b53afe7a61e5e26936ac0e745f5795f)() const = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_6c5e13d7f7c25c55ad0dea88e02d5a3b)() = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_af299a64a5d652fbb06461f36a266234)() = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_075e2a91ab9a5b07a8ecc5550fb3bafc)() const = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_1c567ba94f765c0f8462d23c842da678)() const = &::clang::DeclContext::getLookupParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_a8e10ca54df650cfb2148a51147dbb72)() = &::clang::DeclContext::getLookupParent;
    class ::clang::Decl  const * (::clang::DeclContext::*method_pointer_7e31a1aab14c537d85e17fe1f7ed64c9)() const = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::Decl  * (::clang::DeclContext::*method_pointer_4cb0415ce55e588fb7910e9b3ca7c0aa)() = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::RecordDecl  const * (::clang::DeclContext::*method_pointer_d8d8b538af5551b2bf683a100b31cc06)() const = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::RecordDecl  * (::clang::DeclContext::*method_pointer_f25ea1ad49025dd9847ead74df94932f)() = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_6cbb64edd476558d9f1e190e460630b9)() const = &::clang::DeclContext::getParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_e10e6dbb1bf05a36b175beb5da40a562)() = &::clang::DeclContext::getParent;
    class ::clang::ASTContext  & (::clang::DeclContext::*method_pointer_f0addad4bf7755a795a1096e6ad8eeb8)() const = &::clang::DeclContext::getParentASTContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_ac975c8f36985f0b84153efb51f5620b)() = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_ed8b8d1c1db15cd49c8278cdc146eb50)() const = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_bdcc6306473a5d3eac7ed65604c8c48c)() = &::clang::DeclContext::getRedeclContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_c17e587385b1520dba2bd806545aa374)() const = &::clang::DeclContext::getRedeclContext;
    bool  (::clang::DeclContext::*method_pointer_fddc71959ecb5423a9e30bd98651035e)() const = &::clang::DeclContext::hasExternalLexicalStorage;
    bool  (::clang::DeclContext::*method_pointer_40e38b53b8675efc8c7987d96ddb10d1)() const = &::clang::DeclContext::hasExternalVisibleStorage;
    bool  (::clang::DeclContext::*method_pointer_b95600087258554a8281ab435065e820)() const = &::clang::DeclContext::isClosure;
    bool  (::clang::DeclContext::*method_pointer_26a13568ff265b00950513db56579f1c)(class ::clang::Decl  const *) const = &::clang::DeclContext::isDeclInLexicalTraversal;
    bool  (::clang::DeclContext::*method_pointer_58fed8afa7605a05a8b89368f36e4606)() const = &::clang::DeclContext::isDependentContext;
    bool  (::clang::DeclContext::*method_pointer_861f3b5b305f5cc286b50726fe8f66d1)() const = &::clang::DeclContext::isExternCContext;
    bool  (::clang::DeclContext::*method_pointer_c5ca5b13f36a5321baaf744299b23fb3)() const = &::clang::DeclContext::isExternCXXContext;
    bool  (::clang::DeclContext::*method_pointer_1b298331a126534e80af8d07ef49ecc4)() const = &::clang::DeclContext::isFileContext;
    bool  (::clang::DeclContext::*method_pointer_11b5b2570be9599a9cdf44106a592488)() const = &::clang::DeclContext::isFunctionOrMethod;
    bool  (::clang::DeclContext::*method_pointer_28d41ff20c2f58b4b428cee14acc2b9b)() const = &::clang::DeclContext::isInlineNamespace;
    bool  (::clang::DeclContext::*method_pointer_de09b7289f795e01861337cf3eb292b5)() const = &::clang::DeclContext::isLookupContext;
    bool  (::clang::DeclContext::*method_pointer_3ea517c05c82521aa0075429a6f7f591)() const = &::clang::DeclContext::isNamespace;
    bool  (::clang::DeclContext::*method_pointer_40dd91d61a6b5d9687d02ea5337c1159)() const = &::clang::DeclContext::isObjCContainer;
    bool  (::clang::DeclContext::*method_pointer_11dc87d0a10c515daba27f6e3c529215)() const = &::clang::DeclContext::isRecord;
    bool  (::clang::DeclContext::*method_pointer_b4b983aed2c65569aecab9d24f6ea15a)() const = &::clang::DeclContext::isStdNamespace;
    bool  (::clang::DeclContext::*method_pointer_59561503d0dc5bb78be05c55c36836fa)() const = &::clang::DeclContext::isTranslationUnit;
    bool  (::clang::DeclContext::*method_pointer_abbe3bbdb25f58a7b0580e92cb221b27)() const = &::clang::DeclContext::isTransparentContext;
    void  (::clang::DeclContext::*method_pointer_0b4733e325895e9ab2973479d1109925)(class ::clang::NamedDecl  *) = &::clang::DeclContext::makeDeclVisibleInContext;
    void  (::clang::DeclContext::*method_pointer_223f666eb6345b03a9721fe3da9121de)(class ::clang::Decl  *) = &::clang::DeclContext::removeDecl;
    void  (::clang::DeclContext::*method_pointer_4d57eeb68df850868cd0b98af8802ede)(bool ) = &::clang::DeclContext::setHasExternalLexicalStorage;
    void  (::clang::DeclContext::*method_pointer_ae106a1c8b025912b255f88897cba144)(bool ) = &::clang::DeclContext::setHasExternalVisibleStorage;
    void  (::clang::DeclContext::*method_pointer_5ed06b24ce5e51339d1ca7baf40ebc87)() = &::clang::DeclContext::setMustBuildLookupTable;
    bool  (::clang::DeclContext::*method_pointer_f40245487fd25fe091f90ac0931bfc46)(bool ) = &::clang::DeclContext::setUseQualifiedLookup;
    bool  (::clang::DeclContext::*method_pointer_5da472a30d4558119dd89876885a04ea)() const = &::clang::DeclContext::shouldUseQualifiedLookup;
    struct function_group
    {
        static class ::clang::EnumDecl  * function_9da71fb71fd65d1bab1b79777dcd2865(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_enum(parameter_0); }
        static class ::clang::NamespaceDecl  * function_27f209200f965b88abd1c876491d1f66(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_namespace(parameter_0); }
        static class ::clang::RecordDecl  * function_4c3cc4028b6655d2aa2073557528d886(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_record(parameter_0); }
        static class ::clang::TranslationUnitDecl  * function_9e089158723a55d186f3f47d611b8408(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_translation_unit(parameter_0); }
        static class ::boost::python::list  function_04c9ee23076456a4b9fd8f43a6f356b4(class ::clang::DeclContext  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::DeclContext, autowig::HeldType< class ::clang::DeclContext >, boost::noncopyable > class_b97237ef74ad5566bc5ae85fdde5a9b6("DeclContext", "", boost::python::no_init);
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("encloses", method_pointer_2fcb6a743ad65fbca136504827f98891, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("equals", method_pointer_2e47caee391a5fa0b0661220ae2aca32, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("in_enclosing_namespace_set_of", method_pointer_2e3ebfe3be5e51efac9ee6feb3498229, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl", method_pointer_a616b0941ec451c0b9f61467e61cdbf1, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl_internal", method_pointer_058e0dee37ac5961b4b6c03aa1f91932, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_hidden_decl", method_pointer_c9edf58d70e65ab186076a0a37b459fd, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_5a1ccdfdf1ea53c5aee4a474d9721208, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_5f30c1a52b2f5394a82de9732f538346, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("contains_decl", method_pointer_c71b884c21b3569f88e4bca0fa7e76bc, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("decls_empty", method_pointer_cba934024cc45f1f8b2291a5abdb2045, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_decl_context", method_pointer_5117c924533c5321a0dfed5fb96cfe10, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_lookups", method_pointer_a0518669c3e45df18e4214167af9d930, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_decl_kind", method_pointer_826c5ab1f59d58c4984e82eaa6a0ca75, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_3b53afe7a61e5e26936ac0e745f5795f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_6c5e13d7f7c25c55ad0dea88e02d5a3b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_af299a64a5d652fbb06461f36a266234, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_075e2a91ab9a5b07a8ecc5550fb3bafc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_1c567ba94f765c0f8462d23c842da678, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_a8e10ca54df650cfb2148a51147dbb72, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_7e31a1aab14c537d85e17fe1f7ed64c9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_4cb0415ce55e588fb7910e9b3ca7c0aa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_d8d8b538af5551b2bf683a100b31cc06, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_f25ea1ad49025dd9847ead74df94932f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_6cbb64edd476558d9f1e190e460630b9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_e10e6dbb1bf05a36b175beb5da40a562, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent_ast_context", method_pointer_f0addad4bf7755a795a1096e6ad8eeb8, boost::python::return_internal_reference<>(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_ac975c8f36985f0b84153efb51f5620b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_ed8b8d1c1db15cd49c8278cdc146eb50, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_bdcc6306473a5d3eac7ed65604c8c48c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_c17e587385b1520dba2bd806545aa374, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_lexical_storage", method_pointer_fddc71959ecb5423a9e30bd98651035e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_visible_storage", method_pointer_40e38b53b8675efc8c7987d96ddb10d1, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_closure", method_pointer_b95600087258554a8281ab435065e820, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_decl_in_lexical_traversal", method_pointer_26a13568ff265b00950513db56579f1c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_dependent_context", method_pointer_58fed8afa7605a05a8b89368f36e4606, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_c_context", method_pointer_861f3b5b305f5cc286b50726fe8f66d1, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_cxx_context", method_pointer_c5ca5b13f36a5321baaf744299b23fb3, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_file_context", method_pointer_1b298331a126534e80af8d07ef49ecc4, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_function_or_method", method_pointer_11b5b2570be9599a9cdf44106a592488, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_inline_namespace", method_pointer_28d41ff20c2f58b4b428cee14acc2b9b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_lookup_context", method_pointer_de09b7289f795e01861337cf3eb292b5, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_namespace", method_pointer_3ea517c05c82521aa0075429a6f7f591, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_obj_c_container", method_pointer_40dd91d61a6b5d9687d02ea5337c1159, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_record", method_pointer_11dc87d0a10c515daba27f6e3c529215, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_std_namespace", method_pointer_b4b983aed2c65569aecab9d24f6ea15a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_translation_unit", method_pointer_59561503d0dc5bb78be05c55c36836fa, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_transparent_context", method_pointer_abbe3bbdb25f58a7b0580e92cb221b27, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("make_decl_visible_in_context", method_pointer_0b4733e325895e9ab2973479d1109925, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("remove_decl", method_pointer_223f666eb6345b03a9721fe3da9121de, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_lexical_storage", method_pointer_4d57eeb68df850868cd0b98af8802ede, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_visible_storage", method_pointer_ae106a1c8b025912b255f88897cba144, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_must_build_lookup_table", method_pointer_5ed06b24ce5e51339d1ca7baf40ebc87, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_use_qualified_lookup", method_pointer_f40245487fd25fe091f90ac0931bfc46, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("should_use_qualified_lookup", method_pointer_5da472a30d4558119dd89876885a04ea, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.staticmethod("classof");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_enum", function_group::function_9da71fb71fd65d1bab1b79777dcd2865, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_namespace", function_group::function_27f209200f965b88abd1c876491d1f66, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_record", function_group::function_4c3cc4028b6655d2aa2073557528d886, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_translation_unit", function_group::function_9e089158723a55d186f3f47d611b8408, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_children", function_group::function_04c9ee23076456a4b9fd8f43a6f356b4, "");

}