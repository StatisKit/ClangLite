#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_6fe8ea7f48fd5aec8c83607b627eef0d()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_967d370fefac5183b16e0fc9e525ca1c)(class ::clang::ObjCProtocolDecl  *, bool , bool ) = &::clang::ObjCInterfaceDecl::ClassImplementsProtocol;
    bool  (*method_pointer_e31f3a9cb5095fd9ac0465881f7614fc)(class ::clang::Decl  const *) = ::clang::ObjCInterfaceDecl::classof;
    bool  (*method_pointer_2f58fad0751757bc9598e9dcd16e44ee)(enum ::clang::Decl::Kind ) = ::clang::ObjCInterfaceDecl::classofKind;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_b1e8cd2e5e8556c4885fb8cdfd15cfad)() const = &::clang::ObjCInterfaceDecl::declaresOrInheritsDesignatedInitializers;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCInterfaceDecl::*method_pointer_13d97ae5e8045115b289f961a5762699)() const = &::clang::ObjCInterfaceDecl::getCanonicalDecl;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_c6cffe61b8e75d379c2c19d68a7f9b2b)() = &::clang::ObjCInterfaceDecl::getCanonicalDecl;
    class ::clang::ObjCCategoryDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_b0b8ac3b584c51129e717f42ac7bf293)() const = &::clang::ObjCInterfaceDecl::getCategoryListRaw;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCInterfaceDecl::*method_pointer_c67813d7100d5af9b0590b1ab0cb3e13)() const = &::clang::ObjCInterfaceDecl::getDefinition;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_12768d8d40775d56b99266ffa81d984b)() = &::clang::ObjCInterfaceDecl::getDefinition;
    class ::clang::SourceLocation  (::clang::ObjCInterfaceDecl::*method_pointer_ea8bd83a29eb57ffbc76525d853cbf55)() const = &::clang::ObjCInterfaceDecl::getEndOfDefinitionLoc;
    class ::clang::ObjCImplementationDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_7b44c6fde1935d8589dd1cb3b32e91a5)() const = &::clang::ObjCInterfaceDecl::getImplementation;
    class ::llvm::StringRef  (::clang::ObjCInterfaceDecl::*method_pointer_3d7afe17e27f59f398bf48f18f982dc8)() const = &::clang::ObjCInterfaceDecl::getObjCRuntimeNameAsString;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_6de4c4f173235f2f8bb74bb3ba5f29fe)() const = &::clang::ObjCInterfaceDecl::getSuperClass;
    class ::clang::SourceLocation  (::clang::ObjCInterfaceDecl::*method_pointer_ba04749935b55461a89ffaed2698a139)() const = &::clang::ObjCInterfaceDecl::getSuperClassLoc;
    class ::clang::ObjCObjectType  const * (::clang::ObjCInterfaceDecl::*method_pointer_3d12e01033a55361843e60ef894a9f0b)() const = &::clang::ObjCInterfaceDecl::getSuperClassType;
    class ::clang::Type  const * (::clang::ObjCInterfaceDecl::*method_pointer_6d81b2b16f1658a097c2c756b1fe9a74)() const = &::clang::ObjCInterfaceDecl::getTypeForDecl;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_24853b9ee26458629a24838179b802da)() const = &::clang::ObjCInterfaceDecl::hasDefinition;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_a1a9e8445a8c502fab2d365fb2c72003)() const = &::clang::ObjCInterfaceDecl::hasDesignatedInitializers;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_01e630f8c9da57e59419a3018a0d4f10)() const = &::clang::ObjCInterfaceDecl::isArcWeakrefUnavailable;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_029e7e8ee8305d0caad3e611cea5e594)() const = &::clang::ObjCInterfaceDecl::isImplicitInterfaceDecl;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCInterfaceDecl::*method_pointer_554bf8a11d5c52bca7aa94a59cdbff1c)() const = &::clang::ObjCInterfaceDecl::isObjCRequiresPropertyDefs;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_ee95c05edffe5696a69412dbce3590a7)(class ::clang::ObjCInterfaceDecl  const *) const = &::clang::ObjCInterfaceDecl::isSuperClassOf;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_f9fe7c3ca02e54ec8991cacf9a9f58d5)() const = &::clang::ObjCInterfaceDecl::isThisDeclarationADefinition;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_e1df4e85b86b5e8bade56be2a9eb8d40)() const = &::clang::ObjCInterfaceDecl::ivar_empty;
    unsigned int  (::clang::ObjCInterfaceDecl::*method_pointer_36849be7a75e51e48df1c719c11ed45c)() const = &::clang::ObjCInterfaceDecl::ivar_size;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_5910ec013eaf5fdc86fe871f7ca86cbe)() const = &::clang::ObjCInterfaceDecl::known_categories_empty;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_6dfa5006585654ae85f69242cd79d198)() const = &::clang::ObjCInterfaceDecl::known_extensions_empty;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_0f7a7b2860505b3d83fd9f3c36120311)(class ::clang::ObjCCategoryDecl  *) = &::clang::ObjCInterfaceDecl::setCategoryListRaw;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_837982b7c68d5dc1a7e0f21d9ce578f7)(class ::clang::SourceLocation ) = &::clang::ObjCInterfaceDecl::setEndOfDefinitionLoc;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_d0cc542b316856aaaff21b5af9025a6a)() = &::clang::ObjCInterfaceDecl::setExternallyCompleted;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_61e8086a215e5acea3ac1e3db75e6ede)() = &::clang::ObjCInterfaceDecl::setHasDesignatedInitializers;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_f6af57d864865276bdd13cb1bed26ff2)(class ::clang::ObjCImplementationDecl  *) = &::clang::ObjCInterfaceDecl::setImplementation;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_56015c83a0b45a50aa1aedf42bbdc7db)(class ::clang::ObjCIvarDecl  *) = &::clang::ObjCInterfaceDecl::setIvarList;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_850c9555248556a89ccd7277e642c277)(class ::clang::Type  const *) const = &::clang::ObjCInterfaceDecl::setTypeForDecl;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_7692290620dd5d26a28202a33ccacb75)() = &::clang::ObjCInterfaceDecl::startDefinition;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_0f9dad822907561fadbffbc8c1cf7008)() const = &::clang::ObjCInterfaceDecl::visible_categories_empty;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_c2aa993ac989504e8f1464083b9a0916)() const = &::clang::ObjCInterfaceDecl::visible_extensions_empty;
    boost::python::class_< class ::clang::ObjCInterfaceDecl, autowig::HeldType< class ::clang::ObjCInterfaceDecl >, boost::python::bases< class ::clang::ObjCContainerDecl >, boost::noncopyable > class_6fe8ea7f48fd5aec8c83607b627eef0d("ObjCInterfaceDecl", "", boost::python::no_init);
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("class_implements_protocol", method_pointer_967d370fefac5183b16e0fc9e525ca1c, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("classof", method_pointer_e31f3a9cb5095fd9ac0465881f7614fc, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("classof_kind", method_pointer_2f58fad0751757bc9598e9dcd16e44ee, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("declares_or_inherits_designated_initializers", method_pointer_b1e8cd2e5e8556c4885fb8cdfd15cfad, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_canonical_decl", method_pointer_13d97ae5e8045115b289f961a5762699, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_canonical_decl", method_pointer_c6cffe61b8e75d379c2c19d68a7f9b2b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_category_list_raw", method_pointer_b0b8ac3b584c51129e717f42ac7bf293, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_definition", method_pointer_c67813d7100d5af9b0590b1ab0cb3e13, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_definition", method_pointer_12768d8d40775d56b99266ffa81d984b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_end_of_definition_loc", method_pointer_ea8bd83a29eb57ffbc76525d853cbf55, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_implementation", method_pointer_7b44c6fde1935d8589dd1cb3b32e91a5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_obj_c_runtime_name_as_string", method_pointer_3d7afe17e27f59f398bf48f18f982dc8, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_super_class", method_pointer_6de4c4f173235f2f8bb74bb3ba5f29fe, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_super_class_loc", method_pointer_ba04749935b55461a89ffaed2698a139, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_super_class_type", method_pointer_3d12e01033a55361843e60ef894a9f0b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_type_for_decl", method_pointer_6d81b2b16f1658a097c2c756b1fe9a74, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("has_definition", method_pointer_24853b9ee26458629a24838179b802da, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("has_designated_initializers", method_pointer_a1a9e8445a8c502fab2d365fb2c72003, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_arc_weakref_unavailable", method_pointer_01e630f8c9da57e59419a3018a0d4f10, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_implicit_interface_decl", method_pointer_029e7e8ee8305d0caad3e611cea5e594, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_obj_c_requires_property_defs", method_pointer_554bf8a11d5c52bca7aa94a59cdbff1c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_super_class_of", method_pointer_ee95c05edffe5696a69412dbce3590a7, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_this_declaration_a_definition", method_pointer_f9fe7c3ca02e54ec8991cacf9a9f58d5, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("ivar_empty", method_pointer_e1df4e85b86b5e8bade56be2a9eb8d40, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("ivar_size", method_pointer_36849be7a75e51e48df1c719c11ed45c, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("known_categories_empty", method_pointer_5910ec013eaf5fdc86fe871f7ca86cbe, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("known_extensions_empty", method_pointer_6dfa5006585654ae85f69242cd79d198, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_category_list_raw", method_pointer_0f7a7b2860505b3d83fd9f3c36120311, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_end_of_definition_loc", method_pointer_837982b7c68d5dc1a7e0f21d9ce578f7, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_externally_completed", method_pointer_d0cc542b316856aaaff21b5af9025a6a, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_has_designated_initializers", method_pointer_61e8086a215e5acea3ac1e3db75e6ede, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_implementation", method_pointer_f6af57d864865276bdd13cb1bed26ff2, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_ivar_list", method_pointer_56015c83a0b45a50aa1aedf42bbdc7db, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_type_for_decl", method_pointer_850c9555248556a89ccd7277e642c277, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("start_definition", method_pointer_7692290620dd5d26a28202a33ccacb75, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("visible_categories_empty", method_pointer_0f9dad822907561fadbffbc8c1cf7008, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("visible_extensions_empty", method_pointer_c2aa993ac989504e8f1464083b9a0916, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.staticmethod("classof_kind");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCInterfaceDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCInterfaceDecl >, autowig::HeldType< class ::clang::ObjCContainerDecl > >();
    }

}