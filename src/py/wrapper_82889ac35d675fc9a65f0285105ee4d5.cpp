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
    void  (::clang::ObjCImplDecl::*method_pointer_d307fecfb0a658caafee96707d10a041)(class ::clang::ObjCMethodDecl  *) = &::clang::ObjCImplDecl::addClassMethod;
    void  (::clang::ObjCImplDecl::*method_pointer_bda5ece01330588797add42280df6fa3)(class ::clang::ObjCMethodDecl  *) = &::clang::ObjCImplDecl::addInstanceMethod;
    void  (::clang::ObjCImplDecl::*method_pointer_80210b30bac25a768f9d6d364c143c8c)(class ::clang::ObjCPropertyImplDecl  *) = &::clang::ObjCImplDecl::addPropertyImplementation;
    bool  (*method_pointer_043c10dfbf71560e940f0c27465cdd0d)(class ::clang::Decl  const *) = ::clang::ObjCImplDecl::classof;
    bool  (*method_pointer_01967c327fa35826b5ba865a323448a4)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplDecl::classofKind;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplDecl::*method_pointer_f27613317a205d4f8ada3e693421a866)() const = &::clang::ObjCImplDecl::getClassInterface;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplDecl::*method_pointer_e5f534368ac655babaf68bc489ed20f6)() = &::clang::ObjCImplDecl::getClassInterface;
    void  (::clang::ObjCImplDecl::*method_pointer_05a098ceeeab5a80826bab023302f26b)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplDecl::setClassInterface;
    boost::python::class_< class ::clang::ObjCImplDecl, autowig::HeldType< class ::clang::ObjCImplDecl >, boost::python::bases< class ::clang::ObjCContainerDecl >, boost::noncopyable > class_82889ac35d675fc9a65f0285105ee4d5("ObjCImplDecl", "", boost::python::no_init);
    class_82889ac35d675fc9a65f0285105ee4d5.def("add_class_method", method_pointer_d307fecfb0a658caafee96707d10a041, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("add_instance_method", method_pointer_bda5ece01330588797add42280df6fa3, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("add_property_implementation", method_pointer_80210b30bac25a768f9d6d364c143c8c, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("classof", method_pointer_043c10dfbf71560e940f0c27465cdd0d, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("classof_kind", method_pointer_01967c327fa35826b5ba865a323448a4, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("get_class_interface", method_pointer_f27613317a205d4f8ada3e693421a866, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("get_class_interface", method_pointer_e5f534368ac655babaf68bc489ed20f6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("set_class_interface", method_pointer_05a098ceeeab5a80826bab023302f26b, "");
    class_82889ac35d675fc9a65f0285105ee4d5.staticmethod("classof_kind");
    class_82889ac35d675fc9a65f0285105ee4d5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplDecl >, autowig::HeldType< class ::clang::ObjCContainerDecl > >();
    }

}