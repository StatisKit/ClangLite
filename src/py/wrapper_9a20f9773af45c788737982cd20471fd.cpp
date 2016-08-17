#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_9a20f9773af45c788737982cd20471fd()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_5276b773640f51d39b7332eda482453a)() = &::clang::NamespaceDecl::getCanonicalDecl;
    void  (::clang::NamespaceDecl::*method_pointer_f451425272da567b821328627745051d)(bool ) = &::clang::NamespaceDecl::setInline;
    class ::clang::NamespaceDecl  const * (::clang::NamespaceDecl::*method_pointer_76e5db07a44c5efca1e35a11c02984c0)() const = &::clang::NamespaceDecl::getOriginalNamespace;
    class ::clang::NamespaceDecl  const * (::clang::NamespaceDecl::*method_pointer_2b5130d7593350ccb6322100046dc1f0)() const = &::clang::NamespaceDecl::getCanonicalDecl;
    bool  (*method_pointer_231a4ba5527156099c194cdebaca1924)(enum ::clang::Decl::Kind ) = ::clang::NamespaceDecl::classofKind;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_66d6078fd81f55e8bed90541ed0b2c1a)() const = &::clang::NamespaceDecl::getAnonymousNamespace;
    bool  (::clang::NamespaceDecl::*method_pointer_d076fd7557d558e39cb4f5782c10fa2b)() const = &::clang::NamespaceDecl::isInline;
    bool  (*method_pointer_4e46c9c3381952b5b64004055b87b423)(class ::clang::Decl  const *) = ::clang::NamespaceDecl::classof;
    class ::clang::NamespaceDecl  * (*method_pointer_d23bb1fe73de5cb19886fc6986e0a623)(class ::clang::ASTContext  &, unsigned int ) = ::clang::NamespaceDecl::CreateDeserialized;
    class ::clang::NamespaceDecl  * (*method_pointer_e896cc3b380d5af6adf3ae8194074949)(class ::clang::DeclContext  const *) = ::clang::NamespaceDecl::castFromDeclContext;
    bool  (::clang::NamespaceDecl::*method_pointer_e10062b958f754ab885b307089d776bf)() const = &::clang::NamespaceDecl::isAnonymousNamespace;
    class ::clang::DeclContext  * (*method_pointer_5835bff8e4555b93ae2078b370d22660)(class ::clang::NamespaceDecl  const *) = ::clang::NamespaceDecl::castToDeclContext;
    void  (::clang::NamespaceDecl::*method_pointer_b8af6957f6f153c5a62393f3358f326d)(class ::clang::NamespaceDecl  *) = &::clang::NamespaceDecl::setAnonymousNamespace;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_9bc0fd15fbf35f04bf424f5621208d8c)() = &::clang::NamespaceDecl::getOriginalNamespace;
    bool  (::clang::NamespaceDecl::*method_pointer_3dbf0ae0db5b5e728f160c4519f364d3)() const = &::clang::NamespaceDecl::isOriginalNamespace;
    boost::python::class_< class ::clang::NamespaceDecl, autowig::HeldType< class ::clang::NamespaceDecl >, boost::python::bases< class ::clang::NamedDecl, class ::clang::DeclContext >, boost::noncopyable > class_9a20f9773af45c788737982cd20471fd("NamespaceDecl", "", boost::python::no_init);
    class_9a20f9773af45c788737982cd20471fd.def("get_canonical_decl", method_pointer_5276b773640f51d39b7332eda482453a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("set_inline", method_pointer_f451425272da567b821328627745051d, "");
    class_9a20f9773af45c788737982cd20471fd.def("get_original_namespace", method_pointer_76e5db07a44c5efca1e35a11c02984c0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_canonical_decl", method_pointer_2b5130d7593350ccb6322100046dc1f0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("classof_kind", method_pointer_231a4ba5527156099c194cdebaca1924, "");
    class_9a20f9773af45c788737982cd20471fd.def("get_anonymous_namespace", method_pointer_66d6078fd81f55e8bed90541ed0b2c1a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("is_inline", method_pointer_d076fd7557d558e39cb4f5782c10fa2b, "");
    class_9a20f9773af45c788737982cd20471fd.def("classof", method_pointer_4e46c9c3381952b5b64004055b87b423, "");
    class_9a20f9773af45c788737982cd20471fd.def("create_deserialized", method_pointer_d23bb1fe73de5cb19886fc6986e0a623, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("cast_from_decl_context", method_pointer_e896cc3b380d5af6adf3ae8194074949, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("is_anonymous_namespace", method_pointer_e10062b958f754ab885b307089d776bf, "");
    class_9a20f9773af45c788737982cd20471fd.def("cast_to_decl_context", method_pointer_5835bff8e4555b93ae2078b370d22660, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("set_anonymous_namespace", method_pointer_b8af6957f6f153c5a62393f3358f326d, "");
    class_9a20f9773af45c788737982cd20471fd.def("get_original_namespace", method_pointer_9bc0fd15fbf35f04bf424f5621208d8c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("is_original_namespace", method_pointer_3dbf0ae0db5b5e728f160c4519f364d3, "");
    class_9a20f9773af45c788737982cd20471fd.staticmethod("classof_kind");
    class_9a20f9773af45c788737982cd20471fd.staticmethod("create_deserialized");
    class_9a20f9773af45c788737982cd20471fd.staticmethod("classof");
    class_9a20f9773af45c788737982cd20471fd.staticmethod("cast_from_decl_context");
    class_9a20f9773af45c788737982cd20471fd.staticmethod("cast_to_decl_context");

    if(std::is_class< autowig::HeldType< class ::clang::NamespaceDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamespaceDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamespaceDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}