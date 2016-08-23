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
    bool  (*method_pointer_dfc21b5fe43d547da034bdf8518378b5)(class ::clang::Type  const *) = ::clang::BuiltinType::classof;
    class ::clang::QualType  (::clang::BuiltinType::*method_pointer_5667d88c0584533ea57f8b66a5c46c2d)() const = &::clang::BuiltinType::desugar;
    enum ::clang::BuiltinType::Kind  (::clang::BuiltinType::*method_pointer_6aeff23e6f41529e85b44fb89154c8d8)() const = &::clang::BuiltinType::getKind;
    bool  (::clang::BuiltinType::*method_pointer_930d0da88fdd5f438e06a9218be6c811)() const = &::clang::BuiltinType::isFloatingPoint;
    bool  (::clang::BuiltinType::*method_pointer_195490970db75da1a35faeaae71bc0ec)() const = &::clang::BuiltinType::isInteger;
    bool  (::clang::BuiltinType::*method_pointer_ea1277b641eb5d4cb07b21ca2732159a)() const = &::clang::BuiltinType::isNonOverloadPlaceholderType;
    bool  (::clang::BuiltinType::*method_pointer_85b355b495835f83812ed41af997e1c8)() const = &::clang::BuiltinType::isPlaceholderType;
    bool  (*method_pointer_b5bbe60cc30255a998e4715ff06795b9)(enum ::clang::BuiltinType::Kind ) = ::clang::BuiltinType::isPlaceholderTypeKind;
    bool  (::clang::BuiltinType::*method_pointer_4708e08eeacd53cb93d754a77db3ecdf)() const = &::clang::BuiltinType::isSignedInteger;
    bool  (::clang::BuiltinType::*method_pointer_47225c690cda5a7982ac618f31b91904)() const = &::clang::BuiltinType::isSugared;
    bool  (::clang::BuiltinType::*method_pointer_d78a0bbb98ac5f90ba37572e3192f8f9)() const = &::clang::BuiltinType::isUnsignedInteger;
    boost::python::class_< class ::clang::BuiltinType, autowig::HeldType< class ::clang::BuiltinType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_306b968f39b7549b8ac1af6424e98129("BuiltinType", "", boost::python::no_init);
    class_306b968f39b7549b8ac1af6424e98129.def("classof", method_pointer_dfc21b5fe43d547da034bdf8518378b5, "");
    class_306b968f39b7549b8ac1af6424e98129.def("desugar", method_pointer_5667d88c0584533ea57f8b66a5c46c2d, "");
    class_306b968f39b7549b8ac1af6424e98129.def("get_kind", method_pointer_6aeff23e6f41529e85b44fb89154c8d8, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_floating_point", method_pointer_930d0da88fdd5f438e06a9218be6c811, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_integer", method_pointer_195490970db75da1a35faeaae71bc0ec, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_non_overload_placeholder_type", method_pointer_ea1277b641eb5d4cb07b21ca2732159a, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type", method_pointer_85b355b495835f83812ed41af997e1c8, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type_kind", method_pointer_b5bbe60cc30255a998e4715ff06795b9, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_signed_integer", method_pointer_4708e08eeacd53cb93d754a77db3ecdf, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_sugared", method_pointer_47225c690cda5a7982ac618f31b91904, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_unsigned_integer", method_pointer_d78a0bbb98ac5f90ba37572e3192f8f9, "");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("classof");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("is_placeholder_type_kind");

    if(std::is_class< autowig::HeldType< class ::clang::BuiltinType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BuiltinType >, autowig::HeldType< class ::clang::Type > >();
    }

}