#include "_clanglite.h"


namespace autowig
{
}


void wrapper_6fe8ea7f48fd5aec8c83607b627eef0d()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_33f372dfb2b35beea68a1b9e275b887d)(class ::clang::ObjCProtocolDecl  *, bool , bool ) = &::clang::ObjCInterfaceDecl::ClassImplementsProtocol;
    bool  (*method_pointer_dbcf9a77c36f5b469eff54fcf0d927b2)(class ::clang::Decl  const *) = ::clang::ObjCInterfaceDecl::classof;
    bool  (*method_pointer_91b9b89e642d5a628cfa7db5e61c4ebe)(enum ::clang::Decl::Kind ) = ::clang::ObjCInterfaceDecl::classofKind;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_fe96c13b897e5a9794f3e0fa0f59878d)() const = &::clang::ObjCInterfaceDecl::declaresOrInheritsDesignatedInitializers;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCInterfaceDecl::*method_pointer_0773de8f962756d792483f640e9e6642)() const = &::clang::ObjCInterfaceDecl::getCanonicalDecl;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_444fe368be83552d8aba7e80c10241d7)() = &::clang::ObjCInterfaceDecl::getCanonicalDecl;
    class ::clang::ObjCCategoryDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_aca61c0cd44f5cff8754cf9138396843)() const = &::clang::ObjCInterfaceDecl::getCategoryListRaw;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCInterfaceDecl::*method_pointer_620cb83158f454f1a154c5d38e738d50)() const = &::clang::ObjCInterfaceDecl::getDefinition;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_46574243c31659c09c54504aa9d3408c)() = &::clang::ObjCInterfaceDecl::getDefinition;
    class ::clang::ObjCImplementationDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_1ed07d6325455a78994bbf9e1602ecfc)() const = &::clang::ObjCInterfaceDecl::getImplementation;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_abf2b46cea4b587290bbf145fe71a0a6)() const = &::clang::ObjCInterfaceDecl::getSuperClass;
    class ::clang::ObjCObjectType  const * (::clang::ObjCInterfaceDecl::*method_pointer_b6901d8d97d259caa84a94950464dae2)() const = &::clang::ObjCInterfaceDecl::getSuperClassType;
    class ::clang::Type  const * (::clang::ObjCInterfaceDecl::*method_pointer_27b7c286383458c18f80941b85d3779c)() const = &::clang::ObjCInterfaceDecl::getTypeForDecl;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_8867cc39029e512fa729f0cd44e95621)() const = &::clang::ObjCInterfaceDecl::hasDefinition;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_0d7e4fa4ad9b5aaa96392b62575d66d2)() const = &::clang::ObjCInterfaceDecl::hasDesignatedInitializers;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_410424e52ab65b87a0197e1a22d56f30)() const = &::clang::ObjCInterfaceDecl::isArcWeakrefUnavailable;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_fdee47d56026518a9254a1f3a44c6f75)() const = &::clang::ObjCInterfaceDecl::isImplicitInterfaceDecl;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCInterfaceDecl::*method_pointer_219db4b82acf5137b13c84fdf4c8fea4)() const = &::clang::ObjCInterfaceDecl::isObjCRequiresPropertyDefs;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_965833c425a055148f5bd76fc7ae024b)(class ::clang::ObjCInterfaceDecl  const *) const = &::clang::ObjCInterfaceDecl::isSuperClassOf;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_9714756bae9057c2bdbbd9be625d5fee)() const = &::clang::ObjCInterfaceDecl::isThisDeclarationADefinition;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_3de7c776a7be5208b7bb8bea54d06aa6)() const = &::clang::ObjCInterfaceDecl::ivar_empty;
    unsigned int  (::clang::ObjCInterfaceDecl::*method_pointer_7e67c7baccb8593ca628263976e10574)() const = &::clang::ObjCInterfaceDecl::ivar_size;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_11791e9951f8573aa8d3bcf650225902)() const = &::clang::ObjCInterfaceDecl::known_categories_empty;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_1edf5139d590508cb13eec8d38649564)() const = &::clang::ObjCInterfaceDecl::known_extensions_empty;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_6fb77e56479c58c2a64307491935886a)(class ::clang::ObjCCategoryDecl  *) = &::clang::ObjCInterfaceDecl::setCategoryListRaw;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_caff41f198a4533694cb5ea9c7e54901)() = &::clang::ObjCInterfaceDecl::setExternallyCompleted;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_2eb0de56b0205dd189e1afed3f56c971)() = &::clang::ObjCInterfaceDecl::setHasDesignatedInitializers;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_c56d8f8aa79a5b0f840153f2b69d193d)(class ::clang::ObjCImplementationDecl  *) = &::clang::ObjCInterfaceDecl::setImplementation;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_baad41abf1cd5cc592313a12cf594cab)(class ::clang::ObjCIvarDecl  *) = &::clang::ObjCInterfaceDecl::setIvarList;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_96654bde99d25f5f83ccb5df6f762e5e)(class ::clang::Type  const *) const = &::clang::ObjCInterfaceDecl::setTypeForDecl;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_ac256c7e5ab6589a8f5688c8696a83dd)() = &::clang::ObjCInterfaceDecl::startDefinition;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_9b00e382fa0a56de84cbb27a086a87cf)() const = &::clang::ObjCInterfaceDecl::visible_categories_empty;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_e5ff62629d5a551296a2ac30afcdb0bf)() const = &::clang::ObjCInterfaceDecl::visible_extensions_empty;
    boost::python::class_< class ::clang::ObjCInterfaceDecl, autowig::HeldType< class ::clang::ObjCInterfaceDecl >, boost::python::bases< class ::clang::ObjCContainerDecl >, boost::noncopyable > class_6fe8ea7f48fd5aec8c83607b627eef0d("ObjCInterfaceDecl", "", boost::python::no_init);
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("class_implements_protocol", method_pointer_33f372dfb2b35beea68a1b9e275b887d, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("classof", method_pointer_dbcf9a77c36f5b469eff54fcf0d927b2, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("classof_kind", method_pointer_91b9b89e642d5a628cfa7db5e61c4ebe, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("declares_or_inherits_designated_initializers", method_pointer_fe96c13b897e5a9794f3e0fa0f59878d, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_canonical_decl", method_pointer_0773de8f962756d792483f640e9e6642, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_canonical_decl", method_pointer_444fe368be83552d8aba7e80c10241d7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_category_list_raw", method_pointer_aca61c0cd44f5cff8754cf9138396843, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_definition", method_pointer_620cb83158f454f1a154c5d38e738d50, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_definition", method_pointer_46574243c31659c09c54504aa9d3408c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_implementation", method_pointer_1ed07d6325455a78994bbf9e1602ecfc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_super_class", method_pointer_abf2b46cea4b587290bbf145fe71a0a6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_super_class_type", method_pointer_b6901d8d97d259caa84a94950464dae2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_type_for_decl", method_pointer_27b7c286383458c18f80941b85d3779c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("has_definition", method_pointer_8867cc39029e512fa729f0cd44e95621, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("has_designated_initializers", method_pointer_0d7e4fa4ad9b5aaa96392b62575d66d2, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_arc_weakref_unavailable", method_pointer_410424e52ab65b87a0197e1a22d56f30, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_implicit_interface_decl", method_pointer_fdee47d56026518a9254a1f3a44c6f75, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_obj_c_requires_property_defs", method_pointer_219db4b82acf5137b13c84fdf4c8fea4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_super_class_of", method_pointer_965833c425a055148f5bd76fc7ae024b, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_this_declaration_a_definition", method_pointer_9714756bae9057c2bdbbd9be625d5fee, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("ivar_empty", method_pointer_3de7c776a7be5208b7bb8bea54d06aa6, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("ivar_size", method_pointer_7e67c7baccb8593ca628263976e10574, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("known_categories_empty", method_pointer_11791e9951f8573aa8d3bcf650225902, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("known_extensions_empty", method_pointer_1edf5139d590508cb13eec8d38649564, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_category_list_raw", method_pointer_6fb77e56479c58c2a64307491935886a, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_externally_completed", method_pointer_caff41f198a4533694cb5ea9c7e54901, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_has_designated_initializers", method_pointer_2eb0de56b0205dd189e1afed3f56c971, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_implementation", method_pointer_c56d8f8aa79a5b0f840153f2b69d193d, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_ivar_list", method_pointer_baad41abf1cd5cc592313a12cf594cab, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_type_for_decl", method_pointer_96654bde99d25f5f83ccb5df6f762e5e, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("start_definition", method_pointer_ac256c7e5ab6589a8f5688c8696a83dd, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("visible_categories_empty", method_pointer_9b00e382fa0a56de84cbb27a086a87cf, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("visible_extensions_empty", method_pointer_e5ff62629d5a551296a2ac30afcdb0bf, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.staticmethod("classof_kind");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCInterfaceDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCInterfaceDecl >, autowig::HeldType< class ::clang::ObjCContainerDecl > >();
    }

}