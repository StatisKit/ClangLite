#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_13b544d609775d6c82f349029c56dab2()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_9b5d8733ddee53ed923c05726396c6aa)() const = &::clang::TemplateSpecializationType::begin;
    bool  (*method_pointer_c240d429003b5f1eb012bf6498a92235)(class ::clang::Type  const *) = ::clang::TemplateSpecializationType::classof;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_31d3cc67e8c359edadc7351041b0fc66)() const = &::clang::TemplateSpecializationType::desugar;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_049f35be020851539c094c50c76f7395)() const = &::clang::TemplateSpecializationType::end;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_081b50a1194a5250abdc5e18ae2ad97d)() const = &::clang::TemplateSpecializationType::getAliasedType;
    class ::clang::TemplateArgument  const & (::clang::TemplateSpecializationType::*method_pointer_9b99f3eea3fa50d681c31df0bd0344f1)(unsigned int ) const = &::clang::TemplateSpecializationType::getArg;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_9d93fc0c0fcb5b1db75d11a18cc92a03)() const = &::clang::TemplateSpecializationType::getArgs;
    unsigned int  (::clang::TemplateSpecializationType::*method_pointer_434422decc9a58c881a8be1fde8f44a1)() const = &::clang::TemplateSpecializationType::getNumArgs;
    bool  (::clang::TemplateSpecializationType::*method_pointer_16afabfef47a5a2986549f17acdb7988)() const = &::clang::TemplateSpecializationType::isCurrentInstantiation;
    bool  (::clang::TemplateSpecializationType::*method_pointer_1b406ff6174a5f5cb070ff3c48749629)() const = &::clang::TemplateSpecializationType::isSugared;
    bool  (::clang::TemplateSpecializationType::*method_pointer_6a541779e55e53e2a90bb8544a653b09)() const = &::clang::TemplateSpecializationType::isTypeAlias;
    boost::python::class_< class ::clang::TemplateSpecializationType, autowig::HeldType< class ::clang::TemplateSpecializationType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_13b544d609775d6c82f349029c56dab2("TemplateSpecializationType", "", boost::python::no_init);
    class_13b544d609775d6c82f349029c56dab2.def("begin", method_pointer_9b5d8733ddee53ed923c05726396c6aa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("classof", method_pointer_c240d429003b5f1eb012bf6498a92235, "");
    class_13b544d609775d6c82f349029c56dab2.def("desugar", method_pointer_31d3cc67e8c359edadc7351041b0fc66, "");
    class_13b544d609775d6c82f349029c56dab2.def("end", method_pointer_049f35be020851539c094c50c76f7395, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_aliased_type", method_pointer_081b50a1194a5250abdc5e18ae2ad97d, "");
    class_13b544d609775d6c82f349029c56dab2.def("get_arg", method_pointer_9b99f3eea3fa50d681c31df0bd0344f1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_args", method_pointer_9d93fc0c0fcb5b1db75d11a18cc92a03, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_num_args", method_pointer_434422decc9a58c881a8be1fde8f44a1, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_current_instantiation", method_pointer_16afabfef47a5a2986549f17acdb7988, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_sugared", method_pointer_1b406ff6174a5f5cb070ff3c48749629, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_type_alias", method_pointer_6a541779e55e53e2a90bb8544a653b09, "");
    class_13b544d609775d6c82f349029c56dab2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateSpecializationType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateSpecializationType >, autowig::HeldType< class ::clang::Type > >();
    }

}