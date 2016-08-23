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
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_6f577406f3ed5f45869efbf8e9aad9f9)() const = &::clang::TemplateSpecializationType::begin;
    bool  (*method_pointer_b6fa70b9c75f545fb927b920ea171c29)(class ::clang::Type  const *) = ::clang::TemplateSpecializationType::classof;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_e16d1dab7cca57a796a89b52b470c08b)() const = &::clang::TemplateSpecializationType::desugar;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_bf63e27bba0d5306a3ba5ba81ce97564)() const = &::clang::TemplateSpecializationType::end;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_93c5d7ee1c0e57ab8262c94d91fd006b)() const = &::clang::TemplateSpecializationType::getAliasedType;
    class ::clang::TemplateArgument  const & (::clang::TemplateSpecializationType::*method_pointer_77e1aab4fd7658d2b5272583c2819ce0)(unsigned int ) const = &::clang::TemplateSpecializationType::getArg;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_4f62de79746254909bb3529e24dc5a7b)() const = &::clang::TemplateSpecializationType::getArgs;
    unsigned int  (::clang::TemplateSpecializationType::*method_pointer_b04f14ac46f353d094d4dabeeb5d3029)() const = &::clang::TemplateSpecializationType::getNumArgs;
    bool  (::clang::TemplateSpecializationType::*method_pointer_8348fb2dfbae53cd9c7103723c6e3950)() const = &::clang::TemplateSpecializationType::isCurrentInstantiation;
    bool  (::clang::TemplateSpecializationType::*method_pointer_2b72046936555a259c3a0df3e862ad48)() const = &::clang::TemplateSpecializationType::isSugared;
    bool  (::clang::TemplateSpecializationType::*method_pointer_08218dace4e956fd862a010bd556a4d3)() const = &::clang::TemplateSpecializationType::isTypeAlias;
    boost::python::class_< class ::clang::TemplateSpecializationType, autowig::HeldType< class ::clang::TemplateSpecializationType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_13b544d609775d6c82f349029c56dab2("TemplateSpecializationType", "", boost::python::no_init);
    class_13b544d609775d6c82f349029c56dab2.def("begin", method_pointer_6f577406f3ed5f45869efbf8e9aad9f9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("classof", method_pointer_b6fa70b9c75f545fb927b920ea171c29, "");
    class_13b544d609775d6c82f349029c56dab2.def("desugar", method_pointer_e16d1dab7cca57a796a89b52b470c08b, "");
    class_13b544d609775d6c82f349029c56dab2.def("end", method_pointer_bf63e27bba0d5306a3ba5ba81ce97564, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_aliased_type", method_pointer_93c5d7ee1c0e57ab8262c94d91fd006b, "");
    class_13b544d609775d6c82f349029c56dab2.def("get_arg", method_pointer_77e1aab4fd7658d2b5272583c2819ce0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_args", method_pointer_4f62de79746254909bb3529e24dc5a7b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_num_args", method_pointer_b04f14ac46f353d094d4dabeeb5d3029, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_current_instantiation", method_pointer_8348fb2dfbae53cd9c7103723c6e3950, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_sugared", method_pointer_2b72046936555a259c3a0df3e862ad48, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_type_alias", method_pointer_08218dace4e956fd862a010bd556a4d3, "");
    class_13b544d609775d6c82f349029c56dab2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateSpecializationType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateSpecializationType >, autowig::HeldType< class ::clang::Type > >();
    }

}