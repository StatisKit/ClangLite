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
    class ::clang::TemplateArgument  const * (::clang::DependentTemplateSpecializationType::*method_pointer_78c8593509265b5193caa221417a1948)() const = &::clang::DependentTemplateSpecializationType::begin;
    bool  (*method_pointer_9019e21a31fb50f5a477c669e825e918)(class ::clang::Type  const *) = ::clang::DependentTemplateSpecializationType::classof;
    class ::clang::QualType  (::clang::DependentTemplateSpecializationType::*method_pointer_a5d4719060b158b4baacbb6d5559bd40)() const = &::clang::DependentTemplateSpecializationType::desugar;
    class ::clang::TemplateArgument  const * (::clang::DependentTemplateSpecializationType::*method_pointer_136809b3172f5f70b64f777dc48c3349)() const = &::clang::DependentTemplateSpecializationType::end;
    class ::clang::TemplateArgument  const & (::clang::DependentTemplateSpecializationType::*method_pointer_9336d47a06da532ba312a7a916f2f633)(unsigned int ) const = &::clang::DependentTemplateSpecializationType::getArg;
    class ::clang::TemplateArgument  const * (::clang::DependentTemplateSpecializationType::*method_pointer_09bac221d2dc5b83b0a3fd5503c25a10)() const = &::clang::DependentTemplateSpecializationType::getArgs;
    unsigned int  (::clang::DependentTemplateSpecializationType::*method_pointer_3338032822d25b0096affefee94296d4)() const = &::clang::DependentTemplateSpecializationType::getNumArgs;
    bool  (::clang::DependentTemplateSpecializationType::*method_pointer_0f3d68d0e92a551281ab545511ba96be)() const = &::clang::DependentTemplateSpecializationType::isSugared;
    boost::python::class_< class ::clang::DependentTemplateSpecializationType, autowig::HeldType< class ::clang::DependentTemplateSpecializationType >, boost::python::bases< class ::clang::TypeWithKeyword >, boost::noncopyable > class_9e743a2cacb25baaabcd1704a696efe3("DependentTemplateSpecializationType", "", boost::python::no_init);
    class_9e743a2cacb25baaabcd1704a696efe3.def("begin", method_pointer_78c8593509265b5193caa221417a1948, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("classof", method_pointer_9019e21a31fb50f5a477c669e825e918, "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("desugar", method_pointer_a5d4719060b158b4baacbb6d5559bd40, "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("end", method_pointer_136809b3172f5f70b64f777dc48c3349, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("get_arg", method_pointer_9336d47a06da532ba312a7a916f2f633, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("get_args", method_pointer_09bac221d2dc5b83b0a3fd5503c25a10, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("get_num_args", method_pointer_3338032822d25b0096affefee94296d4, "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("is_sugared", method_pointer_0f3d68d0e92a551281ab545511ba96be, "");
    class_9e743a2cacb25baaabcd1704a696efe3.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::DependentTemplateSpecializationType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::DependentTemplateSpecializationType >, autowig::HeldType< class ::clang::TypeWithKeyword > >();
    }

}