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
    class ::clang::NamespaceDecl  * (*method_pointer_d010bcbc83b952ffbb9f191e568b622e)(class ::clang::ASTContext  &, unsigned int ) = ::clang::NamespaceDecl::CreateDeserialized;
    class ::clang::NamespaceDecl  * (*method_pointer_5bc469b7e5a45d78b6303a9c4c62837b)(class ::clang::DeclContext  const *) = ::clang::NamespaceDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_1dc738e415c855c6afb8b8df7d5365a0)(class ::clang::NamespaceDecl  const *) = ::clang::NamespaceDecl::castToDeclContext;
    bool  (*method_pointer_f7907f6c05c158d39ba56cab83a48981)(class ::clang::Decl  const *) = ::clang::NamespaceDecl::classof;
    bool  (*method_pointer_7edcac79138e5cd9aa84b102350132fd)(enum ::clang::Decl::Kind ) = ::clang::NamespaceDecl::classofKind;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_e60256242a2953cc891c4e0277484e88)() const = &::clang::NamespaceDecl::getAnonymousNamespace;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_71887ad474a45dc99ccb148a6a767437)() = &::clang::NamespaceDecl::getCanonicalDecl;
    class ::clang::NamespaceDecl  const * (::clang::NamespaceDecl::*method_pointer_5231c94c64f8529584a820ba0b2f2b26)() const = &::clang::NamespaceDecl::getCanonicalDecl;
    class ::clang::SourceLocation  (::clang::NamespaceDecl::*method_pointer_22d5f18630d65566a7f3928236528378)() const = &::clang::NamespaceDecl::getLocStart;
    class ::clang::NamespaceDecl  const * (::clang::NamespaceDecl::*method_pointer_783ecd06d44c5ec4aae7026676cec6bb)() const = &::clang::NamespaceDecl::getOriginalNamespace;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_b70394c1eeaa5f61800d0ece78131c46)() = &::clang::NamespaceDecl::getOriginalNamespace;
    class ::clang::SourceLocation  (::clang::NamespaceDecl::*method_pointer_de911f3f0ac25e4a95b1cb267f7eca0b)() const = &::clang::NamespaceDecl::getRBraceLoc;
    bool  (::clang::NamespaceDecl::*method_pointer_5ae86941a31854639e274b11e539386a)() const = &::clang::NamespaceDecl::isAnonymousNamespace;
    bool  (::clang::NamespaceDecl::*method_pointer_8f4b23505b3d5b279a13bc511d468ff1)() const = &::clang::NamespaceDecl::isInline;
    bool  (::clang::NamespaceDecl::*method_pointer_622783e91feb55ada3f32c9609f04b39)() const = &::clang::NamespaceDecl::isOriginalNamespace;
    void  (::clang::NamespaceDecl::*method_pointer_a84b0b9d502256b5a1d82719e1647045)(class ::clang::NamespaceDecl  *) = &::clang::NamespaceDecl::setAnonymousNamespace;
    void  (::clang::NamespaceDecl::*method_pointer_9bb181b1924e54bab0293bc663e3e6a4)(bool ) = &::clang::NamespaceDecl::setInline;
    void  (::clang::NamespaceDecl::*method_pointer_c47f7c62ebee5088abe8c4b8b7c6e129)(class ::clang::SourceLocation ) = &::clang::NamespaceDecl::setLocStart;
    void  (::clang::NamespaceDecl::*method_pointer_b386ced013785c0498a02f0ca741ed04)(class ::clang::SourceLocation ) = &::clang::NamespaceDecl::setRBraceLoc;
    boost::python::class_< class ::clang::NamespaceDecl, autowig::HeldType< class ::clang::NamespaceDecl >, boost::python::bases< class ::clang::NamedDecl, class ::clang::DeclContext >, boost::noncopyable > class_9a20f9773af45c788737982cd20471fd("NamespaceDecl", "", boost::python::no_init);
    class_9a20f9773af45c788737982cd20471fd.def("create_deserialized", method_pointer_d010bcbc83b952ffbb9f191e568b622e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("cast_from_decl_context", method_pointer_5bc469b7e5a45d78b6303a9c4c62837b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("cast_to_decl_context", method_pointer_1dc738e415c855c6afb8b8df7d5365a0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("classof", method_pointer_f7907f6c05c158d39ba56cab83a48981, "");
    class_9a20f9773af45c788737982cd20471fd.def("classof_kind", method_pointer_7edcac79138e5cd9aa84b102350132fd, "");
    class_9a20f9773af45c788737982cd20471fd.def("get_anonymous_namespace", method_pointer_e60256242a2953cc891c4e0277484e88, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_canonical_decl", method_pointer_71887ad474a45dc99ccb148a6a767437, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_canonical_decl", method_pointer_5231c94c64f8529584a820ba0b2f2b26, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_loc_start", method_pointer_22d5f18630d65566a7f3928236528378, "");
    class_9a20f9773af45c788737982cd20471fd.def("get_original_namespace", method_pointer_783ecd06d44c5ec4aae7026676cec6bb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_original_namespace", method_pointer_b70394c1eeaa5f61800d0ece78131c46, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_r_brace_loc", method_pointer_de911f3f0ac25e4a95b1cb267f7eca0b, "");
    class_9a20f9773af45c788737982cd20471fd.def("is_anonymous_namespace", method_pointer_5ae86941a31854639e274b11e539386a, "");
    class_9a20f9773af45c788737982cd20471fd.def("is_inline", method_pointer_8f4b23505b3d5b279a13bc511d468ff1, "");
    class_9a20f9773af45c788737982cd20471fd.def("is_original_namespace", method_pointer_622783e91feb55ada3f32c9609f04b39, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_anonymous_namespace", method_pointer_a84b0b9d502256b5a1d82719e1647045, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_inline", method_pointer_9bb181b1924e54bab0293bc663e3e6a4, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_loc_start", method_pointer_c47f7c62ebee5088abe8c4b8b7c6e129, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_r_brace_loc", method_pointer_b386ced013785c0498a02f0ca741ed04, "");
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