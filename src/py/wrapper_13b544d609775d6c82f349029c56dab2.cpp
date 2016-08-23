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
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_f6fea64e730150698f11bdebdcfbf40c)() const = &::clang::TemplateSpecializationType::begin;
    bool  (*method_pointer_0696ab9177a85a1b8755b18e99a988c2)(class ::clang::Type  const *) = ::clang::TemplateSpecializationType::classof;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_30724f733bb7544cba40680ebfce93e9)() const = &::clang::TemplateSpecializationType::end;
    class ::clang::TemplateArgument  const & (::clang::TemplateSpecializationType::*method_pointer_d503a7cd66cc5587a64e2246889af0f3)(unsigned int ) const = &::clang::TemplateSpecializationType::getArg;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_2eee7588aabd5bcca903c4671906743e)() const = &::clang::TemplateSpecializationType::getArgs;
    unsigned int  (::clang::TemplateSpecializationType::*method_pointer_77ff6bf4bf3d5b728cb6cb529a0ed0b8)() const = &::clang::TemplateSpecializationType::getNumArgs;
    bool  (::clang::TemplateSpecializationType::*method_pointer_74c86ca0d49b5f0db921a8e5b3d8633a)() const = &::clang::TemplateSpecializationType::isCurrentInstantiation;
    bool  (::clang::TemplateSpecializationType::*method_pointer_ab0eafbd333a5c8582ee76fedeabd42a)() const = &::clang::TemplateSpecializationType::isSugared;
    bool  (::clang::TemplateSpecializationType::*method_pointer_f9ac9aa178d4514e87b588a41a2ef953)() const = &::clang::TemplateSpecializationType::isTypeAlias;
    boost::python::class_< class ::clang::TemplateSpecializationType, autowig::HeldType< class ::clang::TemplateSpecializationType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_13b544d609775d6c82f349029c56dab2("TemplateSpecializationType", "", boost::python::no_init);
    class_13b544d609775d6c82f349029c56dab2.def("begin", method_pointer_f6fea64e730150698f11bdebdcfbf40c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("classof", method_pointer_0696ab9177a85a1b8755b18e99a988c2, "");
    class_13b544d609775d6c82f349029c56dab2.def("end", method_pointer_30724f733bb7544cba40680ebfce93e9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_arg", method_pointer_d503a7cd66cc5587a64e2246889af0f3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_args", method_pointer_2eee7588aabd5bcca903c4671906743e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_num_args", method_pointer_77ff6bf4bf3d5b728cb6cb529a0ed0b8, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_current_instantiation", method_pointer_74c86ca0d49b5f0db921a8e5b3d8633a, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_sugared", method_pointer_ab0eafbd333a5c8582ee76fedeabd42a, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_type_alias", method_pointer_f9ac9aa178d4514e87b588a41a2ef953, "");
    class_13b544d609775d6c82f349029c56dab2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateSpecializationType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateSpecializationType >, autowig::HeldType< class ::clang::Type > >();
    }

}