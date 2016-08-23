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
    class ::clang::VarDecl  * (*method_pointer_408c7c435e7c5cd6b3097905d643ddd6)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarDecl::CreateDeserialized;
    bool  (::clang::VarDecl::*method_pointer_4746e9c41bd25359baa1a8e59384df43)() const = &::clang::VarDecl::checkInitIsICE;
    bool  (*method_pointer_62db3a9f36fa55078940ec9c545d9297)(class ::clang::Decl  const *) = ::clang::VarDecl::classof;
    bool  (*method_pointer_503181a59baf53db9028c3374d424667)(enum ::clang::Decl::Kind ) = ::clang::VarDecl::classofKind;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_90c92a0989ad53a784ab87bdaef08062)() const = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_91b48864a283559c9a890c388f271fda)() = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_6d6e1c677167518da466a09de40188c8)() const = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_4625f17652c2514baf39e6d8b225c0fb)() = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_32490135192a58c6a27f31acda32bd1b)(class ::clang::ASTContext  &) = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_f40bebef291550c9990a1c5fcf06b27b)() = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_e6c9cc2b122554f69fd9e2b0c3a3fd86)() const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_f25f804661e152dda709e455b76b3bab)(class ::clang::ASTContext  &) const = &::clang::VarDecl::getDefinition;
    class ::clang::VarTemplateDecl  * (::clang::VarDecl::*method_pointer_2af79acc6d9d53e4b7397240dbf75e44)() const = &::clang::VarDecl::getDescribedVarTemplate;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_425179235923513fa9a9e5a1bd80e1b9)() const = &::clang::VarDecl::getInstantiatedFromStaticDataMember;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_1044e56a848b55be880f82c241bd5c58)() = &::clang::VarDecl::getOutOfLineDefinition;
    bool  (::clang::VarDecl::*method_pointer_134fce2641105591b6c365d34e99d29c)() const = &::clang::VarDecl::hasExternalStorage;
    bool  (::clang::VarDecl::*method_pointer_2ca846cb27775bcfab8405230c40a21b)() const = &::clang::VarDecl::hasGlobalStorage;
    bool  (::clang::VarDecl::*method_pointer_114348a049d75c0e88ce78ad8bf8ff10)() const = &::clang::VarDecl::hasInit;
    bool  (::clang::VarDecl::*method_pointer_56160683ed3f5aefae9ab231a6d18565)() const = &::clang::VarDecl::hasLocalStorage;
    bool  (::clang::VarDecl::*method_pointer_b634cd6cf49557d2a02808f99f7fa436)() const = &::clang::VarDecl::isARCPseudoStrong;
    bool  (::clang::VarDecl::*method_pointer_eedd52ba50e85fb896633437bc5f097d)() const = &::clang::VarDecl::isCXXForRangeDecl;
    bool  (::clang::VarDecl::*method_pointer_3bc7271bf1865433b20f0c3781a0a2c6)() const = &::clang::VarDecl::isConcept;
    bool  (::clang::VarDecl::*method_pointer_8daf6133c33e5c50b89228556a61d30c)() const = &::clang::VarDecl::isConstexpr;
    bool  (::clang::VarDecl::*method_pointer_e98a38be87395f19b445968e74869bdc)() const = &::clang::VarDecl::isDirectInit;
    bool  (::clang::VarDecl::*method_pointer_7d12ef2ebadd5072a64c9272956353f0)() const = &::clang::VarDecl::isExceptionVariable;
    bool  (::clang::VarDecl::*method_pointer_cb577fcce9cd59b48793dcaf77081313)() const = &::clang::VarDecl::isExternC;
    bool  (::clang::VarDecl::*method_pointer_0099f3364ad35edfa9605bd77e3cce93)() const = &::clang::VarDecl::isFileVarDecl;
    bool  (::clang::VarDecl::*method_pointer_dc01e3bbcf995411872a5cd252ee7bfb)() const = &::clang::VarDecl::isFunctionOrMethodVarDecl;
    bool  (::clang::VarDecl::*method_pointer_a33064e58e0f553e8c3f9ae46e28b1f0)() const = &::clang::VarDecl::isInExternCContext;
    bool  (::clang::VarDecl::*method_pointer_74f5986229005a188124b13ac1a3f870)() const = &::clang::VarDecl::isInExternCXXContext;
    bool  (::clang::VarDecl::*method_pointer_3d4901b59d9b5e86910364aafcfab967)() const = &::clang::VarDecl::isInitCapture;
    bool  (::clang::VarDecl::*method_pointer_09b1315e9a3e5963bcfaa05200f03b54)() const = &::clang::VarDecl::isInitICE;
    bool  (::clang::VarDecl::*method_pointer_7e44ab31175e5d57b682dbc3d6ed99a3)() const = &::clang::VarDecl::isInitKnownICE;
    bool  (::clang::VarDecl::*method_pointer_d13092dcc5f65bb39827ae2803b31d11)() const = &::clang::VarDecl::isLocalVarDecl;
    bool  (::clang::VarDecl::*method_pointer_37d206b5120b559eb57b094402bb34b3)() const = &::clang::VarDecl::isLocalVarDeclOrParm;
    bool  (::clang::VarDecl::*method_pointer_f9a7fed9a2f7595aa633da91a59be9f7)() const = &::clang::VarDecl::isNRVOVariable;
    bool  (::clang::VarDecl::*method_pointer_e5d69e3f5e1b5d65b957ad600fea985a)() const = &::clang::VarDecl::isOutOfLine;
    bool  (::clang::VarDecl::*method_pointer_88f1278f4ad651f1966eff30d8ac40d1)() const = &::clang::VarDecl::isPreviousDeclInSameBlockScope;
    bool  (::clang::VarDecl::*method_pointer_0aa44b05d8df59218727c82d92da968d)() const = &::clang::VarDecl::isStaticDataMember;
    bool  (::clang::VarDecl::*method_pointer_73343c78fbae55919c9493196affefb8)() const = &::clang::VarDecl::isStaticLocal;
    bool  (::clang::VarDecl::*method_pointer_560030fac2725fc8968368311e23a547)(class ::clang::ASTContext  &) const = &::clang::VarDecl::isUsableInConstantExpressions;
    void  (::clang::VarDecl::*method_pointer_b33db48da35a5f63b5eee6c7a1471770)(bool ) = &::clang::VarDecl::setARCPseudoStrong;
    void  (::clang::VarDecl::*method_pointer_fcedf632250150129a7d9d5725948666)(bool ) = &::clang::VarDecl::setCXXForRangeDecl;
    void  (::clang::VarDecl::*method_pointer_aca163ea6cbd5cf388d2adf73a327e96)(bool ) = &::clang::VarDecl::setConcept;
    void  (::clang::VarDecl::*method_pointer_a54226b605b25a27918663072a854ef9)(bool ) = &::clang::VarDecl::setConstexpr;
    void  (::clang::VarDecl::*method_pointer_c49920ade0375b67ba8df93e72bc50c5)(class ::clang::VarTemplateDecl  *) = &::clang::VarDecl::setDescribedVarTemplate;
    void  (::clang::VarDecl::*method_pointer_cc86842a4e0357b3b1b32ddbb1486f24)(bool ) = &::clang::VarDecl::setExceptionVariable;
    void  (::clang::VarDecl::*method_pointer_6b57d29124b254df80d321a7e333d3e3)(bool ) = &::clang::VarDecl::setInitCapture;
    void  (::clang::VarDecl::*method_pointer_2b75b7be3f5a5c1baf65bd574e64b979)(bool ) = &::clang::VarDecl::setNRVOVariable;
    void  (::clang::VarDecl::*method_pointer_f2b110eddfb254e38e6c07ead13fb7d1)(bool ) = &::clang::VarDecl::setPreviousDeclInSameBlockScope;
    boost::python::class_< class ::clang::VarDecl, autowig::HeldType< class ::clang::VarDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_99d3396ee242572bbeaada83b5e83165("VarDecl", "", boost::python::no_init);
    class_99d3396ee242572bbeaada83b5e83165.def("create_deserialized", method_pointer_408c7c435e7c5cd6b3097905d643ddd6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("check_init_is_ice", method_pointer_4746e9c41bd25359baa1a8e59384df43, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof", method_pointer_62db3a9f36fa55078940ec9c545d9297, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof_kind", method_pointer_503181a59baf53db9028c3374d424667, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_90c92a0989ad53a784ab87bdaef08062, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_91b48864a283559c9a890c388f271fda, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_6d6e1c677167518da466a09de40188c8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_4625f17652c2514baf39e6d8b225c0fb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_32490135192a58c6a27f31acda32bd1b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_f40bebef291550c9990a1c5fcf06b27b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_e6c9cc2b122554f69fd9e2b0c3a3fd86, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_f25f804661e152dda709e455b76b3bab, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_described_var_template", method_pointer_2af79acc6d9d53e4b7397240dbf75e44, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_instantiated_from_static_data_member", method_pointer_425179235923513fa9a9e5a1bd80e1b9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_out_of_line_definition", method_pointer_1044e56a848b55be880f82c241bd5c58, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_external_storage", method_pointer_134fce2641105591b6c365d34e99d29c, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_global_storage", method_pointer_2ca846cb27775bcfab8405230c40a21b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_init", method_pointer_114348a049d75c0e88ce78ad8bf8ff10, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_local_storage", method_pointer_56160683ed3f5aefae9ab231a6d18565, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_arc_pseudo_strong", method_pointer_b634cd6cf49557d2a02808f99f7fa436, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_cxx_for_range_decl", method_pointer_eedd52ba50e85fb896633437bc5f097d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_concept", method_pointer_3bc7271bf1865433b20f0c3781a0a2c6, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_constexpr", method_pointer_8daf6133c33e5c50b89228556a61d30c, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_direct_init", method_pointer_e98a38be87395f19b445968e74869bdc, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_exception_variable", method_pointer_7d12ef2ebadd5072a64c9272956353f0, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_extern_c", method_pointer_cb577fcce9cd59b48793dcaf77081313, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_file_var_decl", method_pointer_0099f3364ad35edfa9605bd77e3cce93, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_function_or_method_var_decl", method_pointer_dc01e3bbcf995411872a5cd252ee7bfb, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_c_context", method_pointer_a33064e58e0f553e8c3f9ae46e28b1f0, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_cxx_context", method_pointer_74f5986229005a188124b13ac1a3f870, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_capture", method_pointer_3d4901b59d9b5e86910364aafcfab967, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_ice", method_pointer_09b1315e9a3e5963bcfaa05200f03b54, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_known_ice", method_pointer_7e44ab31175e5d57b682dbc3d6ed99a3, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl", method_pointer_d13092dcc5f65bb39827ae2803b31d11, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl_or_parm", method_pointer_37d206b5120b559eb57b094402bb34b3, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_nrvo_variable", method_pointer_f9a7fed9a2f7595aa633da91a59be9f7, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_out_of_line", method_pointer_e5d69e3f5e1b5d65b957ad600fea985a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_previous_decl_in_same_block_scope", method_pointer_88f1278f4ad651f1966eff30d8ac40d1, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_data_member", method_pointer_0aa44b05d8df59218727c82d92da968d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_local", method_pointer_73343c78fbae55919c9493196affefb8, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_usable_in_constant_expressions", method_pointer_560030fac2725fc8968368311e23a547, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_arc_pseudo_strong", method_pointer_b33db48da35a5f63b5eee6c7a1471770, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_cxx_for_range_decl", method_pointer_fcedf632250150129a7d9d5725948666, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_concept", method_pointer_aca163ea6cbd5cf388d2adf73a327e96, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_constexpr", method_pointer_a54226b605b25a27918663072a854ef9, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_described_var_template", method_pointer_c49920ade0375b67ba8df93e72bc50c5, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_exception_variable", method_pointer_cc86842a4e0357b3b1b32ddbb1486f24, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_init_capture", method_pointer_6b57d29124b254df80d321a7e333d3e3, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_nrvo_variable", method_pointer_2b75b7be3f5a5c1baf65bd574e64b979, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_previous_decl_in_same_block_scope", method_pointer_f2b110eddfb254e38e6c07ead13fb7d1, "");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof_kind");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("create_deserialized");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}