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
    class ::clang::UsingShadowDecl  * (*method_pointer_f2fe599a99755db5a6285c55c648bea3)(class ::clang::ASTContext  &, unsigned int ) = ::clang::UsingShadowDecl::CreateDeserialized;
    class ::clang::UsingDecl  * (::clang::UsingShadowDecl::*method_pointer_eef0e80e8cde50deb6a188682453019c)() const = &::clang::UsingShadowDecl::getUsingDecl;
    class ::clang::UsingShadowDecl  const * (::clang::UsingShadowDecl::*method_pointer_31e3a0f928075d209cf914077f2cdae6)() const = &::clang::UsingShadowDecl::getCanonicalDecl;
    bool  (*method_pointer_0c91b321e47854a5bdf35df906645f41)(class ::clang::Decl  const *) = ::clang::UsingShadowDecl::classof;
    class ::clang::NamedDecl  * (::clang::UsingShadowDecl::*method_pointer_d68656e0df535840a2fa2c992c58e2da)() const = &::clang::UsingShadowDecl::getTargetDecl;
    void  (::clang::UsingShadowDecl::*method_pointer_3eccafad2d13582ea0ddfe1586329402)(class ::clang::NamedDecl  *) = &::clang::UsingShadowDecl::setTargetDecl;
    class ::clang::UsingShadowDecl  * (::clang::UsingShadowDecl::*method_pointer_7be5a3e23a3a5a56879bfba49255c3c3)() const = &::clang::UsingShadowDecl::getNextUsingShadowDecl;
    class ::clang::UsingShadowDecl  * (::clang::UsingShadowDecl::*method_pointer_78fcb53704df56aeb1a12bf9c7f31920)() = &::clang::UsingShadowDecl::getCanonicalDecl;
    bool  (*method_pointer_4b358c49e90c5c469df9fac15fe0dea1)(enum ::clang::Decl::Kind ) = ::clang::UsingShadowDecl::classofKind;
    boost::python::class_< class ::clang::UsingShadowDecl, autowig::HeldType< class ::clang::UsingShadowDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_8ed765a365325afd812394a92e49d498("UsingShadowDecl", "", boost::python::no_init);
    class_8ed765a365325afd812394a92e49d498.def("create_deserialized", method_pointer_f2fe599a99755db5a6285c55c648bea3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("get_using_decl", method_pointer_eef0e80e8cde50deb6a188682453019c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("get_canonical_decl", method_pointer_31e3a0f928075d209cf914077f2cdae6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("classof", method_pointer_0c91b321e47854a5bdf35df906645f41, "");
    class_8ed765a365325afd812394a92e49d498.def("get_target_decl", method_pointer_d68656e0df535840a2fa2c992c58e2da, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("set_target_decl", method_pointer_3eccafad2d13582ea0ddfe1586329402, "");
    class_8ed765a365325afd812394a92e49d498.def("get_next_using_shadow_decl", method_pointer_7be5a3e23a3a5a56879bfba49255c3c3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("get_canonical_decl", method_pointer_78fcb53704df56aeb1a12bf9c7f31920, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("classof_kind", method_pointer_4b358c49e90c5c469df9fac15fe0dea1, "");
    class_8ed765a365325afd812394a92e49d498.staticmethod("classof_kind");
    class_8ed765a365325afd812394a92e49d498.staticmethod("create_deserialized");
    class_8ed765a365325afd812394a92e49d498.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UsingShadowDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UsingShadowDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}