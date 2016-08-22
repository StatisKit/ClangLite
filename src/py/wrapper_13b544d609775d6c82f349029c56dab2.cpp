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
    bool  (*method_pointer_87d2df368c8d56c9908145f2028797f8)(class ::clang::Type  const *) = ::clang::TemplateSpecializationType::classof;
    unsigned int  (::clang::TemplateSpecializationType::*method_pointer_c8c98c27a3ba56988a984d0c9e56e779)() const = &::clang::TemplateSpecializationType::getNumArgs;
    bool  (::clang::TemplateSpecializationType::*method_pointer_eaf39e77c6f750b7bef545bd18a72c40)() const = &::clang::TemplateSpecializationType::isCurrentInstantiation;
    bool  (::clang::TemplateSpecializationType::*method_pointer_ab4ad2d0cd5c5d5ca95023a8f244db76)() const = &::clang::TemplateSpecializationType::isSugared;
    bool  (::clang::TemplateSpecializationType::*method_pointer_660341153eb5569e92c0a2c95134e36b)() const = &::clang::TemplateSpecializationType::isTypeAlias;
    boost::python::class_< class ::clang::TemplateSpecializationType, autowig::HeldType< class ::clang::TemplateSpecializationType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_13b544d609775d6c82f349029c56dab2("TemplateSpecializationType", "", boost::python::no_init);
    class_13b544d609775d6c82f349029c56dab2.def("classof", method_pointer_87d2df368c8d56c9908145f2028797f8, "");
    class_13b544d609775d6c82f349029c56dab2.def("get_num_args", method_pointer_c8c98c27a3ba56988a984d0c9e56e779, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_current_instantiation", method_pointer_eaf39e77c6f750b7bef545bd18a72c40, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_sugared", method_pointer_ab4ad2d0cd5c5d5ca95023a8f244db76, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_type_alias", method_pointer_660341153eb5569e92c0a2c95134e36b, "");
    class_13b544d609775d6c82f349029c56dab2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateSpecializationType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateSpecializationType >, autowig::HeldType< class ::clang::Type > >();
    }

}