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
    void  (::clang::ObjCImplDecl::*method_pointer_21059522eda95bf98d45bf7857916fd7)(class ::clang::ObjCMethodDecl  *) = &::clang::ObjCImplDecl::addClassMethod;
    void  (::clang::ObjCImplDecl::*method_pointer_e9e18c53d1bd5e099053c9483de617c7)(class ::clang::ObjCMethodDecl  *) = &::clang::ObjCImplDecl::addInstanceMethod;
    void  (::clang::ObjCImplDecl::*method_pointer_06de94e614b75f52b593520812c38ffd)(class ::clang::ObjCPropertyImplDecl  *) = &::clang::ObjCImplDecl::addPropertyImplementation;
    bool  (*method_pointer_5ad256381d035b498e1331cd292aa4d7)(class ::clang::Decl  const *) = ::clang::ObjCImplDecl::classof;
    bool  (*method_pointer_3791a3ec27bf5c099c307be8d5e675fe)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplDecl::classofKind;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplDecl::*method_pointer_13d33beb45d15ff895ebd1605087a03c)() const = &::clang::ObjCImplDecl::getClassInterface;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplDecl::*method_pointer_9eab75b2545854ed9e730b3eae2ac71e)() = &::clang::ObjCImplDecl::getClassInterface;
    void  (::clang::ObjCImplDecl::*method_pointer_aafac3b0a18256519c0f5667fd454eb1)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplDecl::setClassInterface;
    boost::python::class_< class ::clang::ObjCImplDecl, autowig::HeldType< class ::clang::ObjCImplDecl >, boost::python::bases< class ::clang::ObjCContainerDecl >, boost::noncopyable > class_82889ac35d675fc9a65f0285105ee4d5("ObjCImplDecl", "", boost::python::no_init);
    class_82889ac35d675fc9a65f0285105ee4d5.def("add_class_method", method_pointer_21059522eda95bf98d45bf7857916fd7, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("add_instance_method", method_pointer_e9e18c53d1bd5e099053c9483de617c7, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("add_property_implementation", method_pointer_06de94e614b75f52b593520812c38ffd, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("classof", method_pointer_5ad256381d035b498e1331cd292aa4d7, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("classof_kind", method_pointer_3791a3ec27bf5c099c307be8d5e675fe, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("get_class_interface", method_pointer_13d33beb45d15ff895ebd1605087a03c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("get_class_interface", method_pointer_9eab75b2545854ed9e730b3eae2ac71e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("set_class_interface", method_pointer_aafac3b0a18256519c0f5667fd454eb1, "");
    class_82889ac35d675fc9a65f0285105ee4d5.staticmethod("classof_kind");
    class_82889ac35d675fc9a65f0285105ee4d5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplDecl >, autowig::HeldType< class ::clang::ObjCContainerDecl > >();
    }

}