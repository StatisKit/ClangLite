#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::ObjCMethodDecl const volatile * get_pointer<class ::clang::ObjCMethodDecl const volatile >(class ::clang::ObjCMethodDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_7130d3fcb2735f6eb2eb3ef44aefdbc3()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCMethodDecl * (*method_pointer_6d6e884beb4d552d981bd5ba51a6a5b8)(class ::clang::ASTContext &, unsigned int ) = ::clang::ObjCMethodDecl::CreateDeserialized;
    class ::clang::ObjCMethodDecl * (::clang::ObjCMethodDecl::*method_pointer_547ddde0d9d45fb4ae7ed2414534bf42)() = &::clang::ObjCMethodDecl::getCanonicalDecl;
    class ::clang::ObjCMethodDecl const * (::clang::ObjCMethodDecl::*method_pointer_224a79fb17b453238e511a9d279e57e9)() const = &::clang::ObjCMethodDecl::getCanonicalDecl;
    bool  (::clang::ObjCMethodDecl::*method_pointer_b06b898f6a5d527ca21d9ae03db2110c)() const = &::clang::ObjCMethodDecl::hasRelatedResultType;
    void  (::clang::ObjCMethodDecl::*method_pointer_94d1416cdf5b5eaeb9897c0f14f88a0f)(bool ) = &::clang::ObjCMethodDecl::SetRelatedResultType;
    bool  (::clang::ObjCMethodDecl::*method_pointer_05f724058f2a576b9ad04a92b133c749)() const = &::clang::ObjCMethodDecl::isRedeclaration;
    void  (::clang::ObjCMethodDecl::*method_pointer_ef6b1c7345bc5d0f88a0d11dea996f07)(class ::clang::ObjCMethodDecl const *) = &::clang::ObjCMethodDecl::setAsRedeclaration;
    class ::clang::SourceLocation  (::clang::ObjCMethodDecl::*method_pointer_86161973a482563fa80752a84010714a)() const = &::clang::ObjCMethodDecl::getDeclaratorEndLoc;
    class ::clang::SourceLocation  (::clang::ObjCMethodDecl::*method_pointer_04b5bda0619a5b21b0006f8f568fe70f)() const = &::clang::ObjCMethodDecl::getLocStart;
    class ::clang::SourceLocation  (::clang::ObjCMethodDecl::*method_pointer_c1b3f27ec1c1517a81bd9325a6d64598)() const = &::clang::ObjCMethodDecl::getLocEnd;
    class ::clang::SourceLocation  (::clang::ObjCMethodDecl::*method_pointer_38585b956be750faa987d2526f1cec4e)() const = &::clang::ObjCMethodDecl::getSelectorStartLoc;
    class ::clang::SourceLocation  (::clang::ObjCMethodDecl::*method_pointer_965e5c1b491652a4a0ebacf7cecf2255)(unsigned int ) const = &::clang::ObjCMethodDecl::getSelectorLoc;
    unsigned int  (::clang::ObjCMethodDecl::*method_pointer_f3d2d3a88071516aa70576e4e82caaac)() const = &::clang::ObjCMethodDecl::getNumSelectorLocs;
    class ::clang::ObjCInterfaceDecl * (::clang::ObjCMethodDecl::*method_pointer_3092a08e302d509490f18c2971974352)() = &::clang::ObjCMethodDecl::getClassInterface;
    class ::clang::ObjCInterfaceDecl const * (::clang::ObjCMethodDecl::*method_pointer_cd9c1f66c93f51f59d0347b23ca2fb04)() const = &::clang::ObjCMethodDecl::getClassInterface;
    class ::clang::QualType  (::clang::ObjCMethodDecl::*method_pointer_ab473256a789524cab4b8a950ec3cc82)() const = &::clang::ObjCMethodDecl::getReturnType;
    void  (::clang::ObjCMethodDecl::*method_pointer_0a79a538ddaf5fc9ac2a620a08095c7d)(class ::clang::QualType ) = &::clang::ObjCMethodDecl::setReturnType;
    class ::clang::QualType  (::clang::ObjCMethodDecl::*method_pointer_a9d3e35cd71756718c11e35731a31307)() const = &::clang::ObjCMethodDecl::getSendResultType;
    class ::clang::QualType  (::clang::ObjCMethodDecl::*method_pointer_0e3e1a3d542b523ca69a2849e36e0cad)(class ::clang::QualType ) const = &::clang::ObjCMethodDecl::getSendResultType;
    unsigned int  (::clang::ObjCMethodDecl::*method_pointer_7935f2af871a5018885c78ee21660445)() const = &::clang::ObjCMethodDecl::param_size;
    void  (::clang::ObjCMethodDecl::*method_pointer_4bd4132bd6905165bafa9025b0fc0977)(class ::clang::ASTContext &, class ::clang::ObjCInterfaceDecl const *) = &::clang::ObjCMethodDecl::createImplicitParams;
    class ::clang::QualType  (::clang::ObjCMethodDecl::*method_pointer_5793e1e155275967b500ffe5b2407fb4)(class ::clang::ASTContext &, class ::clang::ObjCInterfaceDecl const *, bool &, bool &) = &::clang::ObjCMethodDecl::getSelfType;
    class ::clang::ImplicitParamDecl * (::clang::ObjCMethodDecl::*method_pointer_7c95b41d7eb054a1b367faa241a46151)() const = &::clang::ObjCMethodDecl::getSelfDecl;
    void  (::clang::ObjCMethodDecl::*method_pointer_e6aefbd11b5b58b68049527e187be6fe)(class ::clang::ImplicitParamDecl *) = &::clang::ObjCMethodDecl::setSelfDecl;
    class ::clang::ImplicitParamDecl * (::clang::ObjCMethodDecl::*method_pointer_4741552eef105caa9ffc8c631cf9fc91)() const = &::clang::ObjCMethodDecl::getCmdDecl;
    void  (::clang::ObjCMethodDecl::*method_pointer_aa7c8f901ca15740abbeab6c6520f54d)(class ::clang::ImplicitParamDecl *) = &::clang::ObjCMethodDecl::setCmdDecl;
    bool  (::clang::ObjCMethodDecl::*method_pointer_2c348163aed25bcda32812b2a78a2269)() const = &::clang::ObjCMethodDecl::isInstanceMethod;
    void  (::clang::ObjCMethodDecl::*method_pointer_8d8be21c76755b9e8386010e9eb07a39)(bool ) = &::clang::ObjCMethodDecl::setInstanceMethod;
    bool  (::clang::ObjCMethodDecl::*method_pointer_649f7a44dea25712b11885800a6bec5f)() const = &::clang::ObjCMethodDecl::isVariadic;
    void  (::clang::ObjCMethodDecl::*method_pointer_fdf84c03116152b1ba43fec72c7fdd3b)(bool ) = &::clang::ObjCMethodDecl::setVariadic;
    bool  (::clang::ObjCMethodDecl::*method_pointer_f1aec63fa7465995a32c708b89852276)() const = &::clang::ObjCMethodDecl::isClassMethod;
    bool  (::clang::ObjCMethodDecl::*method_pointer_f9300018a3915b5f8e37d66d50ce00f0)() const = &::clang::ObjCMethodDecl::isPropertyAccessor;
    void  (::clang::ObjCMethodDecl::*method_pointer_aceb64c7f51b56f38584d559bb1eb1a9)(bool ) = &::clang::ObjCMethodDecl::setPropertyAccessor;
    bool  (::clang::ObjCMethodDecl::*method_pointer_34f9da26b09959c1bec2127b3dab9645)() const = &::clang::ObjCMethodDecl::isDefined;
    void  (::clang::ObjCMethodDecl::*method_pointer_b309dd35fc5d5ba5b07cb7baa5193f81)(bool ) = &::clang::ObjCMethodDecl::setDefined;
    bool  (::clang::ObjCMethodDecl::*method_pointer_6dfc982414515922b808068ac29025c1)() const = &::clang::ObjCMethodDecl::isOverriding;
    void  (::clang::ObjCMethodDecl::*method_pointer_0aaadb6a91d551d187d663da8d1ff7c0)(bool ) = &::clang::ObjCMethodDecl::setOverriding;
    bool  (::clang::ObjCMethodDecl::*method_pointer_c917c136675151a98c3e0c7c244e27a1)() const = &::clang::ObjCMethodDecl::hasSkippedBody;
    void  (::clang::ObjCMethodDecl::*method_pointer_c455bfe9fabb5a75b8e27d12a366bd26)(bool ) = &::clang::ObjCMethodDecl::setHasSkippedBody;
    class ::clang::ObjCPropertyDecl const * (::clang::ObjCMethodDecl::*method_pointer_405aa6bcc91051698f19948d8279781b)(bool ) const = &::clang::ObjCMethodDecl::findPropertyDecl;
    bool  (::clang::ObjCMethodDecl::*method_pointer_0c5680823e0e501ca84bd0c596c1ec93)() const = &::clang::ObjCMethodDecl::isThisDeclarationADesignatedInitializer;
    void  (::clang::ObjCMethodDecl::*method_pointer_c7b8373f45c45499bf3c88c886b07533)(::uint64_t ) = &::clang::ObjCMethodDecl::setLazyBody;
    bool  (::clang::ObjCMethodDecl::*method_pointer_d8ed3e88970a598f94acd89f07ddcaad)() const = &::clang::ObjCMethodDecl::isThisDeclarationADefinition;
    bool  (*method_pointer_3a6f31083fe85ba0b400a6a5e23315e0)(class ::clang::Decl const *) = ::clang::ObjCMethodDecl::classof;
    bool  (*method_pointer_e8a5d894383f57c1a984fe68cdc5d167)(enum ::clang::Decl::Kind ) = ::clang::ObjCMethodDecl::classofKind;
    class ::clang::DeclContext * (*method_pointer_b09b55ea13c55d2fa871839370bf2659)(class ::clang::ObjCMethodDecl const *) = ::clang::ObjCMethodDecl::castToDeclContext;
    class ::clang::ObjCMethodDecl * (*method_pointer_44a6cb4985cd523490ee4ab71229abf2)(class ::clang::DeclContext const *) = ::clang::ObjCMethodDecl::castFromDeclContext;
    boost::python::class_< class ::clang::ObjCMethodDecl, autowig::Held< class ::clang::ObjCMethodDecl >::Type, boost::python::bases< class ::clang::NamedDecl, class ::clang::DeclContext >, boost::noncopyable > class_7130d3fcb2735f6eb2eb3ef44aefdbc3("ObjCMethodDecl", "", boost::python::no_init);
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("create_deserialized", method_pointer_6d6e884beb4d552d981bd5ba51a6a5b8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_canonical_decl", method_pointer_547ddde0d9d45fb4ae7ed2414534bf42, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_canonical_decl", method_pointer_224a79fb17b453238e511a9d279e57e9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("has_related_result_type", method_pointer_b06b898f6a5d527ca21d9ae03db2110c, "Determine whether this method has a result type that is related to the\nmessage receiver's type.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_related_result_type", method_pointer_94d1416cdf5b5eaeb9897c0f14f88a0f, "Note whether this method has a related result type.\n\n:Parameter:\n    `RRT` (:cpp:any:`bool`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_redeclaration", method_pointer_05f724058f2a576b9ad04a92b133c749, "True if this is a method redeclaration in the same interface.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_as_redeclaration", method_pointer_ef6b1c7345bc5d0f88a0d11dea996f07, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_declarator_end_loc", method_pointer_86161973a482563fa80752a84010714a, "Returns the location where the declarator ends. It will be the location\nof ';' for a method declaration and the location of '{' for a method\ndefinition.\n\n:Return Type:\n    :py:class:`clanglite.clang.SourceLocation`\n\n");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_loc_start", method_pointer_04b5bda0619a5b21b0006f8f568fe70f, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_loc_end", method_pointer_c1b3f27ec1c1517a81bd9325a6d64598, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_selector_start_loc", method_pointer_38585b956be750faa987d2526f1cec4e, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_selector_loc", method_pointer_965e5c1b491652a4a0ebacf7cecf2255, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_num_selector_locs", method_pointer_f3d2d3a88071516aa70576e4e82caaac, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_class_interface", method_pointer_3092a08e302d509490f18c2971974352, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_class_interface", method_pointer_cd9c1f66c93f51f59d0347b23ca2fb04, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_return_type", method_pointer_ab473256a789524cab4b8a950ec3cc82, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_return_type", method_pointer_0a79a538ddaf5fc9ac2a620a08095c7d, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_send_result_type", method_pointer_a9d3e35cd71756718c11e35731a31307, "Determine the type of an expression that sends a message to this\nfunction. This replaces the type parameters with the types they would\nget if the receiver was parameterless (e.g. it may replace the type\nparameter with 'id').\n\n:Return Type:\n    :py:class:`clanglite.clang.QualType`\n\n");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_send_result_type", method_pointer_0e3e1a3d542b523ca69a2849e36e0cad, ":Parameter:\n    `receiverType` (:py:class:`clanglite.clang.QualType`) - Undocumented\n\n:Return Type:\n    :py:class:`clanglite.clang.QualType`\n\n");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("param_size", method_pointer_7935f2af871a5018885c78ee21660445, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("create_implicit_params", method_pointer_4bd4132bd6905165bafa9025b0fc0977, ":Parameters:\n  - `Context` (:py:class:`clanglite.clang.ASTContext`) - Undocumented\n  - `ID` (:py:class:`clanglite.clang.ObjCInterfaceDecl`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_self_type", method_pointer_5793e1e155275967b500ffe5b2407fb4, ":Parameters:\n  - `Context` (:py:class:`clanglite.clang.ASTContext`) - Undocumented\n  - `OID` (:py:class:`clanglite.clang.ObjCInterfaceDecl`) - Undocumented\n  - `selfIsPseudoStrong` (:cpp:any:`bool`) - Undocumented\n  - `selfIsConsumed` (:cpp:any:`bool`) - Undocumented\n\n:Return Type:\n    :py:class:`clanglite.clang.QualType`\n\n");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_self_decl", method_pointer_7c95b41d7eb054a1b367faa241a46151, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_self_decl", method_pointer_e6aefbd11b5b58b68049527e187be6fe, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_cmd_decl", method_pointer_4741552eef105caa9ffc8c631cf9fc91, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_cmd_decl", method_pointer_aa7c8f901ca15740abbeab6c6520f54d, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_instance_method", method_pointer_2c348163aed25bcda32812b2a78a2269, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_instance_method", method_pointer_8d8be21c76755b9e8386010e9eb07a39, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_variadic", method_pointer_649f7a44dea25712b11885800a6bec5f, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_variadic", method_pointer_fdf84c03116152b1ba43fec72c7fdd3b, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_class_method", method_pointer_f1aec63fa7465995a32c708b89852276, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_property_accessor", method_pointer_f9300018a3915b5f8e37d66d50ce00f0, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_property_accessor", method_pointer_aceb64c7f51b56f38584d559bb1eb1a9, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_defined", method_pointer_34f9da26b09959c1bec2127b3dab9645, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_defined", method_pointer_b309dd35fc5d5ba5b07cb7baa5193f81, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_overriding", method_pointer_6dfc982414515922b808068ac29025c1, "Whether this method overrides any other in the class hierarchy.\n\nA method is said to override any method in the class's base classes, its\nprotocols, or its categories' protocols, that has the same selector and\nis of the same kind (class or instance). A method in an implementation\nis not considered as overriding the same method in the interface or its\ncategories.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_overriding", method_pointer_0aaadb6a91d551d187d663da8d1ff7c0, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("has_skipped_body", method_pointer_c917c136675151a98c3e0c7c244e27a1, "True if the method was a definition but its body was skipped.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_has_skipped_body", method_pointer_c455bfe9fabb5a75b8e27d12a366bd26, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("find_property_decl", method_pointer_405aa6bcc91051698f19948d8279781b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Returns the property associated with this method's selector.\n\nNote that even if this particular method is not marked as a property\naccessor, it is still possible for it to match a property declared in a\nsuperclass. Pass :raw-latex:`\\c f`alse if you only want to check the\ncurrent class.\n\n:Parameter:\n    `CheckOverrides` (:cpp:any:`bool`) - Undocumented\n\n:Return Type:\n    :py:class:`clanglite.clang.ObjCPropertyDecl`\n\n");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_this_declaration_a_designated_initializer", method_pointer_0c5680823e0e501ca84bd0c596c1ec93, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_lazy_body", method_pointer_c7b8373f45c45499bf3c88c886b07533, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_this_declaration_a_definition", method_pointer_d8ed3e88970a598f94acd89f07ddcaad, "Returns whether this specific method is a definition.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("classof", method_pointer_3a6f31083fe85ba0b400a6a5e23315e0, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("classof_kind", method_pointer_e8a5d894383f57c1a984fe68cdc5d167, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("cast_to_decl_context", method_pointer_b09b55ea13c55d2fa871839370bf2659, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("cast_from_decl_context", method_pointer_44a6cb4985cd523490ee4ab71229abf2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.staticmethod("classof_kind");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.staticmethod("create_deserialized");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.staticmethod("classof");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.staticmethod("cast_from_decl_context");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.staticmethod("cast_to_decl_context");

    if(autowig::Held< class ::clang::ObjCMethodDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::ObjCMethodDecl >::Type, autowig::Held< class ::clang::NamedDecl >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::clang::ObjCMethodDecl >::Type, autowig::Held< class ::clang::DeclContext >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::ObjCMethodDecl >::Type, boost::python::objects::make_ptr_instance< class ::clang::ObjCMethodDecl, boost::python::objects::pointer_holder< autowig::Held< class ::clang::ObjCMethodDecl >::Type, class ::clang::ObjCMethodDecl > > >();
    }

}