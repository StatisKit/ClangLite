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
    class ::clang::TemplateArgument  const * (::clang::DependentTemplateSpecializationType::*method_pointer_d33aa9cf534f55eda5120a0856252cab)() const = &::clang::DependentTemplateSpecializationType::begin;
    bool  (*method_pointer_89be5c67bef75898bd08de467ae9d4a5)(class ::clang::Type  const *) = ::clang::DependentTemplateSpecializationType::classof;
    class ::clang::QualType  (::clang::DependentTemplateSpecializationType::*method_pointer_9a353daa4e375e489c58d3e5d5b4d816)() const = &::clang::DependentTemplateSpecializationType::desugar;
    class ::clang::TemplateArgument  const * (::clang::DependentTemplateSpecializationType::*method_pointer_5f08afadea2e5a36b772211de300b012)() const = &::clang::DependentTemplateSpecializationType::end;
    class ::clang::TemplateArgument  const & (::clang::DependentTemplateSpecializationType::*method_pointer_4ca6cc73ed8d59a6af6608bddc5f3fca)(unsigned int ) const = &::clang::DependentTemplateSpecializationType::getArg;
    class ::clang::TemplateArgument  const * (::clang::DependentTemplateSpecializationType::*method_pointer_46039384ad225974949b028bb5784bc2)() const = &::clang::DependentTemplateSpecializationType::getArgs;
    unsigned int  (::clang::DependentTemplateSpecializationType::*method_pointer_c0f4f9e67dcc55a8a8a6244c245bd6c6)() const = &::clang::DependentTemplateSpecializationType::getNumArgs;
    bool  (::clang::DependentTemplateSpecializationType::*method_pointer_944795f23d885129a861ad171f017a49)() const = &::clang::DependentTemplateSpecializationType::isSugared;
    boost::python::class_< class ::clang::DependentTemplateSpecializationType, autowig::HeldType< class ::clang::DependentTemplateSpecializationType >, boost::python::bases< class ::clang::TypeWithKeyword >, boost::noncopyable > class_9e743a2cacb25baaabcd1704a696efe3("DependentTemplateSpecializationType", "", boost::python::no_init);
    class_9e743a2cacb25baaabcd1704a696efe3.def("begin", method_pointer_d33aa9cf534f55eda5120a0856252cab, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("classof", method_pointer_89be5c67bef75898bd08de467ae9d4a5, "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("desugar", method_pointer_9a353daa4e375e489c58d3e5d5b4d816, "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("end", method_pointer_5f08afadea2e5a36b772211de300b012, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("get_arg", method_pointer_4ca6cc73ed8d59a6af6608bddc5f3fca, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("get_args", method_pointer_46039384ad225974949b028bb5784bc2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("get_num_args", method_pointer_c0f4f9e67dcc55a8a8a6244c245bd6c6, "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("is_sugared", method_pointer_944795f23d885129a861ad171f017a49, "");
    class_9e743a2cacb25baaabcd1704a696efe3.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::DependentTemplateSpecializationType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::DependentTemplateSpecializationType >, autowig::HeldType< class ::clang::TypeWithKeyword > >();
    }

}