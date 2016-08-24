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
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_f391cdf3c0865a1dba267303b0f22312)() const = &::clang::TemplateSpecializationType::begin;
    bool  (*method_pointer_d47455926d8f5a42b19324fda0e3c205)(class ::clang::Type  const *) = ::clang::TemplateSpecializationType::classof;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_d3debb63b3405142bf220e7e813d9f65)() const = &::clang::TemplateSpecializationType::desugar;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_f7570695dfa25b73904b5d7f1ba2de20)() const = &::clang::TemplateSpecializationType::end;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_d57627992d405254a4cbc27f6711493e)() const = &::clang::TemplateSpecializationType::getAliasedType;
    class ::clang::TemplateArgument  const & (::clang::TemplateSpecializationType::*method_pointer_017d2cd5f8ec50fbad72e5df4b62d943)(unsigned int ) const = &::clang::TemplateSpecializationType::getArg;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_533e6205766752f58cd21cd5ba550c05)() const = &::clang::TemplateSpecializationType::getArgs;
    unsigned int  (::clang::TemplateSpecializationType::*method_pointer_2b76b13b5439523d9a076048834d5557)() const = &::clang::TemplateSpecializationType::getNumArgs;
    bool  (::clang::TemplateSpecializationType::*method_pointer_fd449bf161065df8b7e14c5fbb9edd6c)() const = &::clang::TemplateSpecializationType::isCurrentInstantiation;
    bool  (::clang::TemplateSpecializationType::*method_pointer_7504a3c519225ac2bafb05e1eafd2f2e)() const = &::clang::TemplateSpecializationType::isSugared;
    bool  (::clang::TemplateSpecializationType::*method_pointer_7f151c7857a15cd69011ab4f2323fdc8)() const = &::clang::TemplateSpecializationType::isTypeAlias;
    boost::python::class_< class ::clang::TemplateSpecializationType, autowig::HeldType< class ::clang::TemplateSpecializationType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_13b544d609775d6c82f349029c56dab2("TemplateSpecializationType", "", boost::python::no_init);
    class_13b544d609775d6c82f349029c56dab2.def("begin", method_pointer_f391cdf3c0865a1dba267303b0f22312, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("classof", method_pointer_d47455926d8f5a42b19324fda0e3c205, "");
    class_13b544d609775d6c82f349029c56dab2.def("desugar", method_pointer_d3debb63b3405142bf220e7e813d9f65, "");
    class_13b544d609775d6c82f349029c56dab2.def("end", method_pointer_f7570695dfa25b73904b5d7f1ba2de20, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_aliased_type", method_pointer_d57627992d405254a4cbc27f6711493e, "");
    class_13b544d609775d6c82f349029c56dab2.def("get_arg", method_pointer_017d2cd5f8ec50fbad72e5df4b62d943, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_args", method_pointer_533e6205766752f58cd21cd5ba550c05, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_num_args", method_pointer_2b76b13b5439523d9a076048834d5557, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_current_instantiation", method_pointer_fd449bf161065df8b7e14c5fbb9edd6c, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_sugared", method_pointer_7504a3c519225ac2bafb05e1eafd2f2e, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_type_alias", method_pointer_7f151c7857a15cd69011ab4f2323fdc8, "");
    class_13b544d609775d6c82f349029c56dab2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateSpecializationType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateSpecializationType >, autowig::HeldType< class ::clang::Type > >();
    }

}