#include "_clanglite.h"


namespace autowig
{
}


void wrapper_99d3396ee242572bbeaada83b5e83165()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::VarDecl  * (*method_pointer_d350a181e374526e810c1d77bba57458)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarDecl::CreateDeserialized;
    bool  (::clang::VarDecl::*method_pointer_6adb50ce301752c186be772c639a12ab)() const = &::clang::VarDecl::checkInitIsICE;
    bool  (*method_pointer_ad22fb0b700852b38e723ab307d5c2e4)(class ::clang::Decl  const *) = ::clang::VarDecl::classof;
    bool  (*method_pointer_b881e1bf84e553cf8d452a2ba5c08f72)(enum ::clang::Decl::Kind ) = ::clang::VarDecl::classofKind;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_0baf4fac243c5e44a8449d02a8e72710)() const = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_d9056bd70cac5420b3d2a1bb4c65a20e)() = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_3f1db2e080285754b1e67eb0e86becc8)() const = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_6bba479064ad5d488136df677f8b54e4)() = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_6f034684c60856f1aa45d63349e738ce)() const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_dc57461a36435297840eac648e1860bd)(class ::clang::ASTContext  &) = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_1a744db8444d51b2bad4aae92139acc5)(class ::clang::ASTContext  &) const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_ec1cbb6c10165960a3aa15ef363eec2c)() = &::clang::VarDecl::getDefinition;
    class ::clang::VarTemplateDecl  * (::clang::VarDecl::*method_pointer_0b83c502fea55e4cb004a1d704f3797f)() const = &::clang::VarDecl::getDescribedVarTemplate;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_a27b3bbe1e6e5e6cba83ea2311944130)() const = &::clang::VarDecl::getInstantiatedFromStaticDataMember;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_d706de93b17c513cb296c6dbd688f1c9)() = &::clang::VarDecl::getOutOfLineDefinition;
    bool  (::clang::VarDecl::*method_pointer_e16f8023ceb75c2a9b7c05fb5907be57)() const = &::clang::VarDecl::hasExternalStorage;
    bool  (::clang::VarDecl::*method_pointer_f2eed0f7ee715bfa9e5989bb6bb99308)() const = &::clang::VarDecl::hasGlobalStorage;
    bool  (::clang::VarDecl::*method_pointer_24c46dc257255181999822e74de1186a)() const = &::clang::VarDecl::hasInit;
    bool  (::clang::VarDecl::*method_pointer_089a9c29c56f56bdaca3de38f1a091cd)() const = &::clang::VarDecl::hasLocalStorage;
    bool  (::clang::VarDecl::*method_pointer_f9d871b370025ea4a2a35f3941fe7484)() const = &::clang::VarDecl::isARCPseudoStrong;
    bool  (::clang::VarDecl::*method_pointer_58f9c0ffc89a58d1bfcaa8e185b58ad8)() const = &::clang::VarDecl::isCXXForRangeDecl;
    bool  (::clang::VarDecl::*method_pointer_031825cae66f514098099b6c9242aa77)() const = &::clang::VarDecl::isConcept;
    bool  (::clang::VarDecl::*method_pointer_8ad17f542b1f5e5faad31ed3b0dd625e)() const = &::clang::VarDecl::isConstexpr;
    bool  (::clang::VarDecl::*method_pointer_eeb5f62e71a850559d0876339d5e8de3)() const = &::clang::VarDecl::isDirectInit;
    bool  (::clang::VarDecl::*method_pointer_64deae603a985c75988593d2adc88adb)() const = &::clang::VarDecl::isExceptionVariable;
    bool  (::clang::VarDecl::*method_pointer_af8370401cd15f7082421285d63a1dce)() const = &::clang::VarDecl::isExternC;
    bool  (::clang::VarDecl::*method_pointer_ec2a58745e4d5b218561c791617a8a64)() const = &::clang::VarDecl::isFileVarDecl;
    bool  (::clang::VarDecl::*method_pointer_a139537f26e555c8ad3040c8ba134ba2)() const = &::clang::VarDecl::isFunctionOrMethodVarDecl;
    bool  (::clang::VarDecl::*method_pointer_7e36028c019155b39f7a04c3241fe0f3)() const = &::clang::VarDecl::isInExternCContext;
    bool  (::clang::VarDecl::*method_pointer_ce02f99d5f5b5509b3a0e7b82df21bd7)() const = &::clang::VarDecl::isInExternCXXContext;
    bool  (::clang::VarDecl::*method_pointer_ee3b5ff6dd375f28aee2fba8e00d8ef5)() const = &::clang::VarDecl::isInitCapture;
    bool  (::clang::VarDecl::*method_pointer_75c6937cf3ac50dcbb790e305ce25ec1)() const = &::clang::VarDecl::isInitICE;
    bool  (::clang::VarDecl::*method_pointer_a2eb0e2150e85b748e641724f490095a)() const = &::clang::VarDecl::isInitKnownICE;
    bool  (::clang::VarDecl::*method_pointer_682f4af7b16f5943930feeae4b2f48f8)() const = &::clang::VarDecl::isLocalVarDecl;
    bool  (::clang::VarDecl::*method_pointer_6be16ad3e5b558ffaf833e6e370364a2)() const = &::clang::VarDecl::isLocalVarDeclOrParm;
    bool  (::clang::VarDecl::*method_pointer_cc283902b1c3594687f8bbeb5aacfd74)() const = &::clang::VarDecl::isNRVOVariable;
    bool  (::clang::VarDecl::*method_pointer_13c847fe9afb52b7852dd31ef9668dff)() const = &::clang::VarDecl::isOutOfLine;
    bool  (::clang::VarDecl::*method_pointer_1078677814b25b4a8292cb23b1f10c26)() const = &::clang::VarDecl::isPreviousDeclInSameBlockScope;
    bool  (::clang::VarDecl::*method_pointer_3ca05c4e3500528dbb724ec16084dd3f)() const = &::clang::VarDecl::isStaticDataMember;
    bool  (::clang::VarDecl::*method_pointer_c4786f54dbb151b1933a2ba5efdc3d32)() const = &::clang::VarDecl::isStaticLocal;
    bool  (::clang::VarDecl::*method_pointer_9e9968ad40c253c8bb88d7faebe7d3d7)(class ::clang::ASTContext  &) const = &::clang::VarDecl::isUsableInConstantExpressions;
    void  (::clang::VarDecl::*method_pointer_0ebbf3e0bfb55cae92d8246e740ec641)(bool ) = &::clang::VarDecl::setARCPseudoStrong;
    void  (::clang::VarDecl::*method_pointer_c5471ba70a3854ca83c5808185255a90)(bool ) = &::clang::VarDecl::setCXXForRangeDecl;
    void  (::clang::VarDecl::*method_pointer_701abca1b1a1567bb256feb50d9cfc71)(bool ) = &::clang::VarDecl::setConcept;
    void  (::clang::VarDecl::*method_pointer_539a4d4df5be5fd79faf553acb8ed984)(bool ) = &::clang::VarDecl::setConstexpr;
    void  (::clang::VarDecl::*method_pointer_4a5bc9862cf25e43a999fc53079e10a9)(class ::clang::VarTemplateDecl  *) = &::clang::VarDecl::setDescribedVarTemplate;
    void  (::clang::VarDecl::*method_pointer_3f79ff3f0bb550dba07b6eaf55cfbc24)(bool ) = &::clang::VarDecl::setExceptionVariable;
    void  (::clang::VarDecl::*method_pointer_422a7192be135931aed4a1e8ba664ff5)(bool ) = &::clang::VarDecl::setInitCapture;
    void  (::clang::VarDecl::*method_pointer_67292bbd5a205615a404a9e2c9234417)(bool ) = &::clang::VarDecl::setNRVOVariable;
    void  (::clang::VarDecl::*method_pointer_7ac104aff0315817a3779d5cf71ab810)(bool ) = &::clang::VarDecl::setPreviousDeclInSameBlockScope;
    boost::python::class_< class ::clang::VarDecl, autowig::HeldType< class ::clang::VarDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_99d3396ee242572bbeaada83b5e83165("VarDecl", "", boost::python::no_init);
    class_99d3396ee242572bbeaada83b5e83165.def("create_deserialized", method_pointer_d350a181e374526e810c1d77bba57458, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("check_init_is_ice", method_pointer_6adb50ce301752c186be772c639a12ab, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof", method_pointer_ad22fb0b700852b38e723ab307d5c2e4, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof_kind", method_pointer_b881e1bf84e553cf8d452a2ba5c08f72, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_0baf4fac243c5e44a8449d02a8e72710, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_d9056bd70cac5420b3d2a1bb4c65a20e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_3f1db2e080285754b1e67eb0e86becc8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_6bba479064ad5d488136df677f8b54e4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_6f034684c60856f1aa45d63349e738ce, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_dc57461a36435297840eac648e1860bd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_1a744db8444d51b2bad4aae92139acc5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_ec1cbb6c10165960a3aa15ef363eec2c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_described_var_template", method_pointer_0b83c502fea55e4cb004a1d704f3797f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_instantiated_from_static_data_member", method_pointer_a27b3bbe1e6e5e6cba83ea2311944130, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_out_of_line_definition", method_pointer_d706de93b17c513cb296c6dbd688f1c9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_external_storage", method_pointer_e16f8023ceb75c2a9b7c05fb5907be57, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_global_storage", method_pointer_f2eed0f7ee715bfa9e5989bb6bb99308, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_init", method_pointer_24c46dc257255181999822e74de1186a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_local_storage", method_pointer_089a9c29c56f56bdaca3de38f1a091cd, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_arc_pseudo_strong", method_pointer_f9d871b370025ea4a2a35f3941fe7484, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_cxx_for_range_decl", method_pointer_58f9c0ffc89a58d1bfcaa8e185b58ad8, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_concept", method_pointer_031825cae66f514098099b6c9242aa77, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_constexpr", method_pointer_8ad17f542b1f5e5faad31ed3b0dd625e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_direct_init", method_pointer_eeb5f62e71a850559d0876339d5e8de3, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_exception_variable", method_pointer_64deae603a985c75988593d2adc88adb, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_extern_c", method_pointer_af8370401cd15f7082421285d63a1dce, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_file_var_decl", method_pointer_ec2a58745e4d5b218561c791617a8a64, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_function_or_method_var_decl", method_pointer_a139537f26e555c8ad3040c8ba134ba2, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_c_context", method_pointer_7e36028c019155b39f7a04c3241fe0f3, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_cxx_context", method_pointer_ce02f99d5f5b5509b3a0e7b82df21bd7, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_capture", method_pointer_ee3b5ff6dd375f28aee2fba8e00d8ef5, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_ice", method_pointer_75c6937cf3ac50dcbb790e305ce25ec1, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_known_ice", method_pointer_a2eb0e2150e85b748e641724f490095a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl", method_pointer_682f4af7b16f5943930feeae4b2f48f8, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl_or_parm", method_pointer_6be16ad3e5b558ffaf833e6e370364a2, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_nrvo_variable", method_pointer_cc283902b1c3594687f8bbeb5aacfd74, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_out_of_line", method_pointer_13c847fe9afb52b7852dd31ef9668dff, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_previous_decl_in_same_block_scope", method_pointer_1078677814b25b4a8292cb23b1f10c26, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_data_member", method_pointer_3ca05c4e3500528dbb724ec16084dd3f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_local", method_pointer_c4786f54dbb151b1933a2ba5efdc3d32, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_usable_in_constant_expressions", method_pointer_9e9968ad40c253c8bb88d7faebe7d3d7, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_arc_pseudo_strong", method_pointer_0ebbf3e0bfb55cae92d8246e740ec641, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_cxx_for_range_decl", method_pointer_c5471ba70a3854ca83c5808185255a90, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_concept", method_pointer_701abca1b1a1567bb256feb50d9cfc71, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_constexpr", method_pointer_539a4d4df5be5fd79faf553acb8ed984, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_described_var_template", method_pointer_4a5bc9862cf25e43a999fc53079e10a9, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_exception_variable", method_pointer_3f79ff3f0bb550dba07b6eaf55cfbc24, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_init_capture", method_pointer_422a7192be135931aed4a1e8ba664ff5, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_nrvo_variable", method_pointer_67292bbd5a205615a404a9e2c9234417, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_previous_decl_in_same_block_scope", method_pointer_7ac104aff0315817a3779d5cf71ab810, "");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof_kind");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("create_deserialized");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}