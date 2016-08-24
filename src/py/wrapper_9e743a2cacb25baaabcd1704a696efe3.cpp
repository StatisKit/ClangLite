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
    class ::clang::TemplateArgument  const * (::clang::DependentTemplateSpecializationType::*method_pointer_86c64112d91a5a58aca76d21e12797df)() const = &::clang::DependentTemplateSpecializationType::begin;
    bool  (*method_pointer_931e6522f9385cbe9fa123f19af583d6)(class ::clang::Type  const *) = ::clang::DependentTemplateSpecializationType::classof;
    class ::clang::QualType  (::clang::DependentTemplateSpecializationType::*method_pointer_b7ac99c2b95f5dad85e35d65de7684d5)() const = &::clang::DependentTemplateSpecializationType::desugar;
    class ::clang::TemplateArgument  const * (::clang::DependentTemplateSpecializationType::*method_pointer_69c178ce54ca50cea93a2bf1a9df5e9b)() const = &::clang::DependentTemplateSpecializationType::end;
    class ::clang::TemplateArgument  const & (::clang::DependentTemplateSpecializationType::*method_pointer_1ee74763b6615be29864794a88c7ef4d)(unsigned int ) const = &::clang::DependentTemplateSpecializationType::getArg;
    class ::clang::TemplateArgument  const * (::clang::DependentTemplateSpecializationType::*method_pointer_d3a05878fbd75a77ad7fa15802417b1f)() const = &::clang::DependentTemplateSpecializationType::getArgs;
    unsigned int  (::clang::DependentTemplateSpecializationType::*method_pointer_c46e0374e9745437ba70b2924192c26d)() const = &::clang::DependentTemplateSpecializationType::getNumArgs;
    bool  (::clang::DependentTemplateSpecializationType::*method_pointer_0b10ac189aff561faabb4f65cd6f3c93)() const = &::clang::DependentTemplateSpecializationType::isSugared;
    boost::python::class_< class ::clang::DependentTemplateSpecializationType, autowig::HeldType< class ::clang::DependentTemplateSpecializationType >, boost::python::bases< class ::clang::TypeWithKeyword >, boost::noncopyable > class_9e743a2cacb25baaabcd1704a696efe3("DependentTemplateSpecializationType", "", boost::python::no_init);
    class_9e743a2cacb25baaabcd1704a696efe3.def("begin", method_pointer_86c64112d91a5a58aca76d21e12797df, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("classof", method_pointer_931e6522f9385cbe9fa123f19af583d6, "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("desugar", method_pointer_b7ac99c2b95f5dad85e35d65de7684d5, "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("end", method_pointer_69c178ce54ca50cea93a2bf1a9df5e9b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("get_arg", method_pointer_1ee74763b6615be29864794a88c7ef4d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("get_args", method_pointer_d3a05878fbd75a77ad7fa15802417b1f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("get_num_args", method_pointer_c46e0374e9745437ba70b2924192c26d, "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("is_sugared", method_pointer_0b10ac189aff561faabb4f65cd6f3c93, "");
    class_9e743a2cacb25baaabcd1704a696efe3.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::DependentTemplateSpecializationType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::DependentTemplateSpecializationType >, autowig::HeldType< class ::clang::TypeWithKeyword > >();
    }

}