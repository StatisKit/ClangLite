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
    bool  (::clang::VarDecl::*method_pointer_b2360f77560b5c50a2b902eab5f1e193)() const = &::clang::VarDecl::isConcept;
    void  (::clang::VarDecl::*method_pointer_e88d2b13b3965250bfab1866318837bf)(bool ) = &::clang::VarDecl::setExceptionVariable;
    void  (::clang::VarDecl::*method_pointer_99f5d10efbce594ca0657949824427c5)(bool ) = &::clang::VarDecl::setARCPseudoStrong;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_30353c0a2b375b658d78e65a52798bf2)(class ::clang::ASTContext  &) const = &::clang::VarDecl::getDefinition;
    bool  (*method_pointer_619e4ed33c715b09942cdbd9e50bc005)(enum ::clang::Decl::Kind ) = ::clang::VarDecl::classofKind;
    bool  (::clang::VarDecl::*method_pointer_0700e0a29a0252f7a436f06a240ff51d)() const = &::clang::VarDecl::isARCPseudoStrong;
    void  (::clang::VarDecl::*method_pointer_02e217a9729b5701af0177dc5b893fe6)(bool ) = &::clang::VarDecl::setConcept;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_212cfcc1f57d55adb3952376a08dbda2)() const = &::clang::VarDecl::getInstantiatedFromStaticDataMember;
    void  (::clang::VarDecl::*method_pointer_f3768504896d52a1a8566774cd90837a)(bool ) = &::clang::VarDecl::setPreviousDeclInSameBlockScope;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_6dc957a575755e11a20e3aafd3081d4b)() = &::clang::VarDecl::getDefinition;
    void  (::clang::VarDecl::*method_pointer_fc733a45e019503688b695a8987ecb7c)(bool ) = &::clang::VarDecl::setConstexpr;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_e63f385bb17059d885eb37a89a6bcb29)() const = &::clang::VarDecl::getDefinition;
    bool  (::clang::VarDecl::*method_pointer_c6d692e3403a5eaf8b992dd898fad9de)() const = &::clang::VarDecl::hasGlobalStorage;
    bool  (::clang::VarDecl::*method_pointer_34fca42f94115e1d8e38c3c859f13068)() const = &::clang::VarDecl::isExternC;
    bool  (::clang::VarDecl::*method_pointer_a9f5b2fa5eb458eaae7b028834e30f86)() const = &::clang::VarDecl::isStaticLocal;
    bool  (::clang::VarDecl::*method_pointer_cf009b7fd68056c2842bab15def7cf4f)() const = &::clang::VarDecl::checkInitIsICE;
    bool  (::clang::VarDecl::*method_pointer_f59b0e73f6e35eefb09c0301511e5457)() const = &::clang::VarDecl::isStaticDataMember;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_5cc492cf368b5303b1e1f65e61ec2200)() = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_2372ec928ac25199b1e8ee388bfb5a21)(class ::clang::ASTContext  &) = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_4c7f61efe73850ea8d3dc6bb1b4e0620)() = &::clang::VarDecl::getOutOfLineDefinition;
    bool  (::clang::VarDecl::*method_pointer_d8cf8075351b5ff5beda0ac5fe07608c)() const = &::clang::VarDecl::hasInit;
    bool  (::clang::VarDecl::*method_pointer_b855b0b96833559496d3a5ac45d6f14c)() const = &::clang::VarDecl::isCXXForRangeDecl;
    bool  (::clang::VarDecl::*method_pointer_c930d83098bb5d06b1049053055f568a)() const = &::clang::VarDecl::isLocalVarDecl;
    bool  (::clang::VarDecl::*method_pointer_758b19eab1ae5a00833ba3e49c79c6cc)() const = &::clang::VarDecl::isInExternCXXContext;
    class ::clang::VarDecl  * (*method_pointer_06e60af2f5a250c7ac15071069d01e03)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarDecl::CreateDeserialized;
    bool  (::clang::VarDecl::*method_pointer_8d89225e1ee957c5935b5fde59eb12d9)() const = &::clang::VarDecl::isInitCapture;
    void  (::clang::VarDecl::*method_pointer_3fcefe317850560bbc0400d70e2da414)(bool ) = &::clang::VarDecl::setCXXForRangeDecl;
    bool  (::clang::VarDecl::*method_pointer_5426ebce60e55bf1a6127a839c58f9ba)() const = &::clang::VarDecl::isFileVarDecl;
    bool  (::clang::VarDecl::*method_pointer_b4a36dcad6465bb886b88984e35173d1)() const = &::clang::VarDecl::isInitICE;
    bool  (::clang::VarDecl::*method_pointer_c1fa8a54a4b450049f33bfdab578388d)() const = &::clang::VarDecl::isDirectInit;
    void  (::clang::VarDecl::*method_pointer_0f76b1ed04635e77b803a678765557f6)(bool ) = &::clang::VarDecl::setInitCapture;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_5f1762b8791e5ccdb9d3d19fabcb7207)() const = &::clang::VarDecl::getActingDefinition;
    bool  (*method_pointer_044101e1f3275c4bb73a829ec4c191d3)(class ::clang::Decl  const *) = ::clang::VarDecl::classof;
    void  (::clang::VarDecl::*method_pointer_2ad2ab9d4e7056e0b5098ae7fa6b18d6)(class ::clang::VarTemplateDecl  *) = &::clang::VarDecl::setDescribedVarTemplate;
    class ::clang::VarTemplateDecl  * (::clang::VarDecl::*method_pointer_e8f12893d20f5db29d9e1dde7298f6f5)() const = &::clang::VarDecl::getDescribedVarTemplate;
    void  (::clang::VarDecl::*method_pointer_49c58dd88fa25b94aa8af654d9338dfd)(bool ) = &::clang::VarDecl::setNRVOVariable;
    bool  (::clang::VarDecl::*method_pointer_4248d67835825dd09e4866ebe3a5df82)() const = &::clang::VarDecl::isExceptionVariable;
    bool  (::clang::VarDecl::*method_pointer_d371144450ab5243978dce4cde914b7f)() const = &::clang::VarDecl::hasLocalStorage;
    bool  (::clang::VarDecl::*method_pointer_a160aeb2c1cf509194f6a0916ab97f73)() const = &::clang::VarDecl::isFunctionOrMethodVarDecl;
    bool  (::clang::VarDecl::*method_pointer_49e74c03b9515117b87b0dd666cc8646)() const = &::clang::VarDecl::isPreviousDeclInSameBlockScope;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_068667f1ff245b39bf8c2d2b25affb6e)() = &::clang::VarDecl::getActingDefinition;
    bool  (::clang::VarDecl::*method_pointer_b84d177632955fb3818209f1ca79b570)() const = &::clang::VarDecl::isLocalVarDeclOrParm;
    bool  (::clang::VarDecl::*method_pointer_8a1bd470f6f45723ac5cd5d82ad112fc)() const = &::clang::VarDecl::isNRVOVariable;
    bool  (::clang::VarDecl::*method_pointer_eb2668a3cdf45794a106d1938d50783a)() const = &::clang::VarDecl::isInExternCContext;
    bool  (::clang::VarDecl::*method_pointer_2a582c2305c35f78b01a4a2f4fe7e6d9)(class ::clang::ASTContext  &) const = &::clang::VarDecl::isUsableInConstantExpressions;
    bool  (::clang::VarDecl::*method_pointer_157c63d238865c0f8faae2e7fce4cdcb)() const = &::clang::VarDecl::isInitKnownICE;
    bool  (::clang::VarDecl::*method_pointer_462c018f64fa5c78bfaa3237b117f962)() const = &::clang::VarDecl::isOutOfLine;
    bool  (::clang::VarDecl::*method_pointer_a6b991b8124f5ce099fdaa3b86104c49)() const = &::clang::VarDecl::hasExternalStorage;
    bool  (::clang::VarDecl::*method_pointer_2e1adb8cfb0a5694a70a135b7722f59d)() const = &::clang::VarDecl::isConstexpr;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_d3dc9681da625d9594c6d396e1665f75)() const = &::clang::VarDecl::getCanonicalDecl;
    boost::python::class_< class ::clang::VarDecl, autowig::HeldType< class ::clang::VarDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_99d3396ee242572bbeaada83b5e83165("VarDecl", "", boost::python::no_init);
    class_99d3396ee242572bbeaada83b5e83165.def("is_concept", method_pointer_b2360f77560b5c50a2b902eab5f1e193, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_exception_variable", method_pointer_e88d2b13b3965250bfab1866318837bf, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_arc_pseudo_strong", method_pointer_99f5d10efbce594ca0657949824427c5, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_30353c0a2b375b658d78e65a52798bf2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof_kind", method_pointer_619e4ed33c715b09942cdbd9e50bc005, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_arc_pseudo_strong", method_pointer_0700e0a29a0252f7a436f06a240ff51d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_concept", method_pointer_02e217a9729b5701af0177dc5b893fe6, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_instantiated_from_static_data_member", method_pointer_212cfcc1f57d55adb3952376a08dbda2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_previous_decl_in_same_block_scope", method_pointer_f3768504896d52a1a8566774cd90837a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_6dc957a575755e11a20e3aafd3081d4b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_constexpr", method_pointer_fc733a45e019503688b695a8987ecb7c, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_e63f385bb17059d885eb37a89a6bcb29, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_global_storage", method_pointer_c6d692e3403a5eaf8b992dd898fad9de, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_extern_c", method_pointer_34fca42f94115e1d8e38c3c859f13068, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_local", method_pointer_a9f5b2fa5eb458eaae7b028834e30f86, "");
    class_99d3396ee242572bbeaada83b5e83165.def("check_init_is_ice", method_pointer_cf009b7fd68056c2842bab15def7cf4f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_data_member", method_pointer_f59b0e73f6e35eefb09c0301511e5457, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_5cc492cf368b5303b1e1f65e61ec2200, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_2372ec928ac25199b1e8ee388bfb5a21, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_out_of_line_definition", method_pointer_4c7f61efe73850ea8d3dc6bb1b4e0620, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_init", method_pointer_d8cf8075351b5ff5beda0ac5fe07608c, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_cxx_for_range_decl", method_pointer_b855b0b96833559496d3a5ac45d6f14c, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl", method_pointer_c930d83098bb5d06b1049053055f568a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_cxx_context", method_pointer_758b19eab1ae5a00833ba3e49c79c6cc, "");
    class_99d3396ee242572bbeaada83b5e83165.def("create_deserialized", method_pointer_06e60af2f5a250c7ac15071069d01e03, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_capture", method_pointer_8d89225e1ee957c5935b5fde59eb12d9, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_cxx_for_range_decl", method_pointer_3fcefe317850560bbc0400d70e2da414, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_file_var_decl", method_pointer_5426ebce60e55bf1a6127a839c58f9ba, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_ice", method_pointer_b4a36dcad6465bb886b88984e35173d1, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_direct_init", method_pointer_c1fa8a54a4b450049f33bfdab578388d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_init_capture", method_pointer_0f76b1ed04635e77b803a678765557f6, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_5f1762b8791e5ccdb9d3d19fabcb7207, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof", method_pointer_044101e1f3275c4bb73a829ec4c191d3, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_described_var_template", method_pointer_2ad2ab9d4e7056e0b5098ae7fa6b18d6, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_described_var_template", method_pointer_e8f12893d20f5db29d9e1dde7298f6f5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_nrvo_variable", method_pointer_49c58dd88fa25b94aa8af654d9338dfd, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_exception_variable", method_pointer_4248d67835825dd09e4866ebe3a5df82, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_local_storage", method_pointer_d371144450ab5243978dce4cde914b7f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_function_or_method_var_decl", method_pointer_a160aeb2c1cf509194f6a0916ab97f73, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_previous_decl_in_same_block_scope", method_pointer_49e74c03b9515117b87b0dd666cc8646, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_068667f1ff245b39bf8c2d2b25affb6e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl_or_parm", method_pointer_b84d177632955fb3818209f1ca79b570, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_nrvo_variable", method_pointer_8a1bd470f6f45723ac5cd5d82ad112fc, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_c_context", method_pointer_eb2668a3cdf45794a106d1938d50783a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_usable_in_constant_expressions", method_pointer_2a582c2305c35f78b01a4a2f4fe7e6d9, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_known_ice", method_pointer_157c63d238865c0f8faae2e7fce4cdcb, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_out_of_line", method_pointer_462c018f64fa5c78bfaa3237b117f962, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_external_storage", method_pointer_a6b991b8124f5ce099fdaa3b86104c49, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_constexpr", method_pointer_2e1adb8cfb0a5694a70a135b7722f59d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_d3dc9681da625d9594c6d396e1665f75, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof_kind");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("create_deserialized");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}