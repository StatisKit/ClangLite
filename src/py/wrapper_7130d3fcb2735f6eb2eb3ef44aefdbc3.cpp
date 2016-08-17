#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_7130d3fcb2735f6eb2eb3ef44aefdbc3()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::ObjCMethodDecl::*method_pointer_c4361dbded5b5daa9ee74539ba4e8daa)() const = &::clang::ObjCMethodDecl::isVariadic;
    bool  (::clang::ObjCMethodDecl::*method_pointer_152b18bc3b6f5d038363c8205186d04e)() const = &::clang::ObjCMethodDecl::isOverriding;
    class ::clang::ImplicitParamDecl  * (::clang::ObjCMethodDecl::*method_pointer_a028f580494a520783e7341bfcf0d9b9)() const = &::clang::ObjCMethodDecl::getCmdDecl;
    bool  (::clang::ObjCMethodDecl::*method_pointer_688ca551a0aa565e9b39ec7fb4050fea)() const = &::clang::ObjCMethodDecl::isInstanceMethod;
    bool  (::clang::ObjCMethodDecl::*method_pointer_53456611567f5780b9bb69d38639ec97)() const = &::clang::ObjCMethodDecl::isRedeclaration;
    bool  (::clang::ObjCMethodDecl::*method_pointer_d47d0467637c5ce78f84dd03d497a14c)() const = &::clang::ObjCMethodDecl::isPropertyAccessor;
    unsigned int  (::clang::ObjCMethodDecl::*method_pointer_7787ca61e6cc5fe48c3fcc8048043954)() const = &::clang::ObjCMethodDecl::param_size;
    class ::clang::ObjCPropertyDecl  const * (::clang::ObjCMethodDecl::*method_pointer_e05f5fc7ca4650b48b32b544067b48f4)(bool ) const = &::clang::ObjCMethodDecl::findPropertyDecl;
    void  (::clang::ObjCMethodDecl::*method_pointer_f019efe0a3f95cac83546ab2736c265d)(bool ) = &::clang::ObjCMethodDecl::setVariadic;
    class ::clang::ObjCMethodDecl  * (::clang::ObjCMethodDecl::*method_pointer_c204b49dcac850b3a1c7229363d00593)() = &::clang::ObjCMethodDecl::getCanonicalDecl;
    void  (::clang::ObjCMethodDecl::*method_pointer_c28601561d1258b79c7d5cb5823ac138)(bool ) = &::clang::ObjCMethodDecl::setDefined;
    void  (::clang::ObjCMethodDecl::*method_pointer_9b9df8134a845680885e44de540eca1e)(bool ) = &::clang::ObjCMethodDecl::SetRelatedResultType;
    class ::clang::ObjCMethodDecl  const * (::clang::ObjCMethodDecl::*method_pointer_6cb2a9a218a95506baaa46b632b7dbd3)() const = &::clang::ObjCMethodDecl::getCanonicalDecl;
    bool  (::clang::ObjCMethodDecl::*method_pointer_61912f9e177352a0ad5b8ccb20ffd7f3)() const = &::clang::ObjCMethodDecl::hasBody;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCMethodDecl::*method_pointer_724653ce17be5541ad512c6fce337c75)() = &::clang::ObjCMethodDecl::getClassInterface;
    bool  (*method_pointer_97edd818861c583183a14836c0c16f33)(class ::clang::Decl  const *) = ::clang::ObjCMethodDecl::classof;
    class ::clang::DeclContext  * (*method_pointer_7a7c40c56e00535a990e19139190f4f6)(class ::clang::ObjCMethodDecl  const *) = ::clang::ObjCMethodDecl::castToDeclContext;
    bool  (::clang::ObjCMethodDecl::*method_pointer_15bc5edf60ee55e494c675250c2975b0)() const = &::clang::ObjCMethodDecl::isClassMethod;
    bool  (*method_pointer_f4f8011531f152d6a9bf20b0ce803e22)(enum ::clang::Decl::Kind ) = ::clang::ObjCMethodDecl::classofKind;
    bool  (::clang::ObjCMethodDecl::*method_pointer_90a20008568556a6ba83991a1f88ff58)() const = &::clang::ObjCMethodDecl::hasSkippedBody;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCMethodDecl::*method_pointer_f7f8e65301a4509ebe7befb552f51abb)() const = &::clang::ObjCMethodDecl::getClassInterface;
    void  (::clang::ObjCMethodDecl::*method_pointer_b68d968e80935f87acfe9afcdf280f3d)(bool ) = &::clang::ObjCMethodDecl::setPropertyAccessor;
    void  (::clang::ObjCMethodDecl::*method_pointer_a0beff4a1cb55106b84bcf6d011486ea)(bool ) = &::clang::ObjCMethodDecl::setInstanceMethod;
    void  (::clang::ObjCMethodDecl::*method_pointer_b378f3ff687d5811aa3dca3b584c17fa)(class ::clang::ImplicitParamDecl  *) = &::clang::ObjCMethodDecl::setCmdDecl;
    void  (::clang::ObjCMethodDecl::*method_pointer_d49539daedc45e5288648f3beb81c48c)(unsigned long int ) = &::clang::ObjCMethodDecl::setLazyBody;
    void  (::clang::ObjCMethodDecl::*method_pointer_f9208de366995b76b443dc039f3e8ebc)(class ::clang::ASTContext  &, class ::clang::ObjCInterfaceDecl  const *) = &::clang::ObjCMethodDecl::createImplicitParams;
    void  (::clang::ObjCMethodDecl::*method_pointer_d2a022524d495042a3855fb9bf146582)(bool ) = &::clang::ObjCMethodDecl::setOverriding;
    unsigned int  (::clang::ObjCMethodDecl::*method_pointer_a3c13e7f50c35ee5803749f36b2b753e)() const = &::clang::ObjCMethodDecl::getNumSelectorLocs;
    void  (::clang::ObjCMethodDecl::*method_pointer_8853d230e6fd5116b926538bc26b544d)(class ::clang::ImplicitParamDecl  *) = &::clang::ObjCMethodDecl::setSelfDecl;
    void  (::clang::ObjCMethodDecl::*method_pointer_ce1157801bd8598187454d1dd996936b)(class ::clang::ObjCMethodDecl  const *) = &::clang::ObjCMethodDecl::setAsRedeclaration;
    class ::clang::ImplicitParamDecl  * (::clang::ObjCMethodDecl::*method_pointer_ce450ea90d2a5a7a8e6bab8f39d0adc3)() const = &::clang::ObjCMethodDecl::getSelfDecl;
    bool  (::clang::ObjCMethodDecl::*method_pointer_3533c45ca53451de98dc9bd2147acf1f)() const = &::clang::ObjCMethodDecl::isThisDeclarationADesignatedInitializer;
    bool  (::clang::ObjCMethodDecl::*method_pointer_7fef787ed10f53a2a5e0b21b3efa11d3)() const = &::clang::ObjCMethodDecl::isDefined;
    void  (::clang::ObjCMethodDecl::*method_pointer_a87c60440a6152d180571feb51ceb8a3)(bool ) = &::clang::ObjCMethodDecl::setHasSkippedBody;
    class ::clang::ObjCMethodDecl  * (*method_pointer_6dcb75fd77a05a2f8933f968ddbb15a1)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCMethodDecl::CreateDeserialized;
    bool  (::clang::ObjCMethodDecl::*method_pointer_d685d16395035ebcb8149070d20585f7)() const = &::clang::ObjCMethodDecl::hasRelatedResultType;
    class ::clang::ObjCMethodDecl  * (*method_pointer_f62d9058a2935f538682bf171ca2fb01)(class ::clang::DeclContext  const *) = ::clang::ObjCMethodDecl::castFromDeclContext;
    bool  (::clang::ObjCMethodDecl::*method_pointer_e3691a2ebbbc5c358caff0c9fd51ddd5)() const = &::clang::ObjCMethodDecl::isThisDeclarationADefinition;
    boost::python::class_< class ::clang::ObjCMethodDecl, autowig::HeldType< class ::clang::ObjCMethodDecl >, boost::python::bases< class ::clang::NamedDecl, class ::clang::DeclContext >, boost::noncopyable > class_7130d3fcb2735f6eb2eb3ef44aefdbc3("ObjCMethodDecl", "", boost::python::no_init);
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_variadic", method_pointer_c4361dbded5b5daa9ee74539ba4e8daa, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_overriding", method_pointer_152b18bc3b6f5d038363c8205186d04e, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_cmd_decl", method_pointer_a028f580494a520783e7341bfcf0d9b9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_instance_method", method_pointer_688ca551a0aa565e9b39ec7fb4050fea, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_redeclaration", method_pointer_53456611567f5780b9bb69d38639ec97, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_property_accessor", method_pointer_d47d0467637c5ce78f84dd03d497a14c, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("param_size", method_pointer_7787ca61e6cc5fe48c3fcc8048043954, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("find_property_decl", method_pointer_e05f5fc7ca4650b48b32b544067b48f4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_variadic", method_pointer_f019efe0a3f95cac83546ab2736c265d, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_canonical_decl", method_pointer_c204b49dcac850b3a1c7229363d00593, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_defined", method_pointer_c28601561d1258b79c7d5cb5823ac138, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_related_result_type", method_pointer_9b9df8134a845680885e44de540eca1e, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_canonical_decl", method_pointer_6cb2a9a218a95506baaa46b632b7dbd3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("has_body", method_pointer_61912f9e177352a0ad5b8ccb20ffd7f3, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_class_interface", method_pointer_724653ce17be5541ad512c6fce337c75, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("classof", method_pointer_97edd818861c583183a14836c0c16f33, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("cast_to_decl_context", method_pointer_7a7c40c56e00535a990e19139190f4f6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_class_method", method_pointer_15bc5edf60ee55e494c675250c2975b0, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("classof_kind", method_pointer_f4f8011531f152d6a9bf20b0ce803e22, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("has_skipped_body", method_pointer_90a20008568556a6ba83991a1f88ff58, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_class_interface", method_pointer_f7f8e65301a4509ebe7befb552f51abb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_property_accessor", method_pointer_b68d968e80935f87acfe9afcdf280f3d, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_instance_method", method_pointer_a0beff4a1cb55106b84bcf6d011486ea, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_cmd_decl", method_pointer_b378f3ff687d5811aa3dca3b584c17fa, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_lazy_body", method_pointer_d49539daedc45e5288648f3beb81c48c, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("create_implicit_params", method_pointer_f9208de366995b76b443dc039f3e8ebc, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_overriding", method_pointer_d2a022524d495042a3855fb9bf146582, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_num_selector_locs", method_pointer_a3c13e7f50c35ee5803749f36b2b753e, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_self_decl", method_pointer_8853d230e6fd5116b926538bc26b544d, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_as_redeclaration", method_pointer_ce1157801bd8598187454d1dd996936b, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_self_decl", method_pointer_ce450ea90d2a5a7a8e6bab8f39d0adc3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_this_declaration_a_designated_initializer", method_pointer_3533c45ca53451de98dc9bd2147acf1f, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_defined", method_pointer_7fef787ed10f53a2a5e0b21b3efa11d3, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_has_skipped_body", method_pointer_a87c60440a6152d180571feb51ceb8a3, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("create_deserialized", method_pointer_6dcb75fd77a05a2f8933f968ddbb15a1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("has_related_result_type", method_pointer_d685d16395035ebcb8149070d20585f7, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("cast_from_decl_context", method_pointer_f62d9058a2935f538682bf171ca2fb01, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_this_declaration_a_definition", method_pointer_e3691a2ebbbc5c358caff0c9fd51ddd5, "");
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