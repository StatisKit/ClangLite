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
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_5387e9e6a6ac507197234668fadec6b9)() const = &::clang::TemplateSpecializationType::begin;
    bool  (*method_pointer_beecf3b7331d578c886fb19b079fc564)(class ::clang::Type  const *) = ::clang::TemplateSpecializationType::classof;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_1669dcd5bf005969879787679a808c97)() const = &::clang::TemplateSpecializationType::desugar;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_313b6075e4715fa5ac140e301ef53fcd)() const = &::clang::TemplateSpecializationType::end;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_569ad82e901c57e9bd965bfcab608ef9)() const = &::clang::TemplateSpecializationType::getAliasedType;
    class ::clang::TemplateArgument  const & (::clang::TemplateSpecializationType::*method_pointer_38612f425a315ae5875634d2fd86358a)(unsigned int ) const = &::clang::TemplateSpecializationType::getArg;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_689d4938bc865b8e83e35a8fe12e44bc)() const = &::clang::TemplateSpecializationType::getArgs;
    unsigned int  (::clang::TemplateSpecializationType::*method_pointer_1452bb955b68572ba5f34c12e7319cdb)() const = &::clang::TemplateSpecializationType::getNumArgs;
    bool  (::clang::TemplateSpecializationType::*method_pointer_ec416ecd22b753348e1ef412ec41b377)() const = &::clang::TemplateSpecializationType::isCurrentInstantiation;
    bool  (::clang::TemplateSpecializationType::*method_pointer_6b589743d96154b5a5c836d682697838)() const = &::clang::TemplateSpecializationType::isSugared;
    bool  (::clang::TemplateSpecializationType::*method_pointer_8f9a16b0059f5a478a341668dbe4f68d)() const = &::clang::TemplateSpecializationType::isTypeAlias;
    boost::python::class_< class ::clang::TemplateSpecializationType, autowig::HeldType< class ::clang::TemplateSpecializationType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_13b544d609775d6c82f349029c56dab2("TemplateSpecializationType", "", boost::python::no_init);
    class_13b544d609775d6c82f349029c56dab2.def("begin", method_pointer_5387e9e6a6ac507197234668fadec6b9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("classof", method_pointer_beecf3b7331d578c886fb19b079fc564, "");
    class_13b544d609775d6c82f349029c56dab2.def("desugar", method_pointer_1669dcd5bf005969879787679a808c97, "");
    class_13b544d609775d6c82f349029c56dab2.def("end", method_pointer_313b6075e4715fa5ac140e301ef53fcd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_aliased_type", method_pointer_569ad82e901c57e9bd965bfcab608ef9, "");
    class_13b544d609775d6c82f349029c56dab2.def("get_arg", method_pointer_38612f425a315ae5875634d2fd86358a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_args", method_pointer_689d4938bc865b8e83e35a8fe12e44bc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_num_args", method_pointer_1452bb955b68572ba5f34c12e7319cdb, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_current_instantiation", method_pointer_ec416ecd22b753348e1ef412ec41b377, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_sugared", method_pointer_6b589743d96154b5a5c836d682697838, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_type_alias", method_pointer_8f9a16b0059f5a478a341668dbe4f68d, "");
    class_13b544d609775d6c82f349029c56dab2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateSpecializationType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateSpecializationType >, autowig::HeldType< class ::clang::Type > >();
    }

}