#include "_clanglite.h"


namespace autowig
{
}


void wrapper_47d43e4eda7252d2bec0204a93977671()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_34d21930ee09553e8d0368f1240719fe)(class ::clang::Type  const *) = ::clang::DependentSizedArrayType::classof;
    class ::clang::QualType  (::clang::DependentSizedArrayType::*method_pointer_9a6255aa16a8558b8ff69cc95d2645d9)() const = &::clang::DependentSizedArrayType::desugar;
    class ::clang::SourceLocation  (::clang::DependentSizedArrayType::*method_pointer_2704b19608dd5ccab2c3f55c18beb80f)() const = &::clang::DependentSizedArrayType::getLBracketLoc;
    class ::clang::SourceLocation  (::clang::DependentSizedArrayType::*method_pointer_ca0666f7fe205e0fbfcb8622ff007a23)() const = &::clang::DependentSizedArrayType::getRBracketLoc;
    bool  (::clang::DependentSizedArrayType::*method_pointer_6e6194377b6050c6a3fe0d8b286e6201)() const = &::clang::DependentSizedArrayType::isSugared;
    boost::python::class_< class ::clang::DependentSizedArrayType, autowig::HeldType< class ::clang::DependentSizedArrayType >, boost::python::bases< class ::clang::ArrayType >, boost::noncopyable > class_47d43e4eda7252d2bec0204a93977671("DependentSizedArrayType", "", boost::python::no_init);
    class_47d43e4eda7252d2bec0204a93977671.def("classof", method_pointer_34d21930ee09553e8d0368f1240719fe, "");
    class_47d43e4eda7252d2bec0204a93977671.def("desugar", method_pointer_9a6255aa16a8558b8ff69cc95d2645d9, "");
    class_47d43e4eda7252d2bec0204a93977671.def("get_l_bracket_loc", method_pointer_2704b19608dd5ccab2c3f55c18beb80f, "");
    class_47d43e4eda7252d2bec0204a93977671.def("get_r_bracket_loc", method_pointer_ca0666f7fe205e0fbfcb8622ff007a23, "");
    class_47d43e4eda7252d2bec0204a93977671.def("is_sugared", method_pointer_6e6194377b6050c6a3fe0d8b286e6201, "");
    class_47d43e4eda7252d2bec0204a93977671.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::DependentSizedArrayType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::DependentSizedArrayType >, autowig::HeldType< class ::clang::ArrayType > >();
    }

}