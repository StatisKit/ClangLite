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
    bool  (*method_pointer_5769679ed8ff520090a3de59b4f272ea)(class ::clang::Type  const *) = ::clang::UnaryTransformType::classof;
    class ::clang::QualType  (::clang::UnaryTransformType::*method_pointer_9b3172c7dd775d7381eccb4d9731ec5b)() const = &::clang::UnaryTransformType::desugar;
    class ::clang::QualType  (::clang::UnaryTransformType::*method_pointer_3353da332c9350c6923b94bc939f4704)() const = &::clang::UnaryTransformType::getBaseType;
    class ::clang::QualType  (::clang::UnaryTransformType::*method_pointer_072a9d6c45e5509b94bce890dc367646)() const = &::clang::UnaryTransformType::getUnderlyingType;
    bool  (::clang::UnaryTransformType::*method_pointer_757a15e4ada7594f9614194a1ea8353f)() const = &::clang::UnaryTransformType::isSugared;
    boost::python::class_< class ::clang::UnaryTransformType, autowig::HeldType< class ::clang::UnaryTransformType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_63dc6750407a5028aa2e82229f8ea352("UnaryTransformType", "", boost::python::no_init);
    class_63dc6750407a5028aa2e82229f8ea352.def("classof", method_pointer_5769679ed8ff520090a3de59b4f272ea, "");
    class_63dc6750407a5028aa2e82229f8ea352.def("desugar", method_pointer_9b3172c7dd775d7381eccb4d9731ec5b, "");
    class_63dc6750407a5028aa2e82229f8ea352.def("get_base_type", method_pointer_3353da332c9350c6923b94bc939f4704, "");
    class_63dc6750407a5028aa2e82229f8ea352.def("get_underlying_type", method_pointer_072a9d6c45e5509b94bce890dc367646, "");
    class_63dc6750407a5028aa2e82229f8ea352.def("is_sugared", method_pointer_757a15e4ada7594f9614194a1ea8353f, "");
    class_63dc6750407a5028aa2e82229f8ea352.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UnaryTransformType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UnaryTransformType >, autowig::HeldType< class ::clang::Type > >();
    }

}