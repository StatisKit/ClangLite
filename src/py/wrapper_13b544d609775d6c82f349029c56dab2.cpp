#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_13b544d609775d6c82f349029c56dab2()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_bb650b8eeb3c528ab7c21102be6cc38b)(class ::clang::Type  const *) = ::clang::TemplateSpecializationType::classof;
    unsigned int  (::clang::TemplateSpecializationType::*method_pointer_44ac7f1aa82756d193718e016492b9a0)() const = &::clang::TemplateSpecializationType::getNumArgs;
    bool  (::clang::TemplateSpecializationType::*method_pointer_eb7fac505c9855a1b45313e966a437b0)() const = &::clang::TemplateSpecializationType::isCurrentInstantiation;
    bool  (::clang::TemplateSpecializationType::*method_pointer_5969578bfb995b879ae453eecf7bb87b)() const = &::clang::TemplateSpecializationType::isSugared;
    bool  (::clang::TemplateSpecializationType::*method_pointer_ce1e2f6739f05450b1b1dd1571442bf4)() const = &::clang::TemplateSpecializationType::isTypeAlias;
    boost::python::class_< class ::clang::TemplateSpecializationType, autowig::HeldType< class ::clang::TemplateSpecializationType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_13b544d609775d6c82f349029c56dab2("TemplateSpecializationType", "", boost::python::no_init);
    class_13b544d609775d6c82f349029c56dab2.def("classof", method_pointer_bb650b8eeb3c528ab7c21102be6cc38b, "");
    class_13b544d609775d6c82f349029c56dab2.def("get_num_args", method_pointer_44ac7f1aa82756d193718e016492b9a0, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_current_instantiation", method_pointer_eb7fac505c9855a1b45313e966a437b0, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_sugared", method_pointer_5969578bfb995b879ae453eecf7bb87b, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_type_alias", method_pointer_ce1e2f6739f05450b1b1dd1571442bf4, "");
    class_13b544d609775d6c82f349029c56dab2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateSpecializationType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateSpecializationType >, autowig::HeldType< class ::clang::Type > >();
    }

}