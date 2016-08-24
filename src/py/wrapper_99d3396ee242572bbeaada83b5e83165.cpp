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
    class ::clang::VarDecl  * (*method_pointer_3b44c85f947155b39e26ce4280172a63)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarDecl::CreateDeserialized;
    bool  (::clang::VarDecl::*method_pointer_117c4de123ee5bea88d6afbbcad1ca46)() const = &::clang::VarDecl::checkInitIsICE;
    bool  (*method_pointer_b20e6b03154156cea3f08c9946764be9)(class ::clang::Decl  const *) = ::clang::VarDecl::classof;
    bool  (*method_pointer_5f846bf058f8577b95e01d5459035019)(enum ::clang::Decl::Kind ) = ::clang::VarDecl::classofKind;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_6a73d0f2846f575b9994c14478782e8b)() = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_524e6cc53e8955638e77865c07e85e64)() const = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_27e4a7f7f88e5c8f984e7dc775ae51ad)() = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_7c1b8e2f04295822b95d096ba104c5fc)() const = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_fbdbf2f178f0543fbcb9e1a0d55a922c)() const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_0482c922341b5e71ad8e7bba1c3e150f)(class ::clang::ASTContext  &) const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_c9ed48fd014854298464c69bf1dbe297)() = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_d97f76d6cadf598ebcbb53d5fb4ee5e8)(class ::clang::ASTContext  &) = &::clang::VarDecl::getDefinition;
    class ::clang::VarTemplateDecl  * (::clang::VarDecl::*method_pointer_9cc5f4391ff25de3b2feeeb0dd1361ed)() const = &::clang::VarDecl::getDescribedVarTemplate;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_bce71925f92f5c2492c4e8ca3234e424)() const = &::clang::VarDecl::getInstantiatedFromStaticDataMember;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_47a63536a5c65be8b573ff3e8d5a2ca9)() = &::clang::VarDecl::getOutOfLineDefinition;
    class ::clang::SourceLocation  (::clang::VarDecl::*method_pointer_be8de6355e135bdaa71e80326bf26082)() const = &::clang::VarDecl::getPointOfInstantiation;
    bool  (::clang::VarDecl::*method_pointer_44479874dc3651cd94adebd0159057b5)() const = &::clang::VarDecl::hasExternalStorage;
    bool  (::clang::VarDecl::*method_pointer_a5db5585f1fc54229a07b9590d1e9a7c)() const = &::clang::VarDecl::hasGlobalStorage;
    bool  (::clang::VarDecl::*method_pointer_720d91b9094d5af4874ad3808c07b024)() const = &::clang::VarDecl::hasInit;
    bool  (::clang::VarDecl::*method_pointer_29a36861885f59309a12d7caf9eebf06)() const = &::clang::VarDecl::hasLocalStorage;
    bool  (::clang::VarDecl::*method_pointer_d5efec5c437757f1999093e8a9dae577)() const = &::clang::VarDecl::isARCPseudoStrong;
    bool  (::clang::VarDecl::*method_pointer_747d28e1345b5a7986f70e4c0f516ef9)() const = &::clang::VarDecl::isCXXForRangeDecl;
    bool  (::clang::VarDecl::*method_pointer_a321d64e2e6b5de8b1200b4f202be4b1)() const = &::clang::VarDecl::isConcept;
    bool  (::clang::VarDecl::*method_pointer_ca449b231418553ebda86e66c724bd42)() const = &::clang::VarDecl::isConstexpr;
    bool  (::clang::VarDecl::*method_pointer_420eeccd3ae65d6b9b0b2a1eb905ee04)() const = &::clang::VarDecl::isDirectInit;
    bool  (::clang::VarDecl::*method_pointer_573f9d2438a858a6949cb03247fd4517)() const = &::clang::VarDecl::isExceptionVariable;
    bool  (::clang::VarDecl::*method_pointer_879177fe181a571381da50c1118112f9)() const = &::clang::VarDecl::isExternC;
    bool  (::clang::VarDecl::*method_pointer_55f0e02e28e4596996e190e679463bda)() const = &::clang::VarDecl::isFileVarDecl;
    bool  (::clang::VarDecl::*method_pointer_70d5e24279d35f03ba792e7b1c1c8ef3)() const = &::clang::VarDecl::isFunctionOrMethodVarDecl;
    bool  (::clang::VarDecl::*method_pointer_84b6d7edc124502ba31c23591c3b3d2c)() const = &::clang::VarDecl::isInExternCContext;
    bool  (::clang::VarDecl::*method_pointer_ba2194f499cc527a86f367df6ca2f27b)() const = &::clang::VarDecl::isInExternCXXContext;
    bool  (::clang::VarDecl::*method_pointer_cd3a3540e6d5595296f488509f27208b)() const = &::clang::VarDecl::isInitCapture;
    bool  (::clang::VarDecl::*method_pointer_ca7d18b4686b565bba170a1dafe9a092)() const = &::clang::VarDecl::isInitICE;
    bool  (::clang::VarDecl::*method_pointer_5372b498302a5a559c6160782adf086d)() const = &::clang::VarDecl::isInitKnownICE;
    bool  (::clang::VarDecl::*method_pointer_5682c79bbecd5517a70830a521d9645a)() const = &::clang::VarDecl::isLocalVarDecl;
    bool  (::clang::VarDecl::*method_pointer_ee03faaee1825eb9a57439596d9b598b)() const = &::clang::VarDecl::isLocalVarDeclOrParm;
    bool  (::clang::VarDecl::*method_pointer_4f35fed3586f568fb62cdd390a54fa04)() const = &::clang::VarDecl::isNRVOVariable;
    bool  (::clang::VarDecl::*method_pointer_a94e7eb992d45aaeb3d0458bfd56c117)() const = &::clang::VarDecl::isOutOfLine;
    bool  (::clang::VarDecl::*method_pointer_d622621b7e475ff39161434a4dba7fd9)() const = &::clang::VarDecl::isPreviousDeclInSameBlockScope;
    bool  (::clang::VarDecl::*method_pointer_f0ebb70763a553d0b063c7cade9aeb7b)() const = &::clang::VarDecl::isStaticDataMember;
    bool  (::clang::VarDecl::*method_pointer_47b0e80cd1045342926819f7fffb654d)() const = &::clang::VarDecl::isStaticLocal;
    bool  (::clang::VarDecl::*method_pointer_d9eee350b2a65a5e8efb7930c894c628)(class ::clang::ASTContext  &) const = &::clang::VarDecl::isUsableInConstantExpressions;
    void  (::clang::VarDecl::*method_pointer_51cd53c18235552ea017cdfdb2ef5e94)(bool ) = &::clang::VarDecl::setARCPseudoStrong;
    void  (::clang::VarDecl::*method_pointer_76531671e8685f0aaa5a21bc23614628)(bool ) = &::clang::VarDecl::setCXXForRangeDecl;
    void  (::clang::VarDecl::*method_pointer_d7ae48c826605498a5a6db15d64ce53a)(bool ) = &::clang::VarDecl::setConcept;
    void  (::clang::VarDecl::*method_pointer_3548286928d35562938edef5e588a5c4)(bool ) = &::clang::VarDecl::setConstexpr;
    void  (::clang::VarDecl::*method_pointer_7a7947e1835456a79ee132a626c3e587)(class ::clang::VarTemplateDecl  *) = &::clang::VarDecl::setDescribedVarTemplate;
    void  (::clang::VarDecl::*method_pointer_de3b4d6cb20e5fac84e609377eac9a69)(bool ) = &::clang::VarDecl::setExceptionVariable;
    void  (::clang::VarDecl::*method_pointer_a2ef03f306fe526295ce906ca9ba3ca8)(bool ) = &::clang::VarDecl::setInitCapture;
    void  (::clang::VarDecl::*method_pointer_99d0cfff600d535e9056139e61b84dd7)(bool ) = &::clang::VarDecl::setNRVOVariable;
    void  (::clang::VarDecl::*method_pointer_05a512940d3a5b4d9d07bbd3615302dc)(bool ) = &::clang::VarDecl::setPreviousDeclInSameBlockScope;
    boost::python::class_< class ::clang::VarDecl, autowig::HeldType< class ::clang::VarDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_99d3396ee242572bbeaada83b5e83165("VarDecl", "", boost::python::no_init);
    class_99d3396ee242572bbeaada83b5e83165.def("create_deserialized", method_pointer_3b44c85f947155b39e26ce4280172a63, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("check_init_is_ice", method_pointer_117c4de123ee5bea88d6afbbcad1ca46, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof", method_pointer_b20e6b03154156cea3f08c9946764be9, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof_kind", method_pointer_5f846bf058f8577b95e01d5459035019, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_6a73d0f2846f575b9994c14478782e8b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_524e6cc53e8955638e77865c07e85e64, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_27e4a7f7f88e5c8f984e7dc775ae51ad, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_7c1b8e2f04295822b95d096ba104c5fc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_fbdbf2f178f0543fbcb9e1a0d55a922c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_0482c922341b5e71ad8e7bba1c3e150f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_c9ed48fd014854298464c69bf1dbe297, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_d97f76d6cadf598ebcbb53d5fb4ee5e8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_described_var_template", method_pointer_9cc5f4391ff25de3b2feeeb0dd1361ed, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_instantiated_from_static_data_member", method_pointer_bce71925f92f5c2492c4e8ca3234e424, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_out_of_line_definition", method_pointer_47a63536a5c65be8b573ff3e8d5a2ca9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_point_of_instantiation", method_pointer_be8de6355e135bdaa71e80326bf26082, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_external_storage", method_pointer_44479874dc3651cd94adebd0159057b5, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_global_storage", method_pointer_a5db5585f1fc54229a07b9590d1e9a7c, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_init", method_pointer_720d91b9094d5af4874ad3808c07b024, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_local_storage", method_pointer_29a36861885f59309a12d7caf9eebf06, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_arc_pseudo_strong", method_pointer_d5efec5c437757f1999093e8a9dae577, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_cxx_for_range_decl", method_pointer_747d28e1345b5a7986f70e4c0f516ef9, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_concept", method_pointer_a321d64e2e6b5de8b1200b4f202be4b1, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_constexpr", method_pointer_ca449b231418553ebda86e66c724bd42, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_direct_init", method_pointer_420eeccd3ae65d6b9b0b2a1eb905ee04, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_exception_variable", method_pointer_573f9d2438a858a6949cb03247fd4517, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_extern_c", method_pointer_879177fe181a571381da50c1118112f9, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_file_var_decl", method_pointer_55f0e02e28e4596996e190e679463bda, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_function_or_method_var_decl", method_pointer_70d5e24279d35f03ba792e7b1c1c8ef3, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_c_context", method_pointer_84b6d7edc124502ba31c23591c3b3d2c, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_cxx_context", method_pointer_ba2194f499cc527a86f367df6ca2f27b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_capture", method_pointer_cd3a3540e6d5595296f488509f27208b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_ice", method_pointer_ca7d18b4686b565bba170a1dafe9a092, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_known_ice", method_pointer_5372b498302a5a559c6160782adf086d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl", method_pointer_5682c79bbecd5517a70830a521d9645a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl_or_parm", method_pointer_ee03faaee1825eb9a57439596d9b598b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_nrvo_variable", method_pointer_4f35fed3586f568fb62cdd390a54fa04, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_out_of_line", method_pointer_a94e7eb992d45aaeb3d0458bfd56c117, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_previous_decl_in_same_block_scope", method_pointer_d622621b7e475ff39161434a4dba7fd9, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_data_member", method_pointer_f0ebb70763a553d0b063c7cade9aeb7b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_local", method_pointer_47b0e80cd1045342926819f7fffb654d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_usable_in_constant_expressions", method_pointer_d9eee350b2a65a5e8efb7930c894c628, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_arc_pseudo_strong", method_pointer_51cd53c18235552ea017cdfdb2ef5e94, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_cxx_for_range_decl", method_pointer_76531671e8685f0aaa5a21bc23614628, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_concept", method_pointer_d7ae48c826605498a5a6db15d64ce53a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_constexpr", method_pointer_3548286928d35562938edef5e588a5c4, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_described_var_template", method_pointer_7a7947e1835456a79ee132a626c3e587, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_exception_variable", method_pointer_de3b4d6cb20e5fac84e609377eac9a69, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_init_capture", method_pointer_a2ef03f306fe526295ce906ca9ba3ca8, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_nrvo_variable", method_pointer_99d0cfff600d535e9056139e61b84dd7, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_previous_decl_in_same_block_scope", method_pointer_05a512940d3a5b4d9d07bbd3615302dc, "");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof_kind");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("create_deserialized");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}