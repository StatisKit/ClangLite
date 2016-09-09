/**********************************************************************************/
/*                                                                                */
/* PyClangLite: Python bindings for Clang                                         */
/*                                                                                */
/* Homepage: http://pyclanglite.readthedocs.io/                                   */
/*                                                                                */
/* Copyright (c) 2016 Pierre Fernique                                             */
/*                                                                                */
/* This software is distributed under the CeCILL-C license. You should have       */
/* received a copy of the legalcode along with this work. If not, see             */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/* File authors: Pierre Fernique <pfernique@gmail.com> (36)                       */
/*                                                                                */
/**********************************************************************************/

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
    class ::clang::ObjCMethodDecl  * (*method_pointer_0c209367674b59f08dd0676089591de7)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCMethodDecl::CreateDeserialized;
    void  (::clang::ObjCMethodDecl::*method_pointer_4bbf4eb59bbd5e779669bebbdfbff670)(bool ) = &::clang::ObjCMethodDecl::SetRelatedResultType;
    class ::clang::ObjCMethodDecl  * (*method_pointer_ddd65694b53756dcae296ed28f2c839b)(class ::clang::DeclContext  const *) = ::clang::ObjCMethodDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_73f9763d139557b59e22c7210e3ad00f)(class ::clang::ObjCMethodDecl  const *) = ::clang::ObjCMethodDecl::castToDeclContext;
    bool  (*method_pointer_871664ccf50253fcb80f6c1999c61c8f)(class ::clang::Decl  const *) = ::clang::ObjCMethodDecl::classof;
    bool  (*method_pointer_b3099e5690c85b64afc485faa233ed07)(enum ::clang::Decl::Kind ) = ::clang::ObjCMethodDecl::classofKind;
    void  (::clang::ObjCMethodDecl::*method_pointer_c10284428a4a5ad0af8a121284725e19)(class ::clang::ASTContext  &, class ::clang::ObjCInterfaceDecl  const *) = &::clang::ObjCMethodDecl::createImplicitParams;
    class ::clang::ObjCPropertyDecl  const * (::clang::ObjCMethodDecl::*method_pointer_c16e48e2657b5d158925fa249eba50c0)(bool ) const = &::clang::ObjCMethodDecl::findPropertyDecl;
    class ::clang::ObjCMethodDecl  * (::clang::ObjCMethodDecl::*method_pointer_5adadc4fc00157bb9a3bec361c78f10c)() = &::clang::ObjCMethodDecl::getCanonicalDecl;
    class ::clang::ObjCMethodDecl  const * (::clang::ObjCMethodDecl::*method_pointer_1277f63cf73650f3ac87fadd964000c9)() const = &::clang::ObjCMethodDecl::getCanonicalDecl;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCMethodDecl::*method_pointer_1957e5c3cc885582ab7b83372e591345)() const = &::clang::ObjCMethodDecl::getClassInterface;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCMethodDecl::*method_pointer_ceabd666dc4956c6b21b9f96a1a440eb)() = &::clang::ObjCMethodDecl::getClassInterface;
    class ::clang::ImplicitParamDecl  * (::clang::ObjCMethodDecl::*method_pointer_d637ad4851ba5ab7a1c71cf66cbde856)() const = &::clang::ObjCMethodDecl::getCmdDecl;
    class ::clang::SourceLocation  (::clang::ObjCMethodDecl::*method_pointer_19cf07e7031f51b596949e3ae6432b29)() const = &::clang::ObjCMethodDecl::getDeclaratorEndLoc;
    class ::clang::SourceLocation  (::clang::ObjCMethodDecl::*method_pointer_4fd35838601d5864bdfb2d5743554aa4)() const = &::clang::ObjCMethodDecl::getLocEnd;
    class ::clang::SourceLocation  (::clang::ObjCMethodDecl::*method_pointer_04814c635c1a5fd0940974700b2b1e3c)() const = &::clang::ObjCMethodDecl::getLocStart;
    unsigned int  (::clang::ObjCMethodDecl::*method_pointer_33b3b8cfd28155c09cb830ccb3d729a5)() const = &::clang::ObjCMethodDecl::getNumSelectorLocs;
    class ::clang::QualType  (::clang::ObjCMethodDecl::*method_pointer_d07f7b0fca5454b2b7d2d217edaa60f4)() const = &::clang::ObjCMethodDecl::getReturnType;
    class ::clang::SourceLocation  (::clang::ObjCMethodDecl::*method_pointer_a809357a4d695c84a2ee8efc20b62f71)(unsigned int ) const = &::clang::ObjCMethodDecl::getSelectorLoc;
    class ::clang::SourceLocation  (::clang::ObjCMethodDecl::*method_pointer_0517748e93445a6ba35656214eb07fdb)() const = &::clang::ObjCMethodDecl::getSelectorStartLoc;
    class ::clang::ImplicitParamDecl  * (::clang::ObjCMethodDecl::*method_pointer_8e77cee1838f54c59fb8a4f8b4b90f3f)() const = &::clang::ObjCMethodDecl::getSelfDecl;
    class ::clang::QualType  (::clang::ObjCMethodDecl::*method_pointer_14d4512adbb85a279b08e96267469ecd)(class ::clang::ASTContext  &, class ::clang::ObjCInterfaceDecl  const *, bool  &, bool  &) = &::clang::ObjCMethodDecl::getSelfType;
    class ::clang::QualType  (::clang::ObjCMethodDecl::*method_pointer_88d42412847f59dd9698708b800fa61c)() const = &::clang::ObjCMethodDecl::getSendResultType;
    class ::clang::QualType  (::clang::ObjCMethodDecl::*method_pointer_6bd7d82218f25190aed4ac856a9c7de5)(class ::clang::QualType ) const = &::clang::ObjCMethodDecl::getSendResultType;
    bool  (::clang::ObjCMethodDecl::*method_pointer_33292fb6528f5aff9d8e46e9a8ff0cc0)() const = &::clang::ObjCMethodDecl::hasBody;
    bool  (::clang::ObjCMethodDecl::*method_pointer_145b6d60893d5de685896ddcd0d89a74)() const = &::clang::ObjCMethodDecl::hasRelatedResultType;
    bool  (::clang::ObjCMethodDecl::*method_pointer_7fdef077ccd854e29a4c01f2451d5a93)() const = &::clang::ObjCMethodDecl::hasSkippedBody;
    bool  (::clang::ObjCMethodDecl::*method_pointer_7e523f6b9b5858a49c6f8b2ba2f58037)() const = &::clang::ObjCMethodDecl::isClassMethod;
    bool  (::clang::ObjCMethodDecl::*method_pointer_102e01a988bd53a491956bc0b6342683)() const = &::clang::ObjCMethodDecl::isDefined;
    bool  (::clang::ObjCMethodDecl::*method_pointer_0654b7b1988e5a31b5ac56c4e344af3d)() const = &::clang::ObjCMethodDecl::isInstanceMethod;
    bool  (::clang::ObjCMethodDecl::*method_pointer_32917f49429c5d0e94df6ddacc7e2322)() const = &::clang::ObjCMethodDecl::isOverriding;
    bool  (::clang::ObjCMethodDecl::*method_pointer_30fc8d75009759b3aa0c199900067c82)() const = &::clang::ObjCMethodDecl::isPropertyAccessor;
    bool  (::clang::ObjCMethodDecl::*method_pointer_e52bd182343a55eab944fa195848b2a5)() const = &::clang::ObjCMethodDecl::isRedeclaration;
    bool  (::clang::ObjCMethodDecl::*method_pointer_5e3c0c9eb93e50568279b2f1c55c25a1)() const = &::clang::ObjCMethodDecl::isThisDeclarationADefinition;
    bool  (::clang::ObjCMethodDecl::*method_pointer_ee81ede6778b54d7a64b8768ca80cb13)() const = &::clang::ObjCMethodDecl::isThisDeclarationADesignatedInitializer;
    bool  (::clang::ObjCMethodDecl::*method_pointer_f4326844763258e7afee3d69db7db2b4)() const = &::clang::ObjCMethodDecl::isVariadic;
    unsigned int  (::clang::ObjCMethodDecl::*method_pointer_08a76fdd94dd5f00a4c0cf7d03b40301)() const = &::clang::ObjCMethodDecl::param_size;
    void  (::clang::ObjCMethodDecl::*method_pointer_352be952cfe2564987a3d8eb4e5b02d9)(class ::clang::ObjCMethodDecl  const *) = &::clang::ObjCMethodDecl::setAsRedeclaration;
    void  (::clang::ObjCMethodDecl::*method_pointer_cb14b719629a53fca0645602b7e5f351)(class ::clang::ImplicitParamDecl  *) = &::clang::ObjCMethodDecl::setCmdDecl;
    void  (::clang::ObjCMethodDecl::*method_pointer_42bc7fd445ba5c32af371d67313483b5)(bool ) = &::clang::ObjCMethodDecl::setDefined;
    void  (::clang::ObjCMethodDecl::*method_pointer_5b496664cfd05634b2cf4643c726dea2)(bool ) = &::clang::ObjCMethodDecl::setHasSkippedBody;
    void  (::clang::ObjCMethodDecl::*method_pointer_92f8129fd0785a0ca00c98e1a681c8ab)(bool ) = &::clang::ObjCMethodDecl::setInstanceMethod;
    void  (::clang::ObjCMethodDecl::*method_pointer_89542598a299543890e11544fe5b2860)(unsigned long int ) = &::clang::ObjCMethodDecl::setLazyBody;
    void  (::clang::ObjCMethodDecl::*method_pointer_7b4b904b62a851fabf1a4e80e9ae2b7d)(bool ) = &::clang::ObjCMethodDecl::setOverriding;
    void  (::clang::ObjCMethodDecl::*method_pointer_bc16580c87b1572e9daa5b9e100d655f)(bool ) = &::clang::ObjCMethodDecl::setPropertyAccessor;
    void  (::clang::ObjCMethodDecl::*method_pointer_c8b807e5430e5bff8f62a7958c34ff13)(class ::clang::QualType ) = &::clang::ObjCMethodDecl::setReturnType;
    void  (::clang::ObjCMethodDecl::*method_pointer_69c56960cc5b5686abb8845b86a0c4d1)(class ::clang::ImplicitParamDecl  *) = &::clang::ObjCMethodDecl::setSelfDecl;
    void  (::clang::ObjCMethodDecl::*method_pointer_b04e1850fd6b56d0affa87ed3d270513)(bool ) = &::clang::ObjCMethodDecl::setVariadic;
    boost::python::class_< class ::clang::ObjCMethodDecl, autowig::HeldType< class ::clang::ObjCMethodDecl >, boost::python::bases< class ::clang::NamedDecl, class ::clang::DeclContext >, boost::noncopyable > class_7130d3fcb2735f6eb2eb3ef44aefdbc3("ObjCMethodDecl", "", boost::python::no_init);
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("create_deserialized", method_pointer_0c209367674b59f08dd0676089591de7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_related_result_type", method_pointer_4bbf4eb59bbd5e779669bebbdfbff670, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("cast_from_decl_context", method_pointer_ddd65694b53756dcae296ed28f2c839b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("cast_to_decl_context", method_pointer_73f9763d139557b59e22c7210e3ad00f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("classof", method_pointer_871664ccf50253fcb80f6c1999c61c8f, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("classof_kind", method_pointer_b3099e5690c85b64afc485faa233ed07, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("create_implicit_params", method_pointer_c10284428a4a5ad0af8a121284725e19, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("find_property_decl", method_pointer_c16e48e2657b5d158925fa249eba50c0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_canonical_decl", method_pointer_5adadc4fc00157bb9a3bec361c78f10c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_canonical_decl", method_pointer_1277f63cf73650f3ac87fadd964000c9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_class_interface", method_pointer_1957e5c3cc885582ab7b83372e591345, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_class_interface", method_pointer_ceabd666dc4956c6b21b9f96a1a440eb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_cmd_decl", method_pointer_d637ad4851ba5ab7a1c71cf66cbde856, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_declarator_end_loc", method_pointer_19cf07e7031f51b596949e3ae6432b29, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_loc_end", method_pointer_4fd35838601d5864bdfb2d5743554aa4, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_loc_start", method_pointer_04814c635c1a5fd0940974700b2b1e3c, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_num_selector_locs", method_pointer_33b3b8cfd28155c09cb830ccb3d729a5, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_return_type", method_pointer_d07f7b0fca5454b2b7d2d217edaa60f4, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_selector_loc", method_pointer_a809357a4d695c84a2ee8efc20b62f71, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_selector_start_loc", method_pointer_0517748e93445a6ba35656214eb07fdb, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_self_decl", method_pointer_8e77cee1838f54c59fb8a4f8b4b90f3f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_self_type", method_pointer_14d4512adbb85a279b08e96267469ecd, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_send_result_type", method_pointer_88d42412847f59dd9698708b800fa61c, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("get_send_result_type", method_pointer_6bd7d82218f25190aed4ac856a9c7de5, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("has_body", method_pointer_33292fb6528f5aff9d8e46e9a8ff0cc0, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("has_related_result_type", method_pointer_145b6d60893d5de685896ddcd0d89a74, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("has_skipped_body", method_pointer_7fdef077ccd854e29a4c01f2451d5a93, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_class_method", method_pointer_7e523f6b9b5858a49c6f8b2ba2f58037, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_defined", method_pointer_102e01a988bd53a491956bc0b6342683, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_instance_method", method_pointer_0654b7b1988e5a31b5ac56c4e344af3d, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_overriding", method_pointer_32917f49429c5d0e94df6ddacc7e2322, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_property_accessor", method_pointer_30fc8d75009759b3aa0c199900067c82, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_redeclaration", method_pointer_e52bd182343a55eab944fa195848b2a5, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_this_declaration_a_definition", method_pointer_5e3c0c9eb93e50568279b2f1c55c25a1, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_this_declaration_a_designated_initializer", method_pointer_ee81ede6778b54d7a64b8768ca80cb13, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("is_variadic", method_pointer_f4326844763258e7afee3d69db7db2b4, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("param_size", method_pointer_08a76fdd94dd5f00a4c0cf7d03b40301, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_as_redeclaration", method_pointer_352be952cfe2564987a3d8eb4e5b02d9, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_cmd_decl", method_pointer_cb14b719629a53fca0645602b7e5f351, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_defined", method_pointer_42bc7fd445ba5c32af371d67313483b5, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_has_skipped_body", method_pointer_5b496664cfd05634b2cf4643c726dea2, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_instance_method", method_pointer_92f8129fd0785a0ca00c98e1a681c8ab, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_lazy_body", method_pointer_89542598a299543890e11544fe5b2860, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_overriding", method_pointer_7b4b904b62a851fabf1a4e80e9ae2b7d, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_property_accessor", method_pointer_bc16580c87b1572e9daa5b9e100d655f, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_return_type", method_pointer_c8b807e5430e5bff8f62a7958c34ff13, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_self_decl", method_pointer_69c56960cc5b5686abb8845b86a0c4d1, "");
    class_7130d3fcb2735f6eb2eb3ef44aefdbc3.def("set_variadic", method_pointer_b04e1850fd6b56d0affa87ed3d270513, "");
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