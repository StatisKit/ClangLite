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
    void  (::clang::ObjCImplDecl::*method_pointer_ae919e95fa94530aa1fc7893a23b51cd)(class ::clang::ObjCMethodDecl  *) = &::clang::ObjCImplDecl::addClassMethod;
    bool  (*method_pointer_790f965125405ff6a42c4ad1df165da4)(class ::clang::Decl  const *) = ::clang::ObjCImplDecl::classof;
    void  (::clang::ObjCImplDecl::*method_pointer_623650d65f5557c480dafa10b2225d29)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplDecl::setClassInterface;
    void  (::clang::ObjCImplDecl::*method_pointer_91c410a40b525055b5eb808073bcc20c)(class ::clang::ObjCPropertyImplDecl  *) = &::clang::ObjCImplDecl::addPropertyImplementation;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplDecl::*method_pointer_958cff300e8e57fdaf4e329421d9f318)() = &::clang::ObjCImplDecl::getClassInterface;
    bool  (*method_pointer_0030c4524493562b9fc6995102bd3e7b)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplDecl::classofKind;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplDecl::*method_pointer_b0bdb7203d2c57cb9d0619c51a54d044)() const = &::clang::ObjCImplDecl::getClassInterface;
    void  (::clang::ObjCImplDecl::*method_pointer_9d8bc0e0d7035006be30aa3aed48c0b5)(class ::clang::ObjCMethodDecl  *) = &::clang::ObjCImplDecl::addInstanceMethod;
    boost::python::class_< class ::clang::ObjCImplDecl, autowig::HeldType< class ::clang::ObjCImplDecl >, boost::python::bases< class ::clang::ObjCContainerDecl >, boost::noncopyable > class_82889ac35d675fc9a65f0285105ee4d5("ObjCImplDecl", "", boost::python::no_init);
    class_82889ac35d675fc9a65f0285105ee4d5.def("add_class_method", method_pointer_ae919e95fa94530aa1fc7893a23b51cd, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("classof", method_pointer_790f965125405ff6a42c4ad1df165da4, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("set_class_interface", method_pointer_623650d65f5557c480dafa10b2225d29, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("add_property_implementation", method_pointer_91c410a40b525055b5eb808073bcc20c, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("get_class_interface", method_pointer_958cff300e8e57fdaf4e329421d9f318, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("classof_kind", method_pointer_0030c4524493562b9fc6995102bd3e7b, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("get_class_interface", method_pointer_b0bdb7203d2c57cb9d0619c51a54d044, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("add_instance_method", method_pointer_9d8bc0e0d7035006be30aa3aed48c0b5, "");
    class_82889ac35d675fc9a65f0285105ee4d5.staticmethod("classof_kind");
    class_82889ac35d675fc9a65f0285105ee4d5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplDecl >, autowig::HeldType< class ::clang::ObjCContainerDecl > >();
    }

}