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
    void  (::clang::ObjCMethodDecl::*method_pointer_a861c961722f589d9340563dac4ab903)(class ::clang::ObjCMethodDecl  const *) = &::clang::ObjCMethodDecl::setAsRedeclaration;
    bool  (::clang::ObjCMethodDecl::*method_pointer_1c8b29251f5d5205885557325bc8b4ee)() const = &::clang::ObjCMethodDecl::hasBody;
    class ::clang::DeclContext  * (*method_pointer_25d193415c7e5870bf625d97a727186b)(class ::clang::ObjCMethodDecl  const *) = ::clang::ObjCMethodDecl::castToDeclContext;
    void  (::clang::ObjCMethodDecl::*method_pointer_c0c541e1f0705f7988591aadf00ce0a6)(class ::clang::ASTContext  &, class ::clang::ObjCInterfaceDecl  const *) = &::clang::ObjCMethodDecl::createImplicitParams;
    class ::clang::ObjCMethodDecl  * (::clang::ObjCMethodDecl::*method_pointer_41e9157b94cd5204ae2492a0b050ff3c)() = &::clang::ObjCMethodDecl::getCanonicalDecl;
    class ::clang::ImplicitParamDecl  * (::clang::ObjCMethodDecl::*method_pointer_0c8c55e72dc559a9890e45dc57fb2233)() const = &::clang::ObjCMethodDecl::getSelfDecl;
    void  (::clang::ObjCMethodDecl::*method_pointer_05015a0be3085b35912356c01a1c1f42)(bool ) = &::clang::ObjCMethodDecl::setDefined;
    class ::clang::ImplicitParamDecl  * (::clang::ObjCMethodDecl::*method_pointer_6e9b3fc355f957c296e45897397a9e16)() const = &::clang::ObjCMethodDecl::getCmdDecl;
    void  (::clang::ObjCMethodDecl::*method_pointer_d87975fc9f775e60b9ecd785f3e7e054)(unsigned long int ) = &::clang::ObjCMethodDecl::setLazyBody;
    class ::clang::ObjCMethodDecl  const * (::clang::ObjCMethodDecl::*method_pointer_011a935f7b5454d99e31ace5b6462037)() const = &::clang::ObjCMethodDecl::getCanonicalDecl;
    bool  (::clang::ObjCMethodDecl::*method_pointer_b1d15546b10e5da1a78a5074c78b0d80)() const = &::clang::ObjCMethodDecl::isThisDeclarationADesignatedInitializer;
    bool  (::clang::ObjCMethodDecl::*method_pointer_e32a2f5c6d0e57fca069fa35cf837fe9)() const = &::clang::ObjCMethodDecl::isInstanceMethod;
    bool  (::clang::ObjCMethodDecl::*method_pointer_f09046201a425fb9a55bda8d7cc90eda)() const = &::clang::ObjCMethodDecl::isVariadic;
    unsigned int  (::clang::ObjCMethodDecl::*method_pointer_472e8d3fa14e58d081a78769756a5f47)() const = &::clang::ObjCMethodDecl::param_size;
    class ::clang::ObjCMethodDecl  * (*method_pointer_b9413a73ab2c5208b3d633130708c276)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCMethodDecl::CreateDeserialized;
    bool  (::clang::ObjCMethodDecl::*method_pointer_8d481102ba4c53ed9767d49307fe7e5c)() const = &::clang::ObjCMethodDecl::hasSkippedBody;
    unsigned int  (::clang::ObjCMethodDecl::*method_pointer_e27db7d380855dc4baa9d7b72a31a25c)() const = &::clang::ObjCMethodDecl::getNumSelectorLocs;
    class ::clang::ObjCPropertyDecl  const * (::clang::ObjCMethodDecl::*method_pointer_db8df284f99f5a3c9ae71ad0154ef6a6)(bool ) const = &::clang::ObjCMethodDecl::findPropertyDecl;
    void  (::clang::ObjCMethodDecl::*method_pointer_838dcec7479555c2ad84da8b14efb3d0)(bool ) = &::clang::ObjCMethodDecl::SetRelatedResultType;
    bool  (::clang::ObjCMethodDecl::*method_pointer_c1d0808bae515479a4683a4babbf2620)() const = &::clang::ObjCMethodDecl::isDefined;
    bool  (*method_pointer_6d2b4d9a323057048ad29bd37d04d391)(enum ::clang::Decl::Kind ) = ::clang::ObjCMethodDecl::classofKind;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCMethodDecl::*method_pointer_9ef43b4261825e2da7ee2d372853426d)() = &::clang::ObjCMethodDecl::getClassInterface;
    bool  (::clang::ObjCMethodDecl::*method_pointer_838ee8d9fd4956d68a61e5c83811a6a4)() const = &::clang::ObjCMethodDecl::isPropertyAccessor;
    void  (::clang::ObjCMethodDecl::*method_pointer_df9e1e26de345268bcf226281feb3081)(bool ) = &::clang::ObjCMethodDecl::setPropertyAccessor;
    void  (::clang::ObjCMethodDecl::*method_pointer_71b58a7eb36d527ebe11c844bbd16feb)(class ::clang::ImplicitParamDecl  *) = &::clang::ObjCMethodDecl::setCmdDecl;
    bool  (::clang::ObjCMethodDecl::*method_pointer_bf045465fc6f5659acf6c5c75dde2f22)() const = &::clang::ObjCMethodDecl::isOverriding;
    void  (::clang::ObjCMethodDecl::*method_pointer_ed5ef5f0a9655d7693613cdd0c62d2fb)(class ::clang::ImplicitParamDecl  *) = &::clang::ObjCMethodDecl::setSelfDecl;
    void  (::clang::ObjCMethodDecl::*method_pointer_6ce8c096877550a7aac0bd1c6c2ef5d3)(bool ) = &::clang::ObjCMethodDecl::setVariadic;
    bool  (::clang::ObjCMethodDecl::*method_pointer_13f397fea6805a268080612546506091)() const = &::clang::ObjCMethodDecl::isClassMethod;
    class ::clang::ObjCMethodDecl  * (*method_pointer_2d6700561d045d58af52523750fb7e90)(class ::clang::DeclContext  const *) = ::clang::ObjCMethodDecl::castFromDeclContext;
    void  (::clang::ObjCMethodDecl::*method_pointer_8d75411fd08651809aab4ecd507e65c3)(bool ) = &::clang::ObjCMethodDecl::setHasSkippedBody;
    bool  (::clang::ObjCMethodDecl::*method_pointer_b438b7c688255f6b9a4c6135d826c011)() const = &::clang::ObjCMethodDecl::isRedeclaration;
    bool  (::clang::ObjCMethodDecl::*method_pointer_90dca2d1362f524c8ef27e4ab160049f)() const = &::clang::ObjCMethodDecl::isThisDeclarationADefinition;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCMethodDecl::*method_pointer_6c36f617938c55ff9408ecc66dbef847)() const = &::clang::ObjCMethodDecl::getClassInterface;
    bool  (*method_pointer_c10fb8dc917a5b9aa34b69647ab0c3d3)(class ::clang::Decl  const *) = ::clang::ObjCMethodDecl::classof;
    void  (::clang::ObjCMethodDecl::*method_pointer_85001729c9625483bddd4295d32d4ae8)(bool ) = &::clang::ObjCMethodDecl::setOverriding;
    void  (::clang::ObjCMethodDecl::*method_pointer_e9fa603027cf5d3aac10aa5fdcd11b01)(bool ) = &::clang::ObjCMethodDecl::setInstanceMethod;
    bool  (::clang::ObjCMethodDecl::*method_pointer_54fe5e697e065dee8bca63f7aa96d7cd)() const = &::clang::ObjCMethodDecl::hasRelatedResultType;
    boost::python::class_< class ::clang::ObjCMethodDecl, autowig::HeldType< class ::clang::ObjCMethodDecl >, boost::python::bases< class ::clang::NamedDecl, class ::clang::DeclContext >, boost::noncopyable > class_7130d3fcb2735f6eb2eb3ef44aefdbc3("ObjCMethodDecl", "", boost::python::no_init);
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_as_redeclaration", method_pointer_a861c961722f589d9340563dac4ab903, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("has_body", method_pointer_1c8b29251f5d5205885557325bc8b4ee, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("cast_to_decl_context", method_pointer_25d193415c7e5870bf625d97a727186b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("create_implicit_params", method_pointer_c0c541e1f0705f7988591aadf00ce0a6, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_canonical_decl", method_pointer_41e9157b94cd5204ae2492a0b050ff3c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_self_decl", method_pointer_0c8c55e72dc559a9890e45dc57fb2233, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_defined", method_pointer_05015a0be3085b35912356c01a1c1f42, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_cmd_decl", method_pointer_6e9b3fc355f957c296e45897397a9e16, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_lazy_body", method_pointer_d87975fc9f775e60b9ecd785f3e7e054, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_canonical_decl", method_pointer_011a935f7b5454d99e31ace5b6462037, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_this_declaration_a_designated_initializer", method_pointer_b1d15546b10e5da1a78a5074c78b0d80, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_instance_method", method_pointer_e32a2f5c6d0e57fca069fa35cf837fe9, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_variadic", method_pointer_f09046201a425fb9a55bda8d7cc90eda, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("param_size", method_pointer_472e8d3fa14e58d081a78769756a5f47, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("create_deserialized", method_pointer_b9413a73ab2c5208b3d633130708c276, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("has_skipped_body", method_pointer_8d481102ba4c53ed9767d49307fe7e5c, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_num_selector_locs", method_pointer_e27db7d380855dc4baa9d7b72a31a25c, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("find_property_decl", method_pointer_db8df284f99f5a3c9ae71ad0154ef6a6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_related_result_type", method_pointer_838dcec7479555c2ad84da8b14efb3d0, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_defined", method_pointer_c1d0808bae515479a4683a4babbf2620, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("classof_kind", method_pointer_6d2b4d9a323057048ad29bd37d04d391, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_class_interface", method_pointer_9ef43b4261825e2da7ee2d372853426d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_property_accessor", method_pointer_838ee8d9fd4956d68a61e5c83811a6a4, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_property_accessor", method_pointer_df9e1e26de345268bcf226281feb3081, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_cmd_decl", method_pointer_71b58a7eb36d527ebe11c844bbd16feb, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_overriding", method_pointer_bf045465fc6f5659acf6c5c75dde2f22, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_self_decl", method_pointer_ed5ef5f0a9655d7693613cdd0c62d2fb, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_variadic", method_pointer_6ce8c096877550a7aac0bd1c6c2ef5d3, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_class_method", method_pointer_13f397fea6805a268080612546506091, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("cast_from_decl_context", method_pointer_2d6700561d045d58af52523750fb7e90, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_has_skipped_body", method_pointer_8d75411fd08651809aab4ecd507e65c3, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_redeclaration", method_pointer_b438b7c688255f6b9a4c6135d826c011, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_this_declaration_a_definition", method_pointer_90dca2d1362f524c8ef27e4ab160049f, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_class_interface", method_pointer_6c36f617938c55ff9408ecc66dbef847, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("classof", method_pointer_c10fb8dc917a5b9aa34b69647ab0c3d3, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_overriding", method_pointer_85001729c9625483bddd4295d32d4ae8, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_instance_method", method_pointer_e9fa603027cf5d3aac10aa5fdcd11b01, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("has_related_result_type", method_pointer_54fe5e697e065dee8bca63f7aa96d7cd, "");
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