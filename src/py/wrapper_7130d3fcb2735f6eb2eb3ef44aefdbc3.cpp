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
    class ::clang::ObjCMethodDecl  * (*method_pointer_8e85483e6ebd5bcdb2fa8bb4b1510b36)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCMethodDecl::CreateDeserialized;
    void  (::clang::ObjCMethodDecl::*method_pointer_9e9b5a23e46c5be2affebfcba12ab565)(bool ) = &::clang::ObjCMethodDecl::SetRelatedResultType;
    class ::clang::ObjCMethodDecl  * (*method_pointer_7064d15eb5c55211bc79c1d3e067dd05)(class ::clang::DeclContext  const *) = ::clang::ObjCMethodDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_ce375dfa014a537ea43c8719ed8c754a)(class ::clang::ObjCMethodDecl  const *) = ::clang::ObjCMethodDecl::castToDeclContext;
    bool  (*method_pointer_95d4a90747c15ba0a4c125238156a7d4)(class ::clang::Decl  const *) = ::clang::ObjCMethodDecl::classof;
    bool  (*method_pointer_db0f49846c0157f9bfd3e1dbc66a23c3)(enum ::clang::Decl::Kind ) = ::clang::ObjCMethodDecl::classofKind;
    void  (::clang::ObjCMethodDecl::*method_pointer_65d28023ed4c5cd0b1b66d8f543a8abd)(class ::clang::ASTContext  &, class ::clang::ObjCInterfaceDecl  const *) = &::clang::ObjCMethodDecl::createImplicitParams;
    class ::clang::ObjCPropertyDecl  const * (::clang::ObjCMethodDecl::*method_pointer_0c45790e42fe5ccc8eb9564e7ed99000)(bool ) const = &::clang::ObjCMethodDecl::findPropertyDecl;
    class ::clang::ObjCMethodDecl  const * (::clang::ObjCMethodDecl::*method_pointer_f3622a97d0b353b886441c9bba811b2c)() const = &::clang::ObjCMethodDecl::getCanonicalDecl;
    class ::clang::ObjCMethodDecl  * (::clang::ObjCMethodDecl::*method_pointer_aa4d421fa1005e0b917ccd85932449e3)() = &::clang::ObjCMethodDecl::getCanonicalDecl;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCMethodDecl::*method_pointer_f66d7d0fbdc053f6a5d65bd04a214794)() = &::clang::ObjCMethodDecl::getClassInterface;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCMethodDecl::*method_pointer_57db28e359075be784a83a7337726ed9)() const = &::clang::ObjCMethodDecl::getClassInterface;
    class ::clang::ImplicitParamDecl  * (::clang::ObjCMethodDecl::*method_pointer_fcbcf6e4928b5cfa9a6ba2050efe53ea)() const = &::clang::ObjCMethodDecl::getCmdDecl;
    class ::clang::SourceLocation  (::clang::ObjCMethodDecl::*method_pointer_e04cb23013fd5cd6aeab6d8a9f4a2a01)() const = &::clang::ObjCMethodDecl::getDeclaratorEndLoc;
    class ::clang::SourceLocation  (::clang::ObjCMethodDecl::*method_pointer_2986039edc755d708b47265407f2c07f)() const = &::clang::ObjCMethodDecl::getLocEnd;
    class ::clang::SourceLocation  (::clang::ObjCMethodDecl::*method_pointer_bf6b2c6b11a2505aa4a7ed007abe0f0e)() const = &::clang::ObjCMethodDecl::getLocStart;
    unsigned int  (::clang::ObjCMethodDecl::*method_pointer_7999f78b102c5e01aa0717a111d0cc8c)() const = &::clang::ObjCMethodDecl::getNumSelectorLocs;
    class ::clang::QualType  (::clang::ObjCMethodDecl::*method_pointer_b191212b715b5ec6a51d3e6956bd7f8f)() const = &::clang::ObjCMethodDecl::getReturnType;
    class ::clang::SourceLocation  (::clang::ObjCMethodDecl::*method_pointer_dc507d2676ef51248031c4a1b1af2a25)(unsigned int ) const = &::clang::ObjCMethodDecl::getSelectorLoc;
    class ::clang::SourceLocation  (::clang::ObjCMethodDecl::*method_pointer_44da91195aa1543fbc822bf22fa3f05d)() const = &::clang::ObjCMethodDecl::getSelectorStartLoc;
    class ::clang::ImplicitParamDecl  * (::clang::ObjCMethodDecl::*method_pointer_745fbfc65d8f5940b0b39e088cac0279)() const = &::clang::ObjCMethodDecl::getSelfDecl;
    class ::clang::QualType  (::clang::ObjCMethodDecl::*method_pointer_1d2999812d395ea68c4a047901946ab4)(class ::clang::ASTContext  &, class ::clang::ObjCInterfaceDecl  const *, bool  &, bool  &) = &::clang::ObjCMethodDecl::getSelfType;
    class ::clang::QualType  (::clang::ObjCMethodDecl::*method_pointer_e72570a39cd8547da794fd2a1983e49f)() const = &::clang::ObjCMethodDecl::getSendResultType;
    class ::clang::QualType  (::clang::ObjCMethodDecl::*method_pointer_737ce9e653e2548582acf8b444b08930)(class ::clang::QualType ) const = &::clang::ObjCMethodDecl::getSendResultType;
    bool  (::clang::ObjCMethodDecl::*method_pointer_216a86ad6cef58049200dfe60185a181)() const = &::clang::ObjCMethodDecl::hasBody;
    bool  (::clang::ObjCMethodDecl::*method_pointer_143accda3ca55158b8b5e4524328fc3c)() const = &::clang::ObjCMethodDecl::hasRelatedResultType;
    bool  (::clang::ObjCMethodDecl::*method_pointer_badbd1434cf45cf0b25e47247b7be5a7)() const = &::clang::ObjCMethodDecl::hasSkippedBody;
    bool  (::clang::ObjCMethodDecl::*method_pointer_c7b10b4372105766aff9991edf911f2c)() const = &::clang::ObjCMethodDecl::isClassMethod;
    bool  (::clang::ObjCMethodDecl::*method_pointer_7f29c336bc2659df928457a6f2a553cc)() const = &::clang::ObjCMethodDecl::isDefined;
    bool  (::clang::ObjCMethodDecl::*method_pointer_41d68518488b54b2a1f7a3cd36426024)() const = &::clang::ObjCMethodDecl::isInstanceMethod;
    bool  (::clang::ObjCMethodDecl::*method_pointer_2b0ef6e3cca95b19908eab33e9408151)() const = &::clang::ObjCMethodDecl::isOverriding;
    bool  (::clang::ObjCMethodDecl::*method_pointer_4705de7eee92596b8a3cda1f476e1a50)() const = &::clang::ObjCMethodDecl::isPropertyAccessor;
    bool  (::clang::ObjCMethodDecl::*method_pointer_5d9033a936f75296aee6298a44ac7b82)() const = &::clang::ObjCMethodDecl::isRedeclaration;
    bool  (::clang::ObjCMethodDecl::*method_pointer_605bf23931b45142a8ee7b35c277cc11)() const = &::clang::ObjCMethodDecl::isThisDeclarationADefinition;
    bool  (::clang::ObjCMethodDecl::*method_pointer_16611c5980cd5b499539d74265d4eaab)() const = &::clang::ObjCMethodDecl::isThisDeclarationADesignatedInitializer;
    bool  (::clang::ObjCMethodDecl::*method_pointer_151be3b5662357159b8f224be0d9105d)() const = &::clang::ObjCMethodDecl::isVariadic;
    unsigned int  (::clang::ObjCMethodDecl::*method_pointer_1a505f356348546ebb897f92bfc0ece4)() const = &::clang::ObjCMethodDecl::param_size;
    void  (::clang::ObjCMethodDecl::*method_pointer_712f9a3c62825e998ab5b3fa868b2493)(class ::clang::ObjCMethodDecl  const *) = &::clang::ObjCMethodDecl::setAsRedeclaration;
    void  (::clang::ObjCMethodDecl::*method_pointer_f620676ae9e051ea90615919c4d01940)(class ::clang::ImplicitParamDecl  *) = &::clang::ObjCMethodDecl::setCmdDecl;
    void  (::clang::ObjCMethodDecl::*method_pointer_77a10178f4445c7284a7dc2c0385654a)(bool ) = &::clang::ObjCMethodDecl::setDefined;
    void  (::clang::ObjCMethodDecl::*method_pointer_298959ec865a5ffc820f61a6d0a1e5e5)(bool ) = &::clang::ObjCMethodDecl::setHasSkippedBody;
    void  (::clang::ObjCMethodDecl::*method_pointer_2db4e50cf1585999ab08d6fbfb696b59)(bool ) = &::clang::ObjCMethodDecl::setInstanceMethod;
    void  (::clang::ObjCMethodDecl::*method_pointer_c6c07a8404ef548e9e8e56f490d4967b)(unsigned long int ) = &::clang::ObjCMethodDecl::setLazyBody;
    void  (::clang::ObjCMethodDecl::*method_pointer_aee05cf38d3f5599b96d5185efba45b0)(bool ) = &::clang::ObjCMethodDecl::setOverriding;
    void  (::clang::ObjCMethodDecl::*method_pointer_e05ee00c655a5ed38082dd80183cf43f)(bool ) = &::clang::ObjCMethodDecl::setPropertyAccessor;
    void  (::clang::ObjCMethodDecl::*method_pointer_4ab75b170be150db91832b5fa0e5414c)(class ::clang::QualType ) = &::clang::ObjCMethodDecl::setReturnType;
    void  (::clang::ObjCMethodDecl::*method_pointer_17cc660f66b05ad39306ce4078b61a1f)(class ::clang::ImplicitParamDecl  *) = &::clang::ObjCMethodDecl::setSelfDecl;
    void  (::clang::ObjCMethodDecl::*method_pointer_a2182950d63e5174bb274893ee8c3ff7)(bool ) = &::clang::ObjCMethodDecl::setVariadic;
    boost::python::class_< class ::clang::ObjCMethodDecl, autowig::HeldType< class ::clang::ObjCMethodDecl >, boost::python::bases< class ::clang::NamedDecl, class ::clang::DeclContext >, boost::noncopyable > class_7130d3fcb2735f6eb2eb3ef44aefdbc3("ObjCMethodDecl", "", boost::python::no_init);
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("create_deserialized", method_pointer_8e85483e6ebd5bcdb2fa8bb4b1510b36, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_related_result_type", method_pointer_9e9b5a23e46c5be2affebfcba12ab565, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("cast_from_decl_context", method_pointer_7064d15eb5c55211bc79c1d3e067dd05, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("cast_to_decl_context", method_pointer_ce375dfa014a537ea43c8719ed8c754a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("classof", method_pointer_95d4a90747c15ba0a4c125238156a7d4, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("classof_kind", method_pointer_db0f49846c0157f9bfd3e1dbc66a23c3, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("create_implicit_params", method_pointer_65d28023ed4c5cd0b1b66d8f543a8abd, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("find_property_decl", method_pointer_0c45790e42fe5ccc8eb9564e7ed99000, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_canonical_decl", method_pointer_f3622a97d0b353b886441c9bba811b2c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_canonical_decl", method_pointer_aa4d421fa1005e0b917ccd85932449e3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_class_interface", method_pointer_f66d7d0fbdc053f6a5d65bd04a214794, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_class_interface", method_pointer_57db28e359075be784a83a7337726ed9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_cmd_decl", method_pointer_fcbcf6e4928b5cfa9a6ba2050efe53ea, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_declarator_end_loc", method_pointer_e04cb23013fd5cd6aeab6d8a9f4a2a01, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_loc_end", method_pointer_2986039edc755d708b47265407f2c07f, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_loc_start", method_pointer_bf6b2c6b11a2505aa4a7ed007abe0f0e, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_num_selector_locs", method_pointer_7999f78b102c5e01aa0717a111d0cc8c, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_return_type", method_pointer_b191212b715b5ec6a51d3e6956bd7f8f, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_selector_loc", method_pointer_dc507d2676ef51248031c4a1b1af2a25, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_selector_start_loc", method_pointer_44da91195aa1543fbc822bf22fa3f05d, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_self_decl", method_pointer_745fbfc65d8f5940b0b39e088cac0279, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_self_type", method_pointer_1d2999812d395ea68c4a047901946ab4, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_send_result_type", method_pointer_e72570a39cd8547da794fd2a1983e49f, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_send_result_type", method_pointer_737ce9e653e2548582acf8b444b08930, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("has_body", method_pointer_216a86ad6cef58049200dfe60185a181, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("has_related_result_type", method_pointer_143accda3ca55158b8b5e4524328fc3c, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("has_skipped_body", method_pointer_badbd1434cf45cf0b25e47247b7be5a7, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_class_method", method_pointer_c7b10b4372105766aff9991edf911f2c, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_defined", method_pointer_7f29c336bc2659df928457a6f2a553cc, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_instance_method", method_pointer_41d68518488b54b2a1f7a3cd36426024, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_overriding", method_pointer_2b0ef6e3cca95b19908eab33e9408151, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_property_accessor", method_pointer_4705de7eee92596b8a3cda1f476e1a50, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_redeclaration", method_pointer_5d9033a936f75296aee6298a44ac7b82, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_this_declaration_a_definition", method_pointer_605bf23931b45142a8ee7b35c277cc11, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_this_declaration_a_designated_initializer", method_pointer_16611c5980cd5b499539d74265d4eaab, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_variadic", method_pointer_151be3b5662357159b8f224be0d9105d, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("param_size", method_pointer_1a505f356348546ebb897f92bfc0ece4, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_as_redeclaration", method_pointer_712f9a3c62825e998ab5b3fa868b2493, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_cmd_decl", method_pointer_f620676ae9e051ea90615919c4d01940, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_defined", method_pointer_77a10178f4445c7284a7dc2c0385654a, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_has_skipped_body", method_pointer_298959ec865a5ffc820f61a6d0a1e5e5, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_instance_method", method_pointer_2db4e50cf1585999ab08d6fbfb696b59, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_lazy_body", method_pointer_c6c07a8404ef548e9e8e56f490d4967b, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_overriding", method_pointer_aee05cf38d3f5599b96d5185efba45b0, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_property_accessor", method_pointer_e05ee00c655a5ed38082dd80183cf43f, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_return_type", method_pointer_4ab75b170be150db91832b5fa0e5414c, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_self_decl", method_pointer_17cc660f66b05ad39306ce4078b61a1f, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_variadic", method_pointer_a2182950d63e5174bb274893ee8c3ff7, "");
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