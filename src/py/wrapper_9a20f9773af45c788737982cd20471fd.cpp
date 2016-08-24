#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_9a20f9773af45c788737982cd20471fd()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::NamespaceDecl  * (*method_pointer_f7c9c710068d5096abb823807dfbfeef)(class ::clang::ASTContext  &, unsigned int ) = ::clang::NamespaceDecl::CreateDeserialized;
    class ::clang::NamespaceDecl  * (*method_pointer_3c4838db83695366b4e9fa800675f30f)(class ::clang::DeclContext  const *) = ::clang::NamespaceDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_1a11d6269cff54bba4393090706e603d)(class ::clang::NamespaceDecl  const *) = ::clang::NamespaceDecl::castToDeclContext;
    bool  (*method_pointer_385376be570152ca9ddd8894bd3ddb96)(class ::clang::Decl  const *) = ::clang::NamespaceDecl::classof;
    bool  (*method_pointer_c462253f744150e3bed282e37c994e35)(enum ::clang::Decl::Kind ) = ::clang::NamespaceDecl::classofKind;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_b3f01e52d9645dc19b67cf6ed6e7a8c6)() const = &::clang::NamespaceDecl::getAnonymousNamespace;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_144ce5c59bbe5675b825c439da4cac77)() = &::clang::NamespaceDecl::getCanonicalDecl;
    class ::clang::NamespaceDecl  const * (::clang::NamespaceDecl::*method_pointer_d22e38ed073c5b5398b258c99b27435e)() const = &::clang::NamespaceDecl::getCanonicalDecl;
    class ::clang::SourceLocation  (::clang::NamespaceDecl::*method_pointer_877f820112d75477b152f2635d122f59)() const = &::clang::NamespaceDecl::getLocStart;
    class ::clang::NamespaceDecl  const * (::clang::NamespaceDecl::*method_pointer_4e696202e5df5988864f05714b3ae1b3)() const = &::clang::NamespaceDecl::getOriginalNamespace;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_3eb85db7ac0f5442850e3fe41b2018ba)() = &::clang::NamespaceDecl::getOriginalNamespace;
    class ::clang::SourceLocation  (::clang::NamespaceDecl::*method_pointer_cf6109d221b55c0084172716eb1c85a8)() const = &::clang::NamespaceDecl::getRBraceLoc;
    bool  (::clang::NamespaceDecl::*method_pointer_f72059e9c5725eaa810cc47b3f9ec388)() const = &::clang::NamespaceDecl::isAnonymousNamespace;
    bool  (::clang::NamespaceDecl::*method_pointer_ed1534fbbeba5d5f9291f69154204912)() const = &::clang::NamespaceDecl::isInline;
    bool  (::clang::NamespaceDecl::*method_pointer_8736fd57f44d5d8f870f91aae9e90a59)() const = &::clang::NamespaceDecl::isOriginalNamespace;
    void  (::clang::NamespaceDecl::*method_pointer_8fda59b6993551488eb383b655607da2)(class ::clang::NamespaceDecl  *) = &::clang::NamespaceDecl::setAnonymousNamespace;
    void  (::clang::NamespaceDecl::*method_pointer_b4d973308ac852d6bf49dad7921b47e7)(bool ) = &::clang::NamespaceDecl::setInline;
    void  (::clang::NamespaceDecl::*method_pointer_e0c04738333257bcb51a2111c579666a)(class ::clang::SourceLocation ) = &::clang::NamespaceDecl::setLocStart;
    void  (::clang::NamespaceDecl::*method_pointer_89e878bf8ede52f8ab36793a06764ac2)(class ::clang::SourceLocation ) = &::clang::NamespaceDecl::setRBraceLoc;
    boost::python::class_< class ::clang::NamespaceDecl, autowig::HeldType< class ::clang::NamespaceDecl >, boost::python::bases< class ::clang::NamedDecl, class ::clang::DeclContext >, boost::noncopyable > class_9a20f9773af45c788737982cd20471fd("NamespaceDecl", "", boost::python::no_init);
    class_9a20f9773af45c788737982cd20471fd.def("create_deserialized", method_pointer_f7c9c710068d5096abb823807dfbfeef, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("cast_from_decl_context", method_pointer_3c4838db83695366b4e9fa800675f30f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("cast_to_decl_context", method_pointer_1a11d6269cff54bba4393090706e603d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("classof", method_pointer_385376be570152ca9ddd8894bd3ddb96, "");
    class_9a20f9773af45c788737982cd20471fd.def("classof_kind", method_pointer_c462253f744150e3bed282e37c994e35, "");
    class_9a20f9773af45c788737982cd20471fd.def("get_anonymous_namespace", method_pointer_b3f01e52d9645dc19b67cf6ed6e7a8c6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_canonical_decl", method_pointer_144ce5c59bbe5675b825c439da4cac77, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_canonical_decl", method_pointer_d22e38ed073c5b5398b258c99b27435e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_loc_start", method_pointer_877f820112d75477b152f2635d122f59, "");
    class_9a20f9773af45c788737982cd20471fd.def("get_original_namespace", method_pointer_4e696202e5df5988864f05714b3ae1b3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_original_namespace", method_pointer_3eb85db7ac0f5442850e3fe41b2018ba, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_r_brace_loc", method_pointer_cf6109d221b55c0084172716eb1c85a8, "");
    class_9a20f9773af45c788737982cd20471fd.def("is_anonymous_namespace", method_pointer_f72059e9c5725eaa810cc47b3f9ec388, "");
    class_9a20f9773af45c788737982cd20471fd.def("is_inline", method_pointer_ed1534fbbeba5d5f9291f69154204912, "");
    class_9a20f9773af45c788737982cd20471fd.def("is_original_namespace", method_pointer_8736fd57f44d5d8f870f91aae9e90a59, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_anonymous_namespace", method_pointer_8fda59b6993551488eb383b655607da2, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_inline", method_pointer_b4d973308ac852d6bf49dad7921b47e7, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_loc_start", method_pointer_e0c04738333257bcb51a2111c579666a, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_r_brace_loc", method_pointer_89e878bf8ede52f8ab36793a06764ac2, "");
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