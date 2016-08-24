#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_e7b3b4e4c9fa5685aa128e57eb78adb2()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::UsingDecl  * (*method_pointer_9239561fc320564ba003c301d19d3fa5)(class ::clang::ASTContext  &, unsigned int ) = ::clang::UsingDecl::CreateDeserialized;
    void  (::clang::UsingDecl::*method_pointer_0170f4a34fdf5d6582bae94f996e33a0)(class ::clang::UsingShadowDecl  *) = &::clang::UsingDecl::addShadowDecl;
    bool  (*method_pointer_80d3f2358e335800a03833d448acc880)(class ::clang::Decl  const *) = ::clang::UsingDecl::classof;
    bool  (*method_pointer_25d6d2467fea5686b8a8a7f1afb26ba7)(enum ::clang::Decl::Kind ) = ::clang::UsingDecl::classofKind;
    class ::clang::UsingDecl  const * (::clang::UsingDecl::*method_pointer_f17e63a43cd75e1c8a0976812da57eb0)() const = &::clang::UsingDecl::getCanonicalDecl;
    class ::clang::UsingDecl  * (::clang::UsingDecl::*method_pointer_0f1f9e9c41b75a8d9b8946cabbca4299)() = &::clang::UsingDecl::getCanonicalDecl;
    class ::clang::SourceLocation  (::clang::UsingDecl::*method_pointer_0c3d7675023a5febaf54d514ca602b58)() const = &::clang::UsingDecl::getUsingLoc;
    bool  (::clang::UsingDecl::*method_pointer_405d3205f55a5090ad414c19930603f4)() const = &::clang::UsingDecl::hasTypename;
    bool  (::clang::UsingDecl::*method_pointer_27f2e41de6b95d389461d48a6715960b)() const = &::clang::UsingDecl::isAccessDeclaration;
    void  (::clang::UsingDecl::*method_pointer_908226c161d159b4a7f213fc72b93fd6)(class ::clang::UsingShadowDecl  *) = &::clang::UsingDecl::removeShadowDecl;
    void  (::clang::UsingDecl::*method_pointer_c975bc3cbaa85335a778ab1897f194d2)(bool ) = &::clang::UsingDecl::setTypename;
    void  (::clang::UsingDecl::*method_pointer_633fc6339a125749b012258fe5ab6de1)(class ::clang::SourceLocation ) = &::clang::UsingDecl::setUsingLoc;
    unsigned int  (::clang::UsingDecl::*method_pointer_dda42732d6ed55dfb7be071c0eb57740)() const = &::clang::UsingDecl::shadow_size;
    boost::python::class_< class ::clang::UsingDecl, autowig::HeldType< class ::clang::UsingDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_e7b3b4e4c9fa5685aa128e57eb78adb2("UsingDecl", "", boost::python::no_init);
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("create_deserialized", method_pointer_9239561fc320564ba003c301d19d3fa5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("add_shadow_decl", method_pointer_0170f4a34fdf5d6582bae94f996e33a0, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("classof", method_pointer_80d3f2358e335800a03833d448acc880, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("classof_kind", method_pointer_25d6d2467fea5686b8a8a7f1afb26ba7, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("get_canonical_decl", method_pointer_f17e63a43cd75e1c8a0976812da57eb0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("get_canonical_decl", method_pointer_0f1f9e9c41b75a8d9b8946cabbca4299, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("get_using_loc", method_pointer_0c3d7675023a5febaf54d514ca602b58, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("has_typename", method_pointer_405d3205f55a5090ad414c19930603f4, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("is_access_declaration", method_pointer_27f2e41de6b95d389461d48a6715960b, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("remove_shadow_decl", method_pointer_908226c161d159b4a7f213fc72b93fd6, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("set_typename", method_pointer_c975bc3cbaa85335a778ab1897f194d2, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("set_using_loc", method_pointer_633fc6339a125749b012258fe5ab6de1, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("shadow_size", method_pointer_dda42732d6ed55dfb7be071c0eb57740, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.staticmethod("classof_kind");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.staticmethod("create_deserialized");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UsingDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UsingDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}