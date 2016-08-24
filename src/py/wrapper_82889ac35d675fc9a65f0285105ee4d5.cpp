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
    void  (::clang::ObjCImplDecl::*method_pointer_b782fb936948567b86920bfc8fd678e2)(class ::clang::ObjCMethodDecl  *) = &::clang::ObjCImplDecl::addClassMethod;
    void  (::clang::ObjCImplDecl::*method_pointer_80f696244bf159ec8bc18063549c9211)(class ::clang::ObjCMethodDecl  *) = &::clang::ObjCImplDecl::addInstanceMethod;
    void  (::clang::ObjCImplDecl::*method_pointer_734083deeb65516ca87bf378f3b54add)(class ::clang::ObjCPropertyImplDecl  *) = &::clang::ObjCImplDecl::addPropertyImplementation;
    bool  (*method_pointer_2a4b51bd0c1857158d2f255b5bf8f1f2)(class ::clang::Decl  const *) = ::clang::ObjCImplDecl::classof;
    bool  (*method_pointer_a69b308132935eb0bfa9c4deb15af7b0)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplDecl::classofKind;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplDecl::*method_pointer_1d8e2439fd13570aba5d430352644281)() const = &::clang::ObjCImplDecl::getClassInterface;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplDecl::*method_pointer_9ddc9817df9b5e75a508c17e692a5834)() = &::clang::ObjCImplDecl::getClassInterface;
    void  (::clang::ObjCImplDecl::*method_pointer_99e5ba7e78ea5e2db044a5f42faaee5f)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplDecl::setClassInterface;
    boost::python::class_< class ::clang::ObjCImplDecl, autowig::HeldType< class ::clang::ObjCImplDecl >, boost::python::bases< class ::clang::ObjCContainerDecl >, boost::noncopyable > class_82889ac35d675fc9a65f0285105ee4d5("ObjCImplDecl", "", boost::python::no_init);
    class_82889ac35d675fc9a65f0285105ee4d5.def("add_class_method", method_pointer_b782fb936948567b86920bfc8fd678e2, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("add_instance_method", method_pointer_80f696244bf159ec8bc18063549c9211, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("add_property_implementation", method_pointer_734083deeb65516ca87bf378f3b54add, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("classof", method_pointer_2a4b51bd0c1857158d2f255b5bf8f1f2, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("classof_kind", method_pointer_a69b308132935eb0bfa9c4deb15af7b0, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("get_class_interface", method_pointer_1d8e2439fd13570aba5d430352644281, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("get_class_interface", method_pointer_9ddc9817df9b5e75a508c17e692a5834, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("set_class_interface", method_pointer_99e5ba7e78ea5e2db044a5f42faaee5f, "");
    class_82889ac35d675fc9a65f0285105ee4d5.staticmethod("classof_kind");
    class_82889ac35d675fc9a65f0285105ee4d5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplDecl >, autowig::HeldType< class ::clang::ObjCContainerDecl > >();
    }

}