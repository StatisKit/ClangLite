#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_47d43e4eda7252d2bec0204a93977671()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_54b7eda645465c1e9fb00be85074801a)(class ::clang::Type  const *) = ::clang::DependentSizedArrayType::classof;
    class ::clang::QualType  (::clang::DependentSizedArrayType::*method_pointer_15a2b0fd1785525f8f042b1e0888efe0)() const = &::clang::DependentSizedArrayType::desugar;
    class ::clang::SourceLocation  (::clang::DependentSizedArrayType::*method_pointer_1f4d2542919b51dda937aca1fcfb219f)() const = &::clang::DependentSizedArrayType::getLBracketLoc;
    class ::clang::SourceLocation  (::clang::DependentSizedArrayType::*method_pointer_8c2bfd28e7305467aeb593b74c4aee20)() const = &::clang::DependentSizedArrayType::getRBracketLoc;
    bool  (::clang::DependentSizedArrayType::*method_pointer_a921c26c7cc456f19561463e8cc00431)() const = &::clang::DependentSizedArrayType::isSugared;
    boost::python::class_< class ::clang::DependentSizedArrayType, autowig::HeldType< class ::clang::DependentSizedArrayType >, boost::python::bases< class ::clang::ArrayType >, boost::noncopyable > class_47d43e4eda7252d2bec0204a93977671("DependentSizedArrayType", "", boost::python::no_init);
    class_47d43e4eda7252d2bec0204a93977671.def("classof", method_pointer_54b7eda645465c1e9fb00be85074801a, "");
    class_47d43e4eda7252d2bec0204a93977671.def("desugar", method_pointer_15a2b0fd1785525f8f042b1e0888efe0, "");
    class_47d43e4eda7252d2bec0204a93977671.def("get_l_bracket_loc", method_pointer_1f4d2542919b51dda937aca1fcfb219f, "");
    class_47d43e4eda7252d2bec0204a93977671.def("get_r_bracket_loc", method_pointer_8c2bfd28e7305467aeb593b74c4aee20, "");
    class_47d43e4eda7252d2bec0204a93977671.def("is_sugared", method_pointer_a921c26c7cc456f19561463e8cc00431, "");
    class_47d43e4eda7252d2bec0204a93977671.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::DependentSizedArrayType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::DependentSizedArrayType >, autowig::HeldType< class ::clang::ArrayType > >();
    }

}