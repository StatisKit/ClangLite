#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_99d3396ee242572bbeaada83b5e83165()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::VarDecl  * (*method_pointer_77b84d3d4bd15bb9b9760665b964b4aa)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarDecl::CreateDeserialized;
    bool  (::clang::VarDecl::*method_pointer_1635857dee685c03a15e08d3adb28678)() const = &::clang::VarDecl::checkInitIsICE;
    bool  (*method_pointer_0ff731a69cfd5f50a88b25bb53befee3)(class ::clang::Decl  const *) = ::clang::VarDecl::classof;
    bool  (*method_pointer_e95481ed8afa52c4b5e9815612e0a0ee)(enum ::clang::Decl::Kind ) = ::clang::VarDecl::classofKind;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_265000cbb91a53638d692ef5dd691fbc)() = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_a8688203ec5851b9b9619c9ce4b7a38d)() const = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_4f7c829ae5d3510f8abafe7544958c5e)() const = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_99cb320f4bda5a50881c9bae648d991a)() = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_60f2e3aba1ac51219e1a960391757732)() = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_50c8c765524a52fd920558674d303c1c)() const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_db59752d79c05334bdb20ca86b485e5a)(class ::clang::ASTContext  &) = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_70cc4b35a3145dbd9116e36d17c2c14c)(class ::clang::ASTContext  &) const = &::clang::VarDecl::getDefinition;
    class ::clang::VarTemplateDecl  * (::clang::VarDecl::*method_pointer_5a4b5d1425775e2eb9fa0e78e19b0c49)() const = &::clang::VarDecl::getDescribedVarTemplate;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_ce24c58e30bc5426a9e0e6d8b6d506c9)() const = &::clang::VarDecl::getInstantiatedFromStaticDataMember;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_0d983ce8c0465c759452d676fdfd345d)() = &::clang::VarDecl::getOutOfLineDefinition;
    class ::clang::SourceLocation  (::clang::VarDecl::*method_pointer_06856899e46f51ca8f1d13420203b0fd)() const = &::clang::VarDecl::getPointOfInstantiation;
    bool  (::clang::VarDecl::*method_pointer_3bcbaabdb75d5ab5a95166c63d1ee74a)() const = &::clang::VarDecl::hasExternalStorage;
    bool  (::clang::VarDecl::*method_pointer_7287a00c3ca75a0ca21d6b570dc6c61b)() const = &::clang::VarDecl::hasGlobalStorage;
    bool  (::clang::VarDecl::*method_pointer_8c47baf8dc8153faa8dc642b7efe46a1)() const = &::clang::VarDecl::hasInit;
    bool  (::clang::VarDecl::*method_pointer_3d293bcbd0475353ac1fa72362c78ee9)() const = &::clang::VarDecl::hasLocalStorage;
    bool  (::clang::VarDecl::*method_pointer_f2d2b0ff3a1d5e12968ec8827d63c816)() const = &::clang::VarDecl::isARCPseudoStrong;
    bool  (::clang::VarDecl::*method_pointer_ca80c9678c645f1c801d185c7729bf0d)() const = &::clang::VarDecl::isCXXForRangeDecl;
    bool  (::clang::VarDecl::*method_pointer_2dc70255986a5aca861d7993102d9aca)() const = &::clang::VarDecl::isConcept;
    bool  (::clang::VarDecl::*method_pointer_d80a8b246a925fddbf74b38244ca8699)() const = &::clang::VarDecl::isConstexpr;
    bool  (::clang::VarDecl::*method_pointer_790c885071b650348f75a31e786637c3)() const = &::clang::VarDecl::isDirectInit;
    bool  (::clang::VarDecl::*method_pointer_7e6d8af1f07a5aadb1b9e56890a40f3a)() const = &::clang::VarDecl::isExceptionVariable;
    bool  (::clang::VarDecl::*method_pointer_e3cf149ba63f598ab585cfc1655974a1)() const = &::clang::VarDecl::isExternC;
    bool  (::clang::VarDecl::*method_pointer_f27b5819f0d25b149c3cbd4d68698aea)() const = &::clang::VarDecl::isFileVarDecl;
    bool  (::clang::VarDecl::*method_pointer_80648d8d18245ce0a2e5c49f71f679bc)() const = &::clang::VarDecl::isFunctionOrMethodVarDecl;
    bool  (::clang::VarDecl::*method_pointer_fdf66708f9225f7c9c4e9c501add2f71)() const = &::clang::VarDecl::isInExternCContext;
    bool  (::clang::VarDecl::*method_pointer_ba81309215b757c5a4c0329bdfc3f751)() const = &::clang::VarDecl::isInExternCXXContext;
    bool  (::clang::VarDecl::*method_pointer_ce8833fd33495973ad10ec2f4141cfcf)() const = &::clang::VarDecl::isInitCapture;
    bool  (::clang::VarDecl::*method_pointer_8b2e9461edd35a6ab576892363a7c0a6)() const = &::clang::VarDecl::isInitICE;
    bool  (::clang::VarDecl::*method_pointer_092254a20b935836ac22da4df8e07c22)() const = &::clang::VarDecl::isInitKnownICE;
    bool  (::clang::VarDecl::*method_pointer_87c078d15f0a51cfadf15e23e466ccaa)() const = &::clang::VarDecl::isLocalVarDecl;
    bool  (::clang::VarDecl::*method_pointer_6168d086c40251e5b4f53802ad0e3b3c)() const = &::clang::VarDecl::isLocalVarDeclOrParm;
    bool  (::clang::VarDecl::*method_pointer_09b6c380236f522b8efc42cd2c6ac808)() const = &::clang::VarDecl::isNRVOVariable;
    bool  (::clang::VarDecl::*method_pointer_3b5feff34b0b5f3c915140d4e1a4cba0)() const = &::clang::VarDecl::isOutOfLine;
    bool  (::clang::VarDecl::*method_pointer_61696a6b786455aca6c4148b6cfbe3e5)() const = &::clang::VarDecl::isPreviousDeclInSameBlockScope;
    bool  (::clang::VarDecl::*method_pointer_298a522a9df158f2841216a292a63877)() const = &::clang::VarDecl::isStaticDataMember;
    bool  (::clang::VarDecl::*method_pointer_0ece5967ff6d5a61ac11ba62cd405a41)() const = &::clang::VarDecl::isStaticLocal;
    bool  (::clang::VarDecl::*method_pointer_3ef0fe94dbe15c54913e1d9af2a8f2ad)(class ::clang::ASTContext  &) const = &::clang::VarDecl::isUsableInConstantExpressions;
    void  (::clang::VarDecl::*method_pointer_574cdefadb7c53baac7fb6085a054eab)(bool ) = &::clang::VarDecl::setARCPseudoStrong;
    void  (::clang::VarDecl::*method_pointer_6123d5f97ab753c889c546b5b420ef9e)(bool ) = &::clang::VarDecl::setCXXForRangeDecl;
    void  (::clang::VarDecl::*method_pointer_622100b7694e5483962043f93a8da8d2)(bool ) = &::clang::VarDecl::setConcept;
    void  (::clang::VarDecl::*method_pointer_33c99d65ebab544db2f4085c40e624c2)(bool ) = &::clang::VarDecl::setConstexpr;
    void  (::clang::VarDecl::*method_pointer_f284111aaab854fdadcc79e643c285bc)(class ::clang::VarTemplateDecl  *) = &::clang::VarDecl::setDescribedVarTemplate;
    void  (::clang::VarDecl::*method_pointer_a456611c28195618ac8f39e0dc3eb390)(bool ) = &::clang::VarDecl::setExceptionVariable;
    void  (::clang::VarDecl::*method_pointer_c87c8c6378d252af920e71eb3a5c816c)(bool ) = &::clang::VarDecl::setInitCapture;
    void  (::clang::VarDecl::*method_pointer_8b7ce6c0b5725699bed2377c0b54d5b0)(bool ) = &::clang::VarDecl::setNRVOVariable;
    void  (::clang::VarDecl::*method_pointer_5b286cf5a57c583b8ba37b6cb3ac3259)(bool ) = &::clang::VarDecl::setPreviousDeclInSameBlockScope;
    boost::python::class_< class ::clang::VarDecl, autowig::HeldType< class ::clang::VarDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_99d3396ee242572bbeaada83b5e83165("VarDecl", "", boost::python::no_init);
    class_99d3396ee242572bbeaada83b5e83165.def("create_deserialized", method_pointer_77b84d3d4bd15bb9b9760665b964b4aa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("check_init_is_ice", method_pointer_1635857dee685c03a15e08d3adb28678, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof", method_pointer_0ff731a69cfd5f50a88b25bb53befee3, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof_kind", method_pointer_e95481ed8afa52c4b5e9815612e0a0ee, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_265000cbb91a53638d692ef5dd691fbc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_a8688203ec5851b9b9619c9ce4b7a38d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_4f7c829ae5d3510f8abafe7544958c5e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_99cb320f4bda5a50881c9bae648d991a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_60f2e3aba1ac51219e1a960391757732, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_50c8c765524a52fd920558674d303c1c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_db59752d79c05334bdb20ca86b485e5a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_70cc4b35a3145dbd9116e36d17c2c14c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_described_var_template", method_pointer_5a4b5d1425775e2eb9fa0e78e19b0c49, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_instantiated_from_static_data_member", method_pointer_ce24c58e30bc5426a9e0e6d8b6d506c9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_out_of_line_definition", method_pointer_0d983ce8c0465c759452d676fdfd345d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_point_of_instantiation", method_pointer_06856899e46f51ca8f1d13420203b0fd, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_external_storage", method_pointer_3bcbaabdb75d5ab5a95166c63d1ee74a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_global_storage", method_pointer_7287a00c3ca75a0ca21d6b570dc6c61b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_init", method_pointer_8c47baf8dc8153faa8dc642b7efe46a1, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_local_storage", method_pointer_3d293bcbd0475353ac1fa72362c78ee9, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_arc_pseudo_strong", method_pointer_f2d2b0ff3a1d5e12968ec8827d63c816, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_cxx_for_range_decl", method_pointer_ca80c9678c645f1c801d185c7729bf0d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_concept", method_pointer_2dc70255986a5aca861d7993102d9aca, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_constexpr", method_pointer_d80a8b246a925fddbf74b38244ca8699, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_direct_init", method_pointer_790c885071b650348f75a31e786637c3, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_exception_variable", method_pointer_7e6d8af1f07a5aadb1b9e56890a40f3a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_extern_c", method_pointer_e3cf149ba63f598ab585cfc1655974a1, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_file_var_decl", method_pointer_f27b5819f0d25b149c3cbd4d68698aea, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_function_or_method_var_decl", method_pointer_80648d8d18245ce0a2e5c49f71f679bc, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_c_context", method_pointer_fdf66708f9225f7c9c4e9c501add2f71, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_cxx_context", method_pointer_ba81309215b757c5a4c0329bdfc3f751, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_capture", method_pointer_ce8833fd33495973ad10ec2f4141cfcf, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_ice", method_pointer_8b2e9461edd35a6ab576892363a7c0a6, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_known_ice", method_pointer_092254a20b935836ac22da4df8e07c22, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl", method_pointer_87c078d15f0a51cfadf15e23e466ccaa, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl_or_parm", method_pointer_6168d086c40251e5b4f53802ad0e3b3c, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_nrvo_variable", method_pointer_09b6c380236f522b8efc42cd2c6ac808, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_out_of_line", method_pointer_3b5feff34b0b5f3c915140d4e1a4cba0, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_previous_decl_in_same_block_scope", method_pointer_61696a6b786455aca6c4148b6cfbe3e5, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_data_member", method_pointer_298a522a9df158f2841216a292a63877, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_local", method_pointer_0ece5967ff6d5a61ac11ba62cd405a41, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_usable_in_constant_expressions", method_pointer_3ef0fe94dbe15c54913e1d9af2a8f2ad, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_arc_pseudo_strong", method_pointer_574cdefadb7c53baac7fb6085a054eab, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_cxx_for_range_decl", method_pointer_6123d5f97ab753c889c546b5b420ef9e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_concept", method_pointer_622100b7694e5483962043f93a8da8d2, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_constexpr", method_pointer_33c99d65ebab544db2f4085c40e624c2, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_described_var_template", method_pointer_f284111aaab854fdadcc79e643c285bc, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_exception_variable", method_pointer_a456611c28195618ac8f39e0dc3eb390, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_init_capture", method_pointer_c87c8c6378d252af920e71eb3a5c816c, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_nrvo_variable", method_pointer_8b7ce6c0b5725699bed2377c0b54d5b0, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_previous_decl_in_same_block_scope", method_pointer_5b286cf5a57c583b8ba37b6cb3ac3259, "");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof_kind");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("create_deserialized");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}