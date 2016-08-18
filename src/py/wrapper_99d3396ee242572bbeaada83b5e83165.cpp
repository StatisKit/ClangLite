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
    class ::clang::VarDecl  * (*method_pointer_f0d42f47d2555343a7785cf9f00f4b15)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarDecl::CreateDeserialized;
    bool  (::clang::VarDecl::*method_pointer_0b08301df5795d58b80acfaac6a7e427)() const = &::clang::VarDecl::checkInitIsICE;
    bool  (*method_pointer_dce556f4216e5a5da7c5f8406aa367f2)(class ::clang::Decl  const *) = ::clang::VarDecl::classof;
    bool  (*method_pointer_ce1b2866a8245e45883beccb18b5998d)(enum ::clang::Decl::Kind ) = ::clang::VarDecl::classofKind;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_03c74b00fafc52cea7b6265c308bf09e)() const = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_c117868275695310a64ed1a85960c653)() = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_92f838d5992857ab8d1f4e5f5b75c23e)() const = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_21ffe0da211650e28ddd4c37d818c144)() = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_17e960cf66a5592aacf0334cc524dc38)(class ::clang::ASTContext  &) const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_5de6964c7cb158249896b2bcbf9de157)() = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_310578f7de035d3b8581bf383a7fee9c)() const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_149a8265b20b56109231c3de41aba825)(class ::clang::ASTContext  &) = &::clang::VarDecl::getDefinition;
    class ::clang::VarTemplateDecl  * (::clang::VarDecl::*method_pointer_e75623ac6a8651a888246cef58bdc3cd)() const = &::clang::VarDecl::getDescribedVarTemplate;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_84b2231e52a25b28b7722cf1a7fb2e99)() const = &::clang::VarDecl::getInstantiatedFromStaticDataMember;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_0a833ded1ea15dc39563ed228bd7ca01)() = &::clang::VarDecl::getOutOfLineDefinition;
    bool  (::clang::VarDecl::*method_pointer_6879b26b2a395241821dab1e0182db4a)() const = &::clang::VarDecl::hasExternalStorage;
    bool  (::clang::VarDecl::*method_pointer_015303cc693450e2a1e234ebc9d7f85a)() const = &::clang::VarDecl::hasGlobalStorage;
    bool  (::clang::VarDecl::*method_pointer_9ae9e16319d25e43b6f64fb6bafe6230)() const = &::clang::VarDecl::hasInit;
    bool  (::clang::VarDecl::*method_pointer_468953df04305d5d9c64da3f87e3c6b5)() const = &::clang::VarDecl::hasLocalStorage;
    bool  (::clang::VarDecl::*method_pointer_f19baca45c7754dd970c651a4c0fcf11)() const = &::clang::VarDecl::isARCPseudoStrong;
    bool  (::clang::VarDecl::*method_pointer_987e1a9fa3ea5c56b9175b2b607f7f9e)() const = &::clang::VarDecl::isCXXForRangeDecl;
    bool  (::clang::VarDecl::*method_pointer_ed7431eddab950e6bb73137efdf7a970)() const = &::clang::VarDecl::isConcept;
    bool  (::clang::VarDecl::*method_pointer_f5aa4061090f5f0fb3f5fb6652612651)() const = &::clang::VarDecl::isConstexpr;
    bool  (::clang::VarDecl::*method_pointer_8b56fd11952d5651a01b1729a750f87b)() const = &::clang::VarDecl::isDirectInit;
    bool  (::clang::VarDecl::*method_pointer_6b77ca8c3ea85d28bdd34c63bd240814)() const = &::clang::VarDecl::isExceptionVariable;
    bool  (::clang::VarDecl::*method_pointer_5ff2ea23f8185ad3832efd92637b541d)() const = &::clang::VarDecl::isExternC;
    bool  (::clang::VarDecl::*method_pointer_7b8ca089541e520693d6d2fe965ff429)() const = &::clang::VarDecl::isFileVarDecl;
    bool  (::clang::VarDecl::*method_pointer_aed53ed768825e879faf20b9b9b9cd5d)() const = &::clang::VarDecl::isFunctionOrMethodVarDecl;
    bool  (::clang::VarDecl::*method_pointer_f3ca207d3e555f85a989a9e86650b792)() const = &::clang::VarDecl::isInExternCContext;
    bool  (::clang::VarDecl::*method_pointer_3aa084d2560151b99b689d55526fdfd1)() const = &::clang::VarDecl::isInExternCXXContext;
    bool  (::clang::VarDecl::*method_pointer_25e9de764b84583fafcee6779268727e)() const = &::clang::VarDecl::isInitCapture;
    bool  (::clang::VarDecl::*method_pointer_7ae826e7d5a25458a495aec0998e61c9)() const = &::clang::VarDecl::isInitICE;
    bool  (::clang::VarDecl::*method_pointer_c146846b26f15ee9a99cf61418fb289a)() const = &::clang::VarDecl::isInitKnownICE;
    bool  (::clang::VarDecl::*method_pointer_0d22521744de53a59fc49f8dbcddd7f8)() const = &::clang::VarDecl::isLocalVarDecl;
    bool  (::clang::VarDecl::*method_pointer_d7dc0b3064e25b559d416472d039522c)() const = &::clang::VarDecl::isLocalVarDeclOrParm;
    bool  (::clang::VarDecl::*method_pointer_e7837210b43658f483317f04165d622d)() const = &::clang::VarDecl::isNRVOVariable;
    bool  (::clang::VarDecl::*method_pointer_6081e7a776b0537c98b1d8bd89fb7478)() const = &::clang::VarDecl::isOutOfLine;
    bool  (::clang::VarDecl::*method_pointer_0ab8587a8bc6509491834e416ddf046a)() const = &::clang::VarDecl::isPreviousDeclInSameBlockScope;
    bool  (::clang::VarDecl::*method_pointer_3b7bb6f6651653d58670b7adf7096fbb)() const = &::clang::VarDecl::isStaticDataMember;
    bool  (::clang::VarDecl::*method_pointer_422f1e9139fa5ad38fac8968e6a4985a)() const = &::clang::VarDecl::isStaticLocal;
    bool  (::clang::VarDecl::*method_pointer_b84971eb7d335d7c81654aa6dbfd08bb)(class ::clang::ASTContext  &) const = &::clang::VarDecl::isUsableInConstantExpressions;
    void  (::clang::VarDecl::*method_pointer_6be73c968af853f0a8ce606119503dff)(bool ) = &::clang::VarDecl::setARCPseudoStrong;
    void  (::clang::VarDecl::*method_pointer_c66a7651968a5fddacbaa14a1af61afb)(bool ) = &::clang::VarDecl::setCXXForRangeDecl;
    void  (::clang::VarDecl::*method_pointer_131e14eb54ae5738a0c52e12a10ed718)(bool ) = &::clang::VarDecl::setConcept;
    void  (::clang::VarDecl::*method_pointer_218c374f7de1526eb5f52e80e5822e74)(bool ) = &::clang::VarDecl::setConstexpr;
    void  (::clang::VarDecl::*method_pointer_c532247923ff5b5ebc8433b8258f6af7)(class ::clang::VarTemplateDecl  *) = &::clang::VarDecl::setDescribedVarTemplate;
    void  (::clang::VarDecl::*method_pointer_1d06167e2f135492843b408f33658f2c)(bool ) = &::clang::VarDecl::setExceptionVariable;
    void  (::clang::VarDecl::*method_pointer_2bc8ff24e7135ce699704adb050144e7)(bool ) = &::clang::VarDecl::setInitCapture;
    void  (::clang::VarDecl::*method_pointer_2060247b3b1f55db86d7431442544ae4)(bool ) = &::clang::VarDecl::setNRVOVariable;
    void  (::clang::VarDecl::*method_pointer_745e6ed3311958c1ac47e8528e59d777)(bool ) = &::clang::VarDecl::setPreviousDeclInSameBlockScope;
    boost::python::class_< class ::clang::VarDecl, autowig::HeldType< class ::clang::VarDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_99d3396ee242572bbeaada83b5e83165("VarDecl", "", boost::python::no_init);
    class_99d3396ee242572bbeaada83b5e83165.def("create_deserialized", method_pointer_f0d42f47d2555343a7785cf9f00f4b15, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("check_init_is_ice", method_pointer_0b08301df5795d58b80acfaac6a7e427, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof", method_pointer_dce556f4216e5a5da7c5f8406aa367f2, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof_kind", method_pointer_ce1b2866a8245e45883beccb18b5998d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_03c74b00fafc52cea7b6265c308bf09e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_c117868275695310a64ed1a85960c653, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_92f838d5992857ab8d1f4e5f5b75c23e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_21ffe0da211650e28ddd4c37d818c144, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_17e960cf66a5592aacf0334cc524dc38, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_5de6964c7cb158249896b2bcbf9de157, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_310578f7de035d3b8581bf383a7fee9c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_149a8265b20b56109231c3de41aba825, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_described_var_template", method_pointer_e75623ac6a8651a888246cef58bdc3cd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_instantiated_from_static_data_member", method_pointer_84b2231e52a25b28b7722cf1a7fb2e99, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_out_of_line_definition", method_pointer_0a833ded1ea15dc39563ed228bd7ca01, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_external_storage", method_pointer_6879b26b2a395241821dab1e0182db4a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_global_storage", method_pointer_015303cc693450e2a1e234ebc9d7f85a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_init", method_pointer_9ae9e16319d25e43b6f64fb6bafe6230, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_local_storage", method_pointer_468953df04305d5d9c64da3f87e3c6b5, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_arc_pseudo_strong", method_pointer_f19baca45c7754dd970c651a4c0fcf11, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_cxx_for_range_decl", method_pointer_987e1a9fa3ea5c56b9175b2b607f7f9e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_concept", method_pointer_ed7431eddab950e6bb73137efdf7a970, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_constexpr", method_pointer_f5aa4061090f5f0fb3f5fb6652612651, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_direct_init", method_pointer_8b56fd11952d5651a01b1729a750f87b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_exception_variable", method_pointer_6b77ca8c3ea85d28bdd34c63bd240814, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_extern_c", method_pointer_5ff2ea23f8185ad3832efd92637b541d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_file_var_decl", method_pointer_7b8ca089541e520693d6d2fe965ff429, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_function_or_method_var_decl", method_pointer_aed53ed768825e879faf20b9b9b9cd5d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_c_context", method_pointer_f3ca207d3e555f85a989a9e86650b792, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_cxx_context", method_pointer_3aa084d2560151b99b689d55526fdfd1, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_capture", method_pointer_25e9de764b84583fafcee6779268727e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_ice", method_pointer_7ae826e7d5a25458a495aec0998e61c9, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_known_ice", method_pointer_c146846b26f15ee9a99cf61418fb289a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl", method_pointer_0d22521744de53a59fc49f8dbcddd7f8, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl_or_parm", method_pointer_d7dc0b3064e25b559d416472d039522c, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_nrvo_variable", method_pointer_e7837210b43658f483317f04165d622d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_out_of_line", method_pointer_6081e7a776b0537c98b1d8bd89fb7478, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_previous_decl_in_same_block_scope", method_pointer_0ab8587a8bc6509491834e416ddf046a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_data_member", method_pointer_3b7bb6f6651653d58670b7adf7096fbb, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_local", method_pointer_422f1e9139fa5ad38fac8968e6a4985a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_usable_in_constant_expressions", method_pointer_b84971eb7d335d7c81654aa6dbfd08bb, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_arc_pseudo_strong", method_pointer_6be73c968af853f0a8ce606119503dff, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_cxx_for_range_decl", method_pointer_c66a7651968a5fddacbaa14a1af61afb, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_concept", method_pointer_131e14eb54ae5738a0c52e12a10ed718, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_constexpr", method_pointer_218c374f7de1526eb5f52e80e5822e74, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_described_var_template", method_pointer_c532247923ff5b5ebc8433b8258f6af7, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_exception_variable", method_pointer_1d06167e2f135492843b408f33658f2c, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_init_capture", method_pointer_2bc8ff24e7135ce699704adb050144e7, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_nrvo_variable", method_pointer_2060247b3b1f55db86d7431442544ae4, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_previous_decl_in_same_block_scope", method_pointer_745e6ed3311958c1ac47e8528e59d777, "");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof_kind");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("create_deserialized");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}