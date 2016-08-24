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
    bool  (*method_pointer_6fdd8a4deec755d9a4e4f6be8826d27a)(class ::clang::Type  const *) = ::clang::BuiltinType::classof;
    class ::clang::QualType  (::clang::BuiltinType::*method_pointer_64af699e72055c8985d19ba6cdb0694a)() const = &::clang::BuiltinType::desugar;
    enum ::clang::BuiltinType::Kind  (::clang::BuiltinType::*method_pointer_0fb787f07bc25fdb86c866ed40fa0672)() const = &::clang::BuiltinType::getKind;
    bool  (::clang::BuiltinType::*method_pointer_d94f19fcda415b259c255944b227d239)() const = &::clang::BuiltinType::isFloatingPoint;
    bool  (::clang::BuiltinType::*method_pointer_867d55f8b46b5b7b8a9d85ecd8744cbb)() const = &::clang::BuiltinType::isInteger;
    bool  (::clang::BuiltinType::*method_pointer_3ce9c35a97d6509c84ced4aa50420ce5)() const = &::clang::BuiltinType::isNonOverloadPlaceholderType;
    bool  (::clang::BuiltinType::*method_pointer_8969eabb0ec2523c94ef705bcee33323)() const = &::clang::BuiltinType::isPlaceholderType;
    bool  (*method_pointer_a18e26327fef55228cbcd2c05ea9b155)(enum ::clang::BuiltinType::Kind ) = ::clang::BuiltinType::isPlaceholderTypeKind;
    bool  (::clang::BuiltinType::*method_pointer_072f4cb6efd1507cb43c71f22de5dbd0)() const = &::clang::BuiltinType::isSignedInteger;
    bool  (::clang::BuiltinType::*method_pointer_f353217dee0c50bf9a3da5cb0f478a35)() const = &::clang::BuiltinType::isSugared;
    bool  (::clang::BuiltinType::*method_pointer_fc0e9bbc04f7589cad475f06f09bdac6)() const = &::clang::BuiltinType::isUnsignedInteger;
    boost::python::class_< class ::clang::BuiltinType, autowig::HeldType< class ::clang::BuiltinType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_306b968f39b7549b8ac1af6424e98129("BuiltinType", "", boost::python::no_init);
    class_306b968f39b7549b8ac1af6424e98129.def("classof", method_pointer_6fdd8a4deec755d9a4e4f6be8826d27a, "");
    class_306b968f39b7549b8ac1af6424e98129.def("desugar", method_pointer_64af699e72055c8985d19ba6cdb0694a, "");
    class_306b968f39b7549b8ac1af6424e98129.def("get_kind", method_pointer_0fb787f07bc25fdb86c866ed40fa0672, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_floating_point", method_pointer_d94f19fcda415b259c255944b227d239, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_integer", method_pointer_867d55f8b46b5b7b8a9d85ecd8744cbb, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_non_overload_placeholder_type", method_pointer_3ce9c35a97d6509c84ced4aa50420ce5, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type", method_pointer_8969eabb0ec2523c94ef705bcee33323, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type_kind", method_pointer_a18e26327fef55228cbcd2c05ea9b155, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_signed_integer", method_pointer_072f4cb6efd1507cb43c71f22de5dbd0, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_sugared", method_pointer_f353217dee0c50bf9a3da5cb0f478a35, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_unsigned_integer", method_pointer_fc0e9bbc04f7589cad475f06f09bdac6, "");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("classof");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("is_placeholder_type_kind");

    if(std::is_class< autowig::HeldType< class ::clang::BuiltinType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BuiltinType >, autowig::HeldType< class ::clang::Type > >();
    }

}