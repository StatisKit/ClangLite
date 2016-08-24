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
    bool  (*method_pointer_9bf8886eaeb554878b36de727d631bcc)(class ::clang::Type  const *) = ::clang::UnaryTransformType::classof;
    class ::clang::QualType  (::clang::UnaryTransformType::*method_pointer_f7e0392dd40c5978b7ebfb71a9be3fef)() const = &::clang::UnaryTransformType::desugar;
    class ::clang::QualType  (::clang::UnaryTransformType::*method_pointer_4e74f3bd626457cf9ee892979beede6f)() const = &::clang::UnaryTransformType::getBaseType;
    class ::clang::QualType  (::clang::UnaryTransformType::*method_pointer_3153cf19fe225758a6e3e1901889368f)() const = &::clang::UnaryTransformType::getUnderlyingType;
    bool  (::clang::UnaryTransformType::*method_pointer_3ee34b9d6c5b5e5eb3acefd74f6ffbf7)() const = &::clang::UnaryTransformType::isSugared;
    boost::python::class_< class ::clang::UnaryTransformType, autowig::HeldType< class ::clang::UnaryTransformType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_63dc6750407a5028aa2e82229f8ea352("UnaryTransformType", "", boost::python::no_init);
    class_63dc6750407a5028aa2e82229f8ea352.def("classof", method_pointer_9bf8886eaeb554878b36de727d631bcc, "");
    class_63dc6750407a5028aa2e82229f8ea352.def("desugar", method_pointer_f7e0392dd40c5978b7ebfb71a9be3fef, "");
    class_63dc6750407a5028aa2e82229f8ea352.def("get_base_type", method_pointer_4e74f3bd626457cf9ee892979beede6f, "");
    class_63dc6750407a5028aa2e82229f8ea352.def("get_underlying_type", method_pointer_3153cf19fe225758a6e3e1901889368f, "");
    class_63dc6750407a5028aa2e82229f8ea352.def("is_sugared", method_pointer_3ee34b9d6c5b5e5eb3acefd74f6ffbf7, "");
    class_63dc6750407a5028aa2e82229f8ea352.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UnaryTransformType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UnaryTransformType >, autowig::HeldType< class ::clang::Type > >();
    }

}