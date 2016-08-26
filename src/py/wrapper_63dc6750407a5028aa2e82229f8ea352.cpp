#include "_clanglite.h"


namespace autowig
{
}


void wrapper_63dc6750407a5028aa2e82229f8ea352()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_4f2431b7b1ee539e80a12d5638dbad1f)(class ::clang::Type  const *) = ::clang::UnaryTransformType::classof;
    class ::clang::QualType  (::clang::UnaryTransformType::*method_pointer_54549c3a04155982812957557e5ba85f)() const = &::clang::UnaryTransformType::desugar;
    class ::clang::QualType  (::clang::UnaryTransformType::*method_pointer_a32dc26257b5544fa636b27408866eda)() const = &::clang::UnaryTransformType::getBaseType;
    class ::clang::QualType  (::clang::UnaryTransformType::*method_pointer_79492c53eefc5a949ada7dcc6ac21fd9)() const = &::clang::UnaryTransformType::getUnderlyingType;
    bool  (::clang::UnaryTransformType::*method_pointer_51d2039490005f0b99b18388705f0578)() const = &::clang::UnaryTransformType::isSugared;
    boost::python::class_< class ::clang::UnaryTransformType, autowig::HeldType< class ::clang::UnaryTransformType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_63dc6750407a5028aa2e82229f8ea352("UnaryTransformType", "", boost::python::no_init);
    class_63dc6750407a5028aa2e82229f8ea352.def("classof", method_pointer_4f2431b7b1ee539e80a12d5638dbad1f, "");
    class_63dc6750407a5028aa2e82229f8ea352.def("desugar", method_pointer_54549c3a04155982812957557e5ba85f, "");
    class_63dc6750407a5028aa2e82229f8ea352.def("get_base_type", method_pointer_a32dc26257b5544fa636b27408866eda, "");
    class_63dc6750407a5028aa2e82229f8ea352.def("get_underlying_type", method_pointer_79492c53eefc5a949ada7dcc6ac21fd9, "");
    class_63dc6750407a5028aa2e82229f8ea352.def("is_sugared", method_pointer_51d2039490005f0b99b18388705f0578, "");
    class_63dc6750407a5028aa2e82229f8ea352.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UnaryTransformType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UnaryTransformType >, autowig::HeldType< class ::clang::Type > >();
    }

}