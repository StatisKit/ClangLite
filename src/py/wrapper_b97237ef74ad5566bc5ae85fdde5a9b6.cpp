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
    bool  (::clang::DeclContext::*method_pointer_59b7fd0188375a42b0d316213ba0cbfa)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Encloses;
    bool  (::clang::DeclContext::*method_pointer_2d5d016fd0c35b8394042608544555e7)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Equals;
    bool  (::clang::DeclContext::*method_pointer_d31cd62ab80d5890b074374f5e03c06c)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::InEnclosingNamespaceSetOf;
    void  (::clang::DeclContext::*method_pointer_b72f427455e5591e94b53ca7ab7ad75a)(class ::clang::Decl  *) = &::clang::DeclContext::addDecl;
    void  (::clang::DeclContext::*method_pointer_7163cac8cdcd501cad88910c594a4c23)(class ::clang::Decl  *) = &::clang::DeclContext::addDeclInternal;
    void  (::clang::DeclContext::*method_pointer_ca1d36ceefc95cd6bb30d5fe940785da)(class ::clang::Decl  *) = &::clang::DeclContext::addHiddenDecl;
    bool  (*method_pointer_0265123cdc0854909ded183a048f0b76)(class ::clang::Decl  const *) = ::clang::DeclContext::classof;
    bool  (*method_pointer_aa9b8cd3177b5bad9893072f0f79cb8d)(class ::clang::DeclContext  const *) = ::clang::DeclContext::classof;
    bool  (::clang::DeclContext::*method_pointer_95f5d5d0355e5fc5a8bf2bd10fb52375)(class ::clang::Decl  *) const = &::clang::DeclContext::containsDecl;
    bool  (::clang::DeclContext::*method_pointer_b922c772d2ac59a0ba7a8ffbbc391a77)() const = &::clang::DeclContext::decls_empty;
    void  (::clang::DeclContext::*method_pointer_eacf0e0f62d455ed9f09b280c0207e66)() const = &::clang::DeclContext::dumpDeclContext;
    void  (::clang::DeclContext::*method_pointer_ed6b28ff072d537494899e22624f1433)() const = &::clang::DeclContext::dumpLookups;
    enum ::clang::Decl::Kind  (::clang::DeclContext::*method_pointer_ab3b9b7bff2e5198b5344ac7610d8245)() const = &::clang::DeclContext::getDeclKind;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_7e443401ad545d8aa4a505ce14959201)() const = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_c5b49768a6e95cf1a9bf1c0b3bcffa66)() = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_10a00dd108175e469ceb2df1412aec0d)() = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_244bcfca52ed5890b1109091cf4dbae2)() const = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_79fccd0acbc8564888d94912ce68a189)() const = &::clang::DeclContext::getLookupParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_970f22f1c2d356f6bd3b0f23a10be68c)() = &::clang::DeclContext::getLookupParent;
    class ::clang::Decl  const * (::clang::DeclContext::*method_pointer_5b6bf52e54d85632b55dc30549b6de36)() const = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::Decl  * (::clang::DeclContext::*method_pointer_02ae74ca88e35c05be8f762df4dce6dc)() = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::RecordDecl  const * (::clang::DeclContext::*method_pointer_19b7dac1591a56dfaf0e90985c30943f)() const = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::RecordDecl  * (::clang::DeclContext::*method_pointer_e153fd2cd2d758d08025e39af378cd4c)() = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_17ba7c58a71754dabf6caef524a57bcd)() const = &::clang::DeclContext::getParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_e0ae98a03e1b53d38491383d39a92f12)() = &::clang::DeclContext::getParent;
    class ::clang::ASTContext  & (::clang::DeclContext::*method_pointer_55b69b2e749456e59ed94c682704b3d9)() const = &::clang::DeclContext::getParentASTContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_3f1d2ce6e7c7568ebf13d40289d97e18)() const = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_5b121b8089c2517bbcc5863c542d92b1)() = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_23d01483845d5a27a32226cc1a4f7493)() = &::clang::DeclContext::getRedeclContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_8a950268f40d5b7bbdadabda84345ae6)() const = &::clang::DeclContext::getRedeclContext;
    bool  (::clang::DeclContext::*method_pointer_e9442b7e198753e6b0572a0ff3999487)() const = &::clang::DeclContext::hasExternalLexicalStorage;
    bool  (::clang::DeclContext::*method_pointer_6d6a938d315258b787a9ce7813b7fd4a)() const = &::clang::DeclContext::hasExternalVisibleStorage;
    bool  (::clang::DeclContext::*method_pointer_01faba173a5a5a0e84deab7def2425be)() const = &::clang::DeclContext::isClosure;
    bool  (::clang::DeclContext::*method_pointer_18bd5399982e554ba4f618ad875aacf5)(class ::clang::Decl  const *) const = &::clang::DeclContext::isDeclInLexicalTraversal;
    bool  (::clang::DeclContext::*method_pointer_db6a9083db815657aebec1779369e035)() const = &::clang::DeclContext::isDependentContext;
    bool  (::clang::DeclContext::*method_pointer_d3f1c0476cd05a8dbf6dc61d252cc12a)() const = &::clang::DeclContext::isExternCContext;
    bool  (::clang::DeclContext::*method_pointer_dac523c429da5d73af4e48484a614971)() const = &::clang::DeclContext::isExternCXXContext;
    bool  (::clang::DeclContext::*method_pointer_87b5e636c7a15a0881d958a67df39afd)() const = &::clang::DeclContext::isFileContext;
    bool  (::clang::DeclContext::*method_pointer_b97e72cac74a53228b19f18bd9a4c280)() const = &::clang::DeclContext::isFunctionOrMethod;
    bool  (::clang::DeclContext::*method_pointer_9270ddfb2bd55cc4ba7b90e6a82bc9ce)() const = &::clang::DeclContext::isInlineNamespace;
    bool  (::clang::DeclContext::*method_pointer_686ad0b4a8de54c0b4d6a45ec430a635)() const = &::clang::DeclContext::isLookupContext;
    bool  (::clang::DeclContext::*method_pointer_39c0fc1e1f695dd7ba58d703e582a704)() const = &::clang::DeclContext::isNamespace;
    bool  (::clang::DeclContext::*method_pointer_2170f17aa81c5315bf55762439310ea7)() const = &::clang::DeclContext::isObjCContainer;
    bool  (::clang::DeclContext::*method_pointer_0d653d6bdd055154ba2c385b6735e9c1)() const = &::clang::DeclContext::isRecord;
    bool  (::clang::DeclContext::*method_pointer_2851903c4c2c503badf48104899b2915)() const = &::clang::DeclContext::isStdNamespace;
    bool  (::clang::DeclContext::*method_pointer_0bb46dfdbd0957848b71ac020be360de)() const = &::clang::DeclContext::isTranslationUnit;
    bool  (::clang::DeclContext::*method_pointer_9d8aeeda3149541b9d573a00b29d422e)() const = &::clang::DeclContext::isTransparentContext;
    void  (::clang::DeclContext::*method_pointer_76fad100094f5a8abeeeabfab2da7d7b)(class ::clang::NamedDecl  *) = &::clang::DeclContext::makeDeclVisibleInContext;
    void  (::clang::DeclContext::*method_pointer_69c435aa28f65c34ad0fe6837248d2b2)(class ::clang::Decl  *) = &::clang::DeclContext::removeDecl;
    void  (::clang::DeclContext::*method_pointer_56a10f17c32f5848bc49e24ffdcd277a)(bool ) = &::clang::DeclContext::setHasExternalLexicalStorage;
    void  (::clang::DeclContext::*method_pointer_8654a9e0a77c54ae970c1223eca999b6)(bool ) = &::clang::DeclContext::setHasExternalVisibleStorage;
    void  (::clang::DeclContext::*method_pointer_c1b80d4d755053c48be5c28e5a87cc20)() = &::clang::DeclContext::setMustBuildLookupTable;
    bool  (::clang::DeclContext::*method_pointer_6b0a8b7708325f1482c98210b76157b7)(bool ) = &::clang::DeclContext::setUseQualifiedLookup;
    bool  (::clang::DeclContext::*method_pointer_caf37a7dd81b5c3f8530c07f672b0fee)() const = &::clang::DeclContext::shouldUseQualifiedLookup;
    struct function_group
    {
        static class ::clang::EnumDecl  * function_ba9a44db875a5f38be8f5a6e5f19f43e(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_enum(parameter_0); }
        static class ::clang::NamespaceDecl  * function_65175f68674651d0bfe57d855796fad8(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_namespace(parameter_0); }
        static class ::clang::RecordDecl  * function_a1caf487bf45514cb55cc7bbdddbb8d8(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_record(parameter_0); }
        static class ::clang::TranslationUnitDecl  * function_b0a9802e334f5701bb7b6dfe9d42125d(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_translation_unit(parameter_0); }
        static class ::boost::python::list  function_6d4979ee7c105f15903c9f628a1e8a47(class ::clang::DeclContext  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::DeclContext, autowig::HeldType< class ::clang::DeclContext >, boost::noncopyable > class_b97237ef74ad5566bc5ae85fdde5a9b6("DeclContext", "", boost::python::no_init);
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("encloses", method_pointer_59b7fd0188375a42b0d316213ba0cbfa, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("equals", method_pointer_2d5d016fd0c35b8394042608544555e7, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("in_enclosing_namespace_set_of", method_pointer_d31cd62ab80d5890b074374f5e03c06c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl", method_pointer_b72f427455e5591e94b53ca7ab7ad75a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl_internal", method_pointer_7163cac8cdcd501cad88910c594a4c23, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_hidden_decl", method_pointer_ca1d36ceefc95cd6bb30d5fe940785da, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_0265123cdc0854909ded183a048f0b76, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_aa9b8cd3177b5bad9893072f0f79cb8d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("contains_decl", method_pointer_95f5d5d0355e5fc5a8bf2bd10fb52375, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("decls_empty", method_pointer_b922c772d2ac59a0ba7a8ffbbc391a77, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_decl_context", method_pointer_eacf0e0f62d455ed9f09b280c0207e66, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_lookups", method_pointer_ed6b28ff072d537494899e22624f1433, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_decl_kind", method_pointer_ab3b9b7bff2e5198b5344ac7610d8245, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_7e443401ad545d8aa4a505ce14959201, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_c5b49768a6e95cf1a9bf1c0b3bcffa66, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_10a00dd108175e469ceb2df1412aec0d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_244bcfca52ed5890b1109091cf4dbae2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_79fccd0acbc8564888d94912ce68a189, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_970f22f1c2d356f6bd3b0f23a10be68c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_5b6bf52e54d85632b55dc30549b6de36, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_02ae74ca88e35c05be8f762df4dce6dc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_19b7dac1591a56dfaf0e90985c30943f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_e153fd2cd2d758d08025e39af378cd4c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_17ba7c58a71754dabf6caef524a57bcd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_e0ae98a03e1b53d38491383d39a92f12, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent_ast_context", method_pointer_55b69b2e749456e59ed94c682704b3d9, boost::python::return_internal_reference<>(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_3f1d2ce6e7c7568ebf13d40289d97e18, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_5b121b8089c2517bbcc5863c542d92b1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_23d01483845d5a27a32226cc1a4f7493, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_8a950268f40d5b7bbdadabda84345ae6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_lexical_storage", method_pointer_e9442b7e198753e6b0572a0ff3999487, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_visible_storage", method_pointer_6d6a938d315258b787a9ce7813b7fd4a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_closure", method_pointer_01faba173a5a5a0e84deab7def2425be, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_decl_in_lexical_traversal", method_pointer_18bd5399982e554ba4f618ad875aacf5, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_dependent_context", method_pointer_db6a9083db815657aebec1779369e035, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_c_context", method_pointer_d3f1c0476cd05a8dbf6dc61d252cc12a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_cxx_context", method_pointer_dac523c429da5d73af4e48484a614971, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_file_context", method_pointer_87b5e636c7a15a0881d958a67df39afd, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_function_or_method", method_pointer_b97e72cac74a53228b19f18bd9a4c280, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_inline_namespace", method_pointer_9270ddfb2bd55cc4ba7b90e6a82bc9ce, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_lookup_context", method_pointer_686ad0b4a8de54c0b4d6a45ec430a635, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_namespace", method_pointer_39c0fc1e1f695dd7ba58d703e582a704, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_obj_c_container", method_pointer_2170f17aa81c5315bf55762439310ea7, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_record", method_pointer_0d653d6bdd055154ba2c385b6735e9c1, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_std_namespace", method_pointer_2851903c4c2c503badf48104899b2915, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_translation_unit", method_pointer_0bb46dfdbd0957848b71ac020be360de, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_transparent_context", method_pointer_9d8aeeda3149541b9d573a00b29d422e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("make_decl_visible_in_context", method_pointer_76fad100094f5a8abeeeabfab2da7d7b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("remove_decl", method_pointer_69c435aa28f65c34ad0fe6837248d2b2, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_lexical_storage", method_pointer_56a10f17c32f5848bc49e24ffdcd277a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_visible_storage", method_pointer_8654a9e0a77c54ae970c1223eca999b6, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_must_build_lookup_table", method_pointer_c1b80d4d755053c48be5c28e5a87cc20, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_use_qualified_lookup", method_pointer_6b0a8b7708325f1482c98210b76157b7, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("should_use_qualified_lookup", method_pointer_caf37a7dd81b5c3f8530c07f672b0fee, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.staticmethod("classof");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_enum", function_group::function_ba9a44db875a5f38be8f5a6e5f19f43e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_namespace", function_group::function_65175f68674651d0bfe57d855796fad8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_record", function_group::function_a1caf487bf45514cb55cc7bbdddbb8d8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_translation_unit", function_group::function_b0a9802e334f5701bb7b6dfe9d42125d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_children", function_group::function_6d4979ee7c105f15903c9f628a1e8a47, "");

}