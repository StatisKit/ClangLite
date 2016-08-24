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
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_7814e9f355725623afb52609764c3014)() const = &::clang::TemplateSpecializationType::begin;
    bool  (*method_pointer_36267e0e4abd5faa8e97b6b07126c64e)(class ::clang::Type  const *) = ::clang::TemplateSpecializationType::classof;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_076fb005bbb5568b9acef2271bbc5621)() const = &::clang::TemplateSpecializationType::desugar;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_7ab1be023b5b5b4eb42f0d2daed6d066)() const = &::clang::TemplateSpecializationType::end;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_b51141c988d8512e8b215d51001b4eaf)() const = &::clang::TemplateSpecializationType::getAliasedType;
    class ::clang::TemplateArgument  const & (::clang::TemplateSpecializationType::*method_pointer_72830d2800165d0f806fb370468a5374)(unsigned int ) const = &::clang::TemplateSpecializationType::getArg;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_562fe32396ed5f20bf73b34985293101)() const = &::clang::TemplateSpecializationType::getArgs;
    unsigned int  (::clang::TemplateSpecializationType::*method_pointer_7b06901dc30a5ce7bcbfd960ed4a1f64)() const = &::clang::TemplateSpecializationType::getNumArgs;
    bool  (::clang::TemplateSpecializationType::*method_pointer_ed76e07ef80d5ebda6f876dcfd1c925b)() const = &::clang::TemplateSpecializationType::isCurrentInstantiation;
    bool  (::clang::TemplateSpecializationType::*method_pointer_0b368e5242b356ca8ea2c78fe1631add)() const = &::clang::TemplateSpecializationType::isSugared;
    bool  (::clang::TemplateSpecializationType::*method_pointer_e2920741f17b54f1adeae4d2c12a3eca)() const = &::clang::TemplateSpecializationType::isTypeAlias;
    boost::python::class_< class ::clang::TemplateSpecializationType, autowig::HeldType< class ::clang::TemplateSpecializationType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_13b544d609775d6c82f349029c56dab2("TemplateSpecializationType", "", boost::python::no_init);
    class_13b544d609775d6c82f349029c56dab2.def("begin", method_pointer_7814e9f355725623afb52609764c3014, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("classof", method_pointer_36267e0e4abd5faa8e97b6b07126c64e, "");
    class_13b544d609775d6c82f349029c56dab2.def("desugar", method_pointer_076fb005bbb5568b9acef2271bbc5621, "");
    class_13b544d609775d6c82f349029c56dab2.def("end", method_pointer_7ab1be023b5b5b4eb42f0d2daed6d066, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_aliased_type", method_pointer_b51141c988d8512e8b215d51001b4eaf, "");
    class_13b544d609775d6c82f349029c56dab2.def("get_arg", method_pointer_72830d2800165d0f806fb370468a5374, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_args", method_pointer_562fe32396ed5f20bf73b34985293101, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_num_args", method_pointer_7b06901dc30a5ce7bcbfd960ed4a1f64, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_current_instantiation", method_pointer_ed76e07ef80d5ebda6f876dcfd1c925b, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_sugared", method_pointer_0b368e5242b356ca8ea2c78fe1631add, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_type_alias", method_pointer_e2920741f17b54f1adeae4d2c12a3eca, "");
    class_13b544d609775d6c82f349029c56dab2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateSpecializationType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateSpecializationType >, autowig::HeldType< class ::clang::Type > >();
    }

}