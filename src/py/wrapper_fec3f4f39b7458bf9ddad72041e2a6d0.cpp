#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_fec3f4f39b7458bf9ddad72041e2a6d0()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_3a37e3d9b00e58d8a987e4abdb510923)(class ::clang::Type  const *) = ::clang::ObjCInterfaceType::classof;
    class ::clang::QualType  (::clang::ObjCInterfaceType::*method_pointer_22bfed4368405ebd98fe9f2549cac13d)() const = &::clang::ObjCInterfaceType::desugar;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCInterfaceType::*method_pointer_30e33cbf9f9e5f27a9b2c881590df923)() const = &::clang::ObjCInterfaceType::getDecl;
    bool  (::clang::ObjCInterfaceType::*method_pointer_9e9036b28891542788370a24284534c1)() const = &::clang::ObjCInterfaceType::isSugared;
    boost::python::class_< class ::clang::ObjCInterfaceType, autowig::HeldType< class ::clang::ObjCInterfaceType >, boost::python::bases< class ::clang::ObjCObjectType >, boost::noncopyable > class_fec3f4f39b7458bf9ddad72041e2a6d0("ObjCInterfaceType", "", boost::python::no_init);
    class_fec3f4f39b7458bf9ddad72041e2a6d0.def("classof", method_pointer_3a37e3d9b00e58d8a987e4abdb510923, "");
    class_fec3f4f39b7458bf9ddad72041e2a6d0.def("desugar", method_pointer_22bfed4368405ebd98fe9f2549cac13d, "");
    class_fec3f4f39b7458bf9ddad72041e2a6d0.def("get_decl", method_pointer_30e33cbf9f9e5f27a9b2c881590df923, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fec3f4f39b7458bf9ddad72041e2a6d0.def("is_sugared", method_pointer_9e9036b28891542788370a24284534c1, "");
    class_fec3f4f39b7458bf9ddad72041e2a6d0.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCInterfaceType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCInterfaceType >, autowig::HeldType< class ::clang::ObjCObjectType > >();
    }

}