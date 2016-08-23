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
    bool  (*method_pointer_b63976e1b6cf52db91a22f848e7eeed5)(class ::clang::Type  const *) = ::clang::BuiltinType::classof;
    class ::clang::QualType  (::clang::BuiltinType::*method_pointer_fff19ea45b3a563189e3f09435312c9f)() const = &::clang::BuiltinType::desugar;
    enum ::clang::BuiltinType::Kind  (::clang::BuiltinType::*method_pointer_2c8d9d9841eb55b49d6cd5a95339c442)() const = &::clang::BuiltinType::getKind;
    bool  (::clang::BuiltinType::*method_pointer_1ea6fa7595905bb5bd7123a5d87cbed6)() const = &::clang::BuiltinType::isFloatingPoint;
    bool  (::clang::BuiltinType::*method_pointer_39e94874189253118aefe5876de52928)() const = &::clang::BuiltinType::isInteger;
    bool  (::clang::BuiltinType::*method_pointer_142d035854d95c33a8aa9ba574e124b4)() const = &::clang::BuiltinType::isNonOverloadPlaceholderType;
    bool  (::clang::BuiltinType::*method_pointer_49d5edc094ec5d67954b6b231c1b7400)() const = &::clang::BuiltinType::isPlaceholderType;
    bool  (*method_pointer_52b9ba2d30aa5267b7b49dc71d21d3d2)(enum ::clang::BuiltinType::Kind ) = ::clang::BuiltinType::isPlaceholderTypeKind;
    bool  (::clang::BuiltinType::*method_pointer_023969afceac5c49a0e740d28135bab9)() const = &::clang::BuiltinType::isSignedInteger;
    bool  (::clang::BuiltinType::*method_pointer_b672a0d0599e5baa9d79346ab9a3af3b)() const = &::clang::BuiltinType::isSugared;
    bool  (::clang::BuiltinType::*method_pointer_55781cb8fc395c189e7f1aeec2a743d8)() const = &::clang::BuiltinType::isUnsignedInteger;
    boost::python::class_< class ::clang::BuiltinType, autowig::HeldType< class ::clang::BuiltinType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_306b968f39b7549b8ac1af6424e98129("BuiltinType", "", boost::python::no_init);
    class_306b968f39b7549b8ac1af6424e98129.def("classof", method_pointer_b63976e1b6cf52db91a22f848e7eeed5, "");
    class_306b968f39b7549b8ac1af6424e98129.def("desugar", method_pointer_fff19ea45b3a563189e3f09435312c9f, "");
    class_306b968f39b7549b8ac1af6424e98129.def("get_kind", method_pointer_2c8d9d9841eb55b49d6cd5a95339c442, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_floating_point", method_pointer_1ea6fa7595905bb5bd7123a5d87cbed6, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_integer", method_pointer_39e94874189253118aefe5876de52928, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_non_overload_placeholder_type", method_pointer_142d035854d95c33a8aa9ba574e124b4, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type", method_pointer_49d5edc094ec5d67954b6b231c1b7400, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type_kind", method_pointer_52b9ba2d30aa5267b7b49dc71d21d3d2, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_signed_integer", method_pointer_023969afceac5c49a0e740d28135bab9, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_sugared", method_pointer_b672a0d0599e5baa9d79346ab9a3af3b, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_unsigned_integer", method_pointer_55781cb8fc395c189e7f1aeec2a743d8, "");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("classof");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("is_placeholder_type_kind");

    if(std::is_class< autowig::HeldType< class ::clang::BuiltinType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BuiltinType >, autowig::HeldType< class ::clang::Type > >();
    }

}