#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_7130d3fcb2735f6eb2eb3ef44aefdbc3()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCMethodDecl  * (*method_pointer_4a97f1cd8d06510b8cbf7b7e28800bac)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCMethodDecl::CreateDeserialized;
    void  (::clang::ObjCMethodDecl::*method_pointer_7d11e2d9d9095919b6babf75a1bcbc25)(bool ) = &::clang::ObjCMethodDecl::SetRelatedResultType;
    class ::clang::ObjCMethodDecl  * (*method_pointer_1ad13379b7045ed2b3678593706d34ba)(class ::clang::DeclContext  const *) = ::clang::ObjCMethodDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_56698cf6b2ce58fa9877b3b97b86f632)(class ::clang::ObjCMethodDecl  const *) = ::clang::ObjCMethodDecl::castToDeclContext;
    bool  (*method_pointer_d5732d751b385af399ec2ff77a5c1d49)(class ::clang::Decl  const *) = ::clang::ObjCMethodDecl::classof;
    bool  (*method_pointer_a0cc06126c7e5933b97f34a274485ede)(enum ::clang::Decl::Kind ) = ::clang::ObjCMethodDecl::classofKind;
    void  (::clang::ObjCMethodDecl::*method_pointer_9d9b4f9c49995c46ac07b31b596e25c3)(class ::clang::ASTContext  &, class ::clang::ObjCInterfaceDecl  const *) = &::clang::ObjCMethodDecl::createImplicitParams;
    class ::clang::ObjCPropertyDecl  const * (::clang::ObjCMethodDecl::*method_pointer_76b413f8bb2c585c84479d7cf4ff189a)(bool ) const = &::clang::ObjCMethodDecl::findPropertyDecl;
    class ::clang::ObjCMethodDecl  const * (::clang::ObjCMethodDecl::*method_pointer_0dbcc359023d58d8816a0761d78d7f84)() const = &::clang::ObjCMethodDecl::getCanonicalDecl;
    class ::clang::ObjCMethodDecl  * (::clang::ObjCMethodDecl::*method_pointer_f0acc474237a54e895c36017c3f8cd91)() = &::clang::ObjCMethodDecl::getCanonicalDecl;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCMethodDecl::*method_pointer_dc8cb775c51f5abe9ad1879cbc98ea81)() const = &::clang::ObjCMethodDecl::getClassInterface;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCMethodDecl::*method_pointer_cc3936d99e425f2b9b13e31591d3f25d)() = &::clang::ObjCMethodDecl::getClassInterface;
    class ::clang::ImplicitParamDecl  * (::clang::ObjCMethodDecl::*method_pointer_42e673061b1458699d4d834ce3cfae2d)() const = &::clang::ObjCMethodDecl::getCmdDecl;
    class ::clang::SourceLocation  (::clang::ObjCMethodDecl::*method_pointer_513e1de8fcd758a392e469df35af2411)() const = &::clang::ObjCMethodDecl::getDeclaratorEndLoc;
    class ::clang::SourceLocation  (::clang::ObjCMethodDecl::*method_pointer_81474d5d47c3571e856ebf1fc064d4dd)() const = &::clang::ObjCMethodDecl::getLocEnd;
    class ::clang::SourceLocation  (::clang::ObjCMethodDecl::*method_pointer_decaf468924f5736b8a7fc7b08d0394d)() const = &::clang::ObjCMethodDecl::getLocStart;
    unsigned int  (::clang::ObjCMethodDecl::*method_pointer_6dd830776b34581b9c2b2415ea8b94fc)() const = &::clang::ObjCMethodDecl::getNumSelectorLocs;
    class ::clang::QualType  (::clang::ObjCMethodDecl::*method_pointer_34311bead7345fcebf20946420730bb4)() const = &::clang::ObjCMethodDecl::getReturnType;
    class ::clang::SourceLocation  (::clang::ObjCMethodDecl::*method_pointer_9c7c95a05e5e5993b0a27e744f649283)(unsigned int ) const = &::clang::ObjCMethodDecl::getSelectorLoc;
    class ::clang::SourceLocation  (::clang::ObjCMethodDecl::*method_pointer_4cfc93de9aa9513da624e63252d4e8c6)() const = &::clang::ObjCMethodDecl::getSelectorStartLoc;
    class ::clang::ImplicitParamDecl  * (::clang::ObjCMethodDecl::*method_pointer_1ae1d2ee7e055ec3b8b6af068fa42082)() const = &::clang::ObjCMethodDecl::getSelfDecl;
    class ::clang::QualType  (::clang::ObjCMethodDecl::*method_pointer_43f8126344b752f0b49b1fdc9cc1e85d)(class ::clang::ASTContext  &, class ::clang::ObjCInterfaceDecl  const *, bool  &, bool  &) = &::clang::ObjCMethodDecl::getSelfType;
    class ::clang::QualType  (::clang::ObjCMethodDecl::*method_pointer_be4665af89db53eb9f96b69d44d29048)(class ::clang::QualType ) const = &::clang::ObjCMethodDecl::getSendResultType;
    class ::clang::QualType  (::clang::ObjCMethodDecl::*method_pointer_3f10ec29bf5b5e4484a293fa2c3d925d)() const = &::clang::ObjCMethodDecl::getSendResultType;
    bool  (::clang::ObjCMethodDecl::*method_pointer_600c75f1820958bd92930ec3edc2a228)() const = &::clang::ObjCMethodDecl::hasBody;
    bool  (::clang::ObjCMethodDecl::*method_pointer_56455e0c07fd51abbd6329e202d33118)() const = &::clang::ObjCMethodDecl::hasRelatedResultType;
    bool  (::clang::ObjCMethodDecl::*method_pointer_e355ecc5b64554a49dce34adb4e92706)() const = &::clang::ObjCMethodDecl::hasSkippedBody;
    bool  (::clang::ObjCMethodDecl::*method_pointer_59b9ce2d74315920bd2f068100b0ce07)() const = &::clang::ObjCMethodDecl::isClassMethod;
    bool  (::clang::ObjCMethodDecl::*method_pointer_2ad769563444589dba7c5ac223e5d712)() const = &::clang::ObjCMethodDecl::isDefined;
    bool  (::clang::ObjCMethodDecl::*method_pointer_729a86d5718d52849b7010e402e42ac8)() const = &::clang::ObjCMethodDecl::isInstanceMethod;
    bool  (::clang::ObjCMethodDecl::*method_pointer_58ebab41ee055c07a2655396d71159aa)() const = &::clang::ObjCMethodDecl::isOverriding;
    bool  (::clang::ObjCMethodDecl::*method_pointer_cb682ff39a785794a12262ef9c8f8c81)() const = &::clang::ObjCMethodDecl::isPropertyAccessor;
    bool  (::clang::ObjCMethodDecl::*method_pointer_aaef7bb05f9c5dd1a000ff9716d840e8)() const = &::clang::ObjCMethodDecl::isRedeclaration;
    bool  (::clang::ObjCMethodDecl::*method_pointer_50b19294b8e65d08aa92eb6301e63c9f)() const = &::clang::ObjCMethodDecl::isThisDeclarationADefinition;
    bool  (::clang::ObjCMethodDecl::*method_pointer_df3f429605d95255a279cc5489f0214b)() const = &::clang::ObjCMethodDecl::isThisDeclarationADesignatedInitializer;
    bool  (::clang::ObjCMethodDecl::*method_pointer_6e90a28501ca52cf8b97fb0eaa329441)() const = &::clang::ObjCMethodDecl::isVariadic;
    unsigned int  (::clang::ObjCMethodDecl::*method_pointer_fbf31ead38b052da9587540ad480e56c)() const = &::clang::ObjCMethodDecl::param_size;
    void  (::clang::ObjCMethodDecl::*method_pointer_0c8d0f7373b75fb084d89bb4b3c37d43)(class ::clang::ObjCMethodDecl  const *) = &::clang::ObjCMethodDecl::setAsRedeclaration;
    void  (::clang::ObjCMethodDecl::*method_pointer_f544a2580013589e976e3ea68ad12f33)(class ::clang::ImplicitParamDecl  *) = &::clang::ObjCMethodDecl::setCmdDecl;
    void  (::clang::ObjCMethodDecl::*method_pointer_e390b5297c1c586f9e02b2b7e7ce1ce8)(bool ) = &::clang::ObjCMethodDecl::setDefined;
    void  (::clang::ObjCMethodDecl::*method_pointer_f6be6074eb3c5d5c901c2022c5f9f67f)(bool ) = &::clang::ObjCMethodDecl::setHasSkippedBody;
    void  (::clang::ObjCMethodDecl::*method_pointer_676b0af692335ca7a1040ec91573314e)(bool ) = &::clang::ObjCMethodDecl::setInstanceMethod;
    void  (::clang::ObjCMethodDecl::*method_pointer_da2922dac8bc5406835bf48952ce16be)(unsigned long int ) = &::clang::ObjCMethodDecl::setLazyBody;
    void  (::clang::ObjCMethodDecl::*method_pointer_cdfb3219d12b5720a9155cd674aaeccf)(bool ) = &::clang::ObjCMethodDecl::setOverriding;
    void  (::clang::ObjCMethodDecl::*method_pointer_ed616811b6545a94824922a6ff45d5eb)(bool ) = &::clang::ObjCMethodDecl::setPropertyAccessor;
    void  (::clang::ObjCMethodDecl::*method_pointer_fddd321e6c815b3d997aa6153b902335)(class ::clang::QualType ) = &::clang::ObjCMethodDecl::setReturnType;
    void  (::clang::ObjCMethodDecl::*method_pointer_1b2b2c647e0656e1ad4c80212ee15cde)(class ::clang::ImplicitParamDecl  *) = &::clang::ObjCMethodDecl::setSelfDecl;
    void  (::clang::ObjCMethodDecl::*method_pointer_80df5b83a57853d8bf263c8879440afd)(bool ) = &::clang::ObjCMethodDecl::setVariadic;
    boost::python::class_< class ::clang::ObjCMethodDecl, autowig::HeldType< class ::clang::ObjCMethodDecl >, boost::python::bases< class ::clang::NamedDecl, class ::clang::DeclContext >, boost::noncopyable > class_7130d3fcb2735f6eb2eb3ef44aefdbc3("ObjCMethodDecl", "", boost::python::no_init);
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("create_deserialized", method_pointer_4a97f1cd8d06510b8cbf7b7e28800bac, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_related_result_type", method_pointer_7d11e2d9d9095919b6babf75a1bcbc25, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("cast_from_decl_context", method_pointer_1ad13379b7045ed2b3678593706d34ba, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("cast_to_decl_context", method_pointer_56698cf6b2ce58fa9877b3b97b86f632, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("classof", method_pointer_d5732d751b385af399ec2ff77a5c1d49, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("classof_kind", method_pointer_a0cc06126c7e5933b97f34a274485ede, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("create_implicit_params", method_pointer_9d9b4f9c49995c46ac07b31b596e25c3, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("find_property_decl", method_pointer_76b413f8bb2c585c84479d7cf4ff189a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_canonical_decl", method_pointer_0dbcc359023d58d8816a0761d78d7f84, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_canonical_decl", method_pointer_f0acc474237a54e895c36017c3f8cd91, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_class_interface", method_pointer_dc8cb775c51f5abe9ad1879cbc98ea81, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_class_interface", method_pointer_cc3936d99e425f2b9b13e31591d3f25d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_cmd_decl", method_pointer_42e673061b1458699d4d834ce3cfae2d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_declarator_end_loc", method_pointer_513e1de8fcd758a392e469df35af2411, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_loc_end", method_pointer_81474d5d47c3571e856ebf1fc064d4dd, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_loc_start", method_pointer_decaf468924f5736b8a7fc7b08d0394d, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_num_selector_locs", method_pointer_6dd830776b34581b9c2b2415ea8b94fc, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_return_type", method_pointer_34311bead7345fcebf20946420730bb4, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_selector_loc", method_pointer_9c7c95a05e5e5993b0a27e744f649283, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_selector_start_loc", method_pointer_4cfc93de9aa9513da624e63252d4e8c6, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_self_decl", method_pointer_1ae1d2ee7e055ec3b8b6af068fa42082, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_self_type", method_pointer_43f8126344b752f0b49b1fdc9cc1e85d, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_send_result_type", method_pointer_be4665af89db53eb9f96b69d44d29048, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_send_result_type", method_pointer_3f10ec29bf5b5e4484a293fa2c3d925d, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("has_body", method_pointer_600c75f1820958bd92930ec3edc2a228, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("has_related_result_type", method_pointer_56455e0c07fd51abbd6329e202d33118, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("has_skipped_body", method_pointer_e355ecc5b64554a49dce34adb4e92706, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_class_method", method_pointer_59b9ce2d74315920bd2f068100b0ce07, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_defined", method_pointer_2ad769563444589dba7c5ac223e5d712, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_instance_method", method_pointer_729a86d5718d52849b7010e402e42ac8, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_overriding", method_pointer_58ebab41ee055c07a2655396d71159aa, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_property_accessor", method_pointer_cb682ff39a785794a12262ef9c8f8c81, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_redeclaration", method_pointer_aaef7bb05f9c5dd1a000ff9716d840e8, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_this_declaration_a_definition", method_pointer_50b19294b8e65d08aa92eb6301e63c9f, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_this_declaration_a_designated_initializer", method_pointer_df3f429605d95255a279cc5489f0214b, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_variadic", method_pointer_6e90a28501ca52cf8b97fb0eaa329441, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("param_size", method_pointer_fbf31ead38b052da9587540ad480e56c, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_as_redeclaration", method_pointer_0c8d0f7373b75fb084d89bb4b3c37d43, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_cmd_decl", method_pointer_f544a2580013589e976e3ea68ad12f33, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_defined", method_pointer_e390b5297c1c586f9e02b2b7e7ce1ce8, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_has_skipped_body", method_pointer_f6be6074eb3c5d5c901c2022c5f9f67f, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_instance_method", method_pointer_676b0af692335ca7a1040ec91573314e, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_lazy_body", method_pointer_da2922dac8bc5406835bf48952ce16be, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_overriding", method_pointer_cdfb3219d12b5720a9155cd674aaeccf, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_property_accessor", method_pointer_ed616811b6545a94824922a6ff45d5eb, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_return_type", method_pointer_fddd321e6c815b3d997aa6153b902335, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_self_decl", method_pointer_1b2b2c647e0656e1ad4c80212ee15cde, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_variadic", method_pointer_80df5b83a57853d8bf263c8879440afd, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.staticmethod("classof_kind");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.staticmethod("create_deserialized");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.staticmethod("classof");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.staticmethod("cast_from_decl_context");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.staticmethod("cast_to_decl_context");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCMethodDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCMethodDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCMethodDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}