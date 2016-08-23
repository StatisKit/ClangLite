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
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_bc30477a9ce15ef9abd901a6ab8bbdd4)() const = &::clang::TemplateSpecializationType::begin;
    bool  (*method_pointer_9ff36b9a68de5c19a2849250751c4f00)(class ::clang::Type  const *) = ::clang::TemplateSpecializationType::classof;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_488a96bdb904579e97d776db66c3cccf)() const = &::clang::TemplateSpecializationType::end;
    class ::clang::TemplateArgument  const & (::clang::TemplateSpecializationType::*method_pointer_67f7a4c004c75f9bb312cf20a073d215)(unsigned int ) const = &::clang::TemplateSpecializationType::getArg;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_9435d65480745d2cbf4b96dcb01713ac)() const = &::clang::TemplateSpecializationType::getArgs;
    unsigned int  (::clang::TemplateSpecializationType::*method_pointer_20cd3d4af9d85ac59dadd34760d75cd1)() const = &::clang::TemplateSpecializationType::getNumArgs;
    bool  (::clang::TemplateSpecializationType::*method_pointer_06f0cbf080e157d58093740d93cb5743)() const = &::clang::TemplateSpecializationType::isCurrentInstantiation;
    bool  (::clang::TemplateSpecializationType::*method_pointer_e047bf8ff0a8598ca12b7bf3630e6e3d)() const = &::clang::TemplateSpecializationType::isSugared;
    bool  (::clang::TemplateSpecializationType::*method_pointer_1e1ee0a7dc0e59d7a8f0c8de4b303459)() const = &::clang::TemplateSpecializationType::isTypeAlias;
    boost::python::class_< class ::clang::TemplateSpecializationType, autowig::HeldType< class ::clang::TemplateSpecializationType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_13b544d609775d6c82f349029c56dab2("TemplateSpecializationType", "", boost::python::no_init);
    class_13b544d609775d6c82f349029c56dab2.def("begin", method_pointer_bc30477a9ce15ef9abd901a6ab8bbdd4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("classof", method_pointer_9ff36b9a68de5c19a2849250751c4f00, "");
    class_13b544d609775d6c82f349029c56dab2.def("end", method_pointer_488a96bdb904579e97d776db66c3cccf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_arg", method_pointer_67f7a4c004c75f9bb312cf20a073d215, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_args", method_pointer_9435d65480745d2cbf4b96dcb01713ac, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_num_args", method_pointer_20cd3d4af9d85ac59dadd34760d75cd1, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_current_instantiation", method_pointer_06f0cbf080e157d58093740d93cb5743, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_sugared", method_pointer_e047bf8ff0a8598ca12b7bf3630e6e3d, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_type_alias", method_pointer_1e1ee0a7dc0e59d7a8f0c8de4b303459, "");
    class_13b544d609775d6c82f349029c56dab2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateSpecializationType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateSpecializationType >, autowig::HeldType< class ::clang::Type > >();
    }

}