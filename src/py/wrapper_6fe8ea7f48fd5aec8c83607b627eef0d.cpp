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
    void  (::clang::ObjCInterfaceDecl::*method_pointer_89bfdd11fec15b8cb2ce5faebd1a5d59)(class ::clang::ObjCImplementationDecl  *) = &::clang::ObjCInterfaceDecl::setImplementation;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_db152d95650c55199d626d99681c561b)(class ::clang::ObjCIvarDecl  *) = &::clang::ObjCInterfaceDecl::setIvarList;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_c02687b4202a5ff69aa9eaab82a25706)() const = &::clang::ObjCInterfaceDecl::hasDefinition;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_c394dbe782765c92903fd67db9f665fd)(class ::clang::Type  const *) const = &::clang::ObjCInterfaceDecl::setTypeForDecl;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_cba94a120dbe5cdb9ff9e00698f15e54)() const = &::clang::ObjCInterfaceDecl::declaresOrInheritsDesignatedInitializers;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_f8b6733c5fe255278f78447d6997c312)() const = &::clang::ObjCInterfaceDecl::known_extensions_empty;
    class ::clang::Type  const * (::clang::ObjCInterfaceDecl::*method_pointer_45db8b7559c450eb99a999610c80522e)() const = &::clang::ObjCInterfaceDecl::getTypeForDecl;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_0d0c1c713756569fafd47e8c2c842bf5)() const = &::clang::ObjCInterfaceDecl::known_categories_empty;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_9a9e5aacfe23590b88259800ed11a362)() const = &::clang::ObjCInterfaceDecl::visible_categories_empty;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_5a7a1dc8c0bd5164ba7f296a8c9d6c41)() const = &::clang::ObjCInterfaceDecl::isThisDeclarationADefinition;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_0f76bd754be554958bee09dcb9cd1ed7)() const = &::clang::ObjCInterfaceDecl::getSuperClass;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_214ef173a3bb530bb031953d7ec4885c)() = &::clang::ObjCInterfaceDecl::setHasDesignatedInitializers;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCInterfaceDecl::*method_pointer_aa1378010fb0545794bc60b100482b38)() const = &::clang::ObjCInterfaceDecl::isObjCRequiresPropertyDefs;
    bool  (*method_pointer_a5d312086ab753ada217a6f7eeb194b0)(class ::clang::Decl  const *) = ::clang::ObjCInterfaceDecl::classof;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_7cdc5c86c1ec510aab559ed1fb6eafba)() const = &::clang::ObjCInterfaceDecl::hasDesignatedInitializers;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_d8e0bc897d5f57578f37de61a72c4bbf)() const = &::clang::ObjCInterfaceDecl::visible_extensions_empty;
    bool  (*method_pointer_49aa0b2d7ec65919a52f4926bed3896e)(enum ::clang::Decl::Kind ) = ::clang::ObjCInterfaceDecl::classofKind;
    class ::clang::ObjCImplementationDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_8321988a266f5bda839ed2551a2dfc04)() const = &::clang::ObjCInterfaceDecl::getImplementation;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_e072c9ea007f521fb26b93f3e22927aa)() = &::clang::ObjCInterfaceDecl::setExternallyCompleted;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_f51f8e34b5455e8ebb425e9a6fe4086c)() const = &::clang::ObjCInterfaceDecl::isImplicitInterfaceDecl;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_55226c35000a5bfc8a66057ec9f263f8)(class ::clang::ObjCInterfaceDecl  const *) const = &::clang::ObjCInterfaceDecl::isSuperClassOf;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_491f420ae16c5f999eb77b5383890d76)() const = &::clang::ObjCInterfaceDecl::ivar_empty;
    class ::clang::ObjCObjectType  const * (::clang::ObjCInterfaceDecl::*method_pointer_43ff3a99a8aa5ddcad03b15ea79d658c)() const = &::clang::ObjCInterfaceDecl::getSuperClassType;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_dde073b0077c5847b7d769c7060b5ff8)() const = &::clang::ObjCInterfaceDecl::isArcWeakrefUnavailable;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_ed3b2783685f55dca8dfdf5a50eb7877)() = &::clang::ObjCInterfaceDecl::startDefinition;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCInterfaceDecl::*method_pointer_35857869caf45a2591e42f32b4c09d7c)() const = &::clang::ObjCInterfaceDecl::getDefinition;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCInterfaceDecl::*method_pointer_41021d48a0115d91809b684ccc4d6a4e)() const = &::clang::ObjCInterfaceDecl::getCanonicalDecl;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_8ae6feb30be854b481d583ad33700a6a)(class ::clang::ObjCProtocolDecl  *, bool , bool ) = &::clang::ObjCInterfaceDecl::ClassImplementsProtocol;
    unsigned int  (::clang::ObjCInterfaceDecl::*method_pointer_8f98fe6e6e5956458ae141febf042500)() const = &::clang::ObjCInterfaceDecl::ivar_size;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_38822e50d3f4540ea5f42decc625f2f6)() = &::clang::ObjCInterfaceDecl::getDefinition;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_7fe2bddcd691570a87883f84e0d23535)() = &::clang::ObjCInterfaceDecl::getCanonicalDecl;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_750638b6a96e541ba2d152405f39f4f7)(class ::clang::ObjCCategoryDecl  *) = &::clang::ObjCInterfaceDecl::setCategoryListRaw;
    class ::clang::ObjCCategoryDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_ed303933231e5e45bbd6cbac1f3ab53b)() const = &::clang::ObjCInterfaceDecl::getCategoryListRaw;
    boost::python::class_< class ::clang::ObjCInterfaceDecl, autowig::HeldType< class ::clang::ObjCInterfaceDecl >, boost::python::bases< class ::clang::ObjCContainerDecl >, boost::noncopyable > class_6fe8ea7f48fd5aec8c83607b627eef0d("ObjCInterfaceDecl", "", boost::python::no_init);
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_implementation", method_pointer_89bfdd11fec15b8cb2ce5faebd1a5d59, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_ivar_list", method_pointer_db152d95650c55199d626d99681c561b, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("has_definition", method_pointer_c02687b4202a5ff69aa9eaab82a25706, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_type_for_decl", method_pointer_c394dbe782765c92903fd67db9f665fd, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("declares_or_inherits_designated_initializers", method_pointer_cba94a120dbe5cdb9ff9e00698f15e54, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("known_extensions_empty", method_pointer_f8b6733c5fe255278f78447d6997c312, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_type_for_decl", method_pointer_45db8b7559c450eb99a999610c80522e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("known_categories_empty", method_pointer_0d0c1c713756569fafd47e8c2c842bf5, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("visible_categories_empty", method_pointer_9a9e5aacfe23590b88259800ed11a362, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_this_declaration_a_definition", method_pointer_5a7a1dc8c0bd5164ba7f296a8c9d6c41, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_super_class", method_pointer_0f76bd754be554958bee09dcb9cd1ed7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_has_designated_initializers", method_pointer_214ef173a3bb530bb031953d7ec4885c, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_obj_c_requires_property_defs", method_pointer_aa1378010fb0545794bc60b100482b38, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("classof", method_pointer_a5d312086ab753ada217a6f7eeb194b0, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("has_designated_initializers", method_pointer_7cdc5c86c1ec510aab559ed1fb6eafba, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("visible_extensions_empty", method_pointer_d8e0bc897d5f57578f37de61a72c4bbf, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("classof_kind", method_pointer_49aa0b2d7ec65919a52f4926bed3896e, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_implementation", method_pointer_8321988a266f5bda839ed2551a2dfc04, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_externally_completed", method_pointer_e072c9ea007f521fb26b93f3e22927aa, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_implicit_interface_decl", method_pointer_f51f8e34b5455e8ebb425e9a6fe4086c, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_super_class_of", method_pointer_55226c35000a5bfc8a66057ec9f263f8, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("ivar_empty", method_pointer_491f420ae16c5f999eb77b5383890d76, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_super_class_type", method_pointer_43ff3a99a8aa5ddcad03b15ea79d658c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_arc_weakref_unavailable", method_pointer_dde073b0077c5847b7d769c7060b5ff8, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("start_definition", method_pointer_ed3b2783685f55dca8dfdf5a50eb7877, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_definition", method_pointer_35857869caf45a2591e42f32b4c09d7c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_canonical_decl", method_pointer_41021d48a0115d91809b684ccc4d6a4e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("class_implements_protocol", method_pointer_8ae6feb30be854b481d583ad33700a6a, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("ivar_size", method_pointer_8f98fe6e6e5956458ae141febf042500, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_definition", method_pointer_38822e50d3f4540ea5f42decc625f2f6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_canonical_decl", method_pointer_7fe2bddcd691570a87883f84e0d23535, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_category_list_raw", method_pointer_750638b6a96e541ba2d152405f39f4f7, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_category_list_raw", method_pointer_ed303933231e5e45bbd6cbac1f3ab53b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.staticmethod("classof_kind");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCInterfaceDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCInterfaceDecl >, autowig::HeldType< class ::clang::ObjCContainerDecl > >();
    }

}