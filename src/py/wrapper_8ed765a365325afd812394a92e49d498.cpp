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
    class ::clang::UsingShadowDecl  * (*method_pointer_25dd4c0d9c8d5f2586fd729ca8dcafc2)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::SourceLocation , class ::clang::UsingDecl  *, class ::clang::NamedDecl  *) = ::clang::UsingShadowDecl::Create;
    class ::clang::UsingShadowDecl  * (*method_pointer_4399c120e2be572d842855be041ab655)(class ::clang::ASTContext  &, unsigned int ) = ::clang::UsingShadowDecl::CreateDeserialized;
    bool  (*method_pointer_e61a502a2d295e3286646dcf5e5284a4)(class ::clang::Decl  const *) = ::clang::UsingShadowDecl::classof;
    bool  (*method_pointer_60f7584456015ac2abd8d9023532d1a9)(enum ::clang::Decl::Kind ) = ::clang::UsingShadowDecl::classofKind;
    class ::clang::UsingShadowDecl  * (::clang::UsingShadowDecl::*method_pointer_c5fd1526599e585dba99a71f5bdee814)() = &::clang::UsingShadowDecl::getCanonicalDecl;
    class ::clang::UsingShadowDecl  const * (::clang::UsingShadowDecl::*method_pointer_003c4e12be9a589cb9ec167f428557b0)() const = &::clang::UsingShadowDecl::getCanonicalDecl;
    class ::clang::UsingShadowDecl  * (::clang::UsingShadowDecl::*method_pointer_dbc7678e295a5ccf87bc701403c5c9f6)() const = &::clang::UsingShadowDecl::getNextUsingShadowDecl;
    class ::clang::NamedDecl  * (::clang::UsingShadowDecl::*method_pointer_ad0ecdee405a5ec2b74ea9780b3ca5c9)() const = &::clang::UsingShadowDecl::getTargetDecl;
    class ::clang::UsingDecl  * (::clang::UsingShadowDecl::*method_pointer_75fc69ff74d352b18c2cbf45fae06d37)() const = &::clang::UsingShadowDecl::getUsingDecl;
    void  (::clang::UsingShadowDecl::*method_pointer_c7856d17f0395023ad5f722457255abc)(class ::clang::NamedDecl  *) = &::clang::UsingShadowDecl::setTargetDecl;
    boost::python::class_< class ::clang::UsingShadowDecl, autowig::HeldType< class ::clang::UsingShadowDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_8ed765a365325afd812394a92e49d498("UsingShadowDecl", "", boost::python::no_init);
    class_8ed765a365325afd812394a92e49d498.def("create", method_pointer_25dd4c0d9c8d5f2586fd729ca8dcafc2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("create_deserialized", method_pointer_4399c120e2be572d842855be041ab655, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("classof", method_pointer_e61a502a2d295e3286646dcf5e5284a4, "");
    class_8ed765a365325afd812394a92e49d498.def("classof_kind", method_pointer_60f7584456015ac2abd8d9023532d1a9, "");
    class_8ed765a365325afd812394a92e49d498.def("get_canonical_decl", method_pointer_c5fd1526599e585dba99a71f5bdee814, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("get_canonical_decl", method_pointer_003c4e12be9a589cb9ec167f428557b0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("get_next_using_shadow_decl", method_pointer_dbc7678e295a5ccf87bc701403c5c9f6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("get_target_decl", method_pointer_ad0ecdee405a5ec2b74ea9780b3ca5c9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("get_using_decl", method_pointer_75fc69ff74d352b18c2cbf45fae06d37, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("set_target_decl", method_pointer_c7856d17f0395023ad5f722457255abc, "");
    class_8ed765a365325afd812394a92e49d498.staticmethod("classof_kind");
    class_8ed765a365325afd812394a92e49d498.staticmethod("create");
    class_8ed765a365325afd812394a92e49d498.staticmethod("create_deserialized");
    class_8ed765a365325afd812394a92e49d498.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UsingShadowDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UsingShadowDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}