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
    bool  (*method_pointer_1834e9380d3a593db2a158a5b9372781)(class ::clang::Type  const *) = ::clang::ObjCInterfaceType::classof;
    class ::clang::QualType  (::clang::ObjCInterfaceType::*method_pointer_9e08463f7afe5148a0d0b5c34259f5ca)() const = &::clang::ObjCInterfaceType::desugar;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCInterfaceType::*method_pointer_f719870000b950c8a2029f6d6241a8e6)() const = &::clang::ObjCInterfaceType::getDecl;
    bool  (::clang::ObjCInterfaceType::*method_pointer_87c5277bdb5657d8ac5b5757126cb0eb)() const = &::clang::ObjCInterfaceType::isSugared;
    boost::python::class_< class ::clang::ObjCInterfaceType, autowig::HeldType< class ::clang::ObjCInterfaceType >, boost::python::bases< class ::clang::ObjCObjectType >, boost::noncopyable > class_fec3f4f39b7458bf9ddad72041e2a6d0("ObjCInterfaceType", "", boost::python::no_init);
    class_fec3f4f39b7458bf9ddad72041e2a6d0.def("classof", method_pointer_1834e9380d3a593db2a158a5b9372781, "");
    class_fec3f4f39b7458bf9ddad72041e2a6d0.def("desugar", method_pointer_9e08463f7afe5148a0d0b5c34259f5ca, "");
    class_fec3f4f39b7458bf9ddad72041e2a6d0.def("get_decl", method_pointer_f719870000b950c8a2029f6d6241a8e6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fec3f4f39b7458bf9ddad72041e2a6d0.def("is_sugared", method_pointer_87c5277bdb5657d8ac5b5757126cb0eb, "");
    class_fec3f4f39b7458bf9ddad72041e2a6d0.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCInterfaceType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCInterfaceType >, autowig::HeldType< class ::clang::ObjCObjectType > >();
    }

}