#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_8ed765a365325afd812394a92e49d498()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::UsingShadowDecl  * (*method_pointer_d1c1e261673e5e4c969b7c5d7bf86302)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::SourceLocation , class ::clang::UsingDecl  *, class ::clang::NamedDecl  *) = ::clang::UsingShadowDecl::Create;
    class ::clang::UsingShadowDecl  * (*method_pointer_ad2e95151c7e5bbaa23af6efa09c1795)(class ::clang::ASTContext  &, unsigned int ) = ::clang::UsingShadowDecl::CreateDeserialized;
    bool  (*method_pointer_9cb9ce8e98a352dfbd2818b5be637335)(class ::clang::Decl  const *) = ::clang::UsingShadowDecl::classof;
    bool  (*method_pointer_5a3f576d1cdd55e6a941eea34c5fc49a)(enum ::clang::Decl::Kind ) = ::clang::UsingShadowDecl::classofKind;
    class ::clang::UsingShadowDecl  const * (::clang::UsingShadowDecl::*method_pointer_5dd4e947a53e51fbb6bbd46f885d1be3)() const = &::clang::UsingShadowDecl::getCanonicalDecl;
    class ::clang::UsingShadowDecl  * (::clang::UsingShadowDecl::*method_pointer_c86878969838594185d5af2420695bd4)() = &::clang::UsingShadowDecl::getCanonicalDecl;
    class ::clang::UsingShadowDecl  * (::clang::UsingShadowDecl::*method_pointer_c21c48e69f735c9d82af6c6000bf11e9)() const = &::clang::UsingShadowDecl::getNextUsingShadowDecl;
    class ::clang::NamedDecl  * (::clang::UsingShadowDecl::*method_pointer_4af0dcf56fbc5e259d02100ade9ee8f6)() const = &::clang::UsingShadowDecl::getTargetDecl;
    class ::clang::UsingDecl  * (::clang::UsingShadowDecl::*method_pointer_687c852e79625eb3859706f759051a70)() const = &::clang::UsingShadowDecl::getUsingDecl;
    void  (::clang::UsingShadowDecl::*method_pointer_e1365e0edc8150f1af63d69287d8f450)(class ::clang::NamedDecl  *) = &::clang::UsingShadowDecl::setTargetDecl;
    boost::python::class_< class ::clang::UsingShadowDecl, autowig::HeldType< class ::clang::UsingShadowDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_8ed765a365325afd812394a92e49d498("UsingShadowDecl", "", boost::python::no_init);
    class_8ed765a365325afd812394a92e49d498.def("create", method_pointer_d1c1e261673e5e4c969b7c5d7bf86302, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("create_deserialized", method_pointer_ad2e95151c7e5bbaa23af6efa09c1795, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("classof", method_pointer_9cb9ce8e98a352dfbd2818b5be637335, "");
    class_8ed765a365325afd812394a92e49d498.def("classof_kind", method_pointer_5a3f576d1cdd55e6a941eea34c5fc49a, "");
    class_8ed765a365325afd812394a92e49d498.def("get_canonical_decl", method_pointer_5dd4e947a53e51fbb6bbd46f885d1be3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("get_canonical_decl", method_pointer_c86878969838594185d5af2420695bd4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("get_next_using_shadow_decl", method_pointer_c21c48e69f735c9d82af6c6000bf11e9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("get_target_decl", method_pointer_4af0dcf56fbc5e259d02100ade9ee8f6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("get_using_decl", method_pointer_687c852e79625eb3859706f759051a70, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("set_target_decl", method_pointer_e1365e0edc8150f1af63d69287d8f450, "");
    class_8ed765a365325afd812394a92e49d498.staticmethod("classof_kind");
    class_8ed765a365325afd812394a92e49d498.staticmethod("create");
    class_8ed765a365325afd812394a92e49d498.staticmethod("create_deserialized");
    class_8ed765a365325afd812394a92e49d498.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UsingShadowDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UsingShadowDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}