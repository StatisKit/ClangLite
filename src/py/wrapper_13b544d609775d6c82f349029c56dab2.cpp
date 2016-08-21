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
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_c89dc3e9ad0358709b932126b8f7386d)() const = &::clang::TemplateSpecializationType::begin;
    bool  (*method_pointer_0938822707545e7fa9341764b0450093)(class ::clang::Type  const *) = ::clang::TemplateSpecializationType::classof;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_371e0ae475c854a7b42d1bcfec931135)() const = &::clang::TemplateSpecializationType::end;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_0a525a0195435658a5b6739d067831e9)() const = &::clang::TemplateSpecializationType::getArgs;
    unsigned int  (::clang::TemplateSpecializationType::*method_pointer_6902bf5a0de359e1870e0413977aa34f)() const = &::clang::TemplateSpecializationType::getNumArgs;
    bool  (::clang::TemplateSpecializationType::*method_pointer_9cacf38f7bc752dba7ae612ded6f8e59)() const = &::clang::TemplateSpecializationType::isCurrentInstantiation;
    bool  (::clang::TemplateSpecializationType::*method_pointer_9e9c4640d8c255cab034e45e3d72a74f)() const = &::clang::TemplateSpecializationType::isSugared;
    bool  (::clang::TemplateSpecializationType::*method_pointer_7876c05ef3355f228f9ff6d0e4a6e99e)() const = &::clang::TemplateSpecializationType::isTypeAlias;
    boost::python::class_< class ::clang::TemplateSpecializationType, autowig::HeldType< class ::clang::TemplateSpecializationType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_13b544d609775d6c82f349029c56dab2("TemplateSpecializationType", "", boost::python::no_init);
    class_13b544d609775d6c82f349029c56dab2.def("begin", method_pointer_c89dc3e9ad0358709b932126b8f7386d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("classof", method_pointer_0938822707545e7fa9341764b0450093, "");
    class_13b544d609775d6c82f349029c56dab2.def("end", method_pointer_371e0ae475c854a7b42d1bcfec931135, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_args", method_pointer_0a525a0195435658a5b6739d067831e9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_num_args", method_pointer_6902bf5a0de359e1870e0413977aa34f, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_current_instantiation", method_pointer_9cacf38f7bc752dba7ae612ded6f8e59, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_sugared", method_pointer_9e9c4640d8c255cab034e45e3d72a74f, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_type_alias", method_pointer_7876c05ef3355f228f9ff6d0e4a6e99e, "");
    class_13b544d609775d6c82f349029c56dab2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateSpecializationType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateSpecializationType >, autowig::HeldType< class ::clang::Type > >();
    }

}