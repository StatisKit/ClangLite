#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_fcccd64b80075599a0a8ea554051b540()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::UsingDirectiveDecl  * (*method_pointer_d801e160ccbc5b5386f77e2165f62723)(class ::clang::ASTContext  &, unsigned int ) = ::clang::UsingDirectiveDecl::CreateDeserialized;
    bool  (*method_pointer_6e1070b07be6521ebc738183d88aa345)(class ::clang::Decl  const *) = ::clang::UsingDirectiveDecl::classof;
    bool  (*method_pointer_185994fa471f52e2b0f0070d9f64e63b)(enum ::clang::Decl::Kind ) = ::clang::UsingDirectiveDecl::classofKind;
    class ::clang::DeclContext  * (::clang::UsingDirectiveDecl::*method_pointer_5cb2eee059aa571cb96cc03f2cfcfea8)() = &::clang::UsingDirectiveDecl::getCommonAncestor;
    class ::clang::DeclContext  const * (::clang::UsingDirectiveDecl::*method_pointer_03375f2c78b6586486457ca05caad2a6)() const = &::clang::UsingDirectiveDecl::getCommonAncestor;
    class ::clang::SourceLocation  (::clang::UsingDirectiveDecl::*method_pointer_5a3b25a0f661547581aa631c99454de8)() const = &::clang::UsingDirectiveDecl::getIdentLocation;
    class ::clang::SourceLocation  (::clang::UsingDirectiveDecl::*method_pointer_93d9d7b6d5125d6db6870b605a529288)() const = &::clang::UsingDirectiveDecl::getNamespaceKeyLocation;
    class ::clang::NamespaceDecl  * (::clang::UsingDirectiveDecl::*method_pointer_ed496fbe604257c3a45d06585a5db664)() = &::clang::UsingDirectiveDecl::getNominatedNamespace;
    class ::clang::NamespaceDecl  const * (::clang::UsingDirectiveDecl::*method_pointer_afebc8072cac5ca0b7847b2db12accf9)() const = &::clang::UsingDirectiveDecl::getNominatedNamespace;
    class ::clang::NamedDecl  const * (::clang::UsingDirectiveDecl::*method_pointer_8d0f6186aa145de1b2ad9b15999fdf8c)() const = &::clang::UsingDirectiveDecl::getNominatedNamespaceAsWritten;
    class ::clang::NamedDecl  * (::clang::UsingDirectiveDecl::*method_pointer_bc06b05c3e3159f8a0f020b9cc69d8bf)() = &::clang::UsingDirectiveDecl::getNominatedNamespaceAsWritten;
    class ::clang::SourceLocation  (::clang::UsingDirectiveDecl::*method_pointer_774611b977f454cb98f489bec81c2ea5)() const = &::clang::UsingDirectiveDecl::getUsingLoc;
    boost::python::class_< class ::clang::UsingDirectiveDecl, autowig::HeldType< class ::clang::UsingDirectiveDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_fcccd64b80075599a0a8ea554051b540("UsingDirectiveDecl", "", boost::python::no_init);
    class_fcccd64b80075599a0a8ea554051b540.def("create_deserialized", method_pointer_d801e160ccbc5b5386f77e2165f62723, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("classof", method_pointer_6e1070b07be6521ebc738183d88aa345, "");
    class_fcccd64b80075599a0a8ea554051b540.def("classof_kind", method_pointer_185994fa471f52e2b0f0070d9f64e63b, "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_common_ancestor", method_pointer_5cb2eee059aa571cb96cc03f2cfcfea8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_common_ancestor", method_pointer_03375f2c78b6586486457ca05caad2a6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_ident_location", method_pointer_5a3b25a0f661547581aa631c99454de8, "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_namespace_key_location", method_pointer_93d9d7b6d5125d6db6870b605a529288, "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace", method_pointer_ed496fbe604257c3a45d06585a5db664, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace", method_pointer_afebc8072cac5ca0b7847b2db12accf9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace_as_written", method_pointer_8d0f6186aa145de1b2ad9b15999fdf8c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace_as_written", method_pointer_bc06b05c3e3159f8a0f020b9cc69d8bf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_using_loc", method_pointer_774611b977f454cb98f489bec81c2ea5, "");
    class_fcccd64b80075599a0a8ea554051b540.staticmethod("classof_kind");
    class_fcccd64b80075599a0a8ea554051b540.staticmethod("create_deserialized");
    class_fcccd64b80075599a0a8ea554051b540.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UsingDirectiveDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UsingDirectiveDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}