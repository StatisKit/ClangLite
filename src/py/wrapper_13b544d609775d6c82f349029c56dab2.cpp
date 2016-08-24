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
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_f8b76769e4785e7d8404946a9ceab75b)() const = &::clang::TemplateSpecializationType::begin;
    bool  (*method_pointer_3e57772e8d9f558197623adf20d2dc6e)(class ::clang::Type  const *) = ::clang::TemplateSpecializationType::classof;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_39ffdb4ec38556a5ab9fdb4d3075be91)() const = &::clang::TemplateSpecializationType::desugar;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_147cf854572e5ac8a8f65301b25bab3f)() const = &::clang::TemplateSpecializationType::end;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_1a22bc08b1f7537baa912ed16d9dc383)() const = &::clang::TemplateSpecializationType::getAliasedType;
    class ::clang::TemplateArgument  const & (::clang::TemplateSpecializationType::*method_pointer_6b67e0f656cd57de972a4b55361ef082)(unsigned int ) const = &::clang::TemplateSpecializationType::getArg;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_57d7de4acf2a586fbb692809523454a2)() const = &::clang::TemplateSpecializationType::getArgs;
    unsigned int  (::clang::TemplateSpecializationType::*method_pointer_b6bb9ce92bf15f938968a378b19d3b6b)() const = &::clang::TemplateSpecializationType::getNumArgs;
    bool  (::clang::TemplateSpecializationType::*method_pointer_981038d47332502ea14314b784003874)() const = &::clang::TemplateSpecializationType::isCurrentInstantiation;
    bool  (::clang::TemplateSpecializationType::*method_pointer_3843e8ed8673516a85f8382e64c9bf95)() const = &::clang::TemplateSpecializationType::isSugared;
    bool  (::clang::TemplateSpecializationType::*method_pointer_ed0cafe355a65067bf70b9fb6dd90a90)() const = &::clang::TemplateSpecializationType::isTypeAlias;
    boost::python::class_< class ::clang::TemplateSpecializationType, autowig::HeldType< class ::clang::TemplateSpecializationType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_13b544d609775d6c82f349029c56dab2("TemplateSpecializationType", "", boost::python::no_init);
    class_13b544d609775d6c82f349029c56dab2.def("begin", method_pointer_f8b76769e4785e7d8404946a9ceab75b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("classof", method_pointer_3e57772e8d9f558197623adf20d2dc6e, "");
    class_13b544d609775d6c82f349029c56dab2.def("desugar", method_pointer_39ffdb4ec38556a5ab9fdb4d3075be91, "");
    class_13b544d609775d6c82f349029c56dab2.def("end", method_pointer_147cf854572e5ac8a8f65301b25bab3f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_aliased_type", method_pointer_1a22bc08b1f7537baa912ed16d9dc383, "");
    class_13b544d609775d6c82f349029c56dab2.def("get_arg", method_pointer_6b67e0f656cd57de972a4b55361ef082, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_args", method_pointer_57d7de4acf2a586fbb692809523454a2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_num_args", method_pointer_b6bb9ce92bf15f938968a378b19d3b6b, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_current_instantiation", method_pointer_981038d47332502ea14314b784003874, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_sugared", method_pointer_3843e8ed8673516a85f8382e64c9bf95, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_type_alias", method_pointer_ed0cafe355a65067bf70b9fb6dd90a90, "");
    class_13b544d609775d6c82f349029c56dab2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateSpecializationType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateSpecializationType >, autowig::HeldType< class ::clang::Type > >();
    }

}