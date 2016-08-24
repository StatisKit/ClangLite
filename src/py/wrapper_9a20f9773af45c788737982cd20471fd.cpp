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
    class ::clang::NamespaceDecl  * (*method_pointer_7be01e48e6dc544590f450d819e00e6c)(class ::clang::ASTContext  &, unsigned int ) = ::clang::NamespaceDecl::CreateDeserialized;
    class ::clang::NamespaceDecl  * (*method_pointer_752eb1403897579391e419fc1fb9315e)(class ::clang::DeclContext  const *) = ::clang::NamespaceDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_762ce6689a4d57648211e81cc273a13d)(class ::clang::NamespaceDecl  const *) = ::clang::NamespaceDecl::castToDeclContext;
    bool  (*method_pointer_dd9f0ccb158e5e51963efd78fc0ebe0d)(class ::clang::Decl  const *) = ::clang::NamespaceDecl::classof;
    bool  (*method_pointer_ec4a071456895e3982fe0540cf39952f)(enum ::clang::Decl::Kind ) = ::clang::NamespaceDecl::classofKind;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_120675515be65c60be975223fd134d7c)() const = &::clang::NamespaceDecl::getAnonymousNamespace;
    class ::clang::NamespaceDecl  const * (::clang::NamespaceDecl::*method_pointer_1d4302eccf9057a88cf1b3d5bd215493)() const = &::clang::NamespaceDecl::getCanonicalDecl;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_8f669098502a5a998b0534d7d9dbed15)() = &::clang::NamespaceDecl::getCanonicalDecl;
    class ::clang::SourceLocation  (::clang::NamespaceDecl::*method_pointer_70f099a8022850c78981e28d3060d94e)() const = &::clang::NamespaceDecl::getLocStart;
    class ::clang::NamespaceDecl  const * (::clang::NamespaceDecl::*method_pointer_3d61407b10ca533bbd3a0b3184d1e139)() const = &::clang::NamespaceDecl::getOriginalNamespace;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_5693b9c7fac0501bac235f7f3f953fa9)() = &::clang::NamespaceDecl::getOriginalNamespace;
    class ::clang::SourceLocation  (::clang::NamespaceDecl::*method_pointer_706f85d13c4c580c9acb484f0eafab49)() const = &::clang::NamespaceDecl::getRBraceLoc;
    bool  (::clang::NamespaceDecl::*method_pointer_2af81dc910fb5cd3a57d581b733a7ea3)() const = &::clang::NamespaceDecl::isAnonymousNamespace;
    bool  (::clang::NamespaceDecl::*method_pointer_b5f3c05deea25b9cad9362baea74e835)() const = &::clang::NamespaceDecl::isInline;
    bool  (::clang::NamespaceDecl::*method_pointer_e4b8436e903d5c7d9fc1e079c1cdf6dc)() const = &::clang::NamespaceDecl::isOriginalNamespace;
    void  (::clang::NamespaceDecl::*method_pointer_036b384cf32f527d92479bc6ad92d575)(class ::clang::NamespaceDecl  *) = &::clang::NamespaceDecl::setAnonymousNamespace;
    void  (::clang::NamespaceDecl::*method_pointer_db9d757ee6075faebe0ab00cbb204f7a)(bool ) = &::clang::NamespaceDecl::setInline;
    void  (::clang::NamespaceDecl::*method_pointer_a86192fa2d245fc49977a847d56eedf6)(class ::clang::SourceLocation ) = &::clang::NamespaceDecl::setLocStart;
    void  (::clang::NamespaceDecl::*method_pointer_7f21c1d2090550a98f29aec176171bf7)(class ::clang::SourceLocation ) = &::clang::NamespaceDecl::setRBraceLoc;
    boost::python::class_< class ::clang::NamespaceDecl, autowig::HeldType< class ::clang::NamespaceDecl >, boost::python::bases< class ::clang::NamedDecl, class ::clang::DeclContext >, boost::noncopyable > class_9a20f9773af45c788737982cd20471fd("NamespaceDecl", "", boost::python::no_init);
    class_9a20f9773af45c788737982cd20471fd.def("create_deserialized", method_pointer_7be01e48e6dc544590f450d819e00e6c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("cast_from_decl_context", method_pointer_752eb1403897579391e419fc1fb9315e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("cast_to_decl_context", method_pointer_762ce6689a4d57648211e81cc273a13d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("classof", method_pointer_dd9f0ccb158e5e51963efd78fc0ebe0d, "");
    class_9a20f9773af45c788737982cd20471fd.def("classof_kind", method_pointer_ec4a071456895e3982fe0540cf39952f, "");
    class_9a20f9773af45c788737982cd20471fd.def("get_anonymous_namespace", method_pointer_120675515be65c60be975223fd134d7c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_canonical_decl", method_pointer_1d4302eccf9057a88cf1b3d5bd215493, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_canonical_decl", method_pointer_8f669098502a5a998b0534d7d9dbed15, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_loc_start", method_pointer_70f099a8022850c78981e28d3060d94e, "");
    class_9a20f9773af45c788737982cd20471fd.def("get_original_namespace", method_pointer_3d61407b10ca533bbd3a0b3184d1e139, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_original_namespace", method_pointer_5693b9c7fac0501bac235f7f3f953fa9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_r_brace_loc", method_pointer_706f85d13c4c580c9acb484f0eafab49, "");
    class_9a20f9773af45c788737982cd20471fd.def("is_anonymous_namespace", method_pointer_2af81dc910fb5cd3a57d581b733a7ea3, "");
    class_9a20f9773af45c788737982cd20471fd.def("is_inline", method_pointer_b5f3c05deea25b9cad9362baea74e835, "");
    class_9a20f9773af45c788737982cd20471fd.def("is_original_namespace", method_pointer_e4b8436e903d5c7d9fc1e079c1cdf6dc, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_anonymous_namespace", method_pointer_036b384cf32f527d92479bc6ad92d575, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_inline", method_pointer_db9d757ee6075faebe0ab00cbb204f7a, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_loc_start", method_pointer_a86192fa2d245fc49977a847d56eedf6, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_r_brace_loc", method_pointer_7f21c1d2090550a98f29aec176171bf7, "");
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