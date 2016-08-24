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
    class ::clang::NamespaceDecl  * (*method_pointer_23fb79a427ea596391a90909a53579a6)(class ::clang::ASTContext  &, unsigned int ) = ::clang::NamespaceDecl::CreateDeserialized;
    class ::clang::NamespaceDecl  * (*method_pointer_3e00fd67d2ab55248f432454d6e97bdd)(class ::clang::DeclContext  const *) = ::clang::NamespaceDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_258cd1422f785bda9ac2b5e440600f80)(class ::clang::NamespaceDecl  const *) = ::clang::NamespaceDecl::castToDeclContext;
    bool  (*method_pointer_cc46ff4d1df052adae7d4e2cec76bb6b)(class ::clang::Decl  const *) = ::clang::NamespaceDecl::classof;
    bool  (*method_pointer_959d2ff5160d5520917996a8fc6b56bf)(enum ::clang::Decl::Kind ) = ::clang::NamespaceDecl::classofKind;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_fa40565780535f18aac76e05f8a2092e)() const = &::clang::NamespaceDecl::getAnonymousNamespace;
    class ::clang::NamespaceDecl  const * (::clang::NamespaceDecl::*method_pointer_9ba3bd2950d254d593314cf9df525605)() const = &::clang::NamespaceDecl::getCanonicalDecl;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_25376ab6e7605dc6aeab509129425c99)() = &::clang::NamespaceDecl::getCanonicalDecl;
    class ::clang::SourceLocation  (::clang::NamespaceDecl::*method_pointer_c6ea5c13fe7e5ac6a350f13cb0b39bc7)() const = &::clang::NamespaceDecl::getLocStart;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_645594470bbc5145bf86090ef0ac23f7)() = &::clang::NamespaceDecl::getOriginalNamespace;
    class ::clang::NamespaceDecl  const * (::clang::NamespaceDecl::*method_pointer_11cdc4c0b91c50e2860cff296610dd76)() const = &::clang::NamespaceDecl::getOriginalNamespace;
    class ::clang::SourceLocation  (::clang::NamespaceDecl::*method_pointer_2e782c672ad55653aca384ff2d1f82d1)() const = &::clang::NamespaceDecl::getRBraceLoc;
    bool  (::clang::NamespaceDecl::*method_pointer_fbb33e38389a5b048c36d5b6ddf4fa6e)() const = &::clang::NamespaceDecl::isAnonymousNamespace;
    bool  (::clang::NamespaceDecl::*method_pointer_c92f4c2d3fa154c494b8c8ad6df5e8c2)() const = &::clang::NamespaceDecl::isInline;
    bool  (::clang::NamespaceDecl::*method_pointer_9910ae03d0775917840872767defbe69)() const = &::clang::NamespaceDecl::isOriginalNamespace;
    void  (::clang::NamespaceDecl::*method_pointer_b4a5ea3bdac3586f95c8eec5af0c0db0)(class ::clang::NamespaceDecl  *) = &::clang::NamespaceDecl::setAnonymousNamespace;
    void  (::clang::NamespaceDecl::*method_pointer_01b9ab8de9d653c29ac8afe0b7bc59cf)(bool ) = &::clang::NamespaceDecl::setInline;
    void  (::clang::NamespaceDecl::*method_pointer_e7e789196e88554287884e51ae2b0c02)(class ::clang::SourceLocation ) = &::clang::NamespaceDecl::setLocStart;
    void  (::clang::NamespaceDecl::*method_pointer_4178a7d80d89540e84cd8856c88983f3)(class ::clang::SourceLocation ) = &::clang::NamespaceDecl::setRBraceLoc;
    boost::python::class_< class ::clang::NamespaceDecl, autowig::HeldType< class ::clang::NamespaceDecl >, boost::python::bases< class ::clang::NamedDecl, class ::clang::DeclContext >, boost::noncopyable > class_9a20f9773af45c788737982cd20471fd("NamespaceDecl", "", boost::python::no_init);
    class_9a20f9773af45c788737982cd20471fd.def("create_deserialized", method_pointer_23fb79a427ea596391a90909a53579a6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("cast_from_decl_context", method_pointer_3e00fd67d2ab55248f432454d6e97bdd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("cast_to_decl_context", method_pointer_258cd1422f785bda9ac2b5e440600f80, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("classof", method_pointer_cc46ff4d1df052adae7d4e2cec76bb6b, "");
    class_9a20f9773af45c788737982cd20471fd.def("classof_kind", method_pointer_959d2ff5160d5520917996a8fc6b56bf, "");
    class_9a20f9773af45c788737982cd20471fd.def("get_anonymous_namespace", method_pointer_fa40565780535f18aac76e05f8a2092e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_canonical_decl", method_pointer_9ba3bd2950d254d593314cf9df525605, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_canonical_decl", method_pointer_25376ab6e7605dc6aeab509129425c99, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_loc_start", method_pointer_c6ea5c13fe7e5ac6a350f13cb0b39bc7, "");
    class_9a20f9773af45c788737982cd20471fd.def("get_original_namespace", method_pointer_645594470bbc5145bf86090ef0ac23f7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_original_namespace", method_pointer_11cdc4c0b91c50e2860cff296610dd76, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_r_brace_loc", method_pointer_2e782c672ad55653aca384ff2d1f82d1, "");
    class_9a20f9773af45c788737982cd20471fd.def("is_anonymous_namespace", method_pointer_fbb33e38389a5b048c36d5b6ddf4fa6e, "");
    class_9a20f9773af45c788737982cd20471fd.def("is_inline", method_pointer_c92f4c2d3fa154c494b8c8ad6df5e8c2, "");
    class_9a20f9773af45c788737982cd20471fd.def("is_original_namespace", method_pointer_9910ae03d0775917840872767defbe69, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_anonymous_namespace", method_pointer_b4a5ea3bdac3586f95c8eec5af0c0db0, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_inline", method_pointer_01b9ab8de9d653c29ac8afe0b7bc59cf, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_loc_start", method_pointer_e7e789196e88554287884e51ae2b0c02, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_r_brace_loc", method_pointer_4178a7d80d89540e84cd8856c88983f3, "");
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