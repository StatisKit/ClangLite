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
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_121211b6b5da5fd3921ab8fa8f2513ec)(class ::clang::ObjCProtocolDecl  *, bool , bool ) = &::clang::ObjCInterfaceDecl::ClassImplementsProtocol;
    bool  (*method_pointer_7e24d1127a7f5410b555ad622ac98e74)(class ::clang::Decl  const *) = ::clang::ObjCInterfaceDecl::classof;
    bool  (*method_pointer_0a8e60b37e065dd2ab84264f64b07e93)(enum ::clang::Decl::Kind ) = ::clang::ObjCInterfaceDecl::classofKind;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_b94080fc070450c6a016c4de483bb29a)() const = &::clang::ObjCInterfaceDecl::declaresOrInheritsDesignatedInitializers;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_74eac973888c5225a8275bb96fff1902)() = &::clang::ObjCInterfaceDecl::getCanonicalDecl;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCInterfaceDecl::*method_pointer_4ccec68a28e35d70806f30007e9bc13b)() const = &::clang::ObjCInterfaceDecl::getCanonicalDecl;
    class ::clang::ObjCCategoryDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_f2257c0264cf58c7bfa13911e760f255)() const = &::clang::ObjCInterfaceDecl::getCategoryListRaw;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCInterfaceDecl::*method_pointer_4ed0e32d1988511ea1f77e347b227523)() const = &::clang::ObjCInterfaceDecl::getDefinition;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_4e6efbadd810507493847faee1e7888b)() = &::clang::ObjCInterfaceDecl::getDefinition;
    class ::clang::SourceLocation  (::clang::ObjCInterfaceDecl::*method_pointer_5d78dd6eaa455547bebac8819c37f400)() const = &::clang::ObjCInterfaceDecl::getEndOfDefinitionLoc;
    class ::clang::ObjCImplementationDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_415f7bc13f4d56de98a3ca260635a5de)() const = &::clang::ObjCInterfaceDecl::getImplementation;
    class ::llvm::StringRef  (::clang::ObjCInterfaceDecl::*method_pointer_d7f649c1c95d5282889969feaa2815b7)() const = &::clang::ObjCInterfaceDecl::getObjCRuntimeNameAsString;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_e53661c5bc8652209980fa2800f0adf8)() const = &::clang::ObjCInterfaceDecl::getSuperClass;
    class ::clang::SourceLocation  (::clang::ObjCInterfaceDecl::*method_pointer_9d2317348885576eb5e8fe7c7a738c87)() const = &::clang::ObjCInterfaceDecl::getSuperClassLoc;
    class ::clang::ObjCObjectType  const * (::clang::ObjCInterfaceDecl::*method_pointer_c756eda0ee3e56db94bf889290819bf0)() const = &::clang::ObjCInterfaceDecl::getSuperClassType;
    class ::clang::Type  const * (::clang::ObjCInterfaceDecl::*method_pointer_04a15480834b5f7085cb366fde8b4d41)() const = &::clang::ObjCInterfaceDecl::getTypeForDecl;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_bd4c9ddf9e45540cb1028a4fc8369426)() const = &::clang::ObjCInterfaceDecl::hasDefinition;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_96f00bcd8ffe5215bb30c33b94f6f2be)() const = &::clang::ObjCInterfaceDecl::hasDesignatedInitializers;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_ff9ef8e7febe5e9dae1b3964f4c48f96)() const = &::clang::ObjCInterfaceDecl::isArcWeakrefUnavailable;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_47e19023c02a58749dda5c67a2de8d11)() const = &::clang::ObjCInterfaceDecl::isImplicitInterfaceDecl;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCInterfaceDecl::*method_pointer_137d43e72b0f5942ba3afd489621cd81)() const = &::clang::ObjCInterfaceDecl::isObjCRequiresPropertyDefs;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_3e2e2a6da9f459e6a3ffdb2842492320)(class ::clang::ObjCInterfaceDecl  const *) const = &::clang::ObjCInterfaceDecl::isSuperClassOf;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_41add22480935ad180c179e7bf26bbe2)() const = &::clang::ObjCInterfaceDecl::isThisDeclarationADefinition;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_cca2f91a43415dd092620e75bbb0d85a)() const = &::clang::ObjCInterfaceDecl::ivar_empty;
    unsigned int  (::clang::ObjCInterfaceDecl::*method_pointer_af4f0d675eec53a293af18652dbf76eb)() const = &::clang::ObjCInterfaceDecl::ivar_size;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_f9c5f3a0501c5d5ea70d56e6eff3a130)() const = &::clang::ObjCInterfaceDecl::known_categories_empty;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_de5c2ee053395732b3b29d46a5832f2f)() const = &::clang::ObjCInterfaceDecl::known_extensions_empty;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_ac7f3b9fd8085c8e9bc2bbce75022134)(class ::clang::ObjCCategoryDecl  *) = &::clang::ObjCInterfaceDecl::setCategoryListRaw;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_58ec90d66f9c5453b9e50807470aa74b)(class ::clang::SourceLocation ) = &::clang::ObjCInterfaceDecl::setEndOfDefinitionLoc;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_37e93341d45859c8858cbe5c08731bbd)() = &::clang::ObjCInterfaceDecl::setExternallyCompleted;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_d7ff619d9a2b5f419011557262957ad2)() = &::clang::ObjCInterfaceDecl::setHasDesignatedInitializers;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_defed1de8c245ef980047e04260ee837)(class ::clang::ObjCImplementationDecl  *) = &::clang::ObjCInterfaceDecl::setImplementation;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_c3d6fb16e95f525385fe0615ff92203d)(class ::clang::ObjCIvarDecl  *) = &::clang::ObjCInterfaceDecl::setIvarList;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_3875515116f157b48aabfacad50ebfd0)(class ::clang::Type  const *) const = &::clang::ObjCInterfaceDecl::setTypeForDecl;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_5501191318985bdea30d3b2e3c882e20)() = &::clang::ObjCInterfaceDecl::startDefinition;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_019ffa2f144a5a25943170cd765a9cb0)() const = &::clang::ObjCInterfaceDecl::visible_categories_empty;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_cac68e5fff1657a380424a64a469ba0b)() const = &::clang::ObjCInterfaceDecl::visible_extensions_empty;
    boost::python::class_< class ::clang::ObjCInterfaceDecl, autowig::HeldType< class ::clang::ObjCInterfaceDecl >, boost::python::bases< class ::clang::ObjCContainerDecl >, boost::noncopyable > class_6fe8ea7f48fd5aec8c83607b627eef0d("ObjCInterfaceDecl", "", boost::python::no_init);
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("class_implements_protocol", method_pointer_121211b6b5da5fd3921ab8fa8f2513ec, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("classof", method_pointer_7e24d1127a7f5410b555ad622ac98e74, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("classof_kind", method_pointer_0a8e60b37e065dd2ab84264f64b07e93, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("declares_or_inherits_designated_initializers", method_pointer_b94080fc070450c6a016c4de483bb29a, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_canonical_decl", method_pointer_74eac973888c5225a8275bb96fff1902, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_canonical_decl", method_pointer_4ccec68a28e35d70806f30007e9bc13b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_category_list_raw", method_pointer_f2257c0264cf58c7bfa13911e760f255, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_definition", method_pointer_4ed0e32d1988511ea1f77e347b227523, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_definition", method_pointer_4e6efbadd810507493847faee1e7888b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_end_of_definition_loc", method_pointer_5d78dd6eaa455547bebac8819c37f400, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_implementation", method_pointer_415f7bc13f4d56de98a3ca260635a5de, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_obj_c_runtime_name_as_string", method_pointer_d7f649c1c95d5282889969feaa2815b7, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_super_class", method_pointer_e53661c5bc8652209980fa2800f0adf8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_super_class_loc", method_pointer_9d2317348885576eb5e8fe7c7a738c87, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_super_class_type", method_pointer_c756eda0ee3e56db94bf889290819bf0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_type_for_decl", method_pointer_04a15480834b5f7085cb366fde8b4d41, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("has_definition", method_pointer_bd4c9ddf9e45540cb1028a4fc8369426, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("has_designated_initializers", method_pointer_96f00bcd8ffe5215bb30c33b94f6f2be, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_arc_weakref_unavailable", method_pointer_ff9ef8e7febe5e9dae1b3964f4c48f96, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_implicit_interface_decl", method_pointer_47e19023c02a58749dda5c67a2de8d11, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_obj_c_requires_property_defs", method_pointer_137d43e72b0f5942ba3afd489621cd81, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_super_class_of", method_pointer_3e2e2a6da9f459e6a3ffdb2842492320, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_this_declaration_a_definition", method_pointer_41add22480935ad180c179e7bf26bbe2, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("ivar_empty", method_pointer_cca2f91a43415dd092620e75bbb0d85a, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("ivar_size", method_pointer_af4f0d675eec53a293af18652dbf76eb, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("known_categories_empty", method_pointer_f9c5f3a0501c5d5ea70d56e6eff3a130, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("known_extensions_empty", method_pointer_de5c2ee053395732b3b29d46a5832f2f, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_category_list_raw", method_pointer_ac7f3b9fd8085c8e9bc2bbce75022134, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_end_of_definition_loc", method_pointer_58ec90d66f9c5453b9e50807470aa74b, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_externally_completed", method_pointer_37e93341d45859c8858cbe5c08731bbd, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_has_designated_initializers", method_pointer_d7ff619d9a2b5f419011557262957ad2, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_implementation", method_pointer_defed1de8c245ef980047e04260ee837, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_ivar_list", method_pointer_c3d6fb16e95f525385fe0615ff92203d, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_type_for_decl", method_pointer_3875515116f157b48aabfacad50ebfd0, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("start_definition", method_pointer_5501191318985bdea30d3b2e3c882e20, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("visible_categories_empty", method_pointer_019ffa2f144a5a25943170cd765a9cb0, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("visible_extensions_empty", method_pointer_cac68e5fff1657a380424a64a469ba0b, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.staticmethod("classof_kind");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCInterfaceDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCInterfaceDecl >, autowig::HeldType< class ::clang::ObjCContainerDecl > >();
    }

}