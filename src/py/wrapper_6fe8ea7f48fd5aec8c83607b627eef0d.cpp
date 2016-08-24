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
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_b78fde9ad7b55eb3bd9a38890924a5c5)(class ::clang::ObjCProtocolDecl  *, bool , bool ) = &::clang::ObjCInterfaceDecl::ClassImplementsProtocol;
    bool  (*method_pointer_2c12994e92915d7cac46ac48fcec8b44)(class ::clang::Decl  const *) = ::clang::ObjCInterfaceDecl::classof;
    bool  (*method_pointer_7e063f0dbf4b53f7a0f0542a1f5193cf)(enum ::clang::Decl::Kind ) = ::clang::ObjCInterfaceDecl::classofKind;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_0c06bfe28e9b56f59e2ea35d370db1e1)() const = &::clang::ObjCInterfaceDecl::declaresOrInheritsDesignatedInitializers;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCInterfaceDecl::*method_pointer_36d59d7ba709571686309d5a2a0a4f4a)() const = &::clang::ObjCInterfaceDecl::getCanonicalDecl;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_a7da6dd21c315220a60c0c49e77c9183)() = &::clang::ObjCInterfaceDecl::getCanonicalDecl;
    class ::clang::ObjCCategoryDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_4c81c6b0a84a5378b693da3be850d1ca)() const = &::clang::ObjCInterfaceDecl::getCategoryListRaw;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCInterfaceDecl::*method_pointer_cb8ecc2f0b9758cfbbb06fc7a4bc2e52)() const = &::clang::ObjCInterfaceDecl::getDefinition;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_44b57f30a6bc5a02aa8285c26e106348)() = &::clang::ObjCInterfaceDecl::getDefinition;
    class ::clang::SourceLocation  (::clang::ObjCInterfaceDecl::*method_pointer_aa3bb8f58e0d5200913ba253613fdca0)() const = &::clang::ObjCInterfaceDecl::getEndOfDefinitionLoc;
    class ::clang::ObjCImplementationDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_ba9f596b9fcb522b94034d7c51396a26)() const = &::clang::ObjCInterfaceDecl::getImplementation;
    class ::llvm::StringRef  (::clang::ObjCInterfaceDecl::*method_pointer_66fcc853785e5dc496caef2665a41e05)() const = &::clang::ObjCInterfaceDecl::getObjCRuntimeNameAsString;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_99c1b3a69da7575c9bc83960ad97d6f8)() const = &::clang::ObjCInterfaceDecl::getSuperClass;
    class ::clang::SourceLocation  (::clang::ObjCInterfaceDecl::*method_pointer_a72a34ed8be154258bb4cf26f7790289)() const = &::clang::ObjCInterfaceDecl::getSuperClassLoc;
    class ::clang::ObjCObjectType  const * (::clang::ObjCInterfaceDecl::*method_pointer_84dae30fadd25255a766aaa871794d58)() const = &::clang::ObjCInterfaceDecl::getSuperClassType;
    class ::clang::Type  const * (::clang::ObjCInterfaceDecl::*method_pointer_7a535fadecf956f7a3df90a5f9694a8f)() const = &::clang::ObjCInterfaceDecl::getTypeForDecl;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_09883deca6935adb984b215d3b802f1e)() const = &::clang::ObjCInterfaceDecl::hasDefinition;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_1deb9836fe6c58e2ac2e2305866e4f35)() const = &::clang::ObjCInterfaceDecl::hasDesignatedInitializers;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_df1b76aab4c451618d26451db32e6ea0)() const = &::clang::ObjCInterfaceDecl::isArcWeakrefUnavailable;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_912bc7f26c8659a7820a1c958d612cdd)() const = &::clang::ObjCInterfaceDecl::isImplicitInterfaceDecl;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCInterfaceDecl::*method_pointer_c70f0f50475a5ca9ade61de766b27716)() const = &::clang::ObjCInterfaceDecl::isObjCRequiresPropertyDefs;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_b8ce1e56ea9d5f0bab981c3ca86f52bf)(class ::clang::ObjCInterfaceDecl  const *) const = &::clang::ObjCInterfaceDecl::isSuperClassOf;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_be766b3140cd51fab4f2c699d2063b50)() const = &::clang::ObjCInterfaceDecl::isThisDeclarationADefinition;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_b55cab91aa445b288739cd3f49affe1f)() const = &::clang::ObjCInterfaceDecl::ivar_empty;
    unsigned int  (::clang::ObjCInterfaceDecl::*method_pointer_4a1f4d7aceaa5f01a506c1cd20ccf27a)() const = &::clang::ObjCInterfaceDecl::ivar_size;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_91136a6a7d135b65b24fac07a1758e51)() const = &::clang::ObjCInterfaceDecl::known_categories_empty;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_8d2e9f3317d45aec8b38f0cca486681c)() const = &::clang::ObjCInterfaceDecl::known_extensions_empty;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_f5e29d2f915952f3a671822fe4a8b588)(class ::clang::ObjCCategoryDecl  *) = &::clang::ObjCInterfaceDecl::setCategoryListRaw;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_894613a9908d513cabc08e4b08939bc6)(class ::clang::SourceLocation ) = &::clang::ObjCInterfaceDecl::setEndOfDefinitionLoc;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_c1eabe40b710566f8563470bb423f379)() = &::clang::ObjCInterfaceDecl::setExternallyCompleted;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_6bf830b7bd445c2096c18031ce33618a)() = &::clang::ObjCInterfaceDecl::setHasDesignatedInitializers;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_0696df345f0e5a0d8a1f0f2fdd1d192d)(class ::clang::ObjCImplementationDecl  *) = &::clang::ObjCInterfaceDecl::setImplementation;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_00429326914d5fda8bfab88fa15cf968)(class ::clang::ObjCIvarDecl  *) = &::clang::ObjCInterfaceDecl::setIvarList;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_2bb5ab971daa52a4b780d16c0c2d3d31)(class ::clang::Type  const *) const = &::clang::ObjCInterfaceDecl::setTypeForDecl;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_0975a9337b795313804d99db9c14d48d)() = &::clang::ObjCInterfaceDecl::startDefinition;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_e170a6a838195cd99b9ea5da06139386)() const = &::clang::ObjCInterfaceDecl::visible_categories_empty;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_4100f280e5895a36bb0c781e4bce9067)() const = &::clang::ObjCInterfaceDecl::visible_extensions_empty;
    boost::python::class_< class ::clang::ObjCInterfaceDecl, autowig::HeldType< class ::clang::ObjCInterfaceDecl >, boost::python::bases< class ::clang::ObjCContainerDecl >, boost::noncopyable > class_6fe8ea7f48fd5aec8c83607b627eef0d("ObjCInterfaceDecl", "", boost::python::no_init);
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("class_implements_protocol", method_pointer_b78fde9ad7b55eb3bd9a38890924a5c5, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("classof", method_pointer_2c12994e92915d7cac46ac48fcec8b44, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("classof_kind", method_pointer_7e063f0dbf4b53f7a0f0542a1f5193cf, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("declares_or_inherits_designated_initializers", method_pointer_0c06bfe28e9b56f59e2ea35d370db1e1, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_canonical_decl", method_pointer_36d59d7ba709571686309d5a2a0a4f4a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_canonical_decl", method_pointer_a7da6dd21c315220a60c0c49e77c9183, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_category_list_raw", method_pointer_4c81c6b0a84a5378b693da3be850d1ca, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_definition", method_pointer_cb8ecc2f0b9758cfbbb06fc7a4bc2e52, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_definition", method_pointer_44b57f30a6bc5a02aa8285c26e106348, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_end_of_definition_loc", method_pointer_aa3bb8f58e0d5200913ba253613fdca0, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_implementation", method_pointer_ba9f596b9fcb522b94034d7c51396a26, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_obj_c_runtime_name_as_string", method_pointer_66fcc853785e5dc496caef2665a41e05, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_super_class", method_pointer_99c1b3a69da7575c9bc83960ad97d6f8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_super_class_loc", method_pointer_a72a34ed8be154258bb4cf26f7790289, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_super_class_type", method_pointer_84dae30fadd25255a766aaa871794d58, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_type_for_decl", method_pointer_7a535fadecf956f7a3df90a5f9694a8f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("has_definition", method_pointer_09883deca6935adb984b215d3b802f1e, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("has_designated_initializers", method_pointer_1deb9836fe6c58e2ac2e2305866e4f35, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_arc_weakref_unavailable", method_pointer_df1b76aab4c451618d26451db32e6ea0, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_implicit_interface_decl", method_pointer_912bc7f26c8659a7820a1c958d612cdd, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_obj_c_requires_property_defs", method_pointer_c70f0f50475a5ca9ade61de766b27716, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_super_class_of", method_pointer_b8ce1e56ea9d5f0bab981c3ca86f52bf, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_this_declaration_a_definition", method_pointer_be766b3140cd51fab4f2c699d2063b50, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("ivar_empty", method_pointer_b55cab91aa445b288739cd3f49affe1f, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("ivar_size", method_pointer_4a1f4d7aceaa5f01a506c1cd20ccf27a, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("known_categories_empty", method_pointer_91136a6a7d135b65b24fac07a1758e51, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("known_extensions_empty", method_pointer_8d2e9f3317d45aec8b38f0cca486681c, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_category_list_raw", method_pointer_f5e29d2f915952f3a671822fe4a8b588, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_end_of_definition_loc", method_pointer_894613a9908d513cabc08e4b08939bc6, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_externally_completed", method_pointer_c1eabe40b710566f8563470bb423f379, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_has_designated_initializers", method_pointer_6bf830b7bd445c2096c18031ce33618a, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_implementation", method_pointer_0696df345f0e5a0d8a1f0f2fdd1d192d, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_ivar_list", method_pointer_00429326914d5fda8bfab88fa15cf968, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_type_for_decl", method_pointer_2bb5ab971daa52a4b780d16c0c2d3d31, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("start_definition", method_pointer_0975a9337b795313804d99db9c14d48d, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("visible_categories_empty", method_pointer_e170a6a838195cd99b9ea5da06139386, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("visible_extensions_empty", method_pointer_4100f280e5895a36bb0c781e4bce9067, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.staticmethod("classof_kind");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCInterfaceDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCInterfaceDecl >, autowig::HeldType< class ::clang::ObjCContainerDecl > >();
    }

}