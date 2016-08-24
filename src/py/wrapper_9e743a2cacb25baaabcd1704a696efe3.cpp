#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_9e743a2cacb25baaabcd1704a696efe3()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TemplateArgument  const * (::clang::DependentTemplateSpecializationType::*method_pointer_478e5f4f6e795024ad7f08a65c0783b5)() const = &::clang::DependentTemplateSpecializationType::begin;
    bool  (*method_pointer_a1b08aab8d025c028ff03e23f20fe364)(class ::clang::Type  const *) = ::clang::DependentTemplateSpecializationType::classof;
    class ::clang::QualType  (::clang::DependentTemplateSpecializationType::*method_pointer_ea1b8812dcf65fce95ac38618f5d64ad)() const = &::clang::DependentTemplateSpecializationType::desugar;
    class ::clang::TemplateArgument  const * (::clang::DependentTemplateSpecializationType::*method_pointer_e4fc7066bbc6525ba0dcf7f900aa4811)() const = &::clang::DependentTemplateSpecializationType::end;
    class ::clang::TemplateArgument  const & (::clang::DependentTemplateSpecializationType::*method_pointer_ec769f2459455db7add2ea6c138c7400)(unsigned int ) const = &::clang::DependentTemplateSpecializationType::getArg;
    class ::clang::TemplateArgument  const * (::clang::DependentTemplateSpecializationType::*method_pointer_5579da78549e56148ebdd66fd331b66d)() const = &::clang::DependentTemplateSpecializationType::getArgs;
    unsigned int  (::clang::DependentTemplateSpecializationType::*method_pointer_d53c8d85a35751f0bca277c5ea369810)() const = &::clang::DependentTemplateSpecializationType::getNumArgs;
    bool  (::clang::DependentTemplateSpecializationType::*method_pointer_5ac413f2f0fa593e82ec6533677303c3)() const = &::clang::DependentTemplateSpecializationType::isSugared;
    boost::python::class_< class ::clang::DependentTemplateSpecializationType, autowig::HeldType< class ::clang::DependentTemplateSpecializationType >, boost::python::bases< class ::clang::TypeWithKeyword >, boost::noncopyable > class_9e743a2cacb25baaabcd1704a696efe3("DependentTemplateSpecializationType", "", boost::python::no_init);
    class_9e743a2cacb25baaabcd1704a696efe3.def("begin", method_pointer_478e5f4f6e795024ad7f08a65c0783b5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("classof", method_pointer_a1b08aab8d025c028ff03e23f20fe364, "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("desugar", method_pointer_ea1b8812dcf65fce95ac38618f5d64ad, "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("end", method_pointer_e4fc7066bbc6525ba0dcf7f900aa4811, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("get_arg", method_pointer_ec769f2459455db7add2ea6c138c7400, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("get_args", method_pointer_5579da78549e56148ebdd66fd331b66d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("get_num_args", method_pointer_d53c8d85a35751f0bca277c5ea369810, "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("is_sugared", method_pointer_5ac413f2f0fa593e82ec6533677303c3, "");
    class_9e743a2cacb25baaabcd1704a696efe3.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::DependentTemplateSpecializationType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::DependentTemplateSpecializationType >, autowig::HeldType< class ::clang::TypeWithKeyword > >();
    }

}