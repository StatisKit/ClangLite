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
    bool  (*method_pointer_5ac786f9b42053859d3f421ff664583f)(enum ::clang::Decl::Kind ) = ::clang::NamespaceDecl::classofKind;
    bool  (*method_pointer_452fa854c1db54d0886fefb84206898a)(class ::clang::Decl  const *) = ::clang::NamespaceDecl::classof;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_eab395a436795e1592751428e1a15ed5)() = &::clang::NamespaceDecl::getCanonicalDecl;
    class ::clang::NamespaceDecl  const * (::clang::NamespaceDecl::*method_pointer_f97e0d2103e5541f94db01bfecf1dd37)() const = &::clang::NamespaceDecl::getCanonicalDecl;
    class ::clang::DeclContext  * (*method_pointer_eb6ee8e53f505ea1b5d41091deda50ad)(class ::clang::NamespaceDecl  const *) = ::clang::NamespaceDecl::castToDeclContext;
    class ::clang::NamespaceDecl  const * (::clang::NamespaceDecl::*method_pointer_218c32f953645564aa8d3a72cc4ef762)() const = &::clang::NamespaceDecl::getOriginalNamespace;
    void  (::clang::NamespaceDecl::*method_pointer_705b78a8fdad57c19749c972ad65079c)(bool ) = &::clang::NamespaceDecl::setInline;
    bool  (::clang::NamespaceDecl::*method_pointer_e40b2f31aaf755dda661f9508cc4bf94)() const = &::clang::NamespaceDecl::isOriginalNamespace;
    bool  (::clang::NamespaceDecl::*method_pointer_3ee2ecbcee115a7690494531f6897265)() const = &::clang::NamespaceDecl::isInline;
    class ::clang::NamespaceDecl  * (*method_pointer_78bcd34a33cb59d8ba33037f0aa145b6)(class ::clang::DeclContext  const *) = ::clang::NamespaceDecl::castFromDeclContext;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_9e7761de2ee651a0828c3d9a855594e2)() = &::clang::NamespaceDecl::getOriginalNamespace;
    class ::clang::NamespaceDecl  * (*method_pointer_aa6a530d3f5e5d589eb85f84e87fdab3)(class ::clang::ASTContext  &, unsigned int ) = ::clang::NamespaceDecl::CreateDeserialized;
    bool  (::clang::NamespaceDecl::*method_pointer_99c62177c77456c4948b84bdc942e9ff)() const = &::clang::NamespaceDecl::isAnonymousNamespace;
    void  (::clang::NamespaceDecl::*method_pointer_47270391544e5c7e914c8fe5dacf659d)(class ::clang::NamespaceDecl  *) = &::clang::NamespaceDecl::setAnonymousNamespace;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_9b18ae81b15f52c39f9b2b427fdf1a84)() const = &::clang::NamespaceDecl::getAnonymousNamespace;
    boost::python::class_< class ::clang::NamespaceDecl, autowig::HeldType< class ::clang::NamespaceDecl >, boost::python::bases< class ::clang::NamedDecl, class ::clang::DeclContext >, boost::noncopyable > class_9a20f9773af45c788737982cd20471fd("NamespaceDecl", "", boost::python::no_init);
    class_9a20f9773af45c788737982cd20471fd.def("classof_kind", method_pointer_5ac786f9b42053859d3f421ff664583f, "");
    class_9a20f9773af45c788737982cd20471fd.def("classof", method_pointer_452fa854c1db54d0886fefb84206898a, "");
    class_9a20f9773af45c788737982cd20471fd.def("get_canonical_decl", method_pointer_eab395a436795e1592751428e1a15ed5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_canonical_decl", method_pointer_f97e0d2103e5541f94db01bfecf1dd37, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("cast_to_decl_context", method_pointer_eb6ee8e53f505ea1b5d41091deda50ad, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_original_namespace", method_pointer_218c32f953645564aa8d3a72cc4ef762, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("set_inline", method_pointer_705b78a8fdad57c19749c972ad65079c, "");
    class_9a20f9773af45c788737982cd20471fd.def("is_original_namespace", method_pointer_e40b2f31aaf755dda661f9508cc4bf94, "");
    class_9a20f9773af45c788737982cd20471fd.def("is_inline", method_pointer_3ee2ecbcee115a7690494531f6897265, "");
    class_9a20f9773af45c788737982cd20471fd.def("cast_from_decl_context", method_pointer_78bcd34a33cb59d8ba33037f0aa145b6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_original_namespace", method_pointer_9e7761de2ee651a0828c3d9a855594e2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("create_deserialized", method_pointer_aa6a530d3f5e5d589eb85f84e87fdab3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("is_anonymous_namespace", method_pointer_99c62177c77456c4948b84bdc942e9ff, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_anonymous_namespace", method_pointer_47270391544e5c7e914c8fe5dacf659d, "");
    class_9a20f9773af45c788737982cd20471fd.def("get_anonymous_namespace", method_pointer_9b18ae81b15f52c39f9b2b427fdf1a84, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
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