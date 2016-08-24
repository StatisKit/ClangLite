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
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_0938d7c4980f540cb13234a6a7db73d2)() const = &::clang::TemplateSpecializationType::begin;
    bool  (*method_pointer_7dd7ec5edb7757c0bb591ee2afad0a0a)(class ::clang::Type  const *) = ::clang::TemplateSpecializationType::classof;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_b246ac84c51d529aa21d02dd43164470)() const = &::clang::TemplateSpecializationType::desugar;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_720daa1666d95317b42920ba87ffb70d)() const = &::clang::TemplateSpecializationType::end;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_74ec092ce9d156c69d7d2e56642f1662)() const = &::clang::TemplateSpecializationType::getAliasedType;
    class ::clang::TemplateArgument  const & (::clang::TemplateSpecializationType::*method_pointer_d03520eab6115a388043926e282e5c74)(unsigned int ) const = &::clang::TemplateSpecializationType::getArg;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_b5052a28e9f050fcb0ea3021bb4e30d1)() const = &::clang::TemplateSpecializationType::getArgs;
    unsigned int  (::clang::TemplateSpecializationType::*method_pointer_644db6bb11f55a649730ea58598695b6)() const = &::clang::TemplateSpecializationType::getNumArgs;
    bool  (::clang::TemplateSpecializationType::*method_pointer_a2e0f52cd53c5837ba4c9fcd3528ab0f)() const = &::clang::TemplateSpecializationType::isCurrentInstantiation;
    bool  (::clang::TemplateSpecializationType::*method_pointer_45712bbb0a6e575ea08ecbb13f58eaff)() const = &::clang::TemplateSpecializationType::isSugared;
    bool  (::clang::TemplateSpecializationType::*method_pointer_d750a5e58df05af3adced4143d70a607)() const = &::clang::TemplateSpecializationType::isTypeAlias;
    boost::python::class_< class ::clang::TemplateSpecializationType, autowig::HeldType< class ::clang::TemplateSpecializationType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_13b544d609775d6c82f349029c56dab2("TemplateSpecializationType", "", boost::python::no_init);
    class_13b544d609775d6c82f349029c56dab2.def("begin", method_pointer_0938d7c4980f540cb13234a6a7db73d2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("classof", method_pointer_7dd7ec5edb7757c0bb591ee2afad0a0a, "");
    class_13b544d609775d6c82f349029c56dab2.def("desugar", method_pointer_b246ac84c51d529aa21d02dd43164470, "");
    class_13b544d609775d6c82f349029c56dab2.def("end", method_pointer_720daa1666d95317b42920ba87ffb70d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_aliased_type", method_pointer_74ec092ce9d156c69d7d2e56642f1662, "");
    class_13b544d609775d6c82f349029c56dab2.def("get_arg", method_pointer_d03520eab6115a388043926e282e5c74, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_args", method_pointer_b5052a28e9f050fcb0ea3021bb4e30d1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_num_args", method_pointer_644db6bb11f55a649730ea58598695b6, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_current_instantiation", method_pointer_a2e0f52cd53c5837ba4c9fcd3528ab0f, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_sugared", method_pointer_45712bbb0a6e575ea08ecbb13f58eaff, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_type_alias", method_pointer_d750a5e58df05af3adced4143d70a607, "");
    class_13b544d609775d6c82f349029c56dab2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateSpecializationType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateSpecializationType >, autowig::HeldType< class ::clang::Type > >();
    }

}