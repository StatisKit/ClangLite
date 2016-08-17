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
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplDecl::*method_pointer_1bac9a38b7ff5e7fa8b7c34cb4c8b675)() = &::clang::ObjCImplDecl::getClassInterface;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplDecl::*method_pointer_53288916aeaf5827b5507015c7c3bfe2)() const = &::clang::ObjCImplDecl::getClassInterface;
    void  (::clang::ObjCImplDecl::*method_pointer_d76939ff0b925053b209020c80085002)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplDecl::setClassInterface;
    void  (::clang::ObjCImplDecl::*method_pointer_41ca75734151570b84af44ec8ee751fb)(class ::clang::ObjCMethodDecl  *) = &::clang::ObjCImplDecl::addClassMethod;
    bool  (*method_pointer_ba89a8c5bc495469a5798b00c7c8da0c)(class ::clang::Decl  const *) = ::clang::ObjCImplDecl::classof;
    void  (::clang::ObjCImplDecl::*method_pointer_132a03871d245cf7afc3bbaaf0f06066)(class ::clang::ObjCPropertyImplDecl  *) = &::clang::ObjCImplDecl::addPropertyImplementation;
    bool  (*method_pointer_e075c6fb7c0455149acb443a7d26604a)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplDecl::classofKind;
    void  (::clang::ObjCImplDecl::*method_pointer_fd95071735d25070b1cef2798144f688)(class ::clang::ObjCMethodDecl  *) = &::clang::ObjCImplDecl::addInstanceMethod;
    boost::python::class_< class ::clang::ObjCImplDecl, autowig::HeldType< class ::clang::ObjCImplDecl >, boost::python::bases< class ::clang::ObjCContainerDecl >, boost::noncopyable > class_82889ac35d675fc9a65f0285105ee4d5("ObjCImplDecl", "", boost::python::no_init);
    class_82889ac35d675fc9a65f0285105ee4d5.def("get_class_interface", method_pointer_1bac9a38b7ff5e7fa8b7c34cb4c8b675, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("get_class_interface", method_pointer_53288916aeaf5827b5507015c7c3bfe2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("set_class_interface", method_pointer_d76939ff0b925053b209020c80085002, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("add_class_method", method_pointer_41ca75734151570b84af44ec8ee751fb, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("classof", method_pointer_ba89a8c5bc495469a5798b00c7c8da0c, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("add_property_implementation", method_pointer_132a03871d245cf7afc3bbaaf0f06066, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("classof_kind", method_pointer_e075c6fb7c0455149acb443a7d26604a, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("add_instance_method", method_pointer_fd95071735d25070b1cef2798144f688, "");
    class_82889ac35d675fc9a65f0285105ee4d5.staticmethod("classof_kind");
    class_82889ac35d675fc9a65f0285105ee4d5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplDecl >, autowig::HeldType< class ::clang::ObjCContainerDecl > >();
    }

}