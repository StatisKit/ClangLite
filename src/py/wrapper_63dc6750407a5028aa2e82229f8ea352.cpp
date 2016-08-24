#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_63dc6750407a5028aa2e82229f8ea352()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_433c17aea2495e639e6549dcf3dc327c)(class ::clang::Type  const *) = ::clang::UnaryTransformType::classof;
    class ::clang::QualType  (::clang::UnaryTransformType::*method_pointer_1de99ed5449e58419f3e40535fd40270)() const = &::clang::UnaryTransformType::desugar;
    class ::clang::QualType  (::clang::UnaryTransformType::*method_pointer_68a64ef18f7d5d7e95069b2768e77ba7)() const = &::clang::UnaryTransformType::getBaseType;
    class ::clang::QualType  (::clang::UnaryTransformType::*method_pointer_7cda52476b7a52b8a0bf77b5fe1077b9)() const = &::clang::UnaryTransformType::getUnderlyingType;
    bool  (::clang::UnaryTransformType::*method_pointer_066030b5ebcc57949b028cea2a7b6917)() const = &::clang::UnaryTransformType::isSugared;
    boost::python::class_< class ::clang::UnaryTransformType, autowig::HeldType< class ::clang::UnaryTransformType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_63dc6750407a5028aa2e82229f8ea352("UnaryTransformType", "", boost::python::no_init);
    class_63dc6750407a5028aa2e82229f8ea352.def("classof", method_pointer_433c17aea2495e639e6549dcf3dc327c, "");
    class_63dc6750407a5028aa2e82229f8ea352.def("desugar", method_pointer_1de99ed5449e58419f3e40535fd40270, "");
    class_63dc6750407a5028aa2e82229f8ea352.def("get_base_type", method_pointer_68a64ef18f7d5d7e95069b2768e77ba7, "");
    class_63dc6750407a5028aa2e82229f8ea352.def("get_underlying_type", method_pointer_7cda52476b7a52b8a0bf77b5fe1077b9, "");
    class_63dc6750407a5028aa2e82229f8ea352.def("is_sugared", method_pointer_066030b5ebcc57949b028cea2a7b6917, "");
    class_63dc6750407a5028aa2e82229f8ea352.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UnaryTransformType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UnaryTransformType >, autowig::HeldType< class ::clang::Type > >();
    }

}