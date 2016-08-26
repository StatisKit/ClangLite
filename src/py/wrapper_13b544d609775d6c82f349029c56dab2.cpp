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
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_a8f54f4402855061bb1da43aa8b400bd)() const = &::clang::TemplateSpecializationType::begin;
    bool  (*method_pointer_49d4792036c95045bbb0e41364b92553)(class ::clang::Type  const *) = ::clang::TemplateSpecializationType::classof;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_ac49c7a8e53254e1a26a4743942bc566)() const = &::clang::TemplateSpecializationType::end;
    class ::clang::TemplateArgument  const & (::clang::TemplateSpecializationType::*method_pointer_db3c33b726a8559b932628e4c943b81a)(unsigned int ) const = &::clang::TemplateSpecializationType::getArg;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_5c4ea5a55d485242a55ccb668cf9163f)() const = &::clang::TemplateSpecializationType::getArgs;
    unsigned int  (::clang::TemplateSpecializationType::*method_pointer_1f9d12af75365567ab71904edb75d19a)() const = &::clang::TemplateSpecializationType::getNumArgs;
    bool  (::clang::TemplateSpecializationType::*method_pointer_701f85baebb359d688a66029486bb0d9)() const = &::clang::TemplateSpecializationType::isCurrentInstantiation;
    bool  (::clang::TemplateSpecializationType::*method_pointer_3ce628362b5157c98e59e1b7c3d512a6)() const = &::clang::TemplateSpecializationType::isSugared;
    bool  (::clang::TemplateSpecializationType::*method_pointer_4a6c512ac4cc54c4ac2c4afe73b668c2)() const = &::clang::TemplateSpecializationType::isTypeAlias;
    boost::python::class_< class ::clang::TemplateSpecializationType, autowig::HeldType< class ::clang::TemplateSpecializationType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_13b544d609775d6c82f349029c56dab2("TemplateSpecializationType", "", boost::python::no_init);
    class_13b544d609775d6c82f349029c56dab2.def("begin", method_pointer_a8f54f4402855061bb1da43aa8b400bd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("classof", method_pointer_49d4792036c95045bbb0e41364b92553, "");
    class_13b544d609775d6c82f349029c56dab2.def("end", method_pointer_ac49c7a8e53254e1a26a4743942bc566, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_arg", method_pointer_db3c33b726a8559b932628e4c943b81a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_args", method_pointer_5c4ea5a55d485242a55ccb668cf9163f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_num_args", method_pointer_1f9d12af75365567ab71904edb75d19a, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_current_instantiation", method_pointer_701f85baebb359d688a66029486bb0d9, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_sugared", method_pointer_3ce628362b5157c98e59e1b7c3d512a6, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_type_alias", method_pointer_4a6c512ac4cc54c4ac2c4afe73b668c2, "");
    class_13b544d609775d6c82f349029c56dab2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateSpecializationType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateSpecializationType >, autowig::HeldType< class ::clang::Type > >();
    }

}