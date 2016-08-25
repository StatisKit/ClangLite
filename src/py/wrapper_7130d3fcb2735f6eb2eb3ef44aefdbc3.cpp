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
    class ::clang::ObjCMethodDecl  * (*method_pointer_f45c1f46fa495c2a9ddd41b0cfa7629f)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCMethodDecl::CreateDeserialized;
    void  (::clang::ObjCMethodDecl::*method_pointer_5f4da4853af2501fb0606e7e74811cca)(bool ) = &::clang::ObjCMethodDecl::SetRelatedResultType;
    class ::clang::ObjCMethodDecl  * (*method_pointer_de8eaccba2dd5925acfd2aec57e47d94)(class ::clang::DeclContext  const *) = ::clang::ObjCMethodDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_9dacd33dd12a505ba06a93b22fe9c5d2)(class ::clang::ObjCMethodDecl  const *) = ::clang::ObjCMethodDecl::castToDeclContext;
    bool  (*method_pointer_2d3befc4d9e95978877f513cf19efa31)(class ::clang::Decl  const *) = ::clang::ObjCMethodDecl::classof;
    bool  (*method_pointer_9046de48b2f755aa888f4cd84454cdbd)(enum ::clang::Decl::Kind ) = ::clang::ObjCMethodDecl::classofKind;
    void  (::clang::ObjCMethodDecl::*method_pointer_8f2174cedb1a5214bc6b1dead93bf5dd)(class ::clang::ASTContext  &, class ::clang::ObjCInterfaceDecl  const *) = &::clang::ObjCMethodDecl::createImplicitParams;
    class ::clang::ObjCPropertyDecl  const * (::clang::ObjCMethodDecl::*method_pointer_bed7486af8d65d4394bca06daf821586)(bool ) const = &::clang::ObjCMethodDecl::findPropertyDecl;
    class ::clang::ObjCMethodDecl  const * (::clang::ObjCMethodDecl::*method_pointer_66baa8971d835b028e10dee09bdb5eb4)() const = &::clang::ObjCMethodDecl::getCanonicalDecl;
    class ::clang::ObjCMethodDecl  * (::clang::ObjCMethodDecl::*method_pointer_d8a120026ac855bdb774ba70ba798fc9)() = &::clang::ObjCMethodDecl::getCanonicalDecl;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCMethodDecl::*method_pointer_4603baf8a27154dfb01d18bb1c39bc23)() = &::clang::ObjCMethodDecl::getClassInterface;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCMethodDecl::*method_pointer_9e987fa10cc25d598919aad1714a6d01)() const = &::clang::ObjCMethodDecl::getClassInterface;
    class ::clang::ImplicitParamDecl  * (::clang::ObjCMethodDecl::*method_pointer_0fcde6cdc815530890e049e1080fbe69)() const = &::clang::ObjCMethodDecl::getCmdDecl;
    class ::clang::SourceLocation  (::clang::ObjCMethodDecl::*method_pointer_728aed46c6b950f9957c43cdd416ac93)() const = &::clang::ObjCMethodDecl::getDeclaratorEndLoc;
    class ::clang::SourceLocation  (::clang::ObjCMethodDecl::*method_pointer_335165c032775736a01c65f951d4f140)() const = &::clang::ObjCMethodDecl::getLocEnd;
    class ::clang::SourceLocation  (::clang::ObjCMethodDecl::*method_pointer_b5163289fccd5bfeba90023b6ceb7c33)() const = &::clang::ObjCMethodDecl::getLocStart;
    unsigned int  (::clang::ObjCMethodDecl::*method_pointer_502ada8e7a0357739126f8922786d93a)() const = &::clang::ObjCMethodDecl::getNumSelectorLocs;
    class ::clang::QualType  (::clang::ObjCMethodDecl::*method_pointer_e1bab3b4e8375662b57d6dbc070b0737)() const = &::clang::ObjCMethodDecl::getReturnType;
    class ::clang::SourceLocation  (::clang::ObjCMethodDecl::*method_pointer_17e3ae277c635f0a82433d195101596d)(unsigned int ) const = &::clang::ObjCMethodDecl::getSelectorLoc;
    class ::clang::SourceLocation  (::clang::ObjCMethodDecl::*method_pointer_f54bc9aada225079af204ccbf7d84b87)() const = &::clang::ObjCMethodDecl::getSelectorStartLoc;
    class ::clang::ImplicitParamDecl  * (::clang::ObjCMethodDecl::*method_pointer_4b978f65da3f511d869770d16884d1e3)() const = &::clang::ObjCMethodDecl::getSelfDecl;
    class ::clang::QualType  (::clang::ObjCMethodDecl::*method_pointer_f501010ca7bb5506bcf1203a823eb071)(class ::clang::ASTContext  &, class ::clang::ObjCInterfaceDecl  const *, bool  &, bool  &) = &::clang::ObjCMethodDecl::getSelfType;
    class ::clang::QualType  (::clang::ObjCMethodDecl::*method_pointer_8662852a4483504ebcf43a3dd71836e4)() const = &::clang::ObjCMethodDecl::getSendResultType;
    class ::clang::QualType  (::clang::ObjCMethodDecl::*method_pointer_27f761f0a58057d98055e3b5bdf8917c)(class ::clang::QualType ) const = &::clang::ObjCMethodDecl::getSendResultType;
    bool  (::clang::ObjCMethodDecl::*method_pointer_f04b203a8ae95055ac6cb62c050917ed)() const = &::clang::ObjCMethodDecl::hasBody;
    bool  (::clang::ObjCMethodDecl::*method_pointer_61f16bb552005402b365ff6ff9a953f5)() const = &::clang::ObjCMethodDecl::hasRelatedResultType;
    bool  (::clang::ObjCMethodDecl::*method_pointer_03b437d78e3d52609bb63a742d192398)() const = &::clang::ObjCMethodDecl::hasSkippedBody;
    bool  (::clang::ObjCMethodDecl::*method_pointer_abdee55af440520586dfcf01d9d72e75)() const = &::clang::ObjCMethodDecl::isClassMethod;
    bool  (::clang::ObjCMethodDecl::*method_pointer_106c62f796175596a9fc8b9cb19da852)() const = &::clang::ObjCMethodDecl::isDefined;
    bool  (::clang::ObjCMethodDecl::*method_pointer_789bc8b00f465d80b891d48b4c7e5049)() const = &::clang::ObjCMethodDecl::isInstanceMethod;
    bool  (::clang::ObjCMethodDecl::*method_pointer_4cd4c064e572560db40cb8c328e48eeb)() const = &::clang::ObjCMethodDecl::isOverriding;
    bool  (::clang::ObjCMethodDecl::*method_pointer_aa9eb222ab5b510784b90330a5013049)() const = &::clang::ObjCMethodDecl::isPropertyAccessor;
    bool  (::clang::ObjCMethodDecl::*method_pointer_bfbe05b265a75d4e895a2e9f787e40e1)() const = &::clang::ObjCMethodDecl::isRedeclaration;
    bool  (::clang::ObjCMethodDecl::*method_pointer_29f0b6c2587152f897360d4894f354ae)() const = &::clang::ObjCMethodDecl::isThisDeclarationADefinition;
    bool  (::clang::ObjCMethodDecl::*method_pointer_3075b85c0b18543294bf8b341c3e2da7)() const = &::clang::ObjCMethodDecl::isThisDeclarationADesignatedInitializer;
    bool  (::clang::ObjCMethodDecl::*method_pointer_42b0165ce3c551f09b1cb36eae56c261)() const = &::clang::ObjCMethodDecl::isVariadic;
    unsigned int  (::clang::ObjCMethodDecl::*method_pointer_7a0ebb71cdac5b7db15da1e148c24616)() const = &::clang::ObjCMethodDecl::param_size;
    void  (::clang::ObjCMethodDecl::*method_pointer_0ebabda6bc1d561a8c088824e5638151)(class ::clang::ObjCMethodDecl  const *) = &::clang::ObjCMethodDecl::setAsRedeclaration;
    void  (::clang::ObjCMethodDecl::*method_pointer_24e94ff2c83f5a3c92bdac4526aee02c)(class ::clang::ImplicitParamDecl  *) = &::clang::ObjCMethodDecl::setCmdDecl;
    void  (::clang::ObjCMethodDecl::*method_pointer_f1832d5b099250bc80c9a8bd0decb5b8)(bool ) = &::clang::ObjCMethodDecl::setDefined;
    void  (::clang::ObjCMethodDecl::*method_pointer_62f7e08ce29c5a309619e643306f8ce3)(bool ) = &::clang::ObjCMethodDecl::setHasSkippedBody;
    void  (::clang::ObjCMethodDecl::*method_pointer_09d8da121a3255969a76ecc0794cecde)(bool ) = &::clang::ObjCMethodDecl::setInstanceMethod;
    void  (::clang::ObjCMethodDecl::*method_pointer_98b28f0dbb99515aa9e2f07416f10ec4)(unsigned long int ) = &::clang::ObjCMethodDecl::setLazyBody;
    void  (::clang::ObjCMethodDecl::*method_pointer_4569ec76645858d792da0988389723f8)(bool ) = &::clang::ObjCMethodDecl::setOverriding;
    void  (::clang::ObjCMethodDecl::*method_pointer_03daa4ea8ea85bfb96b9d8b7d8ba78eb)(bool ) = &::clang::ObjCMethodDecl::setPropertyAccessor;
    void  (::clang::ObjCMethodDecl::*method_pointer_28bbd30df94e5fe5b8b02347b7479bba)(class ::clang::QualType ) = &::clang::ObjCMethodDecl::setReturnType;
    void  (::clang::ObjCMethodDecl::*method_pointer_990a372e2b885b26a364af06cec25340)(class ::clang::ImplicitParamDecl  *) = &::clang::ObjCMethodDecl::setSelfDecl;
    void  (::clang::ObjCMethodDecl::*method_pointer_98e0fa7235b0586b9c37fa3f821e97be)(bool ) = &::clang::ObjCMethodDecl::setVariadic;
    boost::python::class_< class ::clang::ObjCMethodDecl, autowig::HeldType< class ::clang::ObjCMethodDecl >, boost::python::bases< class ::clang::NamedDecl, class ::clang::DeclContext >, boost::noncopyable > class_7130d3fcb2735f6eb2eb3ef44aefdbc3("ObjCMethodDecl", "", boost::python::no_init);
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("create_deserialized", method_pointer_f45c1f46fa495c2a9ddd41b0cfa7629f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_related_result_type", method_pointer_5f4da4853af2501fb0606e7e74811cca, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("cast_from_decl_context", method_pointer_de8eaccba2dd5925acfd2aec57e47d94, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("cast_to_decl_context", method_pointer_9dacd33dd12a505ba06a93b22fe9c5d2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("classof", method_pointer_2d3befc4d9e95978877f513cf19efa31, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("classof_kind", method_pointer_9046de48b2f755aa888f4cd84454cdbd, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("create_implicit_params", method_pointer_8f2174cedb1a5214bc6b1dead93bf5dd, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("find_property_decl", method_pointer_bed7486af8d65d4394bca06daf821586, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_canonical_decl", method_pointer_66baa8971d835b028e10dee09bdb5eb4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_canonical_decl", method_pointer_d8a120026ac855bdb774ba70ba798fc9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_class_interface", method_pointer_4603baf8a27154dfb01d18bb1c39bc23, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_class_interface", method_pointer_9e987fa10cc25d598919aad1714a6d01, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_cmd_decl", method_pointer_0fcde6cdc815530890e049e1080fbe69, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_declarator_end_loc", method_pointer_728aed46c6b950f9957c43cdd416ac93, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_loc_end", method_pointer_335165c032775736a01c65f951d4f140, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_loc_start", method_pointer_b5163289fccd5bfeba90023b6ceb7c33, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_num_selector_locs", method_pointer_502ada8e7a0357739126f8922786d93a, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_return_type", method_pointer_e1bab3b4e8375662b57d6dbc070b0737, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_selector_loc", method_pointer_17e3ae277c635f0a82433d195101596d, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_selector_start_loc", method_pointer_f54bc9aada225079af204ccbf7d84b87, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_self_decl", method_pointer_4b978f65da3f511d869770d16884d1e3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_self_type", method_pointer_f501010ca7bb5506bcf1203a823eb071, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_send_result_type", method_pointer_8662852a4483504ebcf43a3dd71836e4, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_send_result_type", method_pointer_27f761f0a58057d98055e3b5bdf8917c, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("has_body", method_pointer_f04b203a8ae95055ac6cb62c050917ed, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("has_related_result_type", method_pointer_61f16bb552005402b365ff6ff9a953f5, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("has_skipped_body", method_pointer_03b437d78e3d52609bb63a742d192398, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_class_method", method_pointer_abdee55af440520586dfcf01d9d72e75, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_defined", method_pointer_106c62f796175596a9fc8b9cb19da852, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_instance_method", method_pointer_789bc8b00f465d80b891d48b4c7e5049, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_overriding", method_pointer_4cd4c064e572560db40cb8c328e48eeb, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_property_accessor", method_pointer_aa9eb222ab5b510784b90330a5013049, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_redeclaration", method_pointer_bfbe05b265a75d4e895a2e9f787e40e1, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_this_declaration_a_definition", method_pointer_29f0b6c2587152f897360d4894f354ae, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_this_declaration_a_designated_initializer", method_pointer_3075b85c0b18543294bf8b341c3e2da7, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_variadic", method_pointer_42b0165ce3c551f09b1cb36eae56c261, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("param_size", method_pointer_7a0ebb71cdac5b7db15da1e148c24616, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_as_redeclaration", method_pointer_0ebabda6bc1d561a8c088824e5638151, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_cmd_decl", method_pointer_24e94ff2c83f5a3c92bdac4526aee02c, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_defined", method_pointer_f1832d5b099250bc80c9a8bd0decb5b8, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_has_skipped_body", method_pointer_62f7e08ce29c5a309619e643306f8ce3, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_instance_method", method_pointer_09d8da121a3255969a76ecc0794cecde, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_lazy_body", method_pointer_98b28f0dbb99515aa9e2f07416f10ec4, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_overriding", method_pointer_4569ec76645858d792da0988389723f8, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_property_accessor", method_pointer_03daa4ea8ea85bfb96b9d8b7d8ba78eb, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_return_type", method_pointer_28bbd30df94e5fe5b8b02347b7479bba, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_self_decl", method_pointer_990a372e2b885b26a364af06cec25340, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_variadic", method_pointer_98e0fa7235b0586b9c37fa3f821e97be, "");
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