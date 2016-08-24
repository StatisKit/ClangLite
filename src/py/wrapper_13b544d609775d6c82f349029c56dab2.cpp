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
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_2af978db80e156b3938091f53025e622)() const = &::clang::TemplateSpecializationType::begin;
    bool  (*method_pointer_86b136f5b7fd5925be14fdeaf1658800)(class ::clang::Type  const *) = ::clang::TemplateSpecializationType::classof;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_ef47c4e7873b5cac826ee54f4a9d3000)() const = &::clang::TemplateSpecializationType::desugar;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_0b3d45cf32b7565cbef0984e02ab954b)() const = &::clang::TemplateSpecializationType::end;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_56f51ebd2b9f5a269a8d56574b365d76)() const = &::clang::TemplateSpecializationType::getAliasedType;
    class ::clang::TemplateArgument  const & (::clang::TemplateSpecializationType::*method_pointer_9ec36f0c734b5fbbaa958cdfe460e1f9)(unsigned int ) const = &::clang::TemplateSpecializationType::getArg;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_db9f2d0181485c9eaf83d5d123a9bc6c)() const = &::clang::TemplateSpecializationType::getArgs;
    unsigned int  (::clang::TemplateSpecializationType::*method_pointer_3fc9adf1a3225576ae5a8ae4047a1b1f)() const = &::clang::TemplateSpecializationType::getNumArgs;
    bool  (::clang::TemplateSpecializationType::*method_pointer_45cb92951cb2562c98d9c8f8a0485141)() const = &::clang::TemplateSpecializationType::isCurrentInstantiation;
    bool  (::clang::TemplateSpecializationType::*method_pointer_20c32ac01251536599d7e99828ba1af2)() const = &::clang::TemplateSpecializationType::isSugared;
    bool  (::clang::TemplateSpecializationType::*method_pointer_17f2f04919be5daeb4554c478d663e14)() const = &::clang::TemplateSpecializationType::isTypeAlias;
    boost::python::class_< class ::clang::TemplateSpecializationType, autowig::HeldType< class ::clang::TemplateSpecializationType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_13b544d609775d6c82f349029c56dab2("TemplateSpecializationType", "", boost::python::no_init);
    class_13b544d609775d6c82f349029c56dab2.def("begin", method_pointer_2af978db80e156b3938091f53025e622, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("classof", method_pointer_86b136f5b7fd5925be14fdeaf1658800, "");
    class_13b544d609775d6c82f349029c56dab2.def("desugar", method_pointer_ef47c4e7873b5cac826ee54f4a9d3000, "");
    class_13b544d609775d6c82f349029c56dab2.def("end", method_pointer_0b3d45cf32b7565cbef0984e02ab954b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_aliased_type", method_pointer_56f51ebd2b9f5a269a8d56574b365d76, "");
    class_13b544d609775d6c82f349029c56dab2.def("get_arg", method_pointer_9ec36f0c734b5fbbaa958cdfe460e1f9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_args", method_pointer_db9f2d0181485c9eaf83d5d123a9bc6c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_num_args", method_pointer_3fc9adf1a3225576ae5a8ae4047a1b1f, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_current_instantiation", method_pointer_45cb92951cb2562c98d9c8f8a0485141, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_sugared", method_pointer_20c32ac01251536599d7e99828ba1af2, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_type_alias", method_pointer_17f2f04919be5daeb4554c478d663e14, "");
    class_13b544d609775d6c82f349029c56dab2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateSpecializationType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateSpecializationType >, autowig::HeldType< class ::clang::Type > >();
    }

}