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
    class ::clang::VarDecl  * (*method_pointer_349cc24c7cf85799a526c6b1cf6897f0)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarDecl::CreateDeserialized;
    bool  (::clang::VarDecl::*method_pointer_a5eea6fd261655758e85ac312f485c0c)() const = &::clang::VarDecl::checkInitIsICE;
    bool  (*method_pointer_b0091ec3570e5cbe83ee6c459c711b6c)(class ::clang::Decl  const *) = ::clang::VarDecl::classof;
    bool  (*method_pointer_4ef2343719775b518dcdb97248290fcf)(enum ::clang::Decl::Kind ) = ::clang::VarDecl::classofKind;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_2ef894307dab5799a9f3badb004e4be1)() const = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_0f07aaacd3e35c0aa187e787151bdb84)() = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_012d4b41f05a584d94ecd38ee63bb8d1)() = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_b22403c08bd9531cb0b8a6a7b0d1f571)() const = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_b59d3af3967a5b7a83f744c072019a97)() const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_daf43920910a5e8f8b34015d2612218f)() = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_79932b8b0e1c53ec80ae166687793c2e)(class ::clang::ASTContext  &) = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_15029ad3835257b9a1cf59651619c2e7)(class ::clang::ASTContext  &) const = &::clang::VarDecl::getDefinition;
    class ::clang::VarTemplateDecl  * (::clang::VarDecl::*method_pointer_a0080bebee7a5cfcb7641db3ae2e870a)() const = &::clang::VarDecl::getDescribedVarTemplate;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_a87aa71632a85fecadd84e494e019635)() const = &::clang::VarDecl::getInstantiatedFromStaticDataMember;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_00684a8b16e8574c9fe038e3829e73c6)() = &::clang::VarDecl::getOutOfLineDefinition;
    class ::clang::SourceLocation  (::clang::VarDecl::*method_pointer_d44b9dc95421510986c0022c6f7f6103)() const = &::clang::VarDecl::getPointOfInstantiation;
    bool  (::clang::VarDecl::*method_pointer_eca2d61027405e00898c34de449733cc)() const = &::clang::VarDecl::hasExternalStorage;
    bool  (::clang::VarDecl::*method_pointer_519acfb215105f27b66785f53e2e776b)() const = &::clang::VarDecl::hasGlobalStorage;
    bool  (::clang::VarDecl::*method_pointer_1b2a35f32dc95df79170d28efcab2489)() const = &::clang::VarDecl::hasInit;
    bool  (::clang::VarDecl::*method_pointer_4fb6c050377152f1bf2c6fe1dfb9c01c)() const = &::clang::VarDecl::hasLocalStorage;
    bool  (::clang::VarDecl::*method_pointer_94080889296151b0ac71c4ad8b4d4964)() const = &::clang::VarDecl::isARCPseudoStrong;
    bool  (::clang::VarDecl::*method_pointer_f9b45e97c9275ff88d9c8ddcc1929906)() const = &::clang::VarDecl::isCXXForRangeDecl;
    bool  (::clang::VarDecl::*method_pointer_34a2cc6a17ec52d98be8cb1c4c86b25a)() const = &::clang::VarDecl::isConcept;
    bool  (::clang::VarDecl::*method_pointer_bbde24ee9cb65b0da99e5b59c4eb170b)() const = &::clang::VarDecl::isConstexpr;
    bool  (::clang::VarDecl::*method_pointer_8c1e5af620ca5891810bf267df3bc26b)() const = &::clang::VarDecl::isDirectInit;
    bool  (::clang::VarDecl::*method_pointer_73a70caab6c253228c995358a5fb0511)() const = &::clang::VarDecl::isExceptionVariable;
    bool  (::clang::VarDecl::*method_pointer_2545c8d7557e5017a48531c3dcef125a)() const = &::clang::VarDecl::isExternC;
    bool  (::clang::VarDecl::*method_pointer_2c1a9be24d71552a836024004ed174b2)() const = &::clang::VarDecl::isFileVarDecl;
    bool  (::clang::VarDecl::*method_pointer_dde6447ac99f5cd684822bc544334b15)() const = &::clang::VarDecl::isFunctionOrMethodVarDecl;
    bool  (::clang::VarDecl::*method_pointer_6b57124b0347506ca7947ded20c4f296)() const = &::clang::VarDecl::isInExternCContext;
    bool  (::clang::VarDecl::*method_pointer_997366ccf93e5c4f8e93fe3466ba961e)() const = &::clang::VarDecl::isInExternCXXContext;
    bool  (::clang::VarDecl::*method_pointer_c6d41416929f5d328584a94b01187a3c)() const = &::clang::VarDecl::isInitCapture;
    bool  (::clang::VarDecl::*method_pointer_9661dc99532d594baae3269bdabb6937)() const = &::clang::VarDecl::isInitICE;
    bool  (::clang::VarDecl::*method_pointer_1f773bc09a36511ea77fd0cf79b78c2f)() const = &::clang::VarDecl::isInitKnownICE;
    bool  (::clang::VarDecl::*method_pointer_1a0ec816fd405087af6a068cf7913666)() const = &::clang::VarDecl::isLocalVarDecl;
    bool  (::clang::VarDecl::*method_pointer_a4ff3427c0605e0886f350dc5ac26f59)() const = &::clang::VarDecl::isLocalVarDeclOrParm;
    bool  (::clang::VarDecl::*method_pointer_f01910ca5e8e5303b4cf63f6d3f8415e)() const = &::clang::VarDecl::isNRVOVariable;
    bool  (::clang::VarDecl::*method_pointer_4068ba2b1685558eaa820004aed1f3ee)() const = &::clang::VarDecl::isOutOfLine;
    bool  (::clang::VarDecl::*method_pointer_e39d583d421c5d4488e0bdd448fcc0fa)() const = &::clang::VarDecl::isPreviousDeclInSameBlockScope;
    bool  (::clang::VarDecl::*method_pointer_6d0307109e5c5f5db900bda385d730e0)() const = &::clang::VarDecl::isStaticDataMember;
    bool  (::clang::VarDecl::*method_pointer_3b1540a2f9d757c79bc80db543ad1894)() const = &::clang::VarDecl::isStaticLocal;
    bool  (::clang::VarDecl::*method_pointer_9c3fe734f6dc52c58d7855757a8725d0)(class ::clang::ASTContext  &) const = &::clang::VarDecl::isUsableInConstantExpressions;
    void  (::clang::VarDecl::*method_pointer_93984d2d8b735f2793ad1750b652d33b)(bool ) = &::clang::VarDecl::setARCPseudoStrong;
    void  (::clang::VarDecl::*method_pointer_34bb6bc56e2f56ff9a3f6d06397c38bd)(bool ) = &::clang::VarDecl::setCXXForRangeDecl;
    void  (::clang::VarDecl::*method_pointer_c4dcb6f915d152b59e6f5dd886d654c2)(bool ) = &::clang::VarDecl::setConcept;
    void  (::clang::VarDecl::*method_pointer_5954be28dfa85318a3cfe84bf8077a7b)(bool ) = &::clang::VarDecl::setConstexpr;
    void  (::clang::VarDecl::*method_pointer_1f2b2c644754514e89d2fa78873d36d4)(class ::clang::VarTemplateDecl  *) = &::clang::VarDecl::setDescribedVarTemplate;
    void  (::clang::VarDecl::*method_pointer_3065ecf5767a5dfbb1d27605402087e0)(bool ) = &::clang::VarDecl::setExceptionVariable;
    void  (::clang::VarDecl::*method_pointer_9c18fdf4c4ac53d9a3e0c605558dd336)(bool ) = &::clang::VarDecl::setInitCapture;
    void  (::clang::VarDecl::*method_pointer_52fa2c97e9525d548b02dcd672d1a308)(bool ) = &::clang::VarDecl::setNRVOVariable;
    void  (::clang::VarDecl::*method_pointer_9b8f17d804ed5264b825bde10b218306)(bool ) = &::clang::VarDecl::setPreviousDeclInSameBlockScope;
    boost::python::class_< class ::clang::VarDecl, autowig::HeldType< class ::clang::VarDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_99d3396ee242572bbeaada83b5e83165("VarDecl", "", boost::python::no_init);
    class_99d3396ee242572bbeaada83b5e83165.def("create_deserialized", method_pointer_349cc24c7cf85799a526c6b1cf6897f0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("check_init_is_ice", method_pointer_a5eea6fd261655758e85ac312f485c0c, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof", method_pointer_b0091ec3570e5cbe83ee6c459c711b6c, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof_kind", method_pointer_4ef2343719775b518dcdb97248290fcf, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_2ef894307dab5799a9f3badb004e4be1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_0f07aaacd3e35c0aa187e787151bdb84, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_012d4b41f05a584d94ecd38ee63bb8d1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_b22403c08bd9531cb0b8a6a7b0d1f571, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_b59d3af3967a5b7a83f744c072019a97, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_daf43920910a5e8f8b34015d2612218f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_79932b8b0e1c53ec80ae166687793c2e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_15029ad3835257b9a1cf59651619c2e7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_described_var_template", method_pointer_a0080bebee7a5cfcb7641db3ae2e870a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_instantiated_from_static_data_member", method_pointer_a87aa71632a85fecadd84e494e019635, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_out_of_line_definition", method_pointer_00684a8b16e8574c9fe038e3829e73c6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_point_of_instantiation", method_pointer_d44b9dc95421510986c0022c6f7f6103, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_external_storage", method_pointer_eca2d61027405e00898c34de449733cc, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_global_storage", method_pointer_519acfb215105f27b66785f53e2e776b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_init", method_pointer_1b2a35f32dc95df79170d28efcab2489, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_local_storage", method_pointer_4fb6c050377152f1bf2c6fe1dfb9c01c, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_arc_pseudo_strong", method_pointer_94080889296151b0ac71c4ad8b4d4964, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_cxx_for_range_decl", method_pointer_f9b45e97c9275ff88d9c8ddcc1929906, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_concept", method_pointer_34a2cc6a17ec52d98be8cb1c4c86b25a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_constexpr", method_pointer_bbde24ee9cb65b0da99e5b59c4eb170b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_direct_init", method_pointer_8c1e5af620ca5891810bf267df3bc26b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_exception_variable", method_pointer_73a70caab6c253228c995358a5fb0511, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_extern_c", method_pointer_2545c8d7557e5017a48531c3dcef125a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_file_var_decl", method_pointer_2c1a9be24d71552a836024004ed174b2, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_function_or_method_var_decl", method_pointer_dde6447ac99f5cd684822bc544334b15, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_c_context", method_pointer_6b57124b0347506ca7947ded20c4f296, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_cxx_context", method_pointer_997366ccf93e5c4f8e93fe3466ba961e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_capture", method_pointer_c6d41416929f5d328584a94b01187a3c, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_ice", method_pointer_9661dc99532d594baae3269bdabb6937, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_known_ice", method_pointer_1f773bc09a36511ea77fd0cf79b78c2f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl", method_pointer_1a0ec816fd405087af6a068cf7913666, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl_or_parm", method_pointer_a4ff3427c0605e0886f350dc5ac26f59, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_nrvo_variable", method_pointer_f01910ca5e8e5303b4cf63f6d3f8415e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_out_of_line", method_pointer_4068ba2b1685558eaa820004aed1f3ee, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_previous_decl_in_same_block_scope", method_pointer_e39d583d421c5d4488e0bdd448fcc0fa, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_data_member", method_pointer_6d0307109e5c5f5db900bda385d730e0, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_local", method_pointer_3b1540a2f9d757c79bc80db543ad1894, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_usable_in_constant_expressions", method_pointer_9c3fe734f6dc52c58d7855757a8725d0, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_arc_pseudo_strong", method_pointer_93984d2d8b735f2793ad1750b652d33b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_cxx_for_range_decl", method_pointer_34bb6bc56e2f56ff9a3f6d06397c38bd, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_concept", method_pointer_c4dcb6f915d152b59e6f5dd886d654c2, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_constexpr", method_pointer_5954be28dfa85318a3cfe84bf8077a7b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_described_var_template", method_pointer_1f2b2c644754514e89d2fa78873d36d4, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_exception_variable", method_pointer_3065ecf5767a5dfbb1d27605402087e0, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_init_capture", method_pointer_9c18fdf4c4ac53d9a3e0c605558dd336, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_nrvo_variable", method_pointer_52fa2c97e9525d548b02dcd672d1a308, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_previous_decl_in_same_block_scope", method_pointer_9b8f17d804ed5264b825bde10b218306, "");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof_kind");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("create_deserialized");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}