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
    bool  (*method_pointer_c343b1e3e5fc5cd19659a4e55cf54341)(class ::clang::Type  const *) = ::clang::UnaryTransformType::classof;
    class ::clang::QualType  (::clang::UnaryTransformType::*method_pointer_893bb82fba595ba6bb57bb978c287703)() const = &::clang::UnaryTransformType::desugar;
    class ::clang::QualType  (::clang::UnaryTransformType::*method_pointer_e62dddb1a524528dbc45aa73452930e0)() const = &::clang::UnaryTransformType::getBaseType;
    class ::clang::QualType  (::clang::UnaryTransformType::*method_pointer_ea468c552c865791a8f26d3089b6b1b2)() const = &::clang::UnaryTransformType::getUnderlyingType;
    bool  (::clang::UnaryTransformType::*method_pointer_57706a1a597a5e57a86f3c95bde0c712)() const = &::clang::UnaryTransformType::isSugared;
    boost::python::class_< class ::clang::UnaryTransformType, autowig::HeldType< class ::clang::UnaryTransformType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_63dc6750407a5028aa2e82229f8ea352("UnaryTransformType", "", boost::python::no_init);
    class_63dc6750407a5028aa2e82229f8ea352.def("classof", method_pointer_c343b1e3e5fc5cd19659a4e55cf54341, "");
    class_63dc6750407a5028aa2e82229f8ea352.def("desugar", method_pointer_893bb82fba595ba6bb57bb978c287703, "");
    class_63dc6750407a5028aa2e82229f8ea352.def("get_base_type", method_pointer_e62dddb1a524528dbc45aa73452930e0, "");
    class_63dc6750407a5028aa2e82229f8ea352.def("get_underlying_type", method_pointer_ea468c552c865791a8f26d3089b6b1b2, "");
    class_63dc6750407a5028aa2e82229f8ea352.def("is_sugared", method_pointer_57706a1a597a5e57a86f3c95bde0c712, "");
    class_63dc6750407a5028aa2e82229f8ea352.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UnaryTransformType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UnaryTransformType >, autowig::HeldType< class ::clang::Type > >();
    }

}