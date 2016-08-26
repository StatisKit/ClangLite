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
    bool  (*method_pointer_dcaa3f43baf15823b22c983ff2dcefd0)(class ::clang::Type  const *) = ::clang::UnaryTransformType::classof;
    class ::clang::QualType  (::clang::UnaryTransformType::*method_pointer_d3a078ee37df56579711cf068ca5cb26)() const = &::clang::UnaryTransformType::desugar;
    class ::clang::QualType  (::clang::UnaryTransformType::*method_pointer_a6f1bfc1605958de8281d195917cc362)() const = &::clang::UnaryTransformType::getBaseType;
    class ::clang::QualType  (::clang::UnaryTransformType::*method_pointer_b58d756f6d325eb8a912db6dae781bc2)() const = &::clang::UnaryTransformType::getUnderlyingType;
    bool  (::clang::UnaryTransformType::*method_pointer_8f2f17813c3551d8a2d0614c0a7d3bee)() const = &::clang::UnaryTransformType::isSugared;
    boost::python::class_< class ::clang::UnaryTransformType, autowig::HeldType< class ::clang::UnaryTransformType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_63dc6750407a5028aa2e82229f8ea352("UnaryTransformType", "", boost::python::no_init);
    class_63dc6750407a5028aa2e82229f8ea352.def("classof", method_pointer_dcaa3f43baf15823b22c983ff2dcefd0, "");
    class_63dc6750407a5028aa2e82229f8ea352.def("desugar", method_pointer_d3a078ee37df56579711cf068ca5cb26, "");
    class_63dc6750407a5028aa2e82229f8ea352.def("get_base_type", method_pointer_a6f1bfc1605958de8281d195917cc362, "");
    class_63dc6750407a5028aa2e82229f8ea352.def("get_underlying_type", method_pointer_b58d756f6d325eb8a912db6dae781bc2, "");
    class_63dc6750407a5028aa2e82229f8ea352.def("is_sugared", method_pointer_8f2f17813c3551d8a2d0614c0a7d3bee, "");
    class_63dc6750407a5028aa2e82229f8ea352.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UnaryTransformType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UnaryTransformType >, autowig::HeldType< class ::clang::Type > >();
    }

}