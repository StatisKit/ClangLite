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
    class ::clang::VarDecl  * (*method_pointer_a3d2d280251955bd8de24c227f3b161a)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarDecl::CreateDeserialized;
    bool  (::clang::VarDecl::*method_pointer_2b8a2f438fb352ceb7d8e2b643899e65)() const = &::clang::VarDecl::checkInitIsICE;
    bool  (*method_pointer_dbf01638524753e496a5f7a9b90b0c93)(class ::clang::Decl  const *) = ::clang::VarDecl::classof;
    bool  (*method_pointer_4c1387be27c25979a5cc68079bcdc3a6)(enum ::clang::Decl::Kind ) = ::clang::VarDecl::classofKind;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_53ae6be8add756838833fc07e97fa492)() const = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_07c269de4c7d5562a6979b5dcbd10762)() = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_d5cee2afa7df568aaa8a03cd577aa390)() const = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_44b5cd3684a75359a0df70fc37ff66ea)() = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_4d2713bb5bba5810af91944227f058e3)(class ::clang::ASTContext  &) const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_c0a8b95f918b5d3aa0e1b0c76b2f3ce9)(class ::clang::ASTContext  &) = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_965e52dec1b85f91a1bcc951191ca82d)() const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_65a4ed32a1e258a58935d32e6d0139a9)() = &::clang::VarDecl::getDefinition;
    class ::clang::VarTemplateDecl  * (::clang::VarDecl::*method_pointer_ef2cdb6930ca5be98e2a6fc8e8e32b97)() const = &::clang::VarDecl::getDescribedVarTemplate;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_2f3af87480255016b103e6164aa8f0cf)() const = &::clang::VarDecl::getInstantiatedFromStaticDataMember;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_055c6ba381d758d49c6961560d36f16d)() = &::clang::VarDecl::getOutOfLineDefinition;
    bool  (::clang::VarDecl::*method_pointer_cd847bac5742567f843b095092c16960)() const = &::clang::VarDecl::hasExternalStorage;
    bool  (::clang::VarDecl::*method_pointer_a7cb1802c2fa57438507002bb2af1ace)() const = &::clang::VarDecl::hasGlobalStorage;
    bool  (::clang::VarDecl::*method_pointer_f8b70f7ae57f52cfbadf902378510ed0)() const = &::clang::VarDecl::hasInit;
    bool  (::clang::VarDecl::*method_pointer_1975cccd6b87520290aaaf097d717eba)() const = &::clang::VarDecl::hasLocalStorage;
    bool  (::clang::VarDecl::*method_pointer_76275fc133d85de8bd33bad8e3c43463)() const = &::clang::VarDecl::isARCPseudoStrong;
    bool  (::clang::VarDecl::*method_pointer_83f5de6c872858eebd1f10e4f31bd24d)() const = &::clang::VarDecl::isCXXForRangeDecl;
    bool  (::clang::VarDecl::*method_pointer_8a6ac4abcff752d195221b6a2a8b5f84)() const = &::clang::VarDecl::isConcept;
    bool  (::clang::VarDecl::*method_pointer_91ddb1a362455dc386d44abbdb9e74f4)() const = &::clang::VarDecl::isConstexpr;
    bool  (::clang::VarDecl::*method_pointer_ce4a0f2df17d579a8258eb550dce647f)() const = &::clang::VarDecl::isDirectInit;
    bool  (::clang::VarDecl::*method_pointer_3737dc8b08ae50ac8d02c27dee6b4de9)() const = &::clang::VarDecl::isExceptionVariable;
    bool  (::clang::VarDecl::*method_pointer_99dc4de5cd345ec19e6aa0bb8ac30e05)() const = &::clang::VarDecl::isExternC;
    bool  (::clang::VarDecl::*method_pointer_780bd008b0255593802ff89caccccadc)() const = &::clang::VarDecl::isFileVarDecl;
    bool  (::clang::VarDecl::*method_pointer_23ed7d4e2d2250e4b5a176dd78b7e4d0)() const = &::clang::VarDecl::isFunctionOrMethodVarDecl;
    bool  (::clang::VarDecl::*method_pointer_a8a69cb5071b52cc81431fd54e348b7f)() const = &::clang::VarDecl::isInExternCContext;
    bool  (::clang::VarDecl::*method_pointer_8d004ef94b665a608f4ae0c0d3d59150)() const = &::clang::VarDecl::isInExternCXXContext;
    bool  (::clang::VarDecl::*method_pointer_266ebcd4def452b7a4a66d536c678fdb)() const = &::clang::VarDecl::isInitCapture;
    bool  (::clang::VarDecl::*method_pointer_98c0664e980253d0a0eaaa5d7030878f)() const = &::clang::VarDecl::isInitICE;
    bool  (::clang::VarDecl::*method_pointer_5ac81e3408f953bebbb99c082a0a2979)() const = &::clang::VarDecl::isInitKnownICE;
    bool  (::clang::VarDecl::*method_pointer_28cd59e68b1957389063d95991dd7bd5)() const = &::clang::VarDecl::isLocalVarDecl;
    bool  (::clang::VarDecl::*method_pointer_8be6c1eb16f6507eb043d68810e9025d)() const = &::clang::VarDecl::isLocalVarDeclOrParm;
    bool  (::clang::VarDecl::*method_pointer_7283a6a3a0d453fea7bdd32bba51f837)() const = &::clang::VarDecl::isNRVOVariable;
    bool  (::clang::VarDecl::*method_pointer_1b582ba4a426563b8e5c28879140ac83)() const = &::clang::VarDecl::isOutOfLine;
    bool  (::clang::VarDecl::*method_pointer_c877f3d9599954d6a8be914989c1d434)() const = &::clang::VarDecl::isPreviousDeclInSameBlockScope;
    bool  (::clang::VarDecl::*method_pointer_4c2ed8e55bb2580fb8380929aa8de500)() const = &::clang::VarDecl::isStaticDataMember;
    bool  (::clang::VarDecl::*method_pointer_a015edea86ce5fe4a89aa6762aae2adf)() const = &::clang::VarDecl::isStaticLocal;
    bool  (::clang::VarDecl::*method_pointer_dc3843da87a75b5ead56fe013387dd91)(class ::clang::ASTContext  &) const = &::clang::VarDecl::isUsableInConstantExpressions;
    void  (::clang::VarDecl::*method_pointer_458edb4313605b88b4ab56fc7ac5b0cf)(bool ) = &::clang::VarDecl::setARCPseudoStrong;
    void  (::clang::VarDecl::*method_pointer_2dfd90298d0b583c8b30312e5a524386)(bool ) = &::clang::VarDecl::setCXXForRangeDecl;
    void  (::clang::VarDecl::*method_pointer_8f06758447c1505eb5c8a9881a55782e)(bool ) = &::clang::VarDecl::setConcept;
    void  (::clang::VarDecl::*method_pointer_a971da6bf63d52eabd4b74d72bd2c567)(bool ) = &::clang::VarDecl::setConstexpr;
    void  (::clang::VarDecl::*method_pointer_78f85076d66e5089898cdc79e1a50f9e)(class ::clang::VarTemplateDecl  *) = &::clang::VarDecl::setDescribedVarTemplate;
    void  (::clang::VarDecl::*method_pointer_9a5640972c385d6aa8b183cf74f3eb72)(bool ) = &::clang::VarDecl::setExceptionVariable;
    void  (::clang::VarDecl::*method_pointer_45632d9f233f5a56a0cc89cd7a66d5a5)(bool ) = &::clang::VarDecl::setInitCapture;
    void  (::clang::VarDecl::*method_pointer_754efc4d9dcf5aa1b27460c917ba0624)(bool ) = &::clang::VarDecl::setNRVOVariable;
    void  (::clang::VarDecl::*method_pointer_727e01bcb8ad57d3ace0b1aec812b64c)(bool ) = &::clang::VarDecl::setPreviousDeclInSameBlockScope;
    boost::python::class_< class ::clang::VarDecl, autowig::HeldType< class ::clang::VarDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_99d3396ee242572bbeaada83b5e83165("VarDecl", "", boost::python::no_init);
    class_99d3396ee242572bbeaada83b5e83165.def("create_deserialized", method_pointer_a3d2d280251955bd8de24c227f3b161a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("check_init_is_ice", method_pointer_2b8a2f438fb352ceb7d8e2b643899e65, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof", method_pointer_dbf01638524753e496a5f7a9b90b0c93, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof_kind", method_pointer_4c1387be27c25979a5cc68079bcdc3a6, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_53ae6be8add756838833fc07e97fa492, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_07c269de4c7d5562a6979b5dcbd10762, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_d5cee2afa7df568aaa8a03cd577aa390, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_44b5cd3684a75359a0df70fc37ff66ea, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_4d2713bb5bba5810af91944227f058e3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_c0a8b95f918b5d3aa0e1b0c76b2f3ce9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_965e52dec1b85f91a1bcc951191ca82d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_65a4ed32a1e258a58935d32e6d0139a9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_described_var_template", method_pointer_ef2cdb6930ca5be98e2a6fc8e8e32b97, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_instantiated_from_static_data_member", method_pointer_2f3af87480255016b103e6164aa8f0cf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_out_of_line_definition", method_pointer_055c6ba381d758d49c6961560d36f16d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_external_storage", method_pointer_cd847bac5742567f843b095092c16960, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_global_storage", method_pointer_a7cb1802c2fa57438507002bb2af1ace, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_init", method_pointer_f8b70f7ae57f52cfbadf902378510ed0, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_local_storage", method_pointer_1975cccd6b87520290aaaf097d717eba, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_arc_pseudo_strong", method_pointer_76275fc133d85de8bd33bad8e3c43463, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_cxx_for_range_decl", method_pointer_83f5de6c872858eebd1f10e4f31bd24d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_concept", method_pointer_8a6ac4abcff752d195221b6a2a8b5f84, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_constexpr", method_pointer_91ddb1a362455dc386d44abbdb9e74f4, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_direct_init", method_pointer_ce4a0f2df17d579a8258eb550dce647f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_exception_variable", method_pointer_3737dc8b08ae50ac8d02c27dee6b4de9, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_extern_c", method_pointer_99dc4de5cd345ec19e6aa0bb8ac30e05, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_file_var_decl", method_pointer_780bd008b0255593802ff89caccccadc, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_function_or_method_var_decl", method_pointer_23ed7d4e2d2250e4b5a176dd78b7e4d0, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_c_context", method_pointer_a8a69cb5071b52cc81431fd54e348b7f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_cxx_context", method_pointer_8d004ef94b665a608f4ae0c0d3d59150, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_capture", method_pointer_266ebcd4def452b7a4a66d536c678fdb, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_ice", method_pointer_98c0664e980253d0a0eaaa5d7030878f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_known_ice", method_pointer_5ac81e3408f953bebbb99c082a0a2979, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl", method_pointer_28cd59e68b1957389063d95991dd7bd5, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl_or_parm", method_pointer_8be6c1eb16f6507eb043d68810e9025d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_nrvo_variable", method_pointer_7283a6a3a0d453fea7bdd32bba51f837, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_out_of_line", method_pointer_1b582ba4a426563b8e5c28879140ac83, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_previous_decl_in_same_block_scope", method_pointer_c877f3d9599954d6a8be914989c1d434, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_data_member", method_pointer_4c2ed8e55bb2580fb8380929aa8de500, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_local", method_pointer_a015edea86ce5fe4a89aa6762aae2adf, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_usable_in_constant_expressions", method_pointer_dc3843da87a75b5ead56fe013387dd91, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_arc_pseudo_strong", method_pointer_458edb4313605b88b4ab56fc7ac5b0cf, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_cxx_for_range_decl", method_pointer_2dfd90298d0b583c8b30312e5a524386, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_concept", method_pointer_8f06758447c1505eb5c8a9881a55782e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_constexpr", method_pointer_a971da6bf63d52eabd4b74d72bd2c567, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_described_var_template", method_pointer_78f85076d66e5089898cdc79e1a50f9e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_exception_variable", method_pointer_9a5640972c385d6aa8b183cf74f3eb72, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_init_capture", method_pointer_45632d9f233f5a56a0cc89cd7a66d5a5, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_nrvo_variable", method_pointer_754efc4d9dcf5aa1b27460c917ba0624, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_previous_decl_in_same_block_scope", method_pointer_727e01bcb8ad57d3ace0b1aec812b64c, "");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof_kind");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("create_deserialized");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}