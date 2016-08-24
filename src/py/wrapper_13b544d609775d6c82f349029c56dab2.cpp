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
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_1919bf90cbed5191861f85b44e7d9775)() const = &::clang::TemplateSpecializationType::begin;
    bool  (*method_pointer_fefa68f8e15d54ba95226ddca7cdd533)(class ::clang::Type  const *) = ::clang::TemplateSpecializationType::classof;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_b770bbeea4435b21875a4c5a14068290)() const = &::clang::TemplateSpecializationType::desugar;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_6b8e643b410b53209cb8d744a5cb77a3)() const = &::clang::TemplateSpecializationType::end;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_4a1316bedf0d5c04a223bfb61994f586)() const = &::clang::TemplateSpecializationType::getAliasedType;
    class ::clang::TemplateArgument  const & (::clang::TemplateSpecializationType::*method_pointer_dd9f1a5506f056919334e37887625213)(unsigned int ) const = &::clang::TemplateSpecializationType::getArg;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_223eb86cb49259abad518c65640754ed)() const = &::clang::TemplateSpecializationType::getArgs;
    unsigned int  (::clang::TemplateSpecializationType::*method_pointer_9a27d32ccc775c839aca2cdd028a7c28)() const = &::clang::TemplateSpecializationType::getNumArgs;
    bool  (::clang::TemplateSpecializationType::*method_pointer_c8e3a8bd491a50baa593ed44d9c3a6cf)() const = &::clang::TemplateSpecializationType::isCurrentInstantiation;
    bool  (::clang::TemplateSpecializationType::*method_pointer_8a25ac9b57ec5bf58a2c712d29574734)() const = &::clang::TemplateSpecializationType::isSugared;
    bool  (::clang::TemplateSpecializationType::*method_pointer_a4a585f2c9005f65a32de77f6bdb74d8)() const = &::clang::TemplateSpecializationType::isTypeAlias;
    boost::python::class_< class ::clang::TemplateSpecializationType, autowig::HeldType< class ::clang::TemplateSpecializationType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_13b544d609775d6c82f349029c56dab2("TemplateSpecializationType", "", boost::python::no_init);
    class_13b544d609775d6c82f349029c56dab2.def("begin", method_pointer_1919bf90cbed5191861f85b44e7d9775, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("classof", method_pointer_fefa68f8e15d54ba95226ddca7cdd533, "");
    class_13b544d609775d6c82f349029c56dab2.def("desugar", method_pointer_b770bbeea4435b21875a4c5a14068290, "");
    class_13b544d609775d6c82f349029c56dab2.def("end", method_pointer_6b8e643b410b53209cb8d744a5cb77a3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_aliased_type", method_pointer_4a1316bedf0d5c04a223bfb61994f586, "");
    class_13b544d609775d6c82f349029c56dab2.def("get_arg", method_pointer_dd9f1a5506f056919334e37887625213, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_args", method_pointer_223eb86cb49259abad518c65640754ed, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_num_args", method_pointer_9a27d32ccc775c839aca2cdd028a7c28, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_current_instantiation", method_pointer_c8e3a8bd491a50baa593ed44d9c3a6cf, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_sugared", method_pointer_8a25ac9b57ec5bf58a2c712d29574734, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_type_alias", method_pointer_a4a585f2c9005f65a32de77f6bdb74d8, "");
    class_13b544d609775d6c82f349029c56dab2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateSpecializationType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateSpecializationType >, autowig::HeldType< class ::clang::Type > >();
    }

}