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
    void  (::clang::ObjCMethodDecl::*method_pointer_ac0d5c7cbe29552dab05ec368fba318c)(bool ) = &::clang::ObjCMethodDecl::SetRelatedResultType;
    bool  (::clang::ObjCMethodDecl::*method_pointer_bd67b9d493d75d3eab2ae62416d174f0)() const = &::clang::ObjCMethodDecl::isThisDeclarationADesignatedInitializer;
    unsigned int  (::clang::ObjCMethodDecl::*method_pointer_ed7a461a3a7c5abd9ee1f3412709e809)() const = &::clang::ObjCMethodDecl::getNumSelectorLocs;
    void  (::clang::ObjCMethodDecl::*method_pointer_84aeedf9f7155250b1807e60c5050dbf)(unsigned long int ) = &::clang::ObjCMethodDecl::setLazyBody;
    bool  (::clang::ObjCMethodDecl::*method_pointer_eac4c9d3c6b45c5d8bb53697e1b30c93)() const = &::clang::ObjCMethodDecl::isThisDeclarationADefinition;
    bool  (::clang::ObjCMethodDecl::*method_pointer_1d22ae4f98c256de824850169edf6295)() const = &::clang::ObjCMethodDecl::hasSkippedBody;
    unsigned int  (::clang::ObjCMethodDecl::*method_pointer_c0580ee90dd055c1b4fd8e93a77135ab)() const = &::clang::ObjCMethodDecl::param_size;
    class ::clang::ObjCMethodDecl  const * (::clang::ObjCMethodDecl::*method_pointer_27f9aacb505b55d79a86e65f7c16d05a)() const = &::clang::ObjCMethodDecl::getCanonicalDecl;
    void  (::clang::ObjCMethodDecl::*method_pointer_a06f5dbdb3c754068f1984dcf73c765a)(class ::clang::ImplicitParamDecl  *) = &::clang::ObjCMethodDecl::setCmdDecl;
    void  (::clang::ObjCMethodDecl::*method_pointer_6468acb0b33f5afc8ed4edfcccbfc77b)(class ::clang::ASTContext  &, class ::clang::ObjCInterfaceDecl  const *) = &::clang::ObjCMethodDecl::createImplicitParams;
    bool  (::clang::ObjCMethodDecl::*method_pointer_42a032a92fad5dc2a4b044bf1b4eee41)() const = &::clang::ObjCMethodDecl::isClassMethod;
    bool  (::clang::ObjCMethodDecl::*method_pointer_3140eb6eb0745a8288efdc10baf59e74)() const = &::clang::ObjCMethodDecl::isPropertyAccessor;
    bool  (::clang::ObjCMethodDecl::*method_pointer_5ff7624af02a5ba28f0e66e8c04c3401)() const = &::clang::ObjCMethodDecl::hasBody;
    class ::clang::ObjCMethodDecl  * (*method_pointer_f353b8369fc7510aafb87f9d18869cbc)(class ::clang::DeclContext  const *) = ::clang::ObjCMethodDecl::castFromDeclContext;
    bool  (*method_pointer_69f052d10edb5b8b8276c3ea8c412251)(class ::clang::Decl  const *) = ::clang::ObjCMethodDecl::classof;
    void  (::clang::ObjCMethodDecl::*method_pointer_94acb5601e755c36ba54c4c71ae0a697)(bool ) = &::clang::ObjCMethodDecl::setOverriding;
    void  (::clang::ObjCMethodDecl::*method_pointer_9e7cbe502bbc5112b1f836601a3ac42e)(class ::clang::ObjCMethodDecl  const *) = &::clang::ObjCMethodDecl::setAsRedeclaration;
    void  (::clang::ObjCMethodDecl::*method_pointer_6d43422af6045e008ee230883b477e1e)(bool ) = &::clang::ObjCMethodDecl::setInstanceMethod;
    class ::clang::DeclContext  * (*method_pointer_f2a4ed82671f5b24a1741f7896197e37)(class ::clang::ObjCMethodDecl  const *) = ::clang::ObjCMethodDecl::castToDeclContext;
    void  (::clang::ObjCMethodDecl::*method_pointer_330295f20456557ab6cce232c8dd045b)(bool ) = &::clang::ObjCMethodDecl::setDefined;
    class ::clang::ImplicitParamDecl  * (::clang::ObjCMethodDecl::*method_pointer_4675fb08a3b35658a66a0fa312287b24)() const = &::clang::ObjCMethodDecl::getCmdDecl;
    bool  (*method_pointer_957caf8f451d549fbcbacfc0317463c6)(enum ::clang::Decl::Kind ) = ::clang::ObjCMethodDecl::classofKind;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCMethodDecl::*method_pointer_75f3ece496fd5d868207b031a19c2c2b)() const = &::clang::ObjCMethodDecl::getClassInterface;
    bool  (::clang::ObjCMethodDecl::*method_pointer_93f3b1bfa41957c5bf6ede281b0d9392)() const = &::clang::ObjCMethodDecl::isVariadic;
    class ::clang::ObjCPropertyDecl  const * (::clang::ObjCMethodDecl::*method_pointer_400f4ef444ab50f4933899f5fce79f9e)(bool ) const = &::clang::ObjCMethodDecl::findPropertyDecl;
    void  (::clang::ObjCMethodDecl::*method_pointer_322fd9e63f9359e196113120f09714f1)(bool ) = &::clang::ObjCMethodDecl::setHasSkippedBody;
    void  (::clang::ObjCMethodDecl::*method_pointer_2e6f9726e0b8505a890b47d95d177910)(class ::clang::ImplicitParamDecl  *) = &::clang::ObjCMethodDecl::setSelfDecl;
    class ::clang::ImplicitParamDecl  * (::clang::ObjCMethodDecl::*method_pointer_f7ab42cf92b55ebcb7f1a66340f5cc94)() const = &::clang::ObjCMethodDecl::getSelfDecl;
    bool  (::clang::ObjCMethodDecl::*method_pointer_76c6028305c55126b0d817b019c74bc1)() const = &::clang::ObjCMethodDecl::isOverriding;
    bool  (::clang::ObjCMethodDecl::*method_pointer_7855b53b926e5dadb6cc4ab1e88b2514)() const = &::clang::ObjCMethodDecl::isRedeclaration;
    void  (::clang::ObjCMethodDecl::*method_pointer_4f2165450faf52028a89e40f97c01924)(bool ) = &::clang::ObjCMethodDecl::setVariadic;
    bool  (::clang::ObjCMethodDecl::*method_pointer_5224cee64650511b985bff83917dccb1)() const = &::clang::ObjCMethodDecl::isInstanceMethod;
    void  (::clang::ObjCMethodDecl::*method_pointer_43b57f71fdac5771a3b193bf0bde7dbc)(bool ) = &::clang::ObjCMethodDecl::setPropertyAccessor;
    bool  (::clang::ObjCMethodDecl::*method_pointer_3d47446967ad5c2785452e846d6fc559)() const = &::clang::ObjCMethodDecl::isDefined;
    bool  (::clang::ObjCMethodDecl::*method_pointer_5d9375c7f8f259d9bbb43d427fab34e0)() const = &::clang::ObjCMethodDecl::hasRelatedResultType;
    class ::clang::ObjCMethodDecl  * (*method_pointer_c63c1930ac9c5f128e84df0deea486c3)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCMethodDecl::CreateDeserialized;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCMethodDecl::*method_pointer_699c127b9bf15136a12146d292bc41b7)() = &::clang::ObjCMethodDecl::getClassInterface;
    class ::clang::ObjCMethodDecl  * (::clang::ObjCMethodDecl::*method_pointer_e63aff25d6ae5cb5ad2aee67eeeb4ea1)() = &::clang::ObjCMethodDecl::getCanonicalDecl;
    boost::python::class_< class ::clang::ObjCMethodDecl, autowig::HeldType< class ::clang::ObjCMethodDecl >, boost::python::bases< class ::clang::NamedDecl, class ::clang::DeclContext >, boost::noncopyable > class_7130d3fcb2735f6eb2eb3ef44aefdbc3("ObjCMethodDecl", "", boost::python::no_init);
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_related_result_type", method_pointer_ac0d5c7cbe29552dab05ec368fba318c, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_this_declaration_a_designated_initializer", method_pointer_bd67b9d493d75d3eab2ae62416d174f0, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_num_selector_locs", method_pointer_ed7a461a3a7c5abd9ee1f3412709e809, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_lazy_body", method_pointer_84aeedf9f7155250b1807e60c5050dbf, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_this_declaration_a_definition", method_pointer_eac4c9d3c6b45c5d8bb53697e1b30c93, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("has_skipped_body", method_pointer_1d22ae4f98c256de824850169edf6295, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("param_size", method_pointer_c0580ee90dd055c1b4fd8e93a77135ab, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_canonical_decl", method_pointer_27f9aacb505b55d79a86e65f7c16d05a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_cmd_decl", method_pointer_a06f5dbdb3c754068f1984dcf73c765a, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("create_implicit_params", method_pointer_6468acb0b33f5afc8ed4edfcccbfc77b, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_class_method", method_pointer_42a032a92fad5dc2a4b044bf1b4eee41, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_property_accessor", method_pointer_3140eb6eb0745a8288efdc10baf59e74, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("has_body", method_pointer_5ff7624af02a5ba28f0e66e8c04c3401, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("cast_from_decl_context", method_pointer_f353b8369fc7510aafb87f9d18869cbc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("classof", method_pointer_69f052d10edb5b8b8276c3ea8c412251, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_overriding", method_pointer_94acb5601e755c36ba54c4c71ae0a697, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_as_redeclaration", method_pointer_9e7cbe502bbc5112b1f836601a3ac42e, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_instance_method", method_pointer_6d43422af6045e008ee230883b477e1e, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("cast_to_decl_context", method_pointer_f2a4ed82671f5b24a1741f7896197e37, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_defined", method_pointer_330295f20456557ab6cce232c8dd045b, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_cmd_decl", method_pointer_4675fb08a3b35658a66a0fa312287b24, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("classof_kind", method_pointer_957caf8f451d549fbcbacfc0317463c6, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_class_interface", method_pointer_75f3ece496fd5d868207b031a19c2c2b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_variadic", method_pointer_93f3b1bfa41957c5bf6ede281b0d9392, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("find_property_decl", method_pointer_400f4ef444ab50f4933899f5fce79f9e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_has_skipped_body", method_pointer_322fd9e63f9359e196113120f09714f1, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_self_decl", method_pointer_2e6f9726e0b8505a890b47d95d177910, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_self_decl", method_pointer_f7ab42cf92b55ebcb7f1a66340f5cc94, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_overriding", method_pointer_76c6028305c55126b0d817b019c74bc1, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_redeclaration", method_pointer_7855b53b926e5dadb6cc4ab1e88b2514, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_variadic", method_pointer_4f2165450faf52028a89e40f97c01924, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_instance_method", method_pointer_5224cee64650511b985bff83917dccb1, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_property_accessor", method_pointer_43b57f71fdac5771a3b193bf0bde7dbc, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_defined", method_pointer_3d47446967ad5c2785452e846d6fc559, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("has_related_result_type", method_pointer_5d9375c7f8f259d9bbb43d427fab34e0, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("create_deserialized", method_pointer_c63c1930ac9c5f128e84df0deea486c3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_class_interface", method_pointer_699c127b9bf15136a12146d292bc41b7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_canonical_decl", method_pointer_e63aff25d6ae5cb5ad2aee67eeeb4ea1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
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