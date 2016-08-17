#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_82889ac35d675fc9a65f0285105ee4d5()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    void  (::clang::ObjCImplDecl::*method_pointer_c1ba455db2755601a2b871f77e9bf9ca)(class ::clang::ObjCPropertyImplDecl  *) = &::clang::ObjCImplDecl::addPropertyImplementation;
    void  (::clang::ObjCImplDecl::*method_pointer_4460470f500254228ab1f7b0b91577ce)(class ::clang::ObjCMethodDecl  *) = &::clang::ObjCImplDecl::addClassMethod;
    bool  (*method_pointer_2161223f2174578caa34dc0970f7bad4)(class ::clang::Decl  const *) = ::clang::ObjCImplDecl::classof;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplDecl::*method_pointer_f794fc684300529b8d51cafa29302bd3)() = &::clang::ObjCImplDecl::getClassInterface;
    bool  (*method_pointer_d550889dc9e75c4d808f4331a4aff8da)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplDecl::classofKind;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplDecl::*method_pointer_511843b012dd5e3aa98f39dfe27c920c)() const = &::clang::ObjCImplDecl::getClassInterface;
    void  (::clang::ObjCImplDecl::*method_pointer_36fc32b72d035b148534b31f0d1fecb7)(class ::clang::ObjCMethodDecl  *) = &::clang::ObjCImplDecl::addInstanceMethod;
    void  (::clang::ObjCImplDecl::*method_pointer_23797c6f6bd1598d88e2cd6d2093cc64)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplDecl::setClassInterface;
    boost::python::class_< class ::clang::ObjCImplDecl, autowig::HeldType< class ::clang::ObjCImplDecl >, boost::python::bases< class ::clang::ObjCContainerDecl >, boost::noncopyable > class_82889ac35d675fc9a65f0285105ee4d5("ObjCImplDecl", "", boost::python::no_init);
    class_82889ac35d675fc9a65f0285105ee4d5.def("add_property_implementation", method_pointer_c1ba455db2755601a2b871f77e9bf9ca, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("add_class_method", method_pointer_4460470f500254228ab1f7b0b91577ce, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("classof", method_pointer_2161223f2174578caa34dc0970f7bad4, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("get_class_interface", method_pointer_f794fc684300529b8d51cafa29302bd3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("classof_kind", method_pointer_d550889dc9e75c4d808f4331a4aff8da, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("get_class_interface", method_pointer_511843b012dd5e3aa98f39dfe27c920c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("add_instance_method", method_pointer_36fc32b72d035b148534b31f0d1fecb7, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("set_class_interface", method_pointer_23797c6f6bd1598d88e2cd6d2093cc64, "");
    class_82889ac35d675fc9a65f0285105ee4d5.staticmethod("classof_kind");
    class_82889ac35d675fc9a65f0285105ee4d5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplDecl >, autowig::HeldType< class ::clang::ObjCContainerDecl > >();
    }

}