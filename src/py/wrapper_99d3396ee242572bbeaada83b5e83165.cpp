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
    class ::clang::VarDecl  * (*method_pointer_b247f85c09c35eb198de5e3554c870ce)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarDecl::CreateDeserialized;
    bool  (::clang::VarDecl::*method_pointer_8978188dd5f551f1b0fb818067e76b6b)() const = &::clang::VarDecl::checkInitIsICE;
    bool  (*method_pointer_2e33021b6d27566587d06882cd68b267)(class ::clang::Decl  const *) = ::clang::VarDecl::classof;
    bool  (*method_pointer_a605a31576e957c5aaac32573ad7d136)(enum ::clang::Decl::Kind ) = ::clang::VarDecl::classofKind;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_88d6e644b9df577aa295655b1115b4d0)() = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_9bd0e0f514ae50f39183f1f4aade3a02)() const = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_ca2d6ca91e1d59cdaed54075f06a1ad7)() = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_461fb9701f2c54678a52f38ba52decea)() const = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_af84e3f8d3fd56b4a2bda4f84aea56eb)() const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_07554ae067585c2fbeac46e0fc697dc1)(class ::clang::ASTContext  &) const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_738a82a57d1f5f338d5a5476b1169c89)() = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_0bdda09a3fb253e497b5c43b188c7121)(class ::clang::ASTContext  &) = &::clang::VarDecl::getDefinition;
    class ::clang::VarTemplateDecl  * (::clang::VarDecl::*method_pointer_23ee2f513e1b5137a7d149ebff69e5ca)() const = &::clang::VarDecl::getDescribedVarTemplate;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_7231f7b712815247a0a8d26039306ba1)() const = &::clang::VarDecl::getInstantiatedFromStaticDataMember;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_54e45c6a55885e9ea12bed77324a5c97)() = &::clang::VarDecl::getOutOfLineDefinition;
    class ::clang::SourceLocation  (::clang::VarDecl::*method_pointer_6ed7636694e4560e98d2a7917abe7e04)() const = &::clang::VarDecl::getPointOfInstantiation;
    bool  (::clang::VarDecl::*method_pointer_2a3233487aa85ffdabe1010d7d6aebf9)() const = &::clang::VarDecl::hasExternalStorage;
    bool  (::clang::VarDecl::*method_pointer_7a9840fac8cf5f22a28b8ec0d9314179)() const = &::clang::VarDecl::hasGlobalStorage;
    bool  (::clang::VarDecl::*method_pointer_7cba7783141e52449f0a1bbbaffdab47)() const = &::clang::VarDecl::hasInit;
    bool  (::clang::VarDecl::*method_pointer_931c91628e765a9db2ed746dde05fc54)() const = &::clang::VarDecl::hasLocalStorage;
    bool  (::clang::VarDecl::*method_pointer_7115388dbba759c68fe35d3faa2c21d7)() const = &::clang::VarDecl::isARCPseudoStrong;
    bool  (::clang::VarDecl::*method_pointer_05285d8cfbf85c13846479d3c8e11a36)() const = &::clang::VarDecl::isCXXForRangeDecl;
    bool  (::clang::VarDecl::*method_pointer_1238e816607c56219121525e73094586)() const = &::clang::VarDecl::isConcept;
    bool  (::clang::VarDecl::*method_pointer_1248e3b8a780599dae15f31c901a5cec)() const = &::clang::VarDecl::isConstexpr;
    bool  (::clang::VarDecl::*method_pointer_3adcf48714f6524bb79c16a6cecf6cf7)() const = &::clang::VarDecl::isDirectInit;
    bool  (::clang::VarDecl::*method_pointer_a2f3c60c3f61545ab8bf96b2a4b465dd)() const = &::clang::VarDecl::isExceptionVariable;
    bool  (::clang::VarDecl::*method_pointer_c4ee52de25c4529d8ad2290cad330a33)() const = &::clang::VarDecl::isExternC;
    bool  (::clang::VarDecl::*method_pointer_77733200d51a5e5586a930e008eb289f)() const = &::clang::VarDecl::isFileVarDecl;
    bool  (::clang::VarDecl::*method_pointer_5b2ba2575c3154b0aed574bd02665121)() const = &::clang::VarDecl::isFunctionOrMethodVarDecl;
    bool  (::clang::VarDecl::*method_pointer_556da4aa558b59f7a6774106c65572ac)() const = &::clang::VarDecl::isInExternCContext;
    bool  (::clang::VarDecl::*method_pointer_11fb6e75c006555fb63d22fd6d5f2ca3)() const = &::clang::VarDecl::isInExternCXXContext;
    bool  (::clang::VarDecl::*method_pointer_265bec0aeb5457a3bcb74499067b3c37)() const = &::clang::VarDecl::isInitCapture;
    bool  (::clang::VarDecl::*method_pointer_d266eae68f885ab7ad8fd940fab293af)() const = &::clang::VarDecl::isInitICE;
    bool  (::clang::VarDecl::*method_pointer_83486b81c81254af870d85c9f4fe6bcd)() const = &::clang::VarDecl::isInitKnownICE;
    bool  (::clang::VarDecl::*method_pointer_605b314ed5e253b7a06c56b5727f8d74)() const = &::clang::VarDecl::isLocalVarDecl;
    bool  (::clang::VarDecl::*method_pointer_a78cb12436dc5ff487245fe7979b5af8)() const = &::clang::VarDecl::isLocalVarDeclOrParm;
    bool  (::clang::VarDecl::*method_pointer_f4eb0e7f8f0752ec97d0edf73a4ea102)() const = &::clang::VarDecl::isNRVOVariable;
    bool  (::clang::VarDecl::*method_pointer_158d05e6d4765050bf1d61f4455863fc)() const = &::clang::VarDecl::isOutOfLine;
    bool  (::clang::VarDecl::*method_pointer_8ea0f4c21da65955bb6a57a618ad907f)() const = &::clang::VarDecl::isPreviousDeclInSameBlockScope;
    bool  (::clang::VarDecl::*method_pointer_2742a83a10705edb8821d1b1b53b48cf)() const = &::clang::VarDecl::isStaticDataMember;
    bool  (::clang::VarDecl::*method_pointer_6278994cb0b45521b0723567304d95dc)() const = &::clang::VarDecl::isStaticLocal;
    bool  (::clang::VarDecl::*method_pointer_cacc825affbe5f11b0c8c7b8bb55310f)(class ::clang::ASTContext  &) const = &::clang::VarDecl::isUsableInConstantExpressions;
    void  (::clang::VarDecl::*method_pointer_3aeb406eb54252b9afc4c53bee897b92)(bool ) = &::clang::VarDecl::setARCPseudoStrong;
    void  (::clang::VarDecl::*method_pointer_807faf13813054329df56ab11be0c6fc)(bool ) = &::clang::VarDecl::setCXXForRangeDecl;
    void  (::clang::VarDecl::*method_pointer_a1e6444fed545d1f90f5b85450b025e3)(bool ) = &::clang::VarDecl::setConcept;
    void  (::clang::VarDecl::*method_pointer_4d936a973a79534b897cb4f108858fee)(bool ) = &::clang::VarDecl::setConstexpr;
    void  (::clang::VarDecl::*method_pointer_5c4a75f9bf515511ab306cf58b91282d)(class ::clang::VarTemplateDecl  *) = &::clang::VarDecl::setDescribedVarTemplate;
    void  (::clang::VarDecl::*method_pointer_d56abc882b735c7cac772796586b5a8b)(bool ) = &::clang::VarDecl::setExceptionVariable;
    void  (::clang::VarDecl::*method_pointer_41480e0b72c35e0bb11ff02cc349156b)(bool ) = &::clang::VarDecl::setInitCapture;
    void  (::clang::VarDecl::*method_pointer_d7729a33b7205a41a8cf34c319f36443)(bool ) = &::clang::VarDecl::setNRVOVariable;
    void  (::clang::VarDecl::*method_pointer_884cc4affb85530dabf907166c06db7c)(bool ) = &::clang::VarDecl::setPreviousDeclInSameBlockScope;
    boost::python::class_< class ::clang::VarDecl, autowig::HeldType< class ::clang::VarDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_99d3396ee242572bbeaada83b5e83165("VarDecl", "", boost::python::no_init);
    class_99d3396ee242572bbeaada83b5e83165.def("create_deserialized", method_pointer_b247f85c09c35eb198de5e3554c870ce, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("check_init_is_ice", method_pointer_8978188dd5f551f1b0fb818067e76b6b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof", method_pointer_2e33021b6d27566587d06882cd68b267, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof_kind", method_pointer_a605a31576e957c5aaac32573ad7d136, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_88d6e644b9df577aa295655b1115b4d0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_9bd0e0f514ae50f39183f1f4aade3a02, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_ca2d6ca91e1d59cdaed54075f06a1ad7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_461fb9701f2c54678a52f38ba52decea, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_af84e3f8d3fd56b4a2bda4f84aea56eb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_07554ae067585c2fbeac46e0fc697dc1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_738a82a57d1f5f338d5a5476b1169c89, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_0bdda09a3fb253e497b5c43b188c7121, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_described_var_template", method_pointer_23ee2f513e1b5137a7d149ebff69e5ca, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_instantiated_from_static_data_member", method_pointer_7231f7b712815247a0a8d26039306ba1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_out_of_line_definition", method_pointer_54e45c6a55885e9ea12bed77324a5c97, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_point_of_instantiation", method_pointer_6ed7636694e4560e98d2a7917abe7e04, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_external_storage", method_pointer_2a3233487aa85ffdabe1010d7d6aebf9, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_global_storage", method_pointer_7a9840fac8cf5f22a28b8ec0d9314179, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_init", method_pointer_7cba7783141e52449f0a1bbbaffdab47, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_local_storage", method_pointer_931c91628e765a9db2ed746dde05fc54, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_arc_pseudo_strong", method_pointer_7115388dbba759c68fe35d3faa2c21d7, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_cxx_for_range_decl", method_pointer_05285d8cfbf85c13846479d3c8e11a36, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_concept", method_pointer_1238e816607c56219121525e73094586, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_constexpr", method_pointer_1248e3b8a780599dae15f31c901a5cec, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_direct_init", method_pointer_3adcf48714f6524bb79c16a6cecf6cf7, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_exception_variable", method_pointer_a2f3c60c3f61545ab8bf96b2a4b465dd, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_extern_c", method_pointer_c4ee52de25c4529d8ad2290cad330a33, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_file_var_decl", method_pointer_77733200d51a5e5586a930e008eb289f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_function_or_method_var_decl", method_pointer_5b2ba2575c3154b0aed574bd02665121, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_c_context", method_pointer_556da4aa558b59f7a6774106c65572ac, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_cxx_context", method_pointer_11fb6e75c006555fb63d22fd6d5f2ca3, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_capture", method_pointer_265bec0aeb5457a3bcb74499067b3c37, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_ice", method_pointer_d266eae68f885ab7ad8fd940fab293af, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_known_ice", method_pointer_83486b81c81254af870d85c9f4fe6bcd, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl", method_pointer_605b314ed5e253b7a06c56b5727f8d74, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl_or_parm", method_pointer_a78cb12436dc5ff487245fe7979b5af8, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_nrvo_variable", method_pointer_f4eb0e7f8f0752ec97d0edf73a4ea102, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_out_of_line", method_pointer_158d05e6d4765050bf1d61f4455863fc, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_previous_decl_in_same_block_scope", method_pointer_8ea0f4c21da65955bb6a57a618ad907f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_data_member", method_pointer_2742a83a10705edb8821d1b1b53b48cf, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_local", method_pointer_6278994cb0b45521b0723567304d95dc, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_usable_in_constant_expressions", method_pointer_cacc825affbe5f11b0c8c7b8bb55310f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_arc_pseudo_strong", method_pointer_3aeb406eb54252b9afc4c53bee897b92, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_cxx_for_range_decl", method_pointer_807faf13813054329df56ab11be0c6fc, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_concept", method_pointer_a1e6444fed545d1f90f5b85450b025e3, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_constexpr", method_pointer_4d936a973a79534b897cb4f108858fee, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_described_var_template", method_pointer_5c4a75f9bf515511ab306cf58b91282d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_exception_variable", method_pointer_d56abc882b735c7cac772796586b5a8b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_init_capture", method_pointer_41480e0b72c35e0bb11ff02cc349156b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_nrvo_variable", method_pointer_d7729a33b7205a41a8cf34c319f36443, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_previous_decl_in_same_block_scope", method_pointer_884cc4affb85530dabf907166c06db7c, "");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof_kind");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("create_deserialized");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}