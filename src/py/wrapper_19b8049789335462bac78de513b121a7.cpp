#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_19b8049789335462bac78de513b121a7()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_7fd3f0f19caa5502bc174421a6c48cb3)(enum ::clang::Decl::Kind ) = ::clang::ObjCPropertyImplDecl::classofKind;
    void  (::clang::ObjCPropertyImplDecl::*method_pointer_27d42fd1636f548b8d0e861ea72d7b31)(class ::clang::ObjCPropertyDecl  *) = &::clang::ObjCPropertyImplDecl::setPropertyDecl;
    bool  (::clang::ObjCPropertyImplDecl::*method_pointer_cc11b6e385125d2d91ee488cd6877d17)() const = &::clang::ObjCPropertyImplDecl::isIvarNameSpecified;
    class ::clang::ObjCIvarDecl  * (::clang::ObjCPropertyImplDecl::*method_pointer_79d48ffd4e3552c88d7bb797c6a53e68)() const = &::clang::ObjCPropertyImplDecl::getPropertyIvarDecl;
    class ::clang::ObjCPropertyImplDecl  * (*method_pointer_c9a8db241e365c148d68e939e74e1f71)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCPropertyImplDecl::CreateDeserialized;
    bool  (*method_pointer_4f4cb0c899bb55188add54e3fce89876)(class ::clang::Decl  const *) = ::clang::ObjCPropertyImplDecl::classof;
    class ::clang::ObjCPropertyDecl  * (::clang::ObjCPropertyImplDecl::*method_pointer_e378be9c027b5a809313e1c68299aa95)() const = &::clang::ObjCPropertyImplDecl::getPropertyDecl;
    boost::python::class_< class ::clang::ObjCPropertyImplDecl, autowig::HeldType< class ::clang::ObjCPropertyImplDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_19b8049789335462bac78de513b121a7("ObjCPropertyImplDecl", "", boost::python::no_init);
    class_19b8049789335462bac78de513b121a7.def("classof_kind", method_pointer_7fd3f0f19caa5502bc174421a6c48cb3, "");
    class_19b8049789335462bac78de513b121a7.def("set_property_decl", method_pointer_27d42fd1636f548b8d0e861ea72d7b31, "");
    class_19b8049789335462bac78de513b121a7.def("is_ivar_name_specified", method_pointer_cc11b6e385125d2d91ee488cd6877d17, "");
    class_19b8049789335462bac78de513b121a7.def("get_property_ivar_decl", method_pointer_79d48ffd4e3552c88d7bb797c6a53e68, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("create_deserialized", method_pointer_c9a8db241e365c148d68e939e74e1f71, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("classof", method_pointer_4f4cb0c899bb55188add54e3fce89876, "");
    class_19b8049789335462bac78de513b121a7.def("get_property_decl", method_pointer_e378be9c027b5a809313e1c68299aa95, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.staticmethod("classof_kind");
    class_19b8049789335462bac78de513b121a7.staticmethod("create_deserialized");
    class_19b8049789335462bac78de513b121a7.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCPropertyImplDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCPropertyImplDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}