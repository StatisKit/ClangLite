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
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_8171736978d55642a1e9cd0be9c0541e)() const = &::clang::TemplateSpecializationType::begin;
    bool  (*method_pointer_6a769fa3a21551e8addd1dd4a0028598)(class ::clang::Type  const *) = ::clang::TemplateSpecializationType::classof;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_b0ecf71bc95f57ef9a806612c65ea913)() const = &::clang::TemplateSpecializationType::end;
    class ::clang::TemplateArgument  const & (::clang::TemplateSpecializationType::*method_pointer_4193458a21bb5cc4a855a31a880f6843)(unsigned int ) const = &::clang::TemplateSpecializationType::getArg;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_3bd4a7515de652ecba043513ec7d9d2f)() const = &::clang::TemplateSpecializationType::getArgs;
    unsigned int  (::clang::TemplateSpecializationType::*method_pointer_7c5a367bc16956ec9e54f19331392b7e)() const = &::clang::TemplateSpecializationType::getNumArgs;
    bool  (::clang::TemplateSpecializationType::*method_pointer_802aab8cfb2c5209b7e128630536b125)() const = &::clang::TemplateSpecializationType::isCurrentInstantiation;
    bool  (::clang::TemplateSpecializationType::*method_pointer_11c631a27c4d5f0eab89f02b4c8e8e90)() const = &::clang::TemplateSpecializationType::isSugared;
    bool  (::clang::TemplateSpecializationType::*method_pointer_103d91ead7e950028be16e4c92331656)() const = &::clang::TemplateSpecializationType::isTypeAlias;
    boost::python::class_< class ::clang::TemplateSpecializationType, autowig::HeldType< class ::clang::TemplateSpecializationType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_13b544d609775d6c82f349029c56dab2("TemplateSpecializationType", "", boost::python::no_init);
    class_13b544d609775d6c82f349029c56dab2.def("begin", method_pointer_8171736978d55642a1e9cd0be9c0541e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("classof", method_pointer_6a769fa3a21551e8addd1dd4a0028598, "");
    class_13b544d609775d6c82f349029c56dab2.def("end", method_pointer_b0ecf71bc95f57ef9a806612c65ea913, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_arg", method_pointer_4193458a21bb5cc4a855a31a880f6843, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_args", method_pointer_3bd4a7515de652ecba043513ec7d9d2f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_num_args", method_pointer_7c5a367bc16956ec9e54f19331392b7e, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_current_instantiation", method_pointer_802aab8cfb2c5209b7e128630536b125, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_sugared", method_pointer_11c631a27c4d5f0eab89f02b4c8e8e90, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_type_alias", method_pointer_103d91ead7e950028be16e4c92331656, "");
    class_13b544d609775d6c82f349029c56dab2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateSpecializationType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateSpecializationType >, autowig::HeldType< class ::clang::Type > >();
    }

}