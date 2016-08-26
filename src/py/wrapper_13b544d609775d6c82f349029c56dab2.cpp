#include "_clanglite.h"


namespace autowig
{
}


void wrapper_13b544d609775d6c82f349029c56dab2()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_6d3b2e191e6b5103bf5aabe6eb62371a)() const = &::clang::TemplateSpecializationType::begin;
    bool  (*method_pointer_52a3d70b2b2f5b619991e4e41a27a718)(class ::clang::Type  const *) = ::clang::TemplateSpecializationType::classof;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_4f60a5fb57315c5e8de8c471bfc12cfe)() const = &::clang::TemplateSpecializationType::end;
    class ::clang::TemplateArgument  const & (::clang::TemplateSpecializationType::*method_pointer_8a3c3b9030a359059440867c345cb267)(unsigned int ) const = &::clang::TemplateSpecializationType::getArg;
    class ::clang::TemplateArgument  const * (::clang::TemplateSpecializationType::*method_pointer_f9638868516b5123b2295fa80550d113)() const = &::clang::TemplateSpecializationType::getArgs;
    unsigned int  (::clang::TemplateSpecializationType::*method_pointer_8af63ff520885576be56fcf4d47f4f9d)() const = &::clang::TemplateSpecializationType::getNumArgs;
    bool  (::clang::TemplateSpecializationType::*method_pointer_b91907a3ae69599e98088d8efdfb51cc)() const = &::clang::TemplateSpecializationType::isCurrentInstantiation;
    bool  (::clang::TemplateSpecializationType::*method_pointer_f4184f49ba5e5df1b538993925d0deb8)() const = &::clang::TemplateSpecializationType::isSugared;
    bool  (::clang::TemplateSpecializationType::*method_pointer_c37b9faf12cd5a59bba1b68b347ddbff)() const = &::clang::TemplateSpecializationType::isTypeAlias;
    boost::python::class_< class ::clang::TemplateSpecializationType, autowig::HeldType< class ::clang::TemplateSpecializationType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_13b544d609775d6c82f349029c56dab2("TemplateSpecializationType", "", boost::python::no_init);
    class_13b544d609775d6c82f349029c56dab2.def("begin", method_pointer_6d3b2e191e6b5103bf5aabe6eb62371a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("classof", method_pointer_52a3d70b2b2f5b619991e4e41a27a718, "");
    class_13b544d609775d6c82f349029c56dab2.def("end", method_pointer_4f60a5fb57315c5e8de8c471bfc12cfe, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_arg", method_pointer_8a3c3b9030a359059440867c345cb267, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_args", method_pointer_f9638868516b5123b2295fa80550d113, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_num_args", method_pointer_8af63ff520885576be56fcf4d47f4f9d, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_current_instantiation", method_pointer_b91907a3ae69599e98088d8efdfb51cc, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_sugared", method_pointer_f4184f49ba5e5df1b538993925d0deb8, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_type_alias", method_pointer_c37b9faf12cd5a59bba1b68b347ddbff, "");
    class_13b544d609775d6c82f349029c56dab2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateSpecializationType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateSpecializationType >, autowig::HeldType< class ::clang::Type > >();
    }

}