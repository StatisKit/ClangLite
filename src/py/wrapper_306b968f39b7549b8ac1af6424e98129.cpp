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
    bool  (*method_pointer_2c26133f000f58f39210a8c3ccb3dc60)(class ::clang::Type  const *) = ::clang::BuiltinType::classof;
    class ::clang::QualType  (::clang::BuiltinType::*method_pointer_87b93e9ff2b750d5b1f5a17addd38278)() const = &::clang::BuiltinType::desugar;
    enum ::clang::BuiltinType::Kind  (::clang::BuiltinType::*method_pointer_dddf298e74805ebcb96908767992eaf7)() const = &::clang::BuiltinType::getKind;
    bool  (::clang::BuiltinType::*method_pointer_f7874bbfccdc558f85ba40c77fc6bd64)() const = &::clang::BuiltinType::isFloatingPoint;
    bool  (::clang::BuiltinType::*method_pointer_2afea04c097b5a8e8805d2a8b83d8083)() const = &::clang::BuiltinType::isInteger;
    bool  (::clang::BuiltinType::*method_pointer_6c8df7672ec75c1782399cb9b523d05b)() const = &::clang::BuiltinType::isNonOverloadPlaceholderType;
    bool  (::clang::BuiltinType::*method_pointer_61b2e97012525d898ef2a4f198f827a0)() const = &::clang::BuiltinType::isPlaceholderType;
    bool  (*method_pointer_d53aa8235b575cc9811fd34cc8720dac)(enum ::clang::BuiltinType::Kind ) = ::clang::BuiltinType::isPlaceholderTypeKind;
    bool  (::clang::BuiltinType::*method_pointer_b13d4083e83353c982d8f50ece37cac2)() const = &::clang::BuiltinType::isSignedInteger;
    bool  (::clang::BuiltinType::*method_pointer_554fbbdd675756a99ddd72d13894bf6b)() const = &::clang::BuiltinType::isSugared;
    bool  (::clang::BuiltinType::*method_pointer_4e4c56f32d125328bdcfbc29e2319efc)() const = &::clang::BuiltinType::isUnsignedInteger;
    boost::python::class_< class ::clang::BuiltinType, autowig::HeldType< class ::clang::BuiltinType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_306b968f39b7549b8ac1af6424e98129("BuiltinType", "", boost::python::no_init);
    class_306b968f39b7549b8ac1af6424e98129.def("classof", method_pointer_2c26133f000f58f39210a8c3ccb3dc60, "");
    class_306b968f39b7549b8ac1af6424e98129.def("desugar", method_pointer_87b93e9ff2b750d5b1f5a17addd38278, "");
    class_306b968f39b7549b8ac1af6424e98129.def("get_kind", method_pointer_dddf298e74805ebcb96908767992eaf7, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_floating_point", method_pointer_f7874bbfccdc558f85ba40c77fc6bd64, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_integer", method_pointer_2afea04c097b5a8e8805d2a8b83d8083, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_non_overload_placeholder_type", method_pointer_6c8df7672ec75c1782399cb9b523d05b, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type", method_pointer_61b2e97012525d898ef2a4f198f827a0, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type_kind", method_pointer_d53aa8235b575cc9811fd34cc8720dac, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_signed_integer", method_pointer_b13d4083e83353c982d8f50ece37cac2, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_sugared", method_pointer_554fbbdd675756a99ddd72d13894bf6b, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_unsigned_integer", method_pointer_4e4c56f32d125328bdcfbc29e2319efc, "");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("classof");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("is_placeholder_type_kind");

    if(std::is_class< autowig::HeldType< class ::clang::BuiltinType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BuiltinType >, autowig::HeldType< class ::clang::Type > >();
    }

}