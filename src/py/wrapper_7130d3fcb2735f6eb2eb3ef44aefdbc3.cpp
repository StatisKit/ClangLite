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
    class ::clang::ObjCMethodDecl  * (*method_pointer_fc193107d546557d89fbde98c63a2cc8)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCMethodDecl::CreateDeserialized;
    void  (::clang::ObjCMethodDecl::*method_pointer_ae123b4db5905d0187be19786c85d534)(bool ) = &::clang::ObjCMethodDecl::SetRelatedResultType;
    class ::clang::ObjCMethodDecl  * (*method_pointer_19bb927da11c59ea9b3197af9d118170)(class ::clang::DeclContext  const *) = ::clang::ObjCMethodDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_5d8178a0b404540e9c28882c45123db8)(class ::clang::ObjCMethodDecl  const *) = ::clang::ObjCMethodDecl::castToDeclContext;
    bool  (*method_pointer_40eddc3a766c5954aab11cc22e17398c)(class ::clang::Decl  const *) = ::clang::ObjCMethodDecl::classof;
    bool  (*method_pointer_70bfff5c18e05f0a8f91c5ee6a3cff1e)(enum ::clang::Decl::Kind ) = ::clang::ObjCMethodDecl::classofKind;
    void  (::clang::ObjCMethodDecl::*method_pointer_efa9bfc60a3d5bbfbe0a95c22c73657b)(class ::clang::ASTContext  &, class ::clang::ObjCInterfaceDecl  const *) = &::clang::ObjCMethodDecl::createImplicitParams;
    class ::clang::ObjCPropertyDecl  const * (::clang::ObjCMethodDecl::*method_pointer_dbddb87bb2e05121a9bbc4e4d8928c38)(bool ) const = &::clang::ObjCMethodDecl::findPropertyDecl;
    class ::clang::ObjCMethodDecl  * (::clang::ObjCMethodDecl::*method_pointer_fc961bdcc44956318a32c10b772a5b59)() = &::clang::ObjCMethodDecl::getCanonicalDecl;
    class ::clang::ObjCMethodDecl  const * (::clang::ObjCMethodDecl::*method_pointer_6f3e134d1eee5754917132a3a0088327)() const = &::clang::ObjCMethodDecl::getCanonicalDecl;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCMethodDecl::*method_pointer_0d46b71447535b82beeef0dc5956db24)() const = &::clang::ObjCMethodDecl::getClassInterface;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCMethodDecl::*method_pointer_d273e1ee38be597e991c05038269b0a3)() = &::clang::ObjCMethodDecl::getClassInterface;
    class ::clang::ImplicitParamDecl  * (::clang::ObjCMethodDecl::*method_pointer_a8196eeaa369553588f3cd6cacbcc535)() const = &::clang::ObjCMethodDecl::getCmdDecl;
    class ::clang::SourceLocation  (::clang::ObjCMethodDecl::*method_pointer_3215ea55e55a5d4191c066a9b5c54fbb)() const = &::clang::ObjCMethodDecl::getDeclaratorEndLoc;
    class ::clang::SourceLocation  (::clang::ObjCMethodDecl::*method_pointer_ebb2d83b28a3527183ff2c96f03b5029)() const = &::clang::ObjCMethodDecl::getLocEnd;
    class ::clang::SourceLocation  (::clang::ObjCMethodDecl::*method_pointer_0d7179d9164e5fc8a1eef0d5f2337b4a)() const = &::clang::ObjCMethodDecl::getLocStart;
    unsigned int  (::clang::ObjCMethodDecl::*method_pointer_498a33a07a14598e813d1613c4d384e0)() const = &::clang::ObjCMethodDecl::getNumSelectorLocs;
    class ::clang::QualType  (::clang::ObjCMethodDecl::*method_pointer_9723acda867b5571a3442849113e7cbc)() const = &::clang::ObjCMethodDecl::getReturnType;
    class ::clang::SourceLocation  (::clang::ObjCMethodDecl::*method_pointer_2702a51b4b3950c2b70e074bf4aab245)(unsigned int ) const = &::clang::ObjCMethodDecl::getSelectorLoc;
    class ::clang::SourceLocation  (::clang::ObjCMethodDecl::*method_pointer_23f194d35b3859b79f7d6cf273d16bc0)() const = &::clang::ObjCMethodDecl::getSelectorStartLoc;
    class ::clang::ImplicitParamDecl  * (::clang::ObjCMethodDecl::*method_pointer_2a66b122dca358e1bab0eba6072ac01e)() const = &::clang::ObjCMethodDecl::getSelfDecl;
    class ::clang::QualType  (::clang::ObjCMethodDecl::*method_pointer_dcad5f558aba5b4084782eed2bf4ec4e)(class ::clang::ASTContext  &, class ::clang::ObjCInterfaceDecl  const *, bool  &, bool  &) = &::clang::ObjCMethodDecl::getSelfType;
    class ::clang::QualType  (::clang::ObjCMethodDecl::*method_pointer_3d270215aa365e7e8583ee34861c34e1)() const = &::clang::ObjCMethodDecl::getSendResultType;
    class ::clang::QualType  (::clang::ObjCMethodDecl::*method_pointer_136a50757744569aabbb2995ac08f8f6)(class ::clang::QualType ) const = &::clang::ObjCMethodDecl::getSendResultType;
    bool  (::clang::ObjCMethodDecl::*method_pointer_7d26b296cb015ed18da3ceb309ef6729)() const = &::clang::ObjCMethodDecl::hasBody;
    bool  (::clang::ObjCMethodDecl::*method_pointer_0bb20f8106485db099d05c66a41cc52e)() const = &::clang::ObjCMethodDecl::hasRelatedResultType;
    bool  (::clang::ObjCMethodDecl::*method_pointer_ae980a40b34857f39fac39084c3fcc7c)() const = &::clang::ObjCMethodDecl::hasSkippedBody;
    bool  (::clang::ObjCMethodDecl::*method_pointer_9bb4246216745cd0aae818a841e3c2e4)() const = &::clang::ObjCMethodDecl::isClassMethod;
    bool  (::clang::ObjCMethodDecl::*method_pointer_d31da745376056f6b947f42b8714abba)() const = &::clang::ObjCMethodDecl::isDefined;
    bool  (::clang::ObjCMethodDecl::*method_pointer_aa6ded0f18bf554db18d64f5799f6832)() const = &::clang::ObjCMethodDecl::isInstanceMethod;
    bool  (::clang::ObjCMethodDecl::*method_pointer_2f7a46a3eb445a5e9dda0eb0d340e334)() const = &::clang::ObjCMethodDecl::isOverriding;
    bool  (::clang::ObjCMethodDecl::*method_pointer_2b3f7307f04b562e8c86ebcc1c7b2292)() const = &::clang::ObjCMethodDecl::isPropertyAccessor;
    bool  (::clang::ObjCMethodDecl::*method_pointer_e740bf058c70568790f39ab35ea7041b)() const = &::clang::ObjCMethodDecl::isRedeclaration;
    bool  (::clang::ObjCMethodDecl::*method_pointer_0c3bfd10aaa05eceb154af843cf75afb)() const = &::clang::ObjCMethodDecl::isThisDeclarationADefinition;
    bool  (::clang::ObjCMethodDecl::*method_pointer_3e5f907a3e9e599f95b273c3e128af10)() const = &::clang::ObjCMethodDecl::isThisDeclarationADesignatedInitializer;
    bool  (::clang::ObjCMethodDecl::*method_pointer_ea319d51bb195c7f9d20873a812800eb)() const = &::clang::ObjCMethodDecl::isVariadic;
    unsigned int  (::clang::ObjCMethodDecl::*method_pointer_1ad15d6aa411523badfcdda9e59579c5)() const = &::clang::ObjCMethodDecl::param_size;
    void  (::clang::ObjCMethodDecl::*method_pointer_56f34d247d2d53238f00c23616169f78)(class ::clang::ObjCMethodDecl  const *) = &::clang::ObjCMethodDecl::setAsRedeclaration;
    void  (::clang::ObjCMethodDecl::*method_pointer_cd33ad73ea665fe5b6869d0fdbc0dec6)(class ::clang::ImplicitParamDecl  *) = &::clang::ObjCMethodDecl::setCmdDecl;
    void  (::clang::ObjCMethodDecl::*method_pointer_7f209d22e1d955ffa080875eb6a16742)(bool ) = &::clang::ObjCMethodDecl::setDefined;
    void  (::clang::ObjCMethodDecl::*method_pointer_fabd507561f05dc59ad0dcba608847d1)(bool ) = &::clang::ObjCMethodDecl::setHasSkippedBody;
    void  (::clang::ObjCMethodDecl::*method_pointer_44e7c57435435498b8076ad0a30ae29f)(bool ) = &::clang::ObjCMethodDecl::setInstanceMethod;
    void  (::clang::ObjCMethodDecl::*method_pointer_5a0a68c27d7c5abf92061789fc3ca6d6)(unsigned long int ) = &::clang::ObjCMethodDecl::setLazyBody;
    void  (::clang::ObjCMethodDecl::*method_pointer_dc96968370c25c80a86fe350a20ae8bd)(bool ) = &::clang::ObjCMethodDecl::setOverriding;
    void  (::clang::ObjCMethodDecl::*method_pointer_47fa3e1da6c35644992748accee0cc1d)(bool ) = &::clang::ObjCMethodDecl::setPropertyAccessor;
    void  (::clang::ObjCMethodDecl::*method_pointer_9bc84734a4d2595280e2d7b199c1cf21)(class ::clang::QualType ) = &::clang::ObjCMethodDecl::setReturnType;
    void  (::clang::ObjCMethodDecl::*method_pointer_7ff1660832ff552a862da1566dbed6d2)(class ::clang::ImplicitParamDecl  *) = &::clang::ObjCMethodDecl::setSelfDecl;
    void  (::clang::ObjCMethodDecl::*method_pointer_2d92e23e68de526e82283bbd5967534b)(bool ) = &::clang::ObjCMethodDecl::setVariadic;
    boost::python::class_< class ::clang::ObjCMethodDecl, autowig::HeldType< class ::clang::ObjCMethodDecl >, boost::python::bases< class ::clang::NamedDecl, class ::clang::DeclContext >, boost::noncopyable > class_7130d3fcb2735f6eb2eb3ef44aefdbc3("ObjCMethodDecl", "", boost::python::no_init);
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("create_deserialized", method_pointer_fc193107d546557d89fbde98c63a2cc8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_related_result_type", method_pointer_ae123b4db5905d0187be19786c85d534, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("cast_from_decl_context", method_pointer_19bb927da11c59ea9b3197af9d118170, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("cast_to_decl_context", method_pointer_5d8178a0b404540e9c28882c45123db8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("classof", method_pointer_40eddc3a766c5954aab11cc22e17398c, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("classof_kind", method_pointer_70bfff5c18e05f0a8f91c5ee6a3cff1e, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("create_implicit_params", method_pointer_efa9bfc60a3d5bbfbe0a95c22c73657b, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("find_property_decl", method_pointer_dbddb87bb2e05121a9bbc4e4d8928c38, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_canonical_decl", method_pointer_fc961bdcc44956318a32c10b772a5b59, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_canonical_decl", method_pointer_6f3e134d1eee5754917132a3a0088327, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_class_interface", method_pointer_0d46b71447535b82beeef0dc5956db24, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_class_interface", method_pointer_d273e1ee38be597e991c05038269b0a3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_cmd_decl", method_pointer_a8196eeaa369553588f3cd6cacbcc535, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_declarator_end_loc", method_pointer_3215ea55e55a5d4191c066a9b5c54fbb, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_loc_end", method_pointer_ebb2d83b28a3527183ff2c96f03b5029, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_loc_start", method_pointer_0d7179d9164e5fc8a1eef0d5f2337b4a, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_num_selector_locs", method_pointer_498a33a07a14598e813d1613c4d384e0, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_return_type", method_pointer_9723acda867b5571a3442849113e7cbc, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_selector_loc", method_pointer_2702a51b4b3950c2b70e074bf4aab245, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_selector_start_loc", method_pointer_23f194d35b3859b79f7d6cf273d16bc0, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_self_decl", method_pointer_2a66b122dca358e1bab0eba6072ac01e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_self_type", method_pointer_dcad5f558aba5b4084782eed2bf4ec4e, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_send_result_type", method_pointer_3d270215aa365e7e8583ee34861c34e1, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_send_result_type", method_pointer_136a50757744569aabbb2995ac08f8f6, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("has_body", method_pointer_7d26b296cb015ed18da3ceb309ef6729, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("has_related_result_type", method_pointer_0bb20f8106485db099d05c66a41cc52e, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("has_skipped_body", method_pointer_ae980a40b34857f39fac39084c3fcc7c, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_class_method", method_pointer_9bb4246216745cd0aae818a841e3c2e4, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_defined", method_pointer_d31da745376056f6b947f42b8714abba, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_instance_method", method_pointer_aa6ded0f18bf554db18d64f5799f6832, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_overriding", method_pointer_2f7a46a3eb445a5e9dda0eb0d340e334, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_property_accessor", method_pointer_2b3f7307f04b562e8c86ebcc1c7b2292, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_redeclaration", method_pointer_e740bf058c70568790f39ab35ea7041b, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_this_declaration_a_definition", method_pointer_0c3bfd10aaa05eceb154af843cf75afb, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_this_declaration_a_designated_initializer", method_pointer_3e5f907a3e9e599f95b273c3e128af10, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_variadic", method_pointer_ea319d51bb195c7f9d20873a812800eb, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("param_size", method_pointer_1ad15d6aa411523badfcdda9e59579c5, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_as_redeclaration", method_pointer_56f34d247d2d53238f00c23616169f78, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_cmd_decl", method_pointer_cd33ad73ea665fe5b6869d0fdbc0dec6, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_defined", method_pointer_7f209d22e1d955ffa080875eb6a16742, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_has_skipped_body", method_pointer_fabd507561f05dc59ad0dcba608847d1, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_instance_method", method_pointer_44e7c57435435498b8076ad0a30ae29f, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_lazy_body", method_pointer_5a0a68c27d7c5abf92061789fc3ca6d6, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_overriding", method_pointer_dc96968370c25c80a86fe350a20ae8bd, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_property_accessor", method_pointer_47fa3e1da6c35644992748accee0cc1d, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_return_type", method_pointer_9bc84734a4d2595280e2d7b199c1cf21, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_self_decl", method_pointer_7ff1660832ff552a862da1566dbed6d2, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_variadic", method_pointer_2d92e23e68de526e82283bbd5967534b, "");
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