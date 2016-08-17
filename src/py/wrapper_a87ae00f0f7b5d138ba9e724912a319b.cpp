#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_a87ae00f0f7b5d138ba9e724912a319b()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::NamespaceAliasDecl  const * (::clang::NamespaceAliasDecl::*method_pointer_4d518276c49f57acbe5867e6c2abdf82)() const = &::clang::NamespaceAliasDecl::getCanonicalDecl;
    bool  (*method_pointer_f5af0833b7f6595e94002e7405287d7f)(class ::clang::Decl  const *) = ::clang::NamespaceAliasDecl::classof;
    class ::clang::NamedDecl  * (::clang::NamespaceAliasDecl::*method_pointer_c10c8258ab8d58c580e4f698c0f1ec31)() const = &::clang::NamespaceAliasDecl::getAliasedNamespace;
    class ::clang::NamespaceAliasDecl  * (*method_pointer_4e3ca89034ee5cbfb1456af98bb34335)(class ::clang::ASTContext  &, unsigned int ) = ::clang::NamespaceAliasDecl::CreateDeserialized;
    class ::clang::NamespaceDecl  * (::clang::NamespaceAliasDecl::*method_pointer_5e719aa53a325e6aa79b5bfda7054b2e)() = &::clang::NamespaceAliasDecl::getNamespace;
    bool  (*method_pointer_280c70cfbe6d5fe390ab205427349259)(enum ::clang::Decl::Kind ) = ::clang::NamespaceAliasDecl::classofKind;
    class ::clang::NamespaceAliasDecl  * (::clang::NamespaceAliasDecl::*method_pointer_a4ae6b6bf0d15bd5a6e02330dcefea70)() = &::clang::NamespaceAliasDecl::getCanonicalDecl;
    class ::clang::NamespaceDecl  const * (::clang::NamespaceAliasDecl::*method_pointer_545b157e3e7d5d84a28481604fd1fe08)() const = &::clang::NamespaceAliasDecl::getNamespace;
    boost::python::class_< class ::clang::NamespaceAliasDecl, autowig::HeldType< class ::clang::NamespaceAliasDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_a87ae00f0f7b5d138ba9e724912a319b("NamespaceAliasDecl", "", boost::python::no_init);
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_canonical_decl", method_pointer_4d518276c49f57acbe5867e6c2abdf82, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("classof", method_pointer_f5af0833b7f6595e94002e7405287d7f, "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_aliased_namespace", method_pointer_c10c8258ab8d58c580e4f698c0f1ec31, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("create_deserialized", method_pointer_4e3ca89034ee5cbfb1456af98bb34335, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_namespace", method_pointer_5e719aa53a325e6aa79b5bfda7054b2e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("classof_kind", method_pointer_280c70cfbe6d5fe390ab205427349259, "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_canonical_decl", method_pointer_a4ae6b6bf0d15bd5a6e02330dcefea70, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_namespace", method_pointer_545b157e3e7d5d84a28481604fd1fe08, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.staticmethod("classof_kind");
    class_a87ae00f0f7b5d138ba9e724912a319b.staticmethod("create_deserialized");
    class_a87ae00f0f7b5d138ba9e724912a319b.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::NamespaceAliasDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamespaceAliasDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}