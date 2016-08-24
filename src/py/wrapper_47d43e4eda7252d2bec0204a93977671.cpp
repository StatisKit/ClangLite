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
    bool  (*method_pointer_7afe3afe981e58a79eca84acadff6d8d)(class ::clang::Type  const *) = ::clang::DependentSizedArrayType::classof;
    class ::clang::QualType  (::clang::DependentSizedArrayType::*method_pointer_87b0f9d7458c5ce9acc8b7cff3e8404f)() const = &::clang::DependentSizedArrayType::desugar;
    class ::clang::SourceLocation  (::clang::DependentSizedArrayType::*method_pointer_82af919f38db59908fb2dd33c0429927)() const = &::clang::DependentSizedArrayType::getLBracketLoc;
    class ::clang::SourceLocation  (::clang::DependentSizedArrayType::*method_pointer_7687e5119e9d56d2bc199396c92620c3)() const = &::clang::DependentSizedArrayType::getRBracketLoc;
    bool  (::clang::DependentSizedArrayType::*method_pointer_4976f9cd3f8250d49800a39df53b7429)() const = &::clang::DependentSizedArrayType::isSugared;
    boost::python::class_< class ::clang::DependentSizedArrayType, autowig::HeldType< class ::clang::DependentSizedArrayType >, boost::python::bases< class ::clang::ArrayType >, boost::noncopyable > class_47d43e4eda7252d2bec0204a93977671("DependentSizedArrayType", "", boost::python::no_init);
    class_47d43e4eda7252d2bec0204a93977671.def("classof", method_pointer_7afe3afe981e58a79eca84acadff6d8d, "");
    class_47d43e4eda7252d2bec0204a93977671.def("desugar", method_pointer_87b0f9d7458c5ce9acc8b7cff3e8404f, "");
    class_47d43e4eda7252d2bec0204a93977671.def("get_l_bracket_loc", method_pointer_82af919f38db59908fb2dd33c0429927, "");
    class_47d43e4eda7252d2bec0204a93977671.def("get_r_bracket_loc", method_pointer_7687e5119e9d56d2bc199396c92620c3, "");
    class_47d43e4eda7252d2bec0204a93977671.def("is_sugared", method_pointer_4976f9cd3f8250d49800a39df53b7429, "");
    class_47d43e4eda7252d2bec0204a93977671.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::DependentSizedArrayType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::DependentSizedArrayType >, autowig::HeldType< class ::clang::ArrayType > >();
    }

}