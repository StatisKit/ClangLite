#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_306b968f39b7549b8ac1af6424e98129()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_187373117ef9535c9d468c6b039cc8d6)(class ::clang::Type  const *) = ::clang::BuiltinType::classof;
    class ::clang::QualType  (::clang::BuiltinType::*method_pointer_9f9e279c7de45c6b924611c13e6839b2)() const = &::clang::BuiltinType::desugar;
    enum ::clang::BuiltinType::Kind  (::clang::BuiltinType::*method_pointer_7baf343f185354cb8ed17f6bc5b13559)() const = &::clang::BuiltinType::getKind;
    bool  (::clang::BuiltinType::*method_pointer_06874016dcde510d8d4534499939eccf)() const = &::clang::BuiltinType::isFloatingPoint;
    bool  (::clang::BuiltinType::*method_pointer_9c9f2f82880752758be1c9a310ad6d72)() const = &::clang::BuiltinType::isInteger;
    bool  (::clang::BuiltinType::*method_pointer_a5b72aa2f66f59b4910e7aacc9243fbd)() const = &::clang::BuiltinType::isNonOverloadPlaceholderType;
    bool  (::clang::BuiltinType::*method_pointer_c446a6b01f645d9dbd687ddef06c97e9)() const = &::clang::BuiltinType::isPlaceholderType;
    bool  (*method_pointer_076fd18529fc5114b38e364b5c2b66e2)(enum ::clang::BuiltinType::Kind ) = ::clang::BuiltinType::isPlaceholderTypeKind;
    bool  (::clang::BuiltinType::*method_pointer_32cee3060f6b5d33999df1b52d212278)() const = &::clang::BuiltinType::isSignedInteger;
    bool  (::clang::BuiltinType::*method_pointer_96d926b43ee85520be079eabe3d9ff9f)() const = &::clang::BuiltinType::isSugared;
    bool  (::clang::BuiltinType::*method_pointer_9b39bf1ea475552cb46e1e1b1247d1c7)() const = &::clang::BuiltinType::isUnsignedInteger;
    boost::python::class_< class ::clang::BuiltinType, autowig::HeldType< class ::clang::BuiltinType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_306b968f39b7549b8ac1af6424e98129("BuiltinType", "", boost::python::no_init);
    class_306b968f39b7549b8ac1af6424e98129.def("classof", method_pointer_187373117ef9535c9d468c6b039cc8d6, "");
    class_306b968f39b7549b8ac1af6424e98129.def("desugar", method_pointer_9f9e279c7de45c6b924611c13e6839b2, "");
    class_306b968f39b7549b8ac1af6424e98129.def("get_kind", method_pointer_7baf343f185354cb8ed17f6bc5b13559, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_floating_point", method_pointer_06874016dcde510d8d4534499939eccf, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_integer", method_pointer_9c9f2f82880752758be1c9a310ad6d72, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_non_overload_placeholder_type", method_pointer_a5b72aa2f66f59b4910e7aacc9243fbd, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type", method_pointer_c446a6b01f645d9dbd687ddef06c97e9, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type_kind", method_pointer_076fd18529fc5114b38e364b5c2b66e2, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_signed_integer", method_pointer_32cee3060f6b5d33999df1b52d212278, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_sugared", method_pointer_96d926b43ee85520be079eabe3d9ff9f, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_unsigned_integer", method_pointer_9b39bf1ea475552cb46e1e1b1247d1c7, "");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("classof");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("is_placeholder_type_kind");

    if(std::is_class< autowig::HeldType< class ::clang::BuiltinType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BuiltinType >, autowig::HeldType< class ::clang::Type > >();
    }

}