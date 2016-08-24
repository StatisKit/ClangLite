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
    class ::clang::NamespaceDecl  * (*method_pointer_763ef88da2b9504ca5cd0300b519f5d7)(class ::clang::ASTContext  &, unsigned int ) = ::clang::NamespaceDecl::CreateDeserialized;
    class ::clang::NamespaceDecl  * (*method_pointer_ffba1d551b48521ebcc6a9b1e4654b79)(class ::clang::DeclContext  const *) = ::clang::NamespaceDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_4d94ea4a3d5751fea4eff36984e3e74a)(class ::clang::NamespaceDecl  const *) = ::clang::NamespaceDecl::castToDeclContext;
    bool  (*method_pointer_0a9adc28752656f7977ef8457ee679e3)(class ::clang::Decl  const *) = ::clang::NamespaceDecl::classof;
    bool  (*method_pointer_54d068bb43fc58829f52552062592114)(enum ::clang::Decl::Kind ) = ::clang::NamespaceDecl::classofKind;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_cb5fc84704e25fe9b9e3224ca293f143)() const = &::clang::NamespaceDecl::getAnonymousNamespace;
    class ::clang::NamespaceDecl  const * (::clang::NamespaceDecl::*method_pointer_eb04bcdd8c765d96b22dc317e7fc7509)() const = &::clang::NamespaceDecl::getCanonicalDecl;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_c08f70a60e0f53bd85ad5d1a0d827573)() = &::clang::NamespaceDecl::getCanonicalDecl;
    class ::clang::SourceLocation  (::clang::NamespaceDecl::*method_pointer_64ef7403d74a5d25be3850330cea8986)() const = &::clang::NamespaceDecl::getLocStart;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_910217e200bf5f28a875b046a4edb2b8)() = &::clang::NamespaceDecl::getOriginalNamespace;
    class ::clang::NamespaceDecl  const * (::clang::NamespaceDecl::*method_pointer_54436267cc8a51c2be9695bc670cad87)() const = &::clang::NamespaceDecl::getOriginalNamespace;
    class ::clang::SourceLocation  (::clang::NamespaceDecl::*method_pointer_c7a6e0a55048571cb8ad2818d4e4e9ae)() const = &::clang::NamespaceDecl::getRBraceLoc;
    bool  (::clang::NamespaceDecl::*method_pointer_ef817cc8e3355936a7d2d8aabc26cd89)() const = &::clang::NamespaceDecl::isAnonymousNamespace;
    bool  (::clang::NamespaceDecl::*method_pointer_277b0b98a45d5c2681a3db341441f93f)() const = &::clang::NamespaceDecl::isInline;
    bool  (::clang::NamespaceDecl::*method_pointer_76a6272931e051bdbc1d5217cb13a5d8)() const = &::clang::NamespaceDecl::isOriginalNamespace;
    void  (::clang::NamespaceDecl::*method_pointer_9ae2ce2d1aeb53d88efcb5b972bf982d)(class ::clang::NamespaceDecl  *) = &::clang::NamespaceDecl::setAnonymousNamespace;
    void  (::clang::NamespaceDecl::*method_pointer_4d0bd4948e245e2cb15428d1c5fc93ed)(bool ) = &::clang::NamespaceDecl::setInline;
    void  (::clang::NamespaceDecl::*method_pointer_a1255654310d5e6ba77b6eb626fdb8ad)(class ::clang::SourceLocation ) = &::clang::NamespaceDecl::setLocStart;
    void  (::clang::NamespaceDecl::*method_pointer_3c405b5ed4f953a4a0061c3fc313f506)(class ::clang::SourceLocation ) = &::clang::NamespaceDecl::setRBraceLoc;
    boost::python::class_< class ::clang::NamespaceDecl, autowig::HeldType< class ::clang::NamespaceDecl >, boost::python::bases< class ::clang::NamedDecl, class ::clang::DeclContext >, boost::noncopyable > class_9a20f9773af45c788737982cd20471fd("NamespaceDecl", "", boost::python::no_init);
    class_9a20f9773af45c788737982cd20471fd.def("create_deserialized", method_pointer_763ef88da2b9504ca5cd0300b519f5d7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("cast_from_decl_context", method_pointer_ffba1d551b48521ebcc6a9b1e4654b79, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("cast_to_decl_context", method_pointer_4d94ea4a3d5751fea4eff36984e3e74a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("classof", method_pointer_0a9adc28752656f7977ef8457ee679e3, "");
    class_9a20f9773af45c788737982cd20471fd.def("classof_kind", method_pointer_54d068bb43fc58829f52552062592114, "");
    class_9a20f9773af45c788737982cd20471fd.def("get_anonymous_namespace", method_pointer_cb5fc84704e25fe9b9e3224ca293f143, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_canonical_decl", method_pointer_eb04bcdd8c765d96b22dc317e7fc7509, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_canonical_decl", method_pointer_c08f70a60e0f53bd85ad5d1a0d827573, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_loc_start", method_pointer_64ef7403d74a5d25be3850330cea8986, "");
    class_9a20f9773af45c788737982cd20471fd.def("get_original_namespace", method_pointer_910217e200bf5f28a875b046a4edb2b8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_original_namespace", method_pointer_54436267cc8a51c2be9695bc670cad87, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_r_brace_loc", method_pointer_c7a6e0a55048571cb8ad2818d4e4e9ae, "");
    class_9a20f9773af45c788737982cd20471fd.def("is_anonymous_namespace", method_pointer_ef817cc8e3355936a7d2d8aabc26cd89, "");
    class_9a20f9773af45c788737982cd20471fd.def("is_inline", method_pointer_277b0b98a45d5c2681a3db341441f93f, "");
    class_9a20f9773af45c788737982cd20471fd.def("is_original_namespace", method_pointer_76a6272931e051bdbc1d5217cb13a5d8, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_anonymous_namespace", method_pointer_9ae2ce2d1aeb53d88efcb5b972bf982d, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_inline", method_pointer_4d0bd4948e245e2cb15428d1c5fc93ed, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_loc_start", method_pointer_a1255654310d5e6ba77b6eb626fdb8ad, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_r_brace_loc", method_pointer_3c405b5ed4f953a4a0061c3fc313f506, "");
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