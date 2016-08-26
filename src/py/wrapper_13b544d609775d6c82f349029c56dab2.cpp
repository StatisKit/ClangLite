#include "_clanglite.h"


namespace autowig
{
}


void wrapper_13b544d609775d6c82f349029c56dab2()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_59e80de0cd0f57b69dfc392734d7ffa3)() const = &::clang::TemplateSpecializationType::begin;
    bool  (*method_pointer_7383cd441aa255f98a48e9289c83b1ed)(class ::clang::Type  const *) = ::clang::TemplateSpecializationType::classof;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_9aea9e27885e58c79a9751d34adece3e)() const = &::clang::TemplateSpecializationType::desugar;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_2bee6d90f80d5332b0176f3022afba78)() const = &::clang::TemplateSpecializationType::end;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_d27d516e48d052e6a0704997e128ca6d)() const = &::clang::TemplateSpecializationType::getAliasedType;
    class ::clang::TemplateArgument  const & (::clang::TemplateSpecializationType::*method_pointer_f1198966d5b258608aad32f22753025d)(unsigned int ) const = &::clang::TemplateSpecializationType::getArg;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_c408969a05215551b7ddb7a5ab00a756)() const = &::clang::TemplateSpecializationType::getArgs;
    unsigned int  (::clang::TemplateSpecializationType::*method_pointer_5328f94276cc563b851d9b038b720905)() const = &::clang::TemplateSpecializationType::getNumArgs;
    bool  (::clang::TemplateSpecializationType::*method_pointer_fd02238dd9bf504397014c3c86f3bfe4)() const = &::clang::TemplateSpecializationType::isCurrentInstantiation;
    bool  (::clang::TemplateSpecializationType::*method_pointer_44d01dfd4a7e57da9c54790bcd505479)() const = &::clang::TemplateSpecializationType::isSugared;
    bool  (::clang::TemplateSpecializationType::*method_pointer_cc72145161805d6f8707cfc87a14c46a)() const = &::clang::TemplateSpecializationType::isTypeAlias;
    boost::python::class_< class ::clang::TemplateSpecializationType, autowig::HeldType< class ::clang::TemplateSpecializationType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_13b544d609775d6c82f349029c56dab2("TemplateSpecializationType", "", boost::python::no_init);
    class_13b544d609775d6c82f349029c56dab2.def("begin", method_pointer_59e80de0cd0f57b69dfc392734d7ffa3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("classof", method_pointer_7383cd441aa255f98a48e9289c83b1ed, "");
    class_13b544d609775d6c82f349029c56dab2.def("desugar", method_pointer_9aea9e27885e58c79a9751d34adece3e, "");
    class_13b544d609775d6c82f349029c56dab2.def("end", method_pointer_2bee6d90f80d5332b0176f3022afba78, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_aliased_type", method_pointer_d27d516e48d052e6a0704997e128ca6d, "");
    class_13b544d609775d6c82f349029c56dab2.def("get_arg", method_pointer_f1198966d5b258608aad32f22753025d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_args", method_pointer_c408969a05215551b7ddb7a5ab00a756, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_num_args", method_pointer_5328f94276cc563b851d9b038b720905, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_current_instantiation", method_pointer_fd02238dd9bf504397014c3c86f3bfe4, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_sugared", method_pointer_44d01dfd4a7e57da9c54790bcd505479, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_type_alias", method_pointer_cc72145161805d6f8707cfc87a14c46a, "");
    class_13b544d609775d6c82f349029c56dab2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateSpecializationType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateSpecializationType >, autowig::HeldType< class ::clang::Type > >();
    }

}