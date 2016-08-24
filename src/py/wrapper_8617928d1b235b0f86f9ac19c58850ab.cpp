#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_8617928d1b235b0f86f9ac19c58850ab()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TypeAliasDecl  * (*method_pointer_c2fb681de97c509bae7ea3796b541a28)(class ::clang::ASTContext  &, unsigned int ) = ::clang::TypeAliasDecl::CreateDeserialized;
    bool  (*method_pointer_687bc91c8ed25f03a86baa31cbac4a60)(class ::clang::Decl  const *) = ::clang::TypeAliasDecl::classof;
    bool  (*method_pointer_b8a972b8d6e85b41892d10ee9fcb5017)(enum ::clang::Decl::Kind ) = ::clang::TypeAliasDecl::classofKind;
    class ::clang::TypeAliasTemplateDecl  * (::clang::TypeAliasDecl::*method_pointer_756698987a0f56739c9212260430c5a8)() const = &::clang::TypeAliasDecl::getDescribedAliasTemplate;
    void  (::clang::TypeAliasDecl::*method_pointer_bebd36a2478257868a0f6aa4af8d6682)(class ::clang::TypeAliasTemplateDecl  *) = &::clang::TypeAliasDecl::setDescribedAliasTemplate;
    boost::python::class_< class ::clang::TypeAliasDecl, autowig::HeldType< class ::clang::TypeAliasDecl >, boost::python::bases< class ::clang::TypedefNameDecl >, boost::noncopyable > class_8617928d1b235b0f86f9ac19c58850ab("TypeAliasDecl", "", boost::python::no_init);
    class_8617928d1b235b0f86f9ac19c58850ab.def("create_deserialized", method_pointer_c2fb681de97c509bae7ea3796b541a28, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8617928d1b235b0f86f9ac19c58850ab.def("classof", method_pointer_687bc91c8ed25f03a86baa31cbac4a60, "");
    class_8617928d1b235b0f86f9ac19c58850ab.def("classof_kind", method_pointer_b8a972b8d6e85b41892d10ee9fcb5017, "");
    class_8617928d1b235b0f86f9ac19c58850ab.def("get_described_alias_template", method_pointer_756698987a0f56739c9212260430c5a8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8617928d1b235b0f86f9ac19c58850ab.def("set_described_alias_template", method_pointer_bebd36a2478257868a0f6aa4af8d6682, "");
    class_8617928d1b235b0f86f9ac19c58850ab.staticmethod("classof_kind");
    class_8617928d1b235b0f86f9ac19c58850ab.staticmethod("create_deserialized");
    class_8617928d1b235b0f86f9ac19c58850ab.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypeAliasDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypeAliasDecl >, autowig::HeldType< class ::clang::TypedefNameDecl > >();
    }

}