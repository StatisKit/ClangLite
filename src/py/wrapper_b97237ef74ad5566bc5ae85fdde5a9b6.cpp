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
    bool  (::clang::DeclContext::*method_pointer_79745a427bbb591f9f05ca8c08f55e76)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Encloses;
    bool  (::clang::DeclContext::*method_pointer_429d5e8413df52099def456031dfb370)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::Equals;
    bool  (::clang::DeclContext::*method_pointer_9b419a40696d564e8891c2d1a05b722d)(class ::clang::DeclContext  const *) const = &::clang::DeclContext::InEnclosingNamespaceSetOf;
    void  (::clang::DeclContext::*method_pointer_53f1be1e0ca65eeb9f71f15cc4c60336)(class ::clang::Decl  *) = &::clang::DeclContext::addDecl;
    void  (::clang::DeclContext::*method_pointer_93760b6de5ae5830a37a5bf3c7b06fb8)(class ::clang::Decl  *) = &::clang::DeclContext::addDeclInternal;
    void  (::clang::DeclContext::*method_pointer_00872d1c72625c2c82342690b8efde10)(class ::clang::Decl  *) = &::clang::DeclContext::addHiddenDecl;
    bool  (*method_pointer_962a3b08b0425eb7aea7db1ce8e5777f)(class ::clang::DeclContext  const *) = ::clang::DeclContext::classof;
    bool  (*method_pointer_8048f5071f995d53a004840408896ac8)(class ::clang::Decl  const *) = ::clang::DeclContext::classof;
    bool  (::clang::DeclContext::*method_pointer_9262b0a5a67e52f7924af1b0bc80d920)(class ::clang::Decl  *) const = &::clang::DeclContext::containsDecl;
    bool  (::clang::DeclContext::*method_pointer_e3e15c96013054759d1f74a5f8e7db32)() const = &::clang::DeclContext::decls_empty;
    void  (::clang::DeclContext::*method_pointer_899e26b833ab5eda93cefa33999ef347)() const = &::clang::DeclContext::dumpDeclContext;
    void  (::clang::DeclContext::*method_pointer_15545c649a435c348da5a1777d40afa1)() const = &::clang::DeclContext::dumpLookups;
    enum ::clang::Decl::Kind  (::clang::DeclContext::*method_pointer_299f2008ec1953a0961bc64cc1280124)() const = &::clang::DeclContext::getDeclKind;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_74ea17bcd8b45f5584c3621e84d6ce81)() const = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_130c3771927551158dc15aeb2609ad7b)() = &::clang::DeclContext::getEnclosingNamespaceContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_252f0fc9aac05529ad1f66d234213e5b)() const = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_fec53a7a334e52ab8965518134db10d0)() = &::clang::DeclContext::getLexicalParent;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_cb123934e46a5992a376822a9393e282)() = &::clang::DeclContext::getLookupParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_f53b8dc058065ef18a86ace1c0d80aab)() const = &::clang::DeclContext::getLookupParent;
    class ::clang::Decl  * (::clang::DeclContext::*method_pointer_b6a20cb1ed365d8a99ee34f2e7305146)() = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::Decl  const * (::clang::DeclContext::*method_pointer_d368bc2c3e7757feb8b7d1ed74b5e25a)() const = &::clang::DeclContext::getNonClosureAncestor;
    class ::clang::RecordDecl  const * (::clang::DeclContext::*method_pointer_062ec38b60155a2cb13b27abb07288bf)() const = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::RecordDecl  * (::clang::DeclContext::*method_pointer_20f057f97da5539980f7b0f9a78ab761)() = &::clang::DeclContext::getOuterLexicalRecordContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_c845ecc7753057a4aa3b77115499688d)() = &::clang::DeclContext::getParent;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_837de4acc30152889e7cc93818520a1c)() const = &::clang::DeclContext::getParent;
    class ::clang::ASTContext  & (::clang::DeclContext::*method_pointer_e53c951c859e549f8e2d55907d58911b)() const = &::clang::DeclContext::getParentASTContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_19d802944a3c5686a90d3c94eef1bb44)() = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_ed58c152fb445ae7912ee665797e3214)() const = &::clang::DeclContext::getPrimaryContext;
    class ::clang::DeclContext  * (::clang::DeclContext::*method_pointer_a2bff618c0b15fa69b907e45f60385fe)() = &::clang::DeclContext::getRedeclContext;
    class ::clang::DeclContext  const * (::clang::DeclContext::*method_pointer_90b88d980ff05077b3e0b955ef8e99b8)() const = &::clang::DeclContext::getRedeclContext;
    bool  (::clang::DeclContext::*method_pointer_126c31485d1852478bcc2a4b8f553f07)() const = &::clang::DeclContext::hasExternalLexicalStorage;
    bool  (::clang::DeclContext::*method_pointer_5b2e0e3ed3bc57ba9ee6091f58543c41)() const = &::clang::DeclContext::hasExternalVisibleStorage;
    bool  (::clang::DeclContext::*method_pointer_0592cc3c40235695a4e1e590ba506deb)() const = &::clang::DeclContext::isClosure;
    bool  (::clang::DeclContext::*method_pointer_cf46de11bca55eafa5701200fada8a95)(class ::clang::Decl  const *) const = &::clang::DeclContext::isDeclInLexicalTraversal;
    bool  (::clang::DeclContext::*method_pointer_60452acbac745b9e8761181d365f7d2b)() const = &::clang::DeclContext::isDependentContext;
    bool  (::clang::DeclContext::*method_pointer_1e6be24686b35e35b20f6de7a0116da6)() const = &::clang::DeclContext::isExternCContext;
    bool  (::clang::DeclContext::*method_pointer_b8e72f242b2c5dedae90144e9873a8f0)() const = &::clang::DeclContext::isExternCXXContext;
    bool  (::clang::DeclContext::*method_pointer_1374902b34485532a1f47ca547f91d6a)() const = &::clang::DeclContext::isFileContext;
    bool  (::clang::DeclContext::*method_pointer_0e4fa51c89055319a09e9d43953b7f9d)() const = &::clang::DeclContext::isFunctionOrMethod;
    bool  (::clang::DeclContext::*method_pointer_3d6cfe193bbd5345b324a4008b73561d)() const = &::clang::DeclContext::isInlineNamespace;
    bool  (::clang::DeclContext::*method_pointer_4543f08506a85d14930d853590454a2c)() const = &::clang::DeclContext::isLookupContext;
    bool  (::clang::DeclContext::*method_pointer_d622f5de5ed45b4c9945c397a63e81e2)() const = &::clang::DeclContext::isNamespace;
    bool  (::clang::DeclContext::*method_pointer_213040eb9981509e99682f9653d566cc)() const = &::clang::DeclContext::isObjCContainer;
    bool  (::clang::DeclContext::*method_pointer_fe5396f410265f579b803e433c79b6d0)() const = &::clang::DeclContext::isRecord;
    bool  (::clang::DeclContext::*method_pointer_9c768fe08c1d5f36b1842e8ea731207d)() const = &::clang::DeclContext::isStdNamespace;
    bool  (::clang::DeclContext::*method_pointer_cc5ce93b426f5f909a943d75b6b79a40)() const = &::clang::DeclContext::isTranslationUnit;
    bool  (::clang::DeclContext::*method_pointer_648b7e0ac66e5d5f98a458e5aaa9fce9)() const = &::clang::DeclContext::isTransparentContext;
    void  (::clang::DeclContext::*method_pointer_50524c7619e659c3abb9d68e98967f1a)(class ::clang::NamedDecl  *) = &::clang::DeclContext::makeDeclVisibleInContext;
    void  (::clang::DeclContext::*method_pointer_705b32ae3bbf5db0a75ece3845659f32)(class ::clang::Decl  *) = &::clang::DeclContext::removeDecl;
    void  (::clang::DeclContext::*method_pointer_9b12436b2544585d8a1b82198fa65e98)(bool ) = &::clang::DeclContext::setHasExternalLexicalStorage;
    void  (::clang::DeclContext::*method_pointer_6cfd096bac26519790e0e329b0ebf909)(bool ) = &::clang::DeclContext::setHasExternalVisibleStorage;
    void  (::clang::DeclContext::*method_pointer_55833679c51f5b3b84601495b3ad7969)() = &::clang::DeclContext::setMustBuildLookupTable;
    bool  (::clang::DeclContext::*method_pointer_36d9ee2d2166597a8af704541bd515d4)(bool ) = &::clang::DeclContext::setUseQualifiedLookup;
    bool  (::clang::DeclContext::*method_pointer_dcb2acff19b450058ee4dd8aa2ee3351)() const = &::clang::DeclContext::shouldUseQualifiedLookup;
    struct function_group
    {
        static class ::clang::EnumDecl  * function_833eaff292c95e42aecdbdb3533ad33f(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_enum(parameter_0); }
        static class ::clang::NamespaceDecl  * function_ebac0d5d157957c9828bd3cb3403b7f3(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_namespace(parameter_0); }
        static class ::clang::RecordDecl  * function_7dbf1c74ee53577387b10fe9ebd43ebd(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_record(parameter_0); }
        static class ::clang::TranslationUnitDecl  * function_f18cbc975a32559f83550127c133906b(class ::clang::DeclContext  * parameter_0)
        { return ::clanglite::as_translation_unit(parameter_0); }
        static class ::boost::python::list  function_edd8b946ec075a4cb0891cd0383d37c0(class ::clang::DeclContext  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::DeclContext, autowig::HeldType< class ::clang::DeclContext >, boost::noncopyable > class_b97237ef74ad5566bc5ae85fdde5a9b6("DeclContext", "", boost::python::no_init);
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("encloses", method_pointer_79745a427bbb591f9f05ca8c08f55e76, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("equals", method_pointer_429d5e8413df52099def456031dfb370, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("in_enclosing_namespace_set_of", method_pointer_9b419a40696d564e8891c2d1a05b722d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl", method_pointer_53f1be1e0ca65eeb9f71f15cc4c60336, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_decl_internal", method_pointer_93760b6de5ae5830a37a5bf3c7b06fb8, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("add_hidden_decl", method_pointer_00872d1c72625c2c82342690b8efde10, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_962a3b08b0425eb7aea7db1ce8e5777f, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("classof", method_pointer_8048f5071f995d53a004840408896ac8, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("contains_decl", method_pointer_9262b0a5a67e52f7924af1b0bc80d920, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("decls_empty", method_pointer_e3e15c96013054759d1f74a5f8e7db32, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_decl_context", method_pointer_899e26b833ab5eda93cefa33999ef347, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("dump_lookups", method_pointer_15545c649a435c348da5a1777d40afa1, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_decl_kind", method_pointer_299f2008ec1953a0961bc64cc1280124, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_74ea17bcd8b45f5584c3621e84d6ce81, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_enclosing_namespace_context", method_pointer_130c3771927551158dc15aeb2609ad7b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_252f0fc9aac05529ad1f66d234213e5b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lexical_parent", method_pointer_fec53a7a334e52ab8965518134db10d0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_cb123934e46a5992a376822a9393e282, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_lookup_parent", method_pointer_f53b8dc058065ef18a86ace1c0d80aab, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_b6a20cb1ed365d8a99ee34f2e7305146, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_non_closure_ancestor", method_pointer_d368bc2c3e7757feb8b7d1ed74b5e25a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_062ec38b60155a2cb13b27abb07288bf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_outer_lexical_record_context", method_pointer_20f057f97da5539980f7b0f9a78ab761, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_c845ecc7753057a4aa3b77115499688d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent", method_pointer_837de4acc30152889e7cc93818520a1c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_parent_ast_context", method_pointer_e53c951c859e549f8e2d55907d58911b, boost::python::return_internal_reference<>(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_19d802944a3c5686a90d3c94eef1bb44, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_primary_context", method_pointer_ed58c152fb445ae7912ee665797e3214, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_a2bff618c0b15fa69b907e45f60385fe, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_redecl_context", method_pointer_90b88d980ff05077b3e0b955ef8e99b8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_lexical_storage", method_pointer_126c31485d1852478bcc2a4b8f553f07, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("has_external_visible_storage", method_pointer_5b2e0e3ed3bc57ba9ee6091f58543c41, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_closure", method_pointer_0592cc3c40235695a4e1e590ba506deb, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_decl_in_lexical_traversal", method_pointer_cf46de11bca55eafa5701200fada8a95, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_dependent_context", method_pointer_60452acbac745b9e8761181d365f7d2b, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_c_context", method_pointer_1e6be24686b35e35b20f6de7a0116da6, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_extern_cxx_context", method_pointer_b8e72f242b2c5dedae90144e9873a8f0, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_file_context", method_pointer_1374902b34485532a1f47ca547f91d6a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_function_or_method", method_pointer_0e4fa51c89055319a09e9d43953b7f9d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_inline_namespace", method_pointer_3d6cfe193bbd5345b324a4008b73561d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_lookup_context", method_pointer_4543f08506a85d14930d853590454a2c, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_namespace", method_pointer_d622f5de5ed45b4c9945c397a63e81e2, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_obj_c_container", method_pointer_213040eb9981509e99682f9653d566cc, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_record", method_pointer_fe5396f410265f579b803e433c79b6d0, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_std_namespace", method_pointer_9c768fe08c1d5f36b1842e8ea731207d, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_translation_unit", method_pointer_cc5ce93b426f5f909a943d75b6b79a40, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("is_transparent_context", method_pointer_648b7e0ac66e5d5f98a458e5aaa9fce9, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("make_decl_visible_in_context", method_pointer_50524c7619e659c3abb9d68e98967f1a, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("remove_decl", method_pointer_705b32ae3bbf5db0a75ece3845659f32, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_lexical_storage", method_pointer_9b12436b2544585d8a1b82198fa65e98, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_has_external_visible_storage", method_pointer_6cfd096bac26519790e0e329b0ebf909, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_must_build_lookup_table", method_pointer_55833679c51f5b3b84601495b3ad7969, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("set_use_qualified_lookup", method_pointer_36d9ee2d2166597a8af704541bd515d4, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("should_use_qualified_lookup", method_pointer_dcb2acff19b450058ee4dd8aa2ee3351, "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.staticmethod("classof");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_enum", function_group::function_833eaff292c95e42aecdbdb3533ad33f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_namespace", function_group::function_ebac0d5d157957c9828bd3cb3403b7f3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_record", function_group::function_7dbf1c74ee53577387b10fe9ebd43ebd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("as_translation_unit", function_group::function_f18cbc975a32559f83550127c133906b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b97237ef74ad5566bc5ae85fdde5a9b6.def("get_children", function_group::function_edd8b946ec075a4cb0891cd0383d37c0, "");

}