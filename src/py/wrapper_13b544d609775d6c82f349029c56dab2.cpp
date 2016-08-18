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
    bool  (*method_pointer_1688c39f08b251f388f6a992290fe52a)(class ::clang::Type  const *) = ::clang::TemplateSpecializationType::classof;
    unsigned int  (::clang::TemplateSpecializationType::*method_pointer_3114d0f490455ff5a812993e86c821e0)() const = &::clang::TemplateSpecializationType::getNumArgs;
    bool  (::clang::TemplateSpecializationType::*method_pointer_e0b0127ee9135564a26cbb7e9bc1d400)() const = &::clang::TemplateSpecializationType::isCurrentInstantiation;
    bool  (::clang::TemplateSpecializationType::*method_pointer_43ce24f3044f554a9ca21e848b6764dc)() const = &::clang::TemplateSpecializationType::isSugared;
    bool  (::clang::TemplateSpecializationType::*method_pointer_44403b4376e8510c9db68bc7ce4b8410)() const = &::clang::TemplateSpecializationType::isTypeAlias;
    boost::python::class_< class ::clang::TemplateSpecializationType, autowig::HeldType< class ::clang::TemplateSpecializationType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_13b544d609775d6c82f349029c56dab2("TemplateSpecializationType", "", boost::python::no_init);
    class_13b544d609775d6c82f349029c56dab2.def("classof", method_pointer_1688c39f08b251f388f6a992290fe52a, "");
    class_13b544d609775d6c82f349029c56dab2.def("get_num_args", method_pointer_3114d0f490455ff5a812993e86c821e0, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_current_instantiation", method_pointer_e0b0127ee9135564a26cbb7e9bc1d400, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_sugared", method_pointer_43ce24f3044f554a9ca21e848b6764dc, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_type_alias", method_pointer_44403b4376e8510c9db68bc7ce4b8410, "");
    class_13b544d609775d6c82f349029c56dab2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateSpecializationType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateSpecializationType >, autowig::HeldType< class ::clang::Type > >();
    }

}