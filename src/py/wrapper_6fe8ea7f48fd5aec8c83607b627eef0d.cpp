#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_6fe8ea7f48fd5aec8c83607b627eef0d()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_bd05b4eea0c45f7f84387fcac2f120d0)(enum ::clang::Decl::Kind ) = ::clang::ObjCInterfaceDecl::classofKind;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_5ccbf3defcb25f369b276f3219964c1d)() const = &::clang::ObjCInterfaceDecl::ivar_empty;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_696d40a202005ed5a4f4d641f247b263)() const = &::clang::ObjCInterfaceDecl::isThisDeclarationADefinition;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_5aa832d2e31a5c358e3adca399d34c26)() const = &::clang::ObjCInterfaceDecl::isImplicitInterfaceDecl;
    class ::clang::ObjCObjectType  const * (::clang::ObjCInterfaceDecl::*method_pointer_c1cad66dc4fa53b1ade7df1a15a3f875)() const = &::clang::ObjCInterfaceDecl::getSuperClassType;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_fcb8f022d24f5aa182ee33c4e7ac0fa7)() const = &::clang::ObjCInterfaceDecl::declaresOrInheritsDesignatedInitializers;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_468d336bcf72598e82fbff1b43e48c35)(class ::clang::ObjCInterfaceDecl  const *) const = &::clang::ObjCInterfaceDecl::isSuperClassOf;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_a2316cd9439255b7a1f74050572fd7d6)(class ::clang::ObjCProtocolDecl  *, bool , bool ) = &::clang::ObjCInterfaceDecl::ClassImplementsProtocol;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_5978a700f2af5b0694ff36c967b9da90)() = &::clang::ObjCInterfaceDecl::startDefinition;
    class ::clang::ObjCCategoryDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_63424554709a576faf9ef5c97e31ea71)() const = &::clang::ObjCInterfaceDecl::getCategoryListRaw;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_aa4adb1ffddf5114816c801f622abff6)() const = &::clang::ObjCInterfaceDecl::known_extensions_empty;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_488b023af3255025ab2d64470377ac80)() const = &::clang::ObjCInterfaceDecl::isArcWeakrefUnavailable;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCInterfaceDecl::*method_pointer_0715e2f285c8560f88589b0955dce0ad)() const = &::clang::ObjCInterfaceDecl::getCanonicalDecl;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_fae76452b22f5cff8fcc51ffd259a6fb)() = &::clang::ObjCInterfaceDecl::getDefinition;
    class ::clang::Type  const * (::clang::ObjCInterfaceDecl::*method_pointer_93ecf8892d975434966dd8abef2e2126)() const = &::clang::ObjCInterfaceDecl::getTypeForDecl;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_e807aa333816524b960007672efed0f7)() = &::clang::ObjCInterfaceDecl::setHasDesignatedInitializers;
    unsigned int  (::clang::ObjCInterfaceDecl::*method_pointer_782c0711ae885f388194d4e76af204b0)() const = &::clang::ObjCInterfaceDecl::ivar_size;
    bool  (*method_pointer_4ebeda78a0325130be8ab1ac8d3875fe)(class ::clang::Decl  const *) = ::clang::ObjCInterfaceDecl::classof;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_57914595b0125b5eabc8c1b3537fe900)() const = &::clang::ObjCInterfaceDecl::visible_extensions_empty;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_ebafbe5aecc1561e8a23d8fc9fe13430)() = &::clang::ObjCInterfaceDecl::setExternallyCompleted;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_beb4321d9db25b19abfc6c0ed02a959b)(class ::clang::ObjCIvarDecl  *) = &::clang::ObjCInterfaceDecl::setIvarList;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCInterfaceDecl::*method_pointer_f411d8ed35605d5084bfc069ea85cb49)() const = &::clang::ObjCInterfaceDecl::isObjCRequiresPropertyDefs;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_b4e741d6d8fb5270858d767667cbb28b)() const = &::clang::ObjCInterfaceDecl::hasDefinition;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_093399bdee8a59b89970d2c26c149f20)() = &::clang::ObjCInterfaceDecl::getCanonicalDecl;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_ef1c7b32232751b584fba35ea8fd9164)() const = &::clang::ObjCInterfaceDecl::known_categories_empty;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCInterfaceDecl::*method_pointer_5fe0b914f5a359fdaebaf60ccb7e57b2)() const = &::clang::ObjCInterfaceDecl::getDefinition;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_b723a6f3070b5754ad6cda1f674575aa)() const = &::clang::ObjCInterfaceDecl::hasDesignatedInitializers;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_7b28a929bce65253bee0c96297a33982)(class ::clang::ObjCCategoryDecl  *) = &::clang::ObjCInterfaceDecl::setCategoryListRaw;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_d91b8a750c8f5362ad3be71426140474)() const = &::clang::ObjCInterfaceDecl::visible_categories_empty;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_eb14ebe4d7dc553a950d2d0ff6e7169d)(class ::clang::Type  const *) const = &::clang::ObjCInterfaceDecl::setTypeForDecl;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_881356a5e3165105bbcca87dfe72eee9)(class ::clang::ObjCImplementationDecl  *) = &::clang::ObjCInterfaceDecl::setImplementation;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_24c7506225c65d07b326f5049f4a08a3)() const = &::clang::ObjCInterfaceDecl::getSuperClass;
    class ::clang::ObjCImplementationDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_10e0f873b5e55f3b93a81ce8f6a389aa)() const = &::clang::ObjCInterfaceDecl::getImplementation;
    boost::python::class_< class ::clang::ObjCInterfaceDecl, autowig::HeldType< class ::clang::ObjCInterfaceDecl >, boost::python::bases< class ::clang::ObjCContainerDecl >, boost::noncopyable > class_6fe8ea7f48fd5aec8c83607b627eef0d("ObjCInterfaceDecl", "", boost::python::no_init);
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("classof_kind", method_pointer_bd05b4eea0c45f7f84387fcac2f120d0, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("ivar_empty", method_pointer_5ccbf3defcb25f369b276f3219964c1d, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_this_declaration_a_definition", method_pointer_696d40a202005ed5a4f4d641f247b263, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_implicit_interface_decl", method_pointer_5aa832d2e31a5c358e3adca399d34c26, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_super_class_type", method_pointer_c1cad66dc4fa53b1ade7df1a15a3f875, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("declares_or_inherits_designated_initializers", method_pointer_fcb8f022d24f5aa182ee33c4e7ac0fa7, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_super_class_of", method_pointer_468d336bcf72598e82fbff1b43e48c35, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("class_implements_protocol", method_pointer_a2316cd9439255b7a1f74050572fd7d6, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("start_definition", method_pointer_5978a700f2af5b0694ff36c967b9da90, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_category_list_raw", method_pointer_63424554709a576faf9ef5c97e31ea71, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("known_extensions_empty", method_pointer_aa4adb1ffddf5114816c801f622abff6, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_arc_weakref_unavailable", method_pointer_488b023af3255025ab2d64470377ac80, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_canonical_decl", method_pointer_0715e2f285c8560f88589b0955dce0ad, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_definition", method_pointer_fae76452b22f5cff8fcc51ffd259a6fb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_type_for_decl", method_pointer_93ecf8892d975434966dd8abef2e2126, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_has_designated_initializers", method_pointer_e807aa333816524b960007672efed0f7, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("ivar_size", method_pointer_782c0711ae885f388194d4e76af204b0, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("classof", method_pointer_4ebeda78a0325130be8ab1ac8d3875fe, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("visible_extensions_empty", method_pointer_57914595b0125b5eabc8c1b3537fe900, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_externally_completed", method_pointer_ebafbe5aecc1561e8a23d8fc9fe13430, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_ivar_list", method_pointer_beb4321d9db25b19abfc6c0ed02a959b, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_obj_c_requires_property_defs", method_pointer_f411d8ed35605d5084bfc069ea85cb49, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("has_definition", method_pointer_b4e741d6d8fb5270858d767667cbb28b, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_canonical_decl", method_pointer_093399bdee8a59b89970d2c26c149f20, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("known_categories_empty", method_pointer_ef1c7b32232751b584fba35ea8fd9164, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_definition", method_pointer_5fe0b914f5a359fdaebaf60ccb7e57b2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("has_designated_initializers", method_pointer_b723a6f3070b5754ad6cda1f674575aa, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_category_list_raw", method_pointer_7b28a929bce65253bee0c96297a33982, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("visible_categories_empty", method_pointer_d91b8a750c8f5362ad3be71426140474, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_type_for_decl", method_pointer_eb14ebe4d7dc553a950d2d0ff6e7169d, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_implementation", method_pointer_881356a5e3165105bbcca87dfe72eee9, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_super_class", method_pointer_24c7506225c65d07b326f5049f4a08a3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_implementation", method_pointer_10e0f873b5e55f3b93a81ce8f6a389aa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.staticmethod("classof_kind");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCInterfaceDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCInterfaceDecl >, autowig::HeldType< class ::clang::ObjCContainerDecl > >();
    }

}