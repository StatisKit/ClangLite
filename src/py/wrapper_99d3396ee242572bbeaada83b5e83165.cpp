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
    class ::clang::VarDecl  * (*method_pointer_1e64f5b28c3a56f59f7d52f375ab88bb)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarDecl::CreateDeserialized;
    bool  (::clang::VarDecl::*method_pointer_4156d9a1858c5d988d22f87e1b2997cf)() const = &::clang::VarDecl::checkInitIsICE;
    bool  (*method_pointer_09a59aea09e25b96b540dd1098c6352c)(class ::clang::Decl  const *) = ::clang::VarDecl::classof;
    bool  (*method_pointer_c2fd0deec1de530e8a30d2a4852666cd)(enum ::clang::Decl::Kind ) = ::clang::VarDecl::classofKind;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_12e605ef474b5843af16c5f84ad82375)() = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_60908c4655e5549c876328a4bb69cd53)() const = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_6ac256fc8db050869c941287228f88a6)() const = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_cbbba04cf5135686a639cff7591f3a78)() = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_8fdd16cdc94755f599ee8f6403b084a1)(class ::clang::ASTContext  &) = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_ec686ee403035a539085b34c1b981c00)() = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_a161227f42cf555eb0313396eae4f7aa)() const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_8b7556bb97255fcda1f09f4bf406bc3b)(class ::clang::ASTContext  &) const = &::clang::VarDecl::getDefinition;
    class ::clang::VarTemplateDecl  * (::clang::VarDecl::*method_pointer_0e002d5d9e435336ad01039e094f8336)() const = &::clang::VarDecl::getDescribedVarTemplate;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_9e10bbdaaf2b539e80a8d0c28c274459)() const = &::clang::VarDecl::getInstantiatedFromStaticDataMember;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_512deeb49c3159ef8d21489a9d510cc7)() = &::clang::VarDecl::getOutOfLineDefinition;
    class ::clang::SourceLocation  (::clang::VarDecl::*method_pointer_fb0409f287e75becb6e12ea46a71b837)() const = &::clang::VarDecl::getPointOfInstantiation;
    bool  (::clang::VarDecl::*method_pointer_37702561f8055f1a97bdde10b0597db6)() const = &::clang::VarDecl::hasExternalStorage;
    bool  (::clang::VarDecl::*method_pointer_b57d64dc9aca54b4826cbb7705d63e41)() const = &::clang::VarDecl::hasGlobalStorage;
    bool  (::clang::VarDecl::*method_pointer_1bc60ee0585b5850838df3f3fb24644d)() const = &::clang::VarDecl::hasInit;
    bool  (::clang::VarDecl::*method_pointer_ec6e66e4bc9251999df3fe8702d318a4)() const = &::clang::VarDecl::hasLocalStorage;
    bool  (::clang::VarDecl::*method_pointer_fcd361ba0ba1514d8a90489452e46e4f)() const = &::clang::VarDecl::isARCPseudoStrong;
    bool  (::clang::VarDecl::*method_pointer_9c8a4d52fbfe54a398b24ec17e3e9f3c)() const = &::clang::VarDecl::isCXXForRangeDecl;
    bool  (::clang::VarDecl::*method_pointer_3f319ec4c05f571498c03bbec5bcd19e)() const = &::clang::VarDecl::isConcept;
    bool  (::clang::VarDecl::*method_pointer_6734a77bbd725121bf9d38d5984aa965)() const = &::clang::VarDecl::isConstexpr;
    bool  (::clang::VarDecl::*method_pointer_8603ec05f7635a01ad0e3dc6445c21cd)() const = &::clang::VarDecl::isDirectInit;
    bool  (::clang::VarDecl::*method_pointer_c279914f730a56f981249651b1edc677)() const = &::clang::VarDecl::isExceptionVariable;
    bool  (::clang::VarDecl::*method_pointer_a179b0b8c9265d129f3f6b63985d6d32)() const = &::clang::VarDecl::isExternC;
    bool  (::clang::VarDecl::*method_pointer_dc6746d2461b5114ad5464c6d33c0eb3)() const = &::clang::VarDecl::isFileVarDecl;
    bool  (::clang::VarDecl::*method_pointer_220f91397bd55f45b66cbf721cb8434e)() const = &::clang::VarDecl::isFunctionOrMethodVarDecl;
    bool  (::clang::VarDecl::*method_pointer_50caeb56cbf25d39858f1f1c3f0b4209)() const = &::clang::VarDecl::isInExternCContext;
    bool  (::clang::VarDecl::*method_pointer_f47eaef7fadf587a8273d2e564ae4b34)() const = &::clang::VarDecl::isInExternCXXContext;
    bool  (::clang::VarDecl::*method_pointer_af12581bfd95595593624d89630c3036)() const = &::clang::VarDecl::isInitCapture;
    bool  (::clang::VarDecl::*method_pointer_361d1eba2c4253189b9b26aad289b0db)() const = &::clang::VarDecl::isInitICE;
    bool  (::clang::VarDecl::*method_pointer_b626eab60a275cbc9643d75c7bc82c3a)() const = &::clang::VarDecl::isInitKnownICE;
    bool  (::clang::VarDecl::*method_pointer_c3e63d7c163350bd8e7b2350846ac8a2)() const = &::clang::VarDecl::isLocalVarDecl;
    bool  (::clang::VarDecl::*method_pointer_f1fbff96f5ac5c949e7576453c952e89)() const = &::clang::VarDecl::isLocalVarDeclOrParm;
    bool  (::clang::VarDecl::*method_pointer_314cd0b19f4e5ef6854e4a1489e1f642)() const = &::clang::VarDecl::isNRVOVariable;
    bool  (::clang::VarDecl::*method_pointer_b3dafed81fd8536cb01da55a5fcef043)() const = &::clang::VarDecl::isOutOfLine;
    bool  (::clang::VarDecl::*method_pointer_4477be8771d4573e90361ac3fc48118f)() const = &::clang::VarDecl::isPreviousDeclInSameBlockScope;
    bool  (::clang::VarDecl::*method_pointer_6b5d070bfb10581eae69b5b1e245d7f1)() const = &::clang::VarDecl::isStaticDataMember;
    bool  (::clang::VarDecl::*method_pointer_e13b3d9043915c24b0819ecab7031a54)() const = &::clang::VarDecl::isStaticLocal;
    bool  (::clang::VarDecl::*method_pointer_c4cc9c953ca55aa5b5582b13d30ca963)(class ::clang::ASTContext  &) const = &::clang::VarDecl::isUsableInConstantExpressions;
    void  (::clang::VarDecl::*method_pointer_5d51be893c645c8a845113ae2c314bf4)(bool ) = &::clang::VarDecl::setARCPseudoStrong;
    void  (::clang::VarDecl::*method_pointer_45ce95d1ca105014a215b179048140dd)(bool ) = &::clang::VarDecl::setCXXForRangeDecl;
    void  (::clang::VarDecl::*method_pointer_1f349fa2fa255d7580f06cd0736709a8)(bool ) = &::clang::VarDecl::setConcept;
    void  (::clang::VarDecl::*method_pointer_f730efda019c50bea5e347350418285e)(bool ) = &::clang::VarDecl::setConstexpr;
    void  (::clang::VarDecl::*method_pointer_b68bfdb69e7758a88aa8fa975955cd03)(class ::clang::VarTemplateDecl  *) = &::clang::VarDecl::setDescribedVarTemplate;
    void  (::clang::VarDecl::*method_pointer_09cdd57d78ed563cb2a504ff91522209)(bool ) = &::clang::VarDecl::setExceptionVariable;
    void  (::clang::VarDecl::*method_pointer_d182489b784c59f1bc2d2b0c5b74dfc1)(bool ) = &::clang::VarDecl::setInitCapture;
    void  (::clang::VarDecl::*method_pointer_ea068ec453705856a153cf7653216faa)(bool ) = &::clang::VarDecl::setNRVOVariable;
    void  (::clang::VarDecl::*method_pointer_cc10b03f45d252f89516e63f5c0e6f4c)(bool ) = &::clang::VarDecl::setPreviousDeclInSameBlockScope;
    boost::python::class_< class ::clang::VarDecl, autowig::HeldType< class ::clang::VarDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_99d3396ee242572bbeaada83b5e83165("VarDecl", "", boost::python::no_init);
    class_99d3396ee242572bbeaada83b5e83165.def("create_deserialized", method_pointer_1e64f5b28c3a56f59f7d52f375ab88bb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("check_init_is_ice", method_pointer_4156d9a1858c5d988d22f87e1b2997cf, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof", method_pointer_09a59aea09e25b96b540dd1098c6352c, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof_kind", method_pointer_c2fd0deec1de530e8a30d2a4852666cd, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_12e605ef474b5843af16c5f84ad82375, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_60908c4655e5549c876328a4bb69cd53, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_6ac256fc8db050869c941287228f88a6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_cbbba04cf5135686a639cff7591f3a78, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_8fdd16cdc94755f599ee8f6403b084a1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_ec686ee403035a539085b34c1b981c00, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_a161227f42cf555eb0313396eae4f7aa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_8b7556bb97255fcda1f09f4bf406bc3b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_described_var_template", method_pointer_0e002d5d9e435336ad01039e094f8336, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_instantiated_from_static_data_member", method_pointer_9e10bbdaaf2b539e80a8d0c28c274459, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_out_of_line_definition", method_pointer_512deeb49c3159ef8d21489a9d510cc7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_point_of_instantiation", method_pointer_fb0409f287e75becb6e12ea46a71b837, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_external_storage", method_pointer_37702561f8055f1a97bdde10b0597db6, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_global_storage", method_pointer_b57d64dc9aca54b4826cbb7705d63e41, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_init", method_pointer_1bc60ee0585b5850838df3f3fb24644d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_local_storage", method_pointer_ec6e66e4bc9251999df3fe8702d318a4, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_arc_pseudo_strong", method_pointer_fcd361ba0ba1514d8a90489452e46e4f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_cxx_for_range_decl", method_pointer_9c8a4d52fbfe54a398b24ec17e3e9f3c, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_concept", method_pointer_3f319ec4c05f571498c03bbec5bcd19e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_constexpr", method_pointer_6734a77bbd725121bf9d38d5984aa965, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_direct_init", method_pointer_8603ec05f7635a01ad0e3dc6445c21cd, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_exception_variable", method_pointer_c279914f730a56f981249651b1edc677, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_extern_c", method_pointer_a179b0b8c9265d129f3f6b63985d6d32, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_file_var_decl", method_pointer_dc6746d2461b5114ad5464c6d33c0eb3, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_function_or_method_var_decl", method_pointer_220f91397bd55f45b66cbf721cb8434e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_c_context", method_pointer_50caeb56cbf25d39858f1f1c3f0b4209, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_cxx_context", method_pointer_f47eaef7fadf587a8273d2e564ae4b34, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_capture", method_pointer_af12581bfd95595593624d89630c3036, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_ice", method_pointer_361d1eba2c4253189b9b26aad289b0db, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_known_ice", method_pointer_b626eab60a275cbc9643d75c7bc82c3a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl", method_pointer_c3e63d7c163350bd8e7b2350846ac8a2, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl_or_parm", method_pointer_f1fbff96f5ac5c949e7576453c952e89, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_nrvo_variable", method_pointer_314cd0b19f4e5ef6854e4a1489e1f642, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_out_of_line", method_pointer_b3dafed81fd8536cb01da55a5fcef043, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_previous_decl_in_same_block_scope", method_pointer_4477be8771d4573e90361ac3fc48118f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_data_member", method_pointer_6b5d070bfb10581eae69b5b1e245d7f1, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_local", method_pointer_e13b3d9043915c24b0819ecab7031a54, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_usable_in_constant_expressions", method_pointer_c4cc9c953ca55aa5b5582b13d30ca963, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_arc_pseudo_strong", method_pointer_5d51be893c645c8a845113ae2c314bf4, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_cxx_for_range_decl", method_pointer_45ce95d1ca105014a215b179048140dd, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_concept", method_pointer_1f349fa2fa255d7580f06cd0736709a8, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_constexpr", method_pointer_f730efda019c50bea5e347350418285e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_described_var_template", method_pointer_b68bfdb69e7758a88aa8fa975955cd03, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_exception_variable", method_pointer_09cdd57d78ed563cb2a504ff91522209, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_init_capture", method_pointer_d182489b784c59f1bc2d2b0c5b74dfc1, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_nrvo_variable", method_pointer_ea068ec453705856a153cf7653216faa, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_previous_decl_in_same_block_scope", method_pointer_cc10b03f45d252f89516e63f5c0e6f4c, "");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof_kind");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("create_deserialized");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}