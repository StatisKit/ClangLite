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
    class ::clang::UsingDecl  * (::clang::UsingShadowDecl::*method_pointer_f77378574bdb5a3681f4fe8559aa1158)() const = &::clang::UsingShadowDecl::getUsingDecl;
    void  (::clang::UsingShadowDecl::*method_pointer_92310249b7125202b494057690ee4e3c)(class ::clang::NamedDecl  *) = &::clang::UsingShadowDecl::setTargetDecl;
    class ::clang::NamedDecl  * (::clang::UsingShadowDecl::*method_pointer_0d8c6b9d5201595980bb716e5ea5005e)() const = &::clang::UsingShadowDecl::getTargetDecl;
    class ::clang::UsingShadowDecl  * (::clang::UsingShadowDecl::*method_pointer_c03f5b1266185a94af1f1bb576085a47)() = &::clang::UsingShadowDecl::getCanonicalDecl;
    bool  (*method_pointer_db8f37d43d4f5ce39c84f145a6691c47)(class ::clang::Decl  const *) = ::clang::UsingShadowDecl::classof;
    class ::clang::UsingShadowDecl  const * (::clang::UsingShadowDecl::*method_pointer_2e2f2c3b02bf5ec28792648a804f139d)() const = &::clang::UsingShadowDecl::getCanonicalDecl;
    class ::clang::UsingShadowDecl  * (*method_pointer_c4976ec6b8205a0dadd4d06789b0a3e9)(class ::clang::ASTContext  &, unsigned int ) = ::clang::UsingShadowDecl::CreateDeserialized;
    bool  (*method_pointer_a2ba2fedb7fb57eb9ff78ecf86f3533e)(enum ::clang::Decl::Kind ) = ::clang::UsingShadowDecl::classofKind;
    class ::clang::UsingShadowDecl  * (::clang::UsingShadowDecl::*method_pointer_92f1e53683215ba59d8fd44d11004d1d)() const = &::clang::UsingShadowDecl::getNextUsingShadowDecl;
    boost::python::class_< class ::clang::UsingShadowDecl, autowig::HeldType< class ::clang::UsingShadowDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_8ed765a365325afd812394a92e49d498("UsingShadowDecl", "", boost::python::no_init);
    class_8ed765a365325afd812394a92e49d498.def("get_using_decl", method_pointer_f77378574bdb5a3681f4fe8559aa1158, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("set_target_decl", method_pointer_92310249b7125202b494057690ee4e3c, "");
    class_8ed765a365325afd812394a92e49d498.def("get_target_decl", method_pointer_0d8c6b9d5201595980bb716e5ea5005e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("get_canonical_decl", method_pointer_c03f5b1266185a94af1f1bb576085a47, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("classof", method_pointer_db8f37d43d4f5ce39c84f145a6691c47, "");
    class_8ed765a365325afd812394a92e49d498.def("get_canonical_decl", method_pointer_2e2f2c3b02bf5ec28792648a804f139d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("create_deserialized", method_pointer_c4976ec6b8205a0dadd4d06789b0a3e9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("classof_kind", method_pointer_a2ba2fedb7fb57eb9ff78ecf86f3533e, "");
    class_8ed765a365325afd812394a92e49d498.def("get_next_using_shadow_decl", method_pointer_92f1e53683215ba59d8fd44d11004d1d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.staticmethod("classof_kind");
    class_8ed765a365325afd812394a92e49d498.staticmethod("create_deserialized");
    class_8ed765a365325afd812394a92e49d498.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UsingShadowDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UsingShadowDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}