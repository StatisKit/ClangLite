#include "_clanglite.h"


namespace autowig
{
}


void wrapper_7130d3fcb2735f6eb2eb3ef44aefdbc3()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCMethodDecl  * (*method_pointer_1bb000d554ff5d82aa77947c48930299)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCMethodDecl::CreateDeserialized;
    void  (::clang::ObjCMethodDecl::*method_pointer_e8a3cd51e83351228bc3911d94e3124f)(bool ) = &::clang::ObjCMethodDecl::SetRelatedResultType;
    class ::clang::ObjCMethodDecl  * (*method_pointer_1ec916262e155a989264cdaa53cc2987)(class ::clang::DeclContext  const *) = ::clang::ObjCMethodDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_302f461524e1557b8f1a9109d45e3f7e)(class ::clang::ObjCMethodDecl  const *) = ::clang::ObjCMethodDecl::castToDeclContext;
    bool  (*method_pointer_81d47c81d78d54d08cacff8e870d8c8b)(class ::clang::Decl  const *) = ::clang::ObjCMethodDecl::classof;
    bool  (*method_pointer_2ddb0dfbe8df52ef9fbbf79568ac752a)(enum ::clang::Decl::Kind ) = ::clang::ObjCMethodDecl::classofKind;
    void  (::clang::ObjCMethodDecl::*method_pointer_7e71c3a73b14544185555746290aceaf)(class ::clang::ASTContext  &, class ::clang::ObjCInterfaceDecl  const *) = &::clang::ObjCMethodDecl::createImplicitParams;
    class ::clang::ObjCPropertyDecl  const * (::clang::ObjCMethodDecl::*method_pointer_8779babcf44550778e51cc7cbeb09a92)(bool ) const = &::clang::ObjCMethodDecl::findPropertyDecl;
    class ::clang::ObjCMethodDecl  const * (::clang::ObjCMethodDecl::*method_pointer_2b5c76df0d8b5decac6c5776f59b6f8c)() const = &::clang::ObjCMethodDecl::getCanonicalDecl;
    class ::clang::ObjCMethodDecl  * (::clang::ObjCMethodDecl::*method_pointer_707ba7ed20c75df9b44956878a0959ac)() = &::clang::ObjCMethodDecl::getCanonicalDecl;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCMethodDecl::*method_pointer_458710065c8d578693713d07660e6af0)() = &::clang::ObjCMethodDecl::getClassInterface;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCMethodDecl::*method_pointer_b475c0ef781950cdb1c8ed53849e325a)() const = &::clang::ObjCMethodDecl::getClassInterface;
    class ::clang::ImplicitParamDecl  * (::clang::ObjCMethodDecl::*method_pointer_d5b32c7a975a530f96d1d04afc1e345b)() const = &::clang::ObjCMethodDecl::getCmdDecl;
    unsigned int  (::clang::ObjCMethodDecl::*method_pointer_58b5df7d84f55f0badae0be7df5e6df6)() const = &::clang::ObjCMethodDecl::getNumSelectorLocs;
    class ::clang::ImplicitParamDecl  * (::clang::ObjCMethodDecl::*method_pointer_ebd1f2d1c6555e33a9055bf0f8344f3a)() const = &::clang::ObjCMethodDecl::getSelfDecl;
    bool  (::clang::ObjCMethodDecl::*method_pointer_30f18f7aca8b5520b31c5174ee954e7f)() const = &::clang::ObjCMethodDecl::hasBody;
    bool  (::clang::ObjCMethodDecl::*method_pointer_596310d8b99252ed9aa46a0a57a1756d)() const = &::clang::ObjCMethodDecl::hasRelatedResultType;
    bool  (::clang::ObjCMethodDecl::*method_pointer_2a4447db0e9856e0840f3eeae9972600)() const = &::clang::ObjCMethodDecl::hasSkippedBody;
    bool  (::clang::ObjCMethodDecl::*method_pointer_59acfece04cb5e7daaf3c7c4bed806b7)() const = &::clang::ObjCMethodDecl::isClassMethod;
    bool  (::clang::ObjCMethodDecl::*method_pointer_318e8a26065857ddbc7db081c44eb0dc)() const = &::clang::ObjCMethodDecl::isDefined;
    bool  (::clang::ObjCMethodDecl::*method_pointer_441b3bc1ff955693a76fb0e1579748ba)() const = &::clang::ObjCMethodDecl::isInstanceMethod;
    bool  (::clang::ObjCMethodDecl::*method_pointer_1f937a4f7d40500296208cacfac71ecd)() const = &::clang::ObjCMethodDecl::isOverriding;
    bool  (::clang::ObjCMethodDecl::*method_pointer_13a9e7004f5a55408b913ce163e89ecf)() const = &::clang::ObjCMethodDecl::isPropertyAccessor;
    bool  (::clang::ObjCMethodDecl::*method_pointer_ed43b2dfb1635c11b4095b28fff3865c)() const = &::clang::ObjCMethodDecl::isRedeclaration;
    bool  (::clang::ObjCMethodDecl::*method_pointer_7a01d5e1a291558e8a3e036a419b8001)() const = &::clang::ObjCMethodDecl::isThisDeclarationADefinition;
    bool  (::clang::ObjCMethodDecl::*method_pointer_2684389fd17c57cba93b7ce057cfc712)() const = &::clang::ObjCMethodDecl::isThisDeclarationADesignatedInitializer;
    bool  (::clang::ObjCMethodDecl::*method_pointer_1e5580e5ba4c53869a76d893d95ba395)() const = &::clang::ObjCMethodDecl::isVariadic;
    unsigned int  (::clang::ObjCMethodDecl::*method_pointer_48adf474d6f5509eb6242fa1f060b8e3)() const = &::clang::ObjCMethodDecl::param_size;
    void  (::clang::ObjCMethodDecl::*method_pointer_bfd3b561db00565a99b7277dae3b8315)(class ::clang::ObjCMethodDecl  const *) = &::clang::ObjCMethodDecl::setAsRedeclaration;
    void  (::clang::ObjCMethodDecl::*method_pointer_8ed94f35113953a79c6fe8300aae9138)(class ::clang::ImplicitParamDecl  *) = &::clang::ObjCMethodDecl::setCmdDecl;
    void  (::clang::ObjCMethodDecl::*method_pointer_44c8db8bc8d359468a491698c4875219)(bool ) = &::clang::ObjCMethodDecl::setDefined;
    void  (::clang::ObjCMethodDecl::*method_pointer_a94c7b9e7b6454ce968032138e37a8e7)(bool ) = &::clang::ObjCMethodDecl::setHasSkippedBody;
    void  (::clang::ObjCMethodDecl::*method_pointer_f3cc14154c5553fa942f28e5d5a6801f)(bool ) = &::clang::ObjCMethodDecl::setInstanceMethod;
    void  (::clang::ObjCMethodDecl::*method_pointer_7ef36af06dfd5f0693f9e838505c432d)(unsigned long int ) = &::clang::ObjCMethodDecl::setLazyBody;
    void  (::clang::ObjCMethodDecl::*method_pointer_8b712cf982df51f7a37834a0e8fa5e6b)(bool ) = &::clang::ObjCMethodDecl::setOverriding;
    void  (::clang::ObjCMethodDecl::*method_pointer_c87c92845a6358bca6d1dd3f51e9cd65)(bool ) = &::clang::ObjCMethodDecl::setPropertyAccessor;
    void  (::clang::ObjCMethodDecl::*method_pointer_80c860d5d22b53c9aec312d06d70da06)(class ::clang::ImplicitParamDecl  *) = &::clang::ObjCMethodDecl::setSelfDecl;
    void  (::clang::ObjCMethodDecl::*method_pointer_b8bd998c1a1055598d11c0af698e0700)(bool ) = &::clang::ObjCMethodDecl::setVariadic;
    boost::python::class_< class ::clang::ObjCMethodDecl, autowig::HeldType< class ::clang::ObjCMethodDecl >, boost::python::bases< class ::clang::NamedDecl, class ::clang::DeclContext >, boost::noncopyable > class_7130d3fcb2735f6eb2eb3ef44aefdbc3("ObjCMethodDecl", "", boost::python::no_init);
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("create_deserialized", method_pointer_1bb000d554ff5d82aa77947c48930299, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_related_result_type", method_pointer_e8a3cd51e83351228bc3911d94e3124f, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("cast_from_decl_context", method_pointer_1ec916262e155a989264cdaa53cc2987, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("cast_to_decl_context", method_pointer_302f461524e1557b8f1a9109d45e3f7e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("classof", method_pointer_81d47c81d78d54d08cacff8e870d8c8b, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("classof_kind", method_pointer_2ddb0dfbe8df52ef9fbbf79568ac752a, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("create_implicit_params", method_pointer_7e71c3a73b14544185555746290aceaf, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("find_property_decl", method_pointer_8779babcf44550778e51cc7cbeb09a92, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_canonical_decl", method_pointer_2b5c76df0d8b5decac6c5776f59b6f8c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_canonical_decl", method_pointer_707ba7ed20c75df9b44956878a0959ac, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_class_interface", method_pointer_458710065c8d578693713d07660e6af0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_class_interface", method_pointer_b475c0ef781950cdb1c8ed53849e325a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_cmd_decl", method_pointer_d5b32c7a975a530f96d1d04afc1e345b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_num_selector_locs", method_pointer_58b5df7d84f55f0badae0be7df5e6df6, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_self_decl", method_pointer_ebd1f2d1c6555e33a9055bf0f8344f3a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("has_body", method_pointer_30f18f7aca8b5520b31c5174ee954e7f, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("has_related_result_type", method_pointer_596310d8b99252ed9aa46a0a57a1756d, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("has_skipped_body", method_pointer_2a4447db0e9856e0840f3eeae9972600, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_class_method", method_pointer_59acfece04cb5e7daaf3c7c4bed806b7, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_defined", method_pointer_318e8a26065857ddbc7db081c44eb0dc, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_instance_method", method_pointer_441b3bc1ff955693a76fb0e1579748ba, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_overriding", method_pointer_1f937a4f7d40500296208cacfac71ecd, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_property_accessor", method_pointer_13a9e7004f5a55408b913ce163e89ecf, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_redeclaration", method_pointer_ed43b2dfb1635c11b4095b28fff3865c, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_this_declaration_a_definition", method_pointer_7a01d5e1a291558e8a3e036a419b8001, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_this_declaration_a_designated_initializer", method_pointer_2684389fd17c57cba93b7ce057cfc712, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_variadic", method_pointer_1e5580e5ba4c53869a76d893d95ba395, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("param_size", method_pointer_48adf474d6f5509eb6242fa1f060b8e3, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_as_redeclaration", method_pointer_bfd3b561db00565a99b7277dae3b8315, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_cmd_decl", method_pointer_8ed94f35113953a79c6fe8300aae9138, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_defined", method_pointer_44c8db8bc8d359468a491698c4875219, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_has_skipped_body", method_pointer_a94c7b9e7b6454ce968032138e37a8e7, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_instance_method", method_pointer_f3cc14154c5553fa942f28e5d5a6801f, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_lazy_body", method_pointer_7ef36af06dfd5f0693f9e838505c432d, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_overriding", method_pointer_8b712cf982df51f7a37834a0e8fa5e6b, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_property_accessor", method_pointer_c87c92845a6358bca6d1dd3f51e9cd65, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_self_decl", method_pointer_80c860d5d22b53c9aec312d06d70da06, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_variadic", method_pointer_b8bd998c1a1055598d11c0af698e0700, "");
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