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
    class ::clang::VarDecl  * (*method_pointer_897ca92492115899acce19548c31447e)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarDecl::CreateDeserialized;
    bool  (::clang::VarDecl::*method_pointer_920dca2df98854799bae23f88f532575)() const = &::clang::VarDecl::checkInitIsICE;
    bool  (*method_pointer_178a42a030915bca8aee787e8f8061f6)(class ::clang::Decl  const *) = ::clang::VarDecl::classof;
    bool  (*method_pointer_24969d4dfd7c5d5ca877d921bdfe0ca9)(enum ::clang::Decl::Kind ) = ::clang::VarDecl::classofKind;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_02c78fe069255bc19236c10ebf7e9365)() = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_07161579d6925146908ca763c9ccf63a)() const = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_152daac5dda750e79b51c342cc88cf6f)() const = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_0e5e381a8d035ed89a6fdf8b41535ef1)() = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_feaaa21071425d9999ea792676249d1e)() = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_f512ceffd5d651e992fcc3a4d0c54322)(class ::clang::ASTContext  &) = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_92ed5c47488e581e85a7fb0d7586735b)() const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_a61573e459485eed8c34b24f6df5d5ce)(class ::clang::ASTContext  &) const = &::clang::VarDecl::getDefinition;
    class ::clang::VarTemplateDecl  * (::clang::VarDecl::*method_pointer_505fcfd3311f508cb18aae5b21a184d4)() const = &::clang::VarDecl::getDescribedVarTemplate;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_42feded66e5e5d88a29e08b18bfba230)() const = &::clang::VarDecl::getInstantiatedFromStaticDataMember;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_a61120d467a058f5a859a5ff15a5ca79)() = &::clang::VarDecl::getOutOfLineDefinition;
    class ::clang::SourceLocation  (::clang::VarDecl::*method_pointer_1cff71362edb544fb8b936ca067c932e)() const = &::clang::VarDecl::getPointOfInstantiation;
    bool  (::clang::VarDecl::*method_pointer_4ab90a74e42853c3aa44b1e758d41b63)() const = &::clang::VarDecl::hasExternalStorage;
    bool  (::clang::VarDecl::*method_pointer_04db64b7d78a593db0d86766b717c9b4)() const = &::clang::VarDecl::hasGlobalStorage;
    bool  (::clang::VarDecl::*method_pointer_b2b3dd8eed395a91b39075434acb3bfb)() const = &::clang::VarDecl::hasInit;
    bool  (::clang::VarDecl::*method_pointer_6e3b2a3aae5f50149dc006f43aa67ca2)() const = &::clang::VarDecl::hasLocalStorage;
    bool  (::clang::VarDecl::*method_pointer_08848dfe176652bc9e53487d4bd077e8)() const = &::clang::VarDecl::isARCPseudoStrong;
    bool  (::clang::VarDecl::*method_pointer_7c015aed37895c52acc3b16a156a599e)() const = &::clang::VarDecl::isCXXForRangeDecl;
    bool  (::clang::VarDecl::*method_pointer_1a25ad5d796b579581c3c9eafdfcc38c)() const = &::clang::VarDecl::isConcept;
    bool  (::clang::VarDecl::*method_pointer_b722392572ba5738ab838d7500933e9b)() const = &::clang::VarDecl::isConstexpr;
    bool  (::clang::VarDecl::*method_pointer_4435c7503045570d9ff52441f0921ff5)() const = &::clang::VarDecl::isDirectInit;
    bool  (::clang::VarDecl::*method_pointer_fe96b2ef2d2054c0b0d63cd9dce7d6e7)() const = &::clang::VarDecl::isExceptionVariable;
    bool  (::clang::VarDecl::*method_pointer_55ab32c7fa135822b085e5563855c05a)() const = &::clang::VarDecl::isExternC;
    bool  (::clang::VarDecl::*method_pointer_d5d85cd49f0d5d9f80ed0676063d6dd3)() const = &::clang::VarDecl::isFileVarDecl;
    bool  (::clang::VarDecl::*method_pointer_23c33da174565631b78575c76e646852)() const = &::clang::VarDecl::isFunctionOrMethodVarDecl;
    bool  (::clang::VarDecl::*method_pointer_c9652058c2ce5972b6155424e8347602)() const = &::clang::VarDecl::isInExternCContext;
    bool  (::clang::VarDecl::*method_pointer_ce52af1696d9589985f0d87ff07689c6)() const = &::clang::VarDecl::isInExternCXXContext;
    bool  (::clang::VarDecl::*method_pointer_058db37dd3a05af5a9d3d07cf5474e60)() const = &::clang::VarDecl::isInitCapture;
    bool  (::clang::VarDecl::*method_pointer_9225f6f2ca74546b9c709c58ed7488c9)() const = &::clang::VarDecl::isInitICE;
    bool  (::clang::VarDecl::*method_pointer_964c3f8056d950e294f1c30e54689dd7)() const = &::clang::VarDecl::isInitKnownICE;
    bool  (::clang::VarDecl::*method_pointer_fd4b6a0f931f5066b8915422d6a862d1)() const = &::clang::VarDecl::isLocalVarDecl;
    bool  (::clang::VarDecl::*method_pointer_e283013040f4560b9818b34795365529)() const = &::clang::VarDecl::isLocalVarDeclOrParm;
    bool  (::clang::VarDecl::*method_pointer_1b769e814f6e5ee88c7e827b868d325e)() const = &::clang::VarDecl::isNRVOVariable;
    bool  (::clang::VarDecl::*method_pointer_f8586738361d5cbcb4439e309c562de8)() const = &::clang::VarDecl::isOutOfLine;
    bool  (::clang::VarDecl::*method_pointer_a3e334a256f758c7b9ca5cc690679ae1)() const = &::clang::VarDecl::isPreviousDeclInSameBlockScope;
    bool  (::clang::VarDecl::*method_pointer_092e8851f8465a5286cbf1406853ab3b)() const = &::clang::VarDecl::isStaticDataMember;
    bool  (::clang::VarDecl::*method_pointer_1ec853d77b7e5a09a37459325d150cbc)() const = &::clang::VarDecl::isStaticLocal;
    bool  (::clang::VarDecl::*method_pointer_b8e5e61c4f51505d9d7a110d19a02197)(class ::clang::ASTContext  &) const = &::clang::VarDecl::isUsableInConstantExpressions;
    void  (::clang::VarDecl::*method_pointer_514c61bc27f25a189185de6bea72e25e)(bool ) = &::clang::VarDecl::setARCPseudoStrong;
    void  (::clang::VarDecl::*method_pointer_8e2574253196509399051715a9143909)(bool ) = &::clang::VarDecl::setCXXForRangeDecl;
    void  (::clang::VarDecl::*method_pointer_de8d4ca906675906a3c338452cba4d78)(bool ) = &::clang::VarDecl::setConcept;
    void  (::clang::VarDecl::*method_pointer_c596ef3a1fcd5ae9aac388c44c0b9d06)(bool ) = &::clang::VarDecl::setConstexpr;
    void  (::clang::VarDecl::*method_pointer_ebe61d6d8b00524b9caa6742568a1cf4)(class ::clang::VarTemplateDecl  *) = &::clang::VarDecl::setDescribedVarTemplate;
    void  (::clang::VarDecl::*method_pointer_89ac9f6434ee58829fb8f213cee48dc0)(bool ) = &::clang::VarDecl::setExceptionVariable;
    void  (::clang::VarDecl::*method_pointer_e043e8d9242f5ee4b2b69a8de62da156)(bool ) = &::clang::VarDecl::setInitCapture;
    void  (::clang::VarDecl::*method_pointer_a137e983f22e5db6a9ea7011ece78562)(bool ) = &::clang::VarDecl::setNRVOVariable;
    void  (::clang::VarDecl::*method_pointer_0ad1a2175c0a5395a81d07def1342539)(bool ) = &::clang::VarDecl::setPreviousDeclInSameBlockScope;
    boost::python::class_< class ::clang::VarDecl, autowig::HeldType< class ::clang::VarDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_99d3396ee242572bbeaada83b5e83165("VarDecl", "", boost::python::no_init);
    class_99d3396ee242572bbeaada83b5e83165.def("create_deserialized", method_pointer_897ca92492115899acce19548c31447e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("check_init_is_ice", method_pointer_920dca2df98854799bae23f88f532575, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof", method_pointer_178a42a030915bca8aee787e8f8061f6, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof_kind", method_pointer_24969d4dfd7c5d5ca877d921bdfe0ca9, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_02c78fe069255bc19236c10ebf7e9365, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_07161579d6925146908ca763c9ccf63a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_152daac5dda750e79b51c342cc88cf6f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_0e5e381a8d035ed89a6fdf8b41535ef1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_feaaa21071425d9999ea792676249d1e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_f512ceffd5d651e992fcc3a4d0c54322, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_92ed5c47488e581e85a7fb0d7586735b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_a61573e459485eed8c34b24f6df5d5ce, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_described_var_template", method_pointer_505fcfd3311f508cb18aae5b21a184d4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_instantiated_from_static_data_member", method_pointer_42feded66e5e5d88a29e08b18bfba230, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_out_of_line_definition", method_pointer_a61120d467a058f5a859a5ff15a5ca79, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_point_of_instantiation", method_pointer_1cff71362edb544fb8b936ca067c932e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_external_storage", method_pointer_4ab90a74e42853c3aa44b1e758d41b63, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_global_storage", method_pointer_04db64b7d78a593db0d86766b717c9b4, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_init", method_pointer_b2b3dd8eed395a91b39075434acb3bfb, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_local_storage", method_pointer_6e3b2a3aae5f50149dc006f43aa67ca2, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_arc_pseudo_strong", method_pointer_08848dfe176652bc9e53487d4bd077e8, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_cxx_for_range_decl", method_pointer_7c015aed37895c52acc3b16a156a599e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_concept", method_pointer_1a25ad5d796b579581c3c9eafdfcc38c, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_constexpr", method_pointer_b722392572ba5738ab838d7500933e9b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_direct_init", method_pointer_4435c7503045570d9ff52441f0921ff5, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_exception_variable", method_pointer_fe96b2ef2d2054c0b0d63cd9dce7d6e7, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_extern_c", method_pointer_55ab32c7fa135822b085e5563855c05a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_file_var_decl", method_pointer_d5d85cd49f0d5d9f80ed0676063d6dd3, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_function_or_method_var_decl", method_pointer_23c33da174565631b78575c76e646852, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_c_context", method_pointer_c9652058c2ce5972b6155424e8347602, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_cxx_context", method_pointer_ce52af1696d9589985f0d87ff07689c6, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_capture", method_pointer_058db37dd3a05af5a9d3d07cf5474e60, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_ice", method_pointer_9225f6f2ca74546b9c709c58ed7488c9, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_known_ice", method_pointer_964c3f8056d950e294f1c30e54689dd7, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl", method_pointer_fd4b6a0f931f5066b8915422d6a862d1, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl_or_parm", method_pointer_e283013040f4560b9818b34795365529, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_nrvo_variable", method_pointer_1b769e814f6e5ee88c7e827b868d325e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_out_of_line", method_pointer_f8586738361d5cbcb4439e309c562de8, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_previous_decl_in_same_block_scope", method_pointer_a3e334a256f758c7b9ca5cc690679ae1, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_data_member", method_pointer_092e8851f8465a5286cbf1406853ab3b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_local", method_pointer_1ec853d77b7e5a09a37459325d150cbc, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_usable_in_constant_expressions", method_pointer_b8e5e61c4f51505d9d7a110d19a02197, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_arc_pseudo_strong", method_pointer_514c61bc27f25a189185de6bea72e25e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_cxx_for_range_decl", method_pointer_8e2574253196509399051715a9143909, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_concept", method_pointer_de8d4ca906675906a3c338452cba4d78, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_constexpr", method_pointer_c596ef3a1fcd5ae9aac388c44c0b9d06, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_described_var_template", method_pointer_ebe61d6d8b00524b9caa6742568a1cf4, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_exception_variable", method_pointer_89ac9f6434ee58829fb8f213cee48dc0, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_init_capture", method_pointer_e043e8d9242f5ee4b2b69a8de62da156, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_nrvo_variable", method_pointer_a137e983f22e5db6a9ea7011ece78562, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_previous_decl_in_same_block_scope", method_pointer_0ad1a2175c0a5395a81d07def1342539, "");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof_kind");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("create_deserialized");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}