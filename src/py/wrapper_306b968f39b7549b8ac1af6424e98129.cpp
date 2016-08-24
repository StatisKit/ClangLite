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
    bool  (*method_pointer_bfaf18e65ac351d59bc69e2aa68a7620)(class ::clang::Type  const *) = ::clang::BuiltinType::classof;
    class ::clang::QualType  (::clang::BuiltinType::*method_pointer_2a5c1f52cc635c038f61292d69f5bf9f)() const = &::clang::BuiltinType::desugar;
    enum ::clang::BuiltinType::Kind  (::clang::BuiltinType::*method_pointer_ef6a9bbab2a05625bedf97a0af30a002)() const = &::clang::BuiltinType::getKind;
    bool  (::clang::BuiltinType::*method_pointer_39d0765125b751a19f96d461cbe94263)() const = &::clang::BuiltinType::isFloatingPoint;
    bool  (::clang::BuiltinType::*method_pointer_6834fd5f9ad65878a05142c76634e104)() const = &::clang::BuiltinType::isInteger;
    bool  (::clang::BuiltinType::*method_pointer_b58ddfca2826591ea5196e9980d66d2b)() const = &::clang::BuiltinType::isNonOverloadPlaceholderType;
    bool  (::clang::BuiltinType::*method_pointer_677c4c853e805d62a080f62d6110f513)() const = &::clang::BuiltinType::isPlaceholderType;
    bool  (*method_pointer_0a8e7e452f1257f6975fb1261a048369)(enum ::clang::BuiltinType::Kind ) = ::clang::BuiltinType::isPlaceholderTypeKind;
    bool  (::clang::BuiltinType::*method_pointer_342426ecd4745a8cb510224b0befe570)() const = &::clang::BuiltinType::isSignedInteger;
    bool  (::clang::BuiltinType::*method_pointer_9dde8b095bff59298a43a83915c2902d)() const = &::clang::BuiltinType::isSugared;
    bool  (::clang::BuiltinType::*method_pointer_45814d9e507857f7bf5cdaa00c00ff3d)() const = &::clang::BuiltinType::isUnsignedInteger;
    boost::python::class_< class ::clang::BuiltinType, autowig::HeldType< class ::clang::BuiltinType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_306b968f39b7549b8ac1af6424e98129("BuiltinType", "", boost::python::no_init);
    class_306b968f39b7549b8ac1af6424e98129.def("classof", method_pointer_bfaf18e65ac351d59bc69e2aa68a7620, "");
    class_306b968f39b7549b8ac1af6424e98129.def("desugar", method_pointer_2a5c1f52cc635c038f61292d69f5bf9f, "");
    class_306b968f39b7549b8ac1af6424e98129.def("get_kind", method_pointer_ef6a9bbab2a05625bedf97a0af30a002, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_floating_point", method_pointer_39d0765125b751a19f96d461cbe94263, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_integer", method_pointer_6834fd5f9ad65878a05142c76634e104, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_non_overload_placeholder_type", method_pointer_b58ddfca2826591ea5196e9980d66d2b, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type", method_pointer_677c4c853e805d62a080f62d6110f513, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type_kind", method_pointer_0a8e7e452f1257f6975fb1261a048369, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_signed_integer", method_pointer_342426ecd4745a8cb510224b0befe570, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_sugared", method_pointer_9dde8b095bff59298a43a83915c2902d, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_unsigned_integer", method_pointer_45814d9e507857f7bf5cdaa00c00ff3d, "");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("classof");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("is_placeholder_type_kind");

    if(std::is_class< autowig::HeldType< class ::clang::BuiltinType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BuiltinType >, autowig::HeldType< class ::clang::Type > >();
    }

}