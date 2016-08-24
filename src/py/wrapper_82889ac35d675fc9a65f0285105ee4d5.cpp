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
    void  (::clang::ObjCImplDecl::*method_pointer_442cff6269345f3582a2e3e7ffb9dafe)(class ::clang::ObjCMethodDecl  *) = &::clang::ObjCImplDecl::addClassMethod;
    void  (::clang::ObjCImplDecl::*method_pointer_00bbf43a9a285b2789fb06380a4a019c)(class ::clang::ObjCMethodDecl  *) = &::clang::ObjCImplDecl::addInstanceMethod;
    void  (::clang::ObjCImplDecl::*method_pointer_2430c930a3665bf88ba15a405afd2ed7)(class ::clang::ObjCPropertyImplDecl  *) = &::clang::ObjCImplDecl::addPropertyImplementation;
    bool  (*method_pointer_4251a45cb36554de8f205d0a946e80e2)(class ::clang::Decl  const *) = ::clang::ObjCImplDecl::classof;
    bool  (*method_pointer_138fbb14ef155ffab895387d37eb2590)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplDecl::classofKind;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplDecl::*method_pointer_b9b983d36db4597a86198bd2e4a32302)() const = &::clang::ObjCImplDecl::getClassInterface;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplDecl::*method_pointer_d58bd42cfd575f539ea30d7bb6121c8c)() = &::clang::ObjCImplDecl::getClassInterface;
    void  (::clang::ObjCImplDecl::*method_pointer_1a5169b792805572b90e372ee11a4cda)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplDecl::setClassInterface;
    boost::python::class_< class ::clang::ObjCImplDecl, autowig::HeldType< class ::clang::ObjCImplDecl >, boost::python::bases< class ::clang::ObjCContainerDecl >, boost::noncopyable > class_82889ac35d675fc9a65f0285105ee4d5("ObjCImplDecl", "", boost::python::no_init);
    class_82889ac35d675fc9a65f0285105ee4d5.def("add_class_method", method_pointer_442cff6269345f3582a2e3e7ffb9dafe, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("add_instance_method", method_pointer_00bbf43a9a285b2789fb06380a4a019c, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("add_property_implementation", method_pointer_2430c930a3665bf88ba15a405afd2ed7, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("classof", method_pointer_4251a45cb36554de8f205d0a946e80e2, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("classof_kind", method_pointer_138fbb14ef155ffab895387d37eb2590, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("get_class_interface", method_pointer_b9b983d36db4597a86198bd2e4a32302, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("get_class_interface", method_pointer_d58bd42cfd575f539ea30d7bb6121c8c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("set_class_interface", method_pointer_1a5169b792805572b90e372ee11a4cda, "");
    class_82889ac35d675fc9a65f0285105ee4d5.staticmethod("classof_kind");
    class_82889ac35d675fc9a65f0285105ee4d5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplDecl >, autowig::HeldType< class ::clang::ObjCContainerDecl > >();
    }

}