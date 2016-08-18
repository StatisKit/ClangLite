#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_306b968f39b7549b8ac1af6424e98129()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_db7bf6c612ce55b0a5a350f686f8cff4)(class ::clang::Type  const *) = ::clang::BuiltinType::classof;
    enum ::clang::BuiltinType::Kind  (::clang::BuiltinType::*method_pointer_5d97b0d97f5759dd879f620ebbf505a3)() const = &::clang::BuiltinType::getKind;
    bool  (::clang::BuiltinType::*method_pointer_148d35ea2a175462b9cd657495240157)() const = &::clang::BuiltinType::isFloatingPoint;
    bool  (::clang::BuiltinType::*method_pointer_b5363c75e6eb5c60bcb534347ce61cc1)() const = &::clang::BuiltinType::isInteger;
    bool  (::clang::BuiltinType::*method_pointer_b3c3053821d951aba39264e905029b49)() const = &::clang::BuiltinType::isNonOverloadPlaceholderType;
    bool  (::clang::BuiltinType::*method_pointer_6c542816c1005bd8bf2ad26081ffe3e2)() const = &::clang::BuiltinType::isPlaceholderType;
    bool  (*method_pointer_ee91f2b514ca5df1bd25cee264aa37a9)(enum ::clang::BuiltinType::Kind ) = ::clang::BuiltinType::isPlaceholderTypeKind;
    bool  (::clang::BuiltinType::*method_pointer_93f1d06515815b7895737559d5f3840d)() const = &::clang::BuiltinType::isSignedInteger;
    bool  (::clang::BuiltinType::*method_pointer_4d2f85958c4e535893f8d511a2fe89fa)() const = &::clang::BuiltinType::isSugared;
    bool  (::clang::BuiltinType::*method_pointer_594897fbe2ce59aea0aa1bcb639c29b7)() const = &::clang::BuiltinType::isUnsignedInteger;
    boost::python::class_< class ::clang::BuiltinType, autowig::HeldType< class ::clang::BuiltinType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_306b968f39b7549b8ac1af6424e98129("BuiltinType", "", boost::python::no_init);
    class_306b968f39b7549b8ac1af6424e98129.def("classof", method_pointer_db7bf6c612ce55b0a5a350f686f8cff4, "");
    class_306b968f39b7549b8ac1af6424e98129.def("get_kind", method_pointer_5d97b0d97f5759dd879f620ebbf505a3, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_floating_point", method_pointer_148d35ea2a175462b9cd657495240157, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_integer", method_pointer_b5363c75e6eb5c60bcb534347ce61cc1, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_non_overload_placeholder_type", method_pointer_b3c3053821d951aba39264e905029b49, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type", method_pointer_6c542816c1005bd8bf2ad26081ffe3e2, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type_kind", method_pointer_ee91f2b514ca5df1bd25cee264aa37a9, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_signed_integer", method_pointer_93f1d06515815b7895737559d5f3840d, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_sugared", method_pointer_4d2f85958c4e535893f8d511a2fe89fa, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_unsigned_integer", method_pointer_594897fbe2ce59aea0aa1bcb639c29b7, "");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("classof");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("is_placeholder_type_kind");

    if(std::is_class< autowig::HeldType< class ::clang::BuiltinType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BuiltinType >, autowig::HeldType< class ::clang::Type > >();
    }

}