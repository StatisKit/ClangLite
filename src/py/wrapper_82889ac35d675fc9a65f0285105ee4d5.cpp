#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_82889ac35d675fc9a65f0285105ee4d5()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    void  (::clang::ObjCImplDecl::*method_pointer_8dbe590ce06b510783d5290ddbfb6fc4)(class ::clang::ObjCMethodDecl  *) = &::clang::ObjCImplDecl::addClassMethod;
    void  (::clang::ObjCImplDecl::*method_pointer_f964fba6dabc5f6a834fbad7867e64be)(class ::clang::ObjCMethodDecl  *) = &::clang::ObjCImplDecl::addInstanceMethod;
    void  (::clang::ObjCImplDecl::*method_pointer_e12584496c37530a80c40132c8434c02)(class ::clang::ObjCPropertyImplDecl  *) = &::clang::ObjCImplDecl::addPropertyImplementation;
    bool  (*method_pointer_987506da845a5929b73badc9e55cf10b)(class ::clang::Decl  const *) = ::clang::ObjCImplDecl::classof;
    bool  (*method_pointer_e1755062eecb58a09aa04ff9e746bdcb)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplDecl::classofKind;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplDecl::*method_pointer_0c59da49adce5ed8b59ad66188c9b0d9)() const = &::clang::ObjCImplDecl::getClassInterface;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplDecl::*method_pointer_ea5317827b995cd3b45e0e4ae396eb10)() = &::clang::ObjCImplDecl::getClassInterface;
    void  (::clang::ObjCImplDecl::*method_pointer_c0018d103b7b5b11826f251b5cf2ab5a)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplDecl::setClassInterface;
    boost::python::class_< class ::clang::ObjCImplDecl, autowig::HeldType< class ::clang::ObjCImplDecl >, boost::python::bases< class ::clang::ObjCContainerDecl >, boost::noncopyable > class_82889ac35d675fc9a65f0285105ee4d5("ObjCImplDecl", "", boost::python::no_init);
    class_82889ac35d675fc9a65f0285105ee4d5.def("add_class_method", method_pointer_8dbe590ce06b510783d5290ddbfb6fc4, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("add_instance_method", method_pointer_f964fba6dabc5f6a834fbad7867e64be, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("add_property_implementation", method_pointer_e12584496c37530a80c40132c8434c02, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("classof", method_pointer_987506da845a5929b73badc9e55cf10b, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("classof_kind", method_pointer_e1755062eecb58a09aa04ff9e746bdcb, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("get_class_interface", method_pointer_0c59da49adce5ed8b59ad66188c9b0d9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("get_class_interface", method_pointer_ea5317827b995cd3b45e0e4ae396eb10, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("set_class_interface", method_pointer_c0018d103b7b5b11826f251b5cf2ab5a, "");
    class_82889ac35d675fc9a65f0285105ee4d5.staticmethod("classof_kind");
    class_82889ac35d675fc9a65f0285105ee4d5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplDecl >, autowig::HeldType< class ::clang::ObjCContainerDecl > >();
    }

}