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
    class ::clang::UsingDirectiveDecl  * (*method_pointer_c5644d92f4f354178f6d5c23d9f86c9c)(class ::clang::ASTContext  &, unsigned int ) = ::clang::UsingDirectiveDecl::CreateDeserialized;
    bool  (*method_pointer_9118174c25f352f397cbfc10b4e3195f)(class ::clang::Decl  const *) = ::clang::UsingDirectiveDecl::classof;
    bool  (*method_pointer_6463e14c10eb566b8599466ff90f5203)(enum ::clang::Decl::Kind ) = ::clang::UsingDirectiveDecl::classofKind;
    class ::clang::DeclContext  * (::clang::UsingDirectiveDecl::*method_pointer_31ed3e53fa395a55a32d472694863b99)() = &::clang::UsingDirectiveDecl::getCommonAncestor;
    class ::clang::DeclContext  const * (::clang::UsingDirectiveDecl::*method_pointer_96618198b46755fca60a14c0fd6773fa)() const = &::clang::UsingDirectiveDecl::getCommonAncestor;
    class ::clang::SourceLocation  (::clang::UsingDirectiveDecl::*method_pointer_0bc1202b880257019b2278ea520f4bfd)() const = &::clang::UsingDirectiveDecl::getIdentLocation;
    class ::clang::SourceLocation  (::clang::UsingDirectiveDecl::*method_pointer_41efc531e6fa57369af75b0a71837223)() const = &::clang::UsingDirectiveDecl::getNamespaceKeyLocation;
    class ::clang::NamespaceDecl  * (::clang::UsingDirectiveDecl::*method_pointer_92f3adeffb7b573a88c9302f50a96b00)() = &::clang::UsingDirectiveDecl::getNominatedNamespace;
    class ::clang::NamespaceDecl  const * (::clang::UsingDirectiveDecl::*method_pointer_8b516e850e035bc2a960f16f4675c58b)() const = &::clang::UsingDirectiveDecl::getNominatedNamespace;
    class ::clang::NamedDecl  const * (::clang::UsingDirectiveDecl::*method_pointer_fc3d32ea912d53dda0451a6f6fce25b3)() const = &::clang::UsingDirectiveDecl::getNominatedNamespaceAsWritten;
    class ::clang::NamedDecl  * (::clang::UsingDirectiveDecl::*method_pointer_db3321bf13b352898711c7e7595bb72e)() = &::clang::UsingDirectiveDecl::getNominatedNamespaceAsWritten;
    class ::clang::SourceLocation  (::clang::UsingDirectiveDecl::*method_pointer_933c22a6b65e52cea958ed0f6929a431)() const = &::clang::UsingDirectiveDecl::getUsingLoc;
    boost::python::class_< class ::clang::UsingDirectiveDecl, autowig::HeldType< class ::clang::UsingDirectiveDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_fcccd64b80075599a0a8ea554051b540("UsingDirectiveDecl", "", boost::python::no_init);
    class_fcccd64b80075599a0a8ea554051b540.def("create_deserialized", method_pointer_c5644d92f4f354178f6d5c23d9f86c9c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("classof", method_pointer_9118174c25f352f397cbfc10b4e3195f, "");
    class_fcccd64b80075599a0a8ea554051b540.def("classof_kind", method_pointer_6463e14c10eb566b8599466ff90f5203, "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_common_ancestor", method_pointer_31ed3e53fa395a55a32d472694863b99, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_common_ancestor", method_pointer_96618198b46755fca60a14c0fd6773fa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_ident_location", method_pointer_0bc1202b880257019b2278ea520f4bfd, "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_namespace_key_location", method_pointer_41efc531e6fa57369af75b0a71837223, "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace", method_pointer_92f3adeffb7b573a88c9302f50a96b00, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace", method_pointer_8b516e850e035bc2a960f16f4675c58b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace_as_written", method_pointer_fc3d32ea912d53dda0451a6f6fce25b3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace_as_written", method_pointer_db3321bf13b352898711c7e7595bb72e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_using_loc", method_pointer_933c22a6b65e52cea958ed0f6929a431, "");
    class_fcccd64b80075599a0a8ea554051b540.staticmethod("classof_kind");
    class_fcccd64b80075599a0a8ea554051b540.staticmethod("create_deserialized");
    class_fcccd64b80075599a0a8ea554051b540.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UsingDirectiveDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UsingDirectiveDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}