#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_99d3396ee242572bbeaada83b5e83165()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::VarDecl::*method_pointer_99acd0ed5c545e4cb019b53a7838300f)() const = &::clang::VarDecl::isConcept;
    bool  (::clang::VarDecl::*method_pointer_d90108f824545a91bd4365f53d3ae227)(class ::clang::ASTContext  &) const = &::clang::VarDecl::isUsableInConstantExpressions;
    class ::clang::VarDecl  * (*method_pointer_ffad0c3dfa09504b9c25e9da0dcf9812)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarDecl::CreateDeserialized;
    bool  (::clang::VarDecl::*method_pointer_380f96330a025c8eb00e4cbae71e7f3a)() const = &::clang::VarDecl::isLocalVarDeclOrParm;
    void  (::clang::VarDecl::*method_pointer_fa2c7f8718ed5175ab19ea322e0eafe1)(bool ) = &::clang::VarDecl::setInitCapture;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_8d5a32b5eb0e5cedab58670b976a1748)() const = &::clang::VarDecl::getDefinition;
    void  (::clang::VarDecl::*method_pointer_fd3d92287a415971b34e32eb847fd634)(bool ) = &::clang::VarDecl::setConcept;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_7ab34059bdf656a69fc445b625957f7b)() = &::clang::VarDecl::getActingDefinition;
    bool  (::clang::VarDecl::*method_pointer_9ee6dbd4093d50438b80d7e6dd3ee88d)() const = &::clang::VarDecl::isFunctionOrMethodVarDecl;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_cd7c744354fc5b24a69a9dc940bb2677)() = &::clang::VarDecl::getDefinition;
    bool  (::clang::VarDecl::*method_pointer_59d89e3ac73b5e2dadd8efaa168357ec)() const = &::clang::VarDecl::isCXXForRangeDecl;
    bool  (::clang::VarDecl::*method_pointer_aa691e1d0e175e129725b83fb9540ccc)() const = &::clang::VarDecl::hasLocalStorage;
    bool  (::clang::VarDecl::*method_pointer_694290f46a18588cbd290c22ad8f6786)() const = &::clang::VarDecl::isPreviousDeclInSameBlockScope;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_028f913b4f075f278902e529ebe36bdb)() const = &::clang::VarDecl::getInstantiatedFromStaticDataMember;
    void  (::clang::VarDecl::*method_pointer_7683faac1fb1512082f7dc4112d3cd26)(bool ) = &::clang::VarDecl::setCXXForRangeDecl;
    bool  (::clang::VarDecl::*method_pointer_7cdf73e2394852838d26c23033a7b1d3)() const = &::clang::VarDecl::isInitICE;
    bool  (::clang::VarDecl::*method_pointer_2006d9b57deb5c8bb926fd69e1a846ac)() const = &::clang::VarDecl::isExceptionVariable;
    bool  (::clang::VarDecl::*method_pointer_ce94e2c4882a538083155fcd28235f7b)() const = &::clang::VarDecl::checkInitIsICE;
    void  (::clang::VarDecl::*method_pointer_42c9306a44fc59a6938203a0d1482891)(bool ) = &::clang::VarDecl::setConstexpr;
    bool  (::clang::VarDecl::*method_pointer_c2d220ecc3ae5e0dbce6c4afed9629e7)() const = &::clang::VarDecl::isInExternCContext;
    bool  (::clang::VarDecl::*method_pointer_f5779dc2128959d4a4148eb9d0ab4dd9)() const = &::clang::VarDecl::isStaticLocal;
    void  (::clang::VarDecl::*method_pointer_4f4199598ed45203bc025d68f5f201b0)(bool ) = &::clang::VarDecl::setPreviousDeclInSameBlockScope;
    bool  (::clang::VarDecl::*method_pointer_eb3f9294e36f5f5d910f94a9a9ff61cf)() const = &::clang::VarDecl::isInitKnownICE;
    bool  (*method_pointer_1d241e5c07945563b378f5ec6b1295c2)(enum ::clang::Decl::Kind ) = ::clang::VarDecl::classofKind;
    void  (::clang::VarDecl::*method_pointer_8026b18c8119555fab106159f12b13f1)(bool ) = &::clang::VarDecl::setARCPseudoStrong;
    bool  (*method_pointer_5ba07a37a14f5ec5b48123b9eeaa0d05)(class ::clang::Decl  const *) = ::clang::VarDecl::classof;
    bool  (::clang::VarDecl::*method_pointer_558eb696f8ee5849bd78558fa23553c5)() const = &::clang::VarDecl::isInExternCXXContext;
    bool  (::clang::VarDecl::*method_pointer_26f205b9704c51c5bba8ad6f3ce91862)() const = &::clang::VarDecl::isNRVOVariable;
    bool  (::clang::VarDecl::*method_pointer_07d05b870bf75401ac06de2656906d99)() const = &::clang::VarDecl::isConstexpr;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_dde9070ff8575ad89085b4fd80f51166)() const = &::clang::VarDecl::getCanonicalDecl;
    bool  (::clang::VarDecl::*method_pointer_cf743cca8f4f5103a526dd5eb62dab91)() const = &::clang::VarDecl::hasInit;
    bool  (::clang::VarDecl::*method_pointer_35f2865181fd5daba231ec5b1f96f7c9)() const = &::clang::VarDecl::isLocalVarDecl;
    bool  (::clang::VarDecl::*method_pointer_b8b58473d6135e4a90b7d981e20f729f)() const = &::clang::VarDecl::isDirectInit;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_5fd2e75a29da514eb047481ffef370e5)(class ::clang::ASTContext  &) = &::clang::VarDecl::getDefinition;
    bool  (::clang::VarDecl::*method_pointer_ca7f07132abd55ed8314fbba2097661a)() const = &::clang::VarDecl::isARCPseudoStrong;
    bool  (::clang::VarDecl::*method_pointer_dce3261f8a5d5471b078b3ed972448bc)() const = &::clang::VarDecl::hasExternalStorage;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_330102e3787c55509bf5c93f0162d573)() = &::clang::VarDecl::getOutOfLineDefinition;
    bool  (::clang::VarDecl::*method_pointer_cd8aff85e7a252e483ac1d82a02ddf84)() const = &::clang::VarDecl::isStaticDataMember;
    void  (::clang::VarDecl::*method_pointer_99161ce5949857dd8dc04d14a130a63c)(class ::clang::VarTemplateDecl  *) = &::clang::VarDecl::setDescribedVarTemplate;
    bool  (::clang::VarDecl::*method_pointer_f43c1927f7df5ab0b02f98363caf2298)() const = &::clang::VarDecl::isOutOfLine;
    bool  (::clang::VarDecl::*method_pointer_9d9ad9866f9e576ba1cf2b9755ae580f)() const = &::clang::VarDecl::isFileVarDecl;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_9747064451c256e39d37afdad24f4c2a)() const = &::clang::VarDecl::getActingDefinition;
    bool  (::clang::VarDecl::*method_pointer_bb4da0bdcd565d72bcd3bba6052a7bc1)() const = &::clang::VarDecl::isInitCapture;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_3ff2bc84007554f888b68206669ac358)() = &::clang::VarDecl::getCanonicalDecl;
    void  (::clang::VarDecl::*method_pointer_98bce776ae9d518888423f6ca1812943)(bool ) = &::clang::VarDecl::setNRVOVariable;
    bool  (::clang::VarDecl::*method_pointer_1b172f9d2ce65c33a31bf420963059ce)() const = &::clang::VarDecl::hasGlobalStorage;
    bool  (::clang::VarDecl::*method_pointer_db22dcd4a1a45e218e09482b0f06792c)() const = &::clang::VarDecl::isExternC;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_d049884f1f8c5536a684369246158b49)(class ::clang::ASTContext  &) const = &::clang::VarDecl::getDefinition;
    void  (::clang::VarDecl::*method_pointer_86f1e1b4c0d65d3b8232e03e76c0eb0b)(bool ) = &::clang::VarDecl::setExceptionVariable;
    class ::clang::VarTemplateDecl  * (::clang::VarDecl::*method_pointer_4da830eeb6c25ed68e2e8df5354a9046)() const = &::clang::VarDecl::getDescribedVarTemplate;
    boost::python::class_< class ::clang::VarDecl, autowig::HeldType< class ::clang::VarDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_99d3396ee242572bbeaada83b5e83165("VarDecl", "", boost::python::no_init);
    class_99d3396ee242572bbeaada83b5e83165.def("is_concept", method_pointer_99acd0ed5c545e4cb019b53a7838300f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_usable_in_constant_expressions", method_pointer_d90108f824545a91bd4365f53d3ae227, "");
    class_99d3396ee242572bbeaada83b5e83165.def("create_deserialized", method_pointer_ffad0c3dfa09504b9c25e9da0dcf9812, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl_or_parm", method_pointer_380f96330a025c8eb00e4cbae71e7f3a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_init_capture", method_pointer_fa2c7f8718ed5175ab19ea322e0eafe1, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_8d5a32b5eb0e5cedab58670b976a1748, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_concept", method_pointer_fd3d92287a415971b34e32eb847fd634, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_7ab34059bdf656a69fc445b625957f7b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_function_or_method_var_decl", method_pointer_9ee6dbd4093d50438b80d7e6dd3ee88d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_cd7c744354fc5b24a69a9dc940bb2677, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_cxx_for_range_decl", method_pointer_59d89e3ac73b5e2dadd8efaa168357ec, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_local_storage", method_pointer_aa691e1d0e175e129725b83fb9540ccc, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_previous_decl_in_same_block_scope", method_pointer_694290f46a18588cbd290c22ad8f6786, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_instantiated_from_static_data_member", method_pointer_028f913b4f075f278902e529ebe36bdb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_cxx_for_range_decl", method_pointer_7683faac1fb1512082f7dc4112d3cd26, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_ice", method_pointer_7cdf73e2394852838d26c23033a7b1d3, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_exception_variable", method_pointer_2006d9b57deb5c8bb926fd69e1a846ac, "");
    class_99d3396ee242572bbeaada83b5e83165.def("check_init_is_ice", method_pointer_ce94e2c4882a538083155fcd28235f7b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_constexpr", method_pointer_42c9306a44fc59a6938203a0d1482891, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_c_context", method_pointer_c2d220ecc3ae5e0dbce6c4afed9629e7, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_local", method_pointer_f5779dc2128959d4a4148eb9d0ab4dd9, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_previous_decl_in_same_block_scope", method_pointer_4f4199598ed45203bc025d68f5f201b0, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_known_ice", method_pointer_eb3f9294e36f5f5d910f94a9a9ff61cf, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof_kind", method_pointer_1d241e5c07945563b378f5ec6b1295c2, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_arc_pseudo_strong", method_pointer_8026b18c8119555fab106159f12b13f1, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof", method_pointer_5ba07a37a14f5ec5b48123b9eeaa0d05, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_cxx_context", method_pointer_558eb696f8ee5849bd78558fa23553c5, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_nrvo_variable", method_pointer_26f205b9704c51c5bba8ad6f3ce91862, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_constexpr", method_pointer_07d05b870bf75401ac06de2656906d99, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_dde9070ff8575ad89085b4fd80f51166, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_init", method_pointer_cf743cca8f4f5103a526dd5eb62dab91, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl", method_pointer_35f2865181fd5daba231ec5b1f96f7c9, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_direct_init", method_pointer_b8b58473d6135e4a90b7d981e20f729f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_5fd2e75a29da514eb047481ffef370e5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_arc_pseudo_strong", method_pointer_ca7f07132abd55ed8314fbba2097661a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_external_storage", method_pointer_dce3261f8a5d5471b078b3ed972448bc, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_out_of_line_definition", method_pointer_330102e3787c55509bf5c93f0162d573, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_data_member", method_pointer_cd8aff85e7a252e483ac1d82a02ddf84, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_described_var_template", method_pointer_99161ce5949857dd8dc04d14a130a63c, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_out_of_line", method_pointer_f43c1927f7df5ab0b02f98363caf2298, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_file_var_decl", method_pointer_9d9ad9866f9e576ba1cf2b9755ae580f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_9747064451c256e39d37afdad24f4c2a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_capture", method_pointer_bb4da0bdcd565d72bcd3bba6052a7bc1, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_3ff2bc84007554f888b68206669ac358, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_nrvo_variable", method_pointer_98bce776ae9d518888423f6ca1812943, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_global_storage", method_pointer_1b172f9d2ce65c33a31bf420963059ce, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_extern_c", method_pointer_db22dcd4a1a45e218e09482b0f06792c, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_d049884f1f8c5536a684369246158b49, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_exception_variable", method_pointer_86f1e1b4c0d65d3b8232e03e76c0eb0b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_described_var_template", method_pointer_4da830eeb6c25ed68e2e8df5354a9046, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof_kind");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("create_deserialized");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}