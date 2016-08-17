#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_8ed765a365325afd812394a92e49d498()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_d09fef3687425aa58b072786e7062814)(enum ::clang::Decl::Kind ) = ::clang::UsingShadowDecl::classofKind;
    class ::clang::NamedDecl  * (::clang::UsingShadowDecl::*method_pointer_5517f67ada5152b2a7ac43e129fd7ced)() const = &::clang::UsingShadowDecl::getTargetDecl;
    class ::clang::UsingShadowDecl  * (*method_pointer_088373cee07f53498545b634bb3965e5)(class ::clang::ASTContext  &, unsigned int ) = ::clang::UsingShadowDecl::CreateDeserialized;
    class ::clang::UsingDecl  * (::clang::UsingShadowDecl::*method_pointer_4d3da472fc125f159c376e7614464d61)() const = &::clang::UsingShadowDecl::getUsingDecl;
    class ::clang::UsingShadowDecl  * (::clang::UsingShadowDecl::*method_pointer_b2f1c376bc225571a8522a53c45c5faa)() const = &::clang::UsingShadowDecl::getNextUsingShadowDecl;
    void  (::clang::UsingShadowDecl::*method_pointer_4029479af9275f59b1532c19f0da0d15)(class ::clang::NamedDecl  *) = &::clang::UsingShadowDecl::setTargetDecl;
    bool  (*method_pointer_a482518834c95355adf111e0e2e2c793)(class ::clang::Decl  const *) = ::clang::UsingShadowDecl::classof;
    class ::clang::UsingShadowDecl  * (::clang::UsingShadowDecl::*method_pointer_4e35ac12662c5faaa5407d6e313170f8)() = &::clang::UsingShadowDecl::getCanonicalDecl;
    class ::clang::UsingShadowDecl  const * (::clang::UsingShadowDecl::*method_pointer_7ef040634c0a55178c67af5311871e7a)() const = &::clang::UsingShadowDecl::getCanonicalDecl;
    boost::python::class_< class ::clang::UsingShadowDecl, autowig::HeldType< class ::clang::UsingShadowDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_8ed765a365325afd812394a92e49d498("UsingShadowDecl", "", boost::python::no_init);
    class_8ed765a365325afd812394a92e49d498.def("classof_kind", method_pointer_d09fef3687425aa58b072786e7062814, "");
    class_8ed765a365325afd812394a92e49d498.def("get_target_decl", method_pointer_5517f67ada5152b2a7ac43e129fd7ced, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("create_deserialized", method_pointer_088373cee07f53498545b634bb3965e5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("get_using_decl", method_pointer_4d3da472fc125f159c376e7614464d61, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("get_next_using_shadow_decl", method_pointer_b2f1c376bc225571a8522a53c45c5faa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("set_target_decl", method_pointer_4029479af9275f59b1532c19f0da0d15, "");
    class_8ed765a365325afd812394a92e49d498.def("classof", method_pointer_a482518834c95355adf111e0e2e2c793, "");
    class_8ed765a365325afd812394a92e49d498.def("get_canonical_decl", method_pointer_4e35ac12662c5faaa5407d6e313170f8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("get_canonical_decl", method_pointer_7ef040634c0a55178c67af5311871e7a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.staticmethod("classof_kind");
    class_8ed765a365325afd812394a92e49d498.staticmethod("create_deserialized");
    class_8ed765a365325afd812394a92e49d498.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UsingShadowDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UsingShadowDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}