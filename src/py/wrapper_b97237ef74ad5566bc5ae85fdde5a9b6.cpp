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
    bool  (::clang::DeclContext::*method_pointer_52b680177a1e57289df6f67b0dacd445)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Encloses;
    bool  (::clang::DeclContext::*method_pointer_808dc1fcc82455cab77d24c0dd8cfcf7)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Equals;
    bool  (::clang::DeclContext::*method_pointer_cbf843898115560598b61e77bf153fd4)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::InEnclosingNamespaceSetOf;
    void  (::clang::DeclContext::*method_pointer_9fdf277d45015f7eb863b9b7408cf386)(class ::clang::Decl  *) = &::clang::DeclContext::addDecl;
    void  (::clang::DeclContext::*method_pointer_c3d5a5039cc15f6ca75680597b75764b)(class ::clang::Decl  *) = &::clang::DeclContext::addDeclInternal;
    void  (::clang::DeclContext::*method_pointer_8fb8d80a74c85f13bb1fb7bf37f60549)(class ::clang::Decl  *) = &::clang::DeclContext::addHiddenDecl;
    bool  (*method_pointer_43d4d522d0635354b69f4f3ae8343d23)(class ::clang::DeclContext  const *) = ::clang::DeclContext::classof;
    bool  (*method_pointer_e5bedaffe82759d2ab2d61514f793e1d)(class ::clang::Decl  const *) = ::clang::DeclContext::classof;
    bool  (::clang::DeclContext::*method_pointer_8eb284f9053253e4a3bb9ce7d40bc682)(class ::clang::Decl  *) const = &::clang::DeclContext::containsDecl;
    bool  (::clang::DeclContext::*method_pointer_5d5f911e156b5543b614d1a2528bc73b)() const = &::clang::DeclContext::decls_empty;
    void  (::clang::DeclContext::*method_pointer_d982066936fe5f319a5b6f5a506fcb57)() const = &::clang::DeclContext::dumpDeclContext;
    void  (::clang::DeclContext::*method_pointer_cdec7b5b5afe5b9cb168b02e90f55d1a)() const = &::clang::DeclContext::dumpLookups;
    enum ::clang::Decl::Kind  (::clang::DeclContext::*method_pointer_4b010f8bd3f056e38dd030b55c0ec30d)() const = &::clang::DeclContext::getDeclKind;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_5884ac7342645ba8b5efe6af1dfa3aca)() const = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_7251ab65a85453518d293aa7e8efd235)() = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_51aa22d268455a95aa17e855d8df983a)() const = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_b4ece2e33d815f30b994e94fca5262f1)() = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_40089f35b7bc58f39276cab6bba0549c)() = &::clang::DeclContext::getLookupParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_55b99113694c5cc986620274feab463b)() const = &::clang::DeclContext::getLookupParent;
    class ::clang::Decl  * (::clang::DeclContext::*method_pointer_16b6d499b2625e0ca0349617cec280a2)() = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::Decl  const * (::clang::DeclContext::*method_pointer_1a034ca0906a5a74b3257522b7667fea)() const = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::RecordDecl  * (::clang::DeclContext::*method_pointer_4ec7f4e60bbf5033ac0b4a9db6ecd5fa)() = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::RecordDecl  const * (::clang::DeclContext::*method_pointer_10f6e1da6d7d5250b5880916cab90833)() const = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_181fbd348b00562f882e2b7872eed7ee)() const = &::clang::DeclContext::getParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_c621f81d1e155e0f9c5ffb1f84c6f09d)() = &::clang::DeclContext::getParent;
    class ::clang::ASTContext  & (::clang::DeclContext::*method_pointer_cd1a61fdd02b5555bb903ff698134777)() const = &::clang::DeclContext::getParentASTContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_e72ed246e06b517cb6f040df52f3574f)() = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_d4fa1ad922505138a18cd07865137e1d)() const = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_0dec260fbeac5114979517f5e3ca8cd3)() = &::clang::DeclContext::getRedeclContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_7caf9e8d214556dbb70d1c65165bbffc)() const = &::clang::DeclContext::getRedeclContext;
    bool  (::clang::DeclContext::*method_pointer_39b5d541d717546a9c8794fc0622704d)() const = &::clang::DeclContext::hasExternalLexicalStorage;
    bool  (::clang::DeclContext::*method_pointer_97e3c8073b2d50489d2be889dfbc49d3)() const = &::clang::DeclContext::hasExternalVisibleStorage;
    bool  (::clang::DeclContext::*method_pointer_c1da31f7afb85eaa9f8e11544d5550ac)() const = &::clang::DeclContext::isClosure;
    bool  (::clang::DeclContext::*method_pointer_d2073d5b86875eeb820960b224f3f85e)(class ::clang::Decl  const *) const = &::clang::DeclContext::isDeclInLexicalTraversal;
    bool  (::clang::DeclContext::*method_pointer_8aeaf3d063dc5b4ea33970acb4ccd674)() const = &::clang::DeclContext::isDependentContext;
    bool  (::clang::DeclContext::*method_pointer_18e7a342def557a79d3c96da99a80c44)() const = &::clang::DeclContext::isExternCContext;
    bool  (::clang::DeclContext::*method_pointer_f63f0c8f4bd1591da03719674f44e704)() const = &::clang::DeclContext::isExternCXXContext;
    bool  (::clang::DeclContext::*method_pointer_00294edd7f03567a985c88d0433ff683)() const = &::clang::DeclContext::isFileContext;
    bool  (::clang::DeclContext::*method_pointer_d96c76a6cbbd5ff3aec476308c7385ce)() const = &::clang::DeclContext::isFunctionOrMethod;
    bool  (::clang::DeclContext::*method_pointer_1c1e415b0fc35c9ea25609a0bdafb43d)() const = &::clang::DeclContext::isInlineNamespace;
    bool  (::clang::DeclContext::*method_pointer_37ba1c644b065a64914d2d68600bca82)() const = &::clang::DeclContext::isLookupContext;
    bool  (::clang::DeclContext::*method_pointer_7de770dec1cb5c62952bea8237319fb7)() const = &::clang::DeclContext::isNamespace;
    bool  (::clang::DeclContext::*method_pointer_8567c166abbf5cb6b3468a4377251956)() const = &::clang::DeclContext::isObjCContainer;
    bool  (::clang::DeclContext::*method_pointer_b83c15ea54c659f09b40527d22ffc1dd)() const = &::clang::DeclContext::isRecord;
    bool  (::clang::DeclContext::*method_pointer_d055f9dd7ad95bad994e8aceb481eff7)() const = &::clang::DeclContext::isStdNamespace;
    bool  (::clang::DeclContext::*method_pointer_526430697810568cb2844ef7fc66601b)() const = &::clang::DeclContext::isTranslationUnit;
    bool  (::clang::DeclContext::*method_pointer_78cd7e8519f05646816a0ce3277a043d)() const = &::clang::DeclContext::isTransparentContext;
    void  (::clang::DeclContext::*method_pointer_45dde6d23b1c5303aca6a0f8ab0e7ba9)(class ::clang::NamedDecl  *) = &::clang::DeclContext::makeDeclVisibleInContext;
    void  (::clang::DeclContext::*method_pointer_5a15bba2820457d1b648805a863e5dec)(class ::clang::Decl  *) = &::clang::DeclContext::removeDecl;
    void  (::clang::DeclContext::*method_pointer_e6d219fecf49544fa094ed35c4c21e4a)(bool ) = &::clang::DeclContext::setHasExternalLexicalStorage;
    void  (::clang::DeclContext::*method_pointer_4a5bee021db256b0a6ac71bf942f5a29)(bool ) = &::clang::DeclContext::setHasExternalVisibleStorage;
    void  (::clang::DeclContext::*method_pointer_84f03130cf3152d8971a4597aad1485c)() = &::clang::DeclContext::setMustBuildLookupTable;
    bool  (::clang::DeclContext::*method_pointer_03f1b9bf81a15f879b7e69b7c59e3577)(bool ) = &::clang::DeclContext::setUseQualifiedLookup;
    bool  (::clang::DeclContext::*method_pointer_f78c16a93703599fa7d7ee18ba5241ec)() const = &::clang::DeclContext::shouldUseQualifiedLookup;
    struct function_group
    {
        static class ::clang::EnumDecl  * function_2682f70e80fc59a0b77b3a43b500932c(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_enum(parameter_0); }
        static class ::clang::NamespaceDecl  * function_48d0c21ef0335a12aba626a3c2ae17cf(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_namespace(parameter_0); }
        static class ::clang::RecordDecl  * function_1a08cecd729a5a5dabb63d9efa95b859(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_record(parameter_0); }
        static class ::clang::TranslationUnitDecl  * function_f853b711f08c5f1ea1047576ca554aef(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_translation_unit(parameter_0); }
        static class ::boost::python::list  function_b277058328e95966a55190dcdd8dceee(class ::clang::DeclContext  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::DeclContext, autowig::HeldType< class ::clang::DeclContext >, boost::noncopyable > class_b97237ef74ad5566bc5ae85fdde5a9b6("DeclContext", "", boost::python::no_init);
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("encloses", method_pointer_52b680177a1e57289df6f67b0dacd445, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("equals", method_pointer_808dc1fcc82455cab77d24c0dd8cfcf7, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("in_enclosing_namespace_set_of", method_pointer_cbf843898115560598b61e77bf153fd4, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl", method_pointer_9fdf277d45015f7eb863b9b7408cf386, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl_internal", method_pointer_c3d5a5039cc15f6ca75680597b75764b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_hidden_decl", method_pointer_8fb8d80a74c85f13bb1fb7bf37f60549, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_43d4d522d0635354b69f4f3ae8343d23, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_e5bedaffe82759d2ab2d61514f793e1d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("contains_decl", method_pointer_8eb284f9053253e4a3bb9ce7d40bc682, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("decls_empty", method_pointer_5d5f911e156b5543b614d1a2528bc73b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_decl_context", method_pointer_d982066936fe5f319a5b6f5a506fcb57, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_lookups", method_pointer_cdec7b5b5afe5b9cb168b02e90f55d1a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_decl_kind", method_pointer_4b010f8bd3f056e38dd030b55c0ec30d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_5884ac7342645ba8b5efe6af1dfa3aca, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_7251ab65a85453518d293aa7e8efd235, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_51aa22d268455a95aa17e855d8df983a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_b4ece2e33d815f30b994e94fca5262f1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_40089f35b7bc58f39276cab6bba0549c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_55b99113694c5cc986620274feab463b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_16b6d499b2625e0ca0349617cec280a2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_1a034ca0906a5a74b3257522b7667fea, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_4ec7f4e60bbf5033ac0b4a9db6ecd5fa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_10f6e1da6d7d5250b5880916cab90833, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_181fbd348b00562f882e2b7872eed7ee, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_c621f81d1e155e0f9c5ffb1f84c6f09d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent_ast_context", method_pointer_cd1a61fdd02b5555bb903ff698134777, boost::python::return_internal_reference<>(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_e72ed246e06b517cb6f040df52f3574f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_d4fa1ad922505138a18cd07865137e1d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_0dec260fbeac5114979517f5e3ca8cd3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_7caf9e8d214556dbb70d1c65165bbffc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_lexical_storage", method_pointer_39b5d541d717546a9c8794fc0622704d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_visible_storage", method_pointer_97e3c8073b2d50489d2be889dfbc49d3, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_closure", method_pointer_c1da31f7afb85eaa9f8e11544d5550ac, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_decl_in_lexical_traversal", method_pointer_d2073d5b86875eeb820960b224f3f85e, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_dependent_context", method_pointer_8aeaf3d063dc5b4ea33970acb4ccd674, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_c_context", method_pointer_18e7a342def557a79d3c96da99a80c44, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_cxx_context", method_pointer_f63f0c8f4bd1591da03719674f44e704, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_file_context", method_pointer_00294edd7f03567a985c88d0433ff683, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_function_or_method", method_pointer_d96c76a6cbbd5ff3aec476308c7385ce, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_inline_namespace", method_pointer_1c1e415b0fc35c9ea25609a0bdafb43d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_lookup_context", method_pointer_37ba1c644b065a64914d2d68600bca82, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_namespace", method_pointer_7de770dec1cb5c62952bea8237319fb7, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_obj_c_container", method_pointer_8567c166abbf5cb6b3468a4377251956, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_record", method_pointer_b83c15ea54c659f09b40527d22ffc1dd, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_std_namespace", method_pointer_d055f9dd7ad95bad994e8aceb481eff7, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_translation_unit", method_pointer_526430697810568cb2844ef7fc66601b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_transparent_context", method_pointer_78cd7e8519f05646816a0ce3277a043d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("make_decl_visible_in_context", method_pointer_45dde6d23b1c5303aca6a0f8ab0e7ba9, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("remove_decl", method_pointer_5a15bba2820457d1b648805a863e5dec, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_lexical_storage", method_pointer_e6d219fecf49544fa094ed35c4c21e4a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_visible_storage", method_pointer_4a5bee021db256b0a6ac71bf942f5a29, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_must_build_lookup_table", method_pointer_84f03130cf3152d8971a4597aad1485c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_use_qualified_lookup", method_pointer_03f1b9bf81a15f879b7e69b7c59e3577, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("should_use_qualified_lookup", method_pointer_f78c16a93703599fa7d7ee18ba5241ec, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.staticmethod("classof");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_enum", function_group::function_2682f70e80fc59a0b77b3a43b500932c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_namespace", function_group::function_48d0c21ef0335a12aba626a3c2ae17cf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_record", function_group::function_1a08cecd729a5a5dabb63d9efa95b859, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_translation_unit", function_group::function_f853b711f08c5f1ea1047576ca554aef, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_children", function_group::function_b277058328e95966a55190dcdd8dceee, "");

}