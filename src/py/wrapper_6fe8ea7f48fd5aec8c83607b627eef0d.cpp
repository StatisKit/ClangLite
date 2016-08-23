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
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_15c2d3f2e26859e290d134db47b01b5d)(class ::clang::ObjCProtocolDecl  *, bool , bool ) = &::clang::ObjCInterfaceDecl::ClassImplementsProtocol;
    bool  (*method_pointer_6b2823c641d35c8fa92f577267bd4405)(class ::clang::Decl  const *) = ::clang::ObjCInterfaceDecl::classof;
    bool  (*method_pointer_805dd2acb93854dc9096ede751ed1704)(enum ::clang::Decl::Kind ) = ::clang::ObjCInterfaceDecl::classofKind;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_c170459d71955a29a2c2dcd1f70d3be7)() const = &::clang::ObjCInterfaceDecl::declaresOrInheritsDesignatedInitializers;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCInterfaceDecl::*method_pointer_345a6542e2eb50f8ac8b289206f63702)() const = &::clang::ObjCInterfaceDecl::getCanonicalDecl;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_ecfdf49c863e5f6fa4e7189fd2fc8b81)() = &::clang::ObjCInterfaceDecl::getCanonicalDecl;
    class ::clang::ObjCCategoryDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_b72d85129e865af392bbfb08e8f4d832)() const = &::clang::ObjCInterfaceDecl::getCategoryListRaw;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_e5f71617b2165255abceee19b021e845)() = &::clang::ObjCInterfaceDecl::getDefinition;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCInterfaceDecl::*method_pointer_17af1e6ed07058c2af920b1ecf53c1d4)() const = &::clang::ObjCInterfaceDecl::getDefinition;
    class ::clang::SourceLocation  (::clang::ObjCInterfaceDecl::*method_pointer_c7001d560abd5c538d94258ad1d0d708)() const = &::clang::ObjCInterfaceDecl::getEndOfDefinitionLoc;
    class ::clang::ObjCImplementationDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_b8fbfcf6d8db5f7d86b64fa79e132639)() const = &::clang::ObjCInterfaceDecl::getImplementation;
    class ::llvm::StringRef  (::clang::ObjCInterfaceDecl::*method_pointer_8703dd4515035dbdbb022f30eaed71a9)() const = &::clang::ObjCInterfaceDecl::getObjCRuntimeNameAsString;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_21ad80fa109159258d14508741be0ff3)() const = &::clang::ObjCInterfaceDecl::getSuperClass;
    class ::clang::SourceLocation  (::clang::ObjCInterfaceDecl::*method_pointer_29b9f5ddc2bb5747aff7c1cd87104696)() const = &::clang::ObjCInterfaceDecl::getSuperClassLoc;
    class ::clang::ObjCObjectType  const * (::clang::ObjCInterfaceDecl::*method_pointer_5e5cb88e36335825878e70b00f9d1d52)() const = &::clang::ObjCInterfaceDecl::getSuperClassType;
    class ::clang::Type  const * (::clang::ObjCInterfaceDecl::*method_pointer_78135a2dc03e5b4fab4854b1741fd5d7)() const = &::clang::ObjCInterfaceDecl::getTypeForDecl;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_f712b22016d456858b38589e4d13eeab)() const = &::clang::ObjCInterfaceDecl::hasDefinition;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_0279ae55733150b1b9b59cf48ee54e65)() const = &::clang::ObjCInterfaceDecl::hasDesignatedInitializers;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_870e4fd423c15e829f0c2a0480e743a4)() const = &::clang::ObjCInterfaceDecl::isArcWeakrefUnavailable;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_cfc3f04f68af552fa43efe317e4a13f3)() const = &::clang::ObjCInterfaceDecl::isImplicitInterfaceDecl;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCInterfaceDecl::*method_pointer_fd022913738f5373a4bb659548f959f7)() const = &::clang::ObjCInterfaceDecl::isObjCRequiresPropertyDefs;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_f58231d3b3f45ee79a057ddc6fe96f89)(class ::clang::ObjCInterfaceDecl  const *) const = &::clang::ObjCInterfaceDecl::isSuperClassOf;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_ff2e50d0d1f35d03a62ca001d39ccb29)() const = &::clang::ObjCInterfaceDecl::isThisDeclarationADefinition;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_2561fab1e5625ecb9f13ee00b2d12bfa)() const = &::clang::ObjCInterfaceDecl::ivar_empty;
    unsigned int  (::clang::ObjCInterfaceDecl::*method_pointer_6fb1aef51224567cadd5ec5bdb8b9a56)() const = &::clang::ObjCInterfaceDecl::ivar_size;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_f9e4a3dc4d575b0986393d95ed1c96f5)() const = &::clang::ObjCInterfaceDecl::known_categories_empty;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_0120e31ca661562293b35396ee97de3a)() const = &::clang::ObjCInterfaceDecl::known_extensions_empty;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_829070e6009e59e69bf8c3eca57770ba)(class ::clang::ObjCCategoryDecl  *) = &::clang::ObjCInterfaceDecl::setCategoryListRaw;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_a31127eeb47854e8b2f3db2986237aff)(class ::clang::SourceLocation ) = &::clang::ObjCInterfaceDecl::setEndOfDefinitionLoc;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_62d8d1c230d254df8073bcf277d5f764)() = &::clang::ObjCInterfaceDecl::setExternallyCompleted;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_ea9dc291bb0c50a6bd2030abbd1729a4)() = &::clang::ObjCInterfaceDecl::setHasDesignatedInitializers;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_4cfd8d02b03c568f9f8d454131c2dac7)(class ::clang::ObjCImplementationDecl  *) = &::clang::ObjCInterfaceDecl::setImplementation;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_62cc1eeb332651199f3fdee3e8a9ecf8)(class ::clang::ObjCIvarDecl  *) = &::clang::ObjCInterfaceDecl::setIvarList;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_12dcca66084f5e5cb8d2185802e35c22)(class ::clang::Type  const *) const = &::clang::ObjCInterfaceDecl::setTypeForDecl;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_77fc8205c9e15050b613ebca2c3daa06)() = &::clang::ObjCInterfaceDecl::startDefinition;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_b8218e130d9c56779c3adad6836f3920)() const = &::clang::ObjCInterfaceDecl::visible_categories_empty;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_57dadbfc19ec5b6e993b9f4f5ef21a3f)() const = &::clang::ObjCInterfaceDecl::visible_extensions_empty;
    boost::python::class_< class ::clang::ObjCInterfaceDecl, autowig::HeldType< class ::clang::ObjCInterfaceDecl >, boost::python::bases< class ::clang::ObjCContainerDecl >, boost::noncopyable > class_6fe8ea7f48fd5aec8c83607b627eef0d("ObjCInterfaceDecl", "", boost::python::no_init);
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("class_implements_protocol", method_pointer_15c2d3f2e26859e290d134db47b01b5d, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("classof", method_pointer_6b2823c641d35c8fa92f577267bd4405, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("classof_kind", method_pointer_805dd2acb93854dc9096ede751ed1704, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("declares_or_inherits_designated_initializers", method_pointer_c170459d71955a29a2c2dcd1f70d3be7, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_canonical_decl", method_pointer_345a6542e2eb50f8ac8b289206f63702, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_canonical_decl", method_pointer_ecfdf49c863e5f6fa4e7189fd2fc8b81, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_category_list_raw", method_pointer_b72d85129e865af392bbfb08e8f4d832, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_definition", method_pointer_e5f71617b2165255abceee19b021e845, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_definition", method_pointer_17af1e6ed07058c2af920b1ecf53c1d4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_end_of_definition_loc", method_pointer_c7001d560abd5c538d94258ad1d0d708, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_implementation", method_pointer_b8fbfcf6d8db5f7d86b64fa79e132639, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_obj_c_runtime_name_as_string", method_pointer_8703dd4515035dbdbb022f30eaed71a9, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_super_class", method_pointer_21ad80fa109159258d14508741be0ff3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_super_class_loc", method_pointer_29b9f5ddc2bb5747aff7c1cd87104696, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_super_class_type", method_pointer_5e5cb88e36335825878e70b00f9d1d52, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_type_for_decl", method_pointer_78135a2dc03e5b4fab4854b1741fd5d7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("has_definition", method_pointer_f712b22016d456858b38589e4d13eeab, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("has_designated_initializers", method_pointer_0279ae55733150b1b9b59cf48ee54e65, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_arc_weakref_unavailable", method_pointer_870e4fd423c15e829f0c2a0480e743a4, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_implicit_interface_decl", method_pointer_cfc3f04f68af552fa43efe317e4a13f3, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_obj_c_requires_property_defs", method_pointer_fd022913738f5373a4bb659548f959f7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_super_class_of", method_pointer_f58231d3b3f45ee79a057ddc6fe96f89, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_this_declaration_a_definition", method_pointer_ff2e50d0d1f35d03a62ca001d39ccb29, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("ivar_empty", method_pointer_2561fab1e5625ecb9f13ee00b2d12bfa, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("ivar_size", method_pointer_6fb1aef51224567cadd5ec5bdb8b9a56, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("known_categories_empty", method_pointer_f9e4a3dc4d575b0986393d95ed1c96f5, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("known_extensions_empty", method_pointer_0120e31ca661562293b35396ee97de3a, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_category_list_raw", method_pointer_829070e6009e59e69bf8c3eca57770ba, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_end_of_definition_loc", method_pointer_a31127eeb47854e8b2f3db2986237aff, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_externally_completed", method_pointer_62d8d1c230d254df8073bcf277d5f764, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_has_designated_initializers", method_pointer_ea9dc291bb0c50a6bd2030abbd1729a4, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_implementation", method_pointer_4cfd8d02b03c568f9f8d454131c2dac7, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_ivar_list", method_pointer_62cc1eeb332651199f3fdee3e8a9ecf8, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_type_for_decl", method_pointer_12dcca66084f5e5cb8d2185802e35c22, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("start_definition", method_pointer_77fc8205c9e15050b613ebca2c3daa06, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("visible_categories_empty", method_pointer_b8218e130d9c56779c3adad6836f3920, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("visible_extensions_empty", method_pointer_57dadbfc19ec5b6e993b9f4f5ef21a3f, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.staticmethod("classof_kind");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCInterfaceDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCInterfaceDecl >, autowig::HeldType< class ::clang::ObjCContainerDecl > >();
    }

}