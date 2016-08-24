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
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_b649a77483725722b510314a2c19d2ab)() const = &::clang::TemplateSpecializationType::begin;
    bool  (*method_pointer_30834ea9662555afa9866e3f8b7d6847)(class ::clang::Type  const *) = ::clang::TemplateSpecializationType::classof;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_450ba75bf5165f69ae6384da28619c05)() const = &::clang::TemplateSpecializationType::desugar;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_0decc65797dd59c4b16caa5b526e66e7)() const = &::clang::TemplateSpecializationType::end;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_fdfc084786a352fbbad8fc5fde2111aa)() const = &::clang::TemplateSpecializationType::getAliasedType;
    class ::clang::TemplateArgument  const & (::clang::TemplateSpecializationType::*method_pointer_beb64f47e3f7515da9ab5b5faf67cc1d)(unsigned int ) const = &::clang::TemplateSpecializationType::getArg;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_930e438660705951874862ab2dfe635f)() const = &::clang::TemplateSpecializationType::getArgs;
    unsigned int  (::clang::TemplateSpecializationType::*method_pointer_83f75c3acb7c543d9e7b3fa9ee253492)() const = &::clang::TemplateSpecializationType::getNumArgs;
    bool  (::clang::TemplateSpecializationType::*method_pointer_3f03948c828f5c0fb21d68de5a397c7a)() const = &::clang::TemplateSpecializationType::isCurrentInstantiation;
    bool  (::clang::TemplateSpecializationType::*method_pointer_9229755129b65ef4a4e2b2f270b7109a)() const = &::clang::TemplateSpecializationType::isSugared;
    bool  (::clang::TemplateSpecializationType::*method_pointer_9cab067bff505bd5bc32390663e60eec)() const = &::clang::TemplateSpecializationType::isTypeAlias;
    boost::python::class_< class ::clang::TemplateSpecializationType, autowig::HeldType< class ::clang::TemplateSpecializationType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_13b544d609775d6c82f349029c56dab2("TemplateSpecializationType", "", boost::python::no_init);
    class_13b544d609775d6c82f349029c56dab2.def("begin", method_pointer_b649a77483725722b510314a2c19d2ab, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("classof", method_pointer_30834ea9662555afa9866e3f8b7d6847, "");
    class_13b544d609775d6c82f349029c56dab2.def("desugar", method_pointer_450ba75bf5165f69ae6384da28619c05, "");
    class_13b544d609775d6c82f349029c56dab2.def("end", method_pointer_0decc65797dd59c4b16caa5b526e66e7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_aliased_type", method_pointer_fdfc084786a352fbbad8fc5fde2111aa, "");
    class_13b544d609775d6c82f349029c56dab2.def("get_arg", method_pointer_beb64f47e3f7515da9ab5b5faf67cc1d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_args", method_pointer_930e438660705951874862ab2dfe635f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_num_args", method_pointer_83f75c3acb7c543d9e7b3fa9ee253492, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_current_instantiation", method_pointer_3f03948c828f5c0fb21d68de5a397c7a, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_sugared", method_pointer_9229755129b65ef4a4e2b2f270b7109a, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_type_alias", method_pointer_9cab067bff505bd5bc32390663e60eec, "");
    class_13b544d609775d6c82f349029c56dab2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateSpecializationType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateSpecializationType >, autowig::HeldType< class ::clang::Type > >();
    }

}