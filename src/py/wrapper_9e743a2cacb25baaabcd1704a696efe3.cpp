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
    class ::clang::TemplateArgument  const * (::clang::DependentTemplateSpecializationType::*method_pointer_01d12bbc36d358d99a673329ce94c680)() const = &::clang::DependentTemplateSpecializationType::begin;
    bool  (*method_pointer_82d18c3a4b2350b3948317858657e422)(class ::clang::Type  const *) = ::clang::DependentTemplateSpecializationType::classof;
    class ::clang::QualType  (::clang::DependentTemplateSpecializationType::*method_pointer_00a003cf174f5235aaf8e5bb418306a4)() const = &::clang::DependentTemplateSpecializationType::desugar;
    class ::clang::TemplateArgument  const * (::clang::DependentTemplateSpecializationType::*method_pointer_db8ac6c53d465c4dbec5cf8ee9cf827d)() const = &::clang::DependentTemplateSpecializationType::end;
    class ::clang::TemplateArgument  const & (::clang::DependentTemplateSpecializationType::*method_pointer_1ea370c631665fdca9dea0a17674ad5b)(unsigned int ) const = &::clang::DependentTemplateSpecializationType::getArg;
    class ::clang::TemplateArgument  const * (::clang::DependentTemplateSpecializationType::*method_pointer_72b3b87e34365b629d008cfef05b07f9)() const = &::clang::DependentTemplateSpecializationType::getArgs;
    unsigned int  (::clang::DependentTemplateSpecializationType::*method_pointer_462ba4479ecb57749cffc66f9410f69d)() const = &::clang::DependentTemplateSpecializationType::getNumArgs;
    bool  (::clang::DependentTemplateSpecializationType::*method_pointer_bbb120b1c1ae58e5bd8dd391e50a448d)() const = &::clang::DependentTemplateSpecializationType::isSugared;
    boost::python::class_< class ::clang::DependentTemplateSpecializationType, autowig::HeldType< class ::clang::DependentTemplateSpecializationType >, boost::python::bases< class ::clang::TypeWithKeyword >, boost::noncopyable > class_9e743a2cacb25baaabcd1704a696efe3("DependentTemplateSpecializationType", "", boost::python::no_init);
    class_9e743a2cacb25baaabcd1704a696efe3.def("begin", method_pointer_01d12bbc36d358d99a673329ce94c680, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("classof", method_pointer_82d18c3a4b2350b3948317858657e422, "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("desugar", method_pointer_00a003cf174f5235aaf8e5bb418306a4, "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("end", method_pointer_db8ac6c53d465c4dbec5cf8ee9cf827d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("get_arg", method_pointer_1ea370c631665fdca9dea0a17674ad5b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("get_args", method_pointer_72b3b87e34365b629d008cfef05b07f9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("get_num_args", method_pointer_462ba4479ecb57749cffc66f9410f69d, "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("is_sugared", method_pointer_bbb120b1c1ae58e5bd8dd391e50a448d, "");
    class_9e743a2cacb25baaabcd1704a696efe3.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::DependentTemplateSpecializationType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::DependentTemplateSpecializationType >, autowig::HeldType< class ::clang::TypeWithKeyword > >();
    }

}