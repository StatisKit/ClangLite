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
    bool  (*method_pointer_076988ca2a6e5cad88bdf2eeac630457)(class ::clang::Type  const *) = ::clang::DependentSizedArrayType::classof;
    class ::clang::QualType  (::clang::DependentSizedArrayType::*method_pointer_ff46375135f358e98afaee0c6b31767d)() const = &::clang::DependentSizedArrayType::desugar;
    class ::clang::SourceLocation  (::clang::DependentSizedArrayType::*method_pointer_14cc35e9b4c55f3080d24133c80892ed)() const = &::clang::DependentSizedArrayType::getLBracketLoc;
    class ::clang::SourceLocation  (::clang::DependentSizedArrayType::*method_pointer_50f94ab6e87d5c77a42f4d107a1aec37)() const = &::clang::DependentSizedArrayType::getRBracketLoc;
    bool  (::clang::DependentSizedArrayType::*method_pointer_21884fd712105e2cba3654f0096a9148)() const = &::clang::DependentSizedArrayType::isSugared;
    boost::python::class_< class ::clang::DependentSizedArrayType, autowig::HeldType< class ::clang::DependentSizedArrayType >, boost::python::bases< class ::clang::ArrayType >, boost::noncopyable > class_47d43e4eda7252d2bec0204a93977671("DependentSizedArrayType", "", boost::python::no_init);
    class_47d43e4eda7252d2bec0204a93977671.def("classof", method_pointer_076988ca2a6e5cad88bdf2eeac630457, "");
    class_47d43e4eda7252d2bec0204a93977671.def("desugar", method_pointer_ff46375135f358e98afaee0c6b31767d, "");
    class_47d43e4eda7252d2bec0204a93977671.def("get_l_bracket_loc", method_pointer_14cc35e9b4c55f3080d24133c80892ed, "");
    class_47d43e4eda7252d2bec0204a93977671.def("get_r_bracket_loc", method_pointer_50f94ab6e87d5c77a42f4d107a1aec37, "");
    class_47d43e4eda7252d2bec0204a93977671.def("is_sugared", method_pointer_21884fd712105e2cba3654f0096a9148, "");
    class_47d43e4eda7252d2bec0204a93977671.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::DependentSizedArrayType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::DependentSizedArrayType >, autowig::HeldType< class ::clang::ArrayType > >();
    }

}