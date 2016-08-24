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
    class ::clang::NamespaceDecl  * (*method_pointer_c153aedf138852caad46f9b6fd33a9cc)(class ::clang::ASTContext  &, unsigned int ) = ::clang::NamespaceDecl::CreateDeserialized;
    class ::clang::NamespaceDecl  * (*method_pointer_072afb94551e5852917ca08e8e7ead31)(class ::clang::DeclContext  const *) = ::clang::NamespaceDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_cee06c5b724552f8b03517a7d18dc8b4)(class ::clang::NamespaceDecl  const *) = ::clang::NamespaceDecl::castToDeclContext;
    bool  (*method_pointer_0fa3dec7446e5d85b7b0cb9c9bb4469c)(class ::clang::Decl  const *) = ::clang::NamespaceDecl::classof;
    bool  (*method_pointer_2b1dfe8de2985927823ce40e48f43422)(enum ::clang::Decl::Kind ) = ::clang::NamespaceDecl::classofKind;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_66a3db2ec8eb5f0f9a77a334466cacb2)() const = &::clang::NamespaceDecl::getAnonymousNamespace;
    class ::clang::NamespaceDecl  const * (::clang::NamespaceDecl::*method_pointer_9a386f29d24a5bd8b97ad86a452a361a)() const = &::clang::NamespaceDecl::getCanonicalDecl;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_5eec0ce97978521d9bc3ca4a81d1c648)() = &::clang::NamespaceDecl::getCanonicalDecl;
    class ::clang::SourceLocation  (::clang::NamespaceDecl::*method_pointer_840aed9a31175114b2e896af7ac04e43)() const = &::clang::NamespaceDecl::getLocStart;
    class ::clang::NamespaceDecl  const * (::clang::NamespaceDecl::*method_pointer_c98a2dd55225557994872e6398c06af2)() const = &::clang::NamespaceDecl::getOriginalNamespace;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_4666ae172301537a85524fbc08618055)() = &::clang::NamespaceDecl::getOriginalNamespace;
    class ::clang::SourceLocation  (::clang::NamespaceDecl::*method_pointer_7d1db7823ea65dd2bbd0e093fdd7a54a)() const = &::clang::NamespaceDecl::getRBraceLoc;
    bool  (::clang::NamespaceDecl::*method_pointer_3c2b4c514d4353c6860e7708efa88146)() const = &::clang::NamespaceDecl::isAnonymousNamespace;
    bool  (::clang::NamespaceDecl::*method_pointer_c560606d234e558d8b949b036941a43e)() const = &::clang::NamespaceDecl::isInline;
    bool  (::clang::NamespaceDecl::*method_pointer_55a71833408a594d9295c90b8dc05c34)() const = &::clang::NamespaceDecl::isOriginalNamespace;
    void  (::clang::NamespaceDecl::*method_pointer_cd9854d2b02856cf8a2bc9dbbd325f90)(class ::clang::NamespaceDecl  *) = &::clang::NamespaceDecl::setAnonymousNamespace;
    void  (::clang::NamespaceDecl::*method_pointer_45c74fb7b37252378a3d0a0117424d1e)(bool ) = &::clang::NamespaceDecl::setInline;
    void  (::clang::NamespaceDecl::*method_pointer_c350d487f57f5e65b658d42b57e85845)(class ::clang::SourceLocation ) = &::clang::NamespaceDecl::setLocStart;
    void  (::clang::NamespaceDecl::*method_pointer_01c4ad984947529cb44d6d5e22b9202d)(class ::clang::SourceLocation ) = &::clang::NamespaceDecl::setRBraceLoc;
    boost::python::class_< class ::clang::NamespaceDecl, autowig::HeldType< class ::clang::NamespaceDecl >, boost::python::bases< class ::clang::NamedDecl, class ::clang::DeclContext >, boost::noncopyable > class_9a20f9773af45c788737982cd20471fd("NamespaceDecl", "", boost::python::no_init);
    class_9a20f9773af45c788737982cd20471fd.def("create_deserialized", method_pointer_c153aedf138852caad46f9b6fd33a9cc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("cast_from_decl_context", method_pointer_072afb94551e5852917ca08e8e7ead31, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("cast_to_decl_context", method_pointer_cee06c5b724552f8b03517a7d18dc8b4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("classof", method_pointer_0fa3dec7446e5d85b7b0cb9c9bb4469c, "");
    class_9a20f9773af45c788737982cd20471fd.def("classof_kind", method_pointer_2b1dfe8de2985927823ce40e48f43422, "");
    class_9a20f9773af45c788737982cd20471fd.def("get_anonymous_namespace", method_pointer_66a3db2ec8eb5f0f9a77a334466cacb2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_canonical_decl", method_pointer_9a386f29d24a5bd8b97ad86a452a361a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_canonical_decl", method_pointer_5eec0ce97978521d9bc3ca4a81d1c648, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_loc_start", method_pointer_840aed9a31175114b2e896af7ac04e43, "");
    class_9a20f9773af45c788737982cd20471fd.def("get_original_namespace", method_pointer_c98a2dd55225557994872e6398c06af2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_original_namespace", method_pointer_4666ae172301537a85524fbc08618055, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_r_brace_loc", method_pointer_7d1db7823ea65dd2bbd0e093fdd7a54a, "");
    class_9a20f9773af45c788737982cd20471fd.def("is_anonymous_namespace", method_pointer_3c2b4c514d4353c6860e7708efa88146, "");
    class_9a20f9773af45c788737982cd20471fd.def("is_inline", method_pointer_c560606d234e558d8b949b036941a43e, "");
    class_9a20f9773af45c788737982cd20471fd.def("is_original_namespace", method_pointer_55a71833408a594d9295c90b8dc05c34, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_anonymous_namespace", method_pointer_cd9854d2b02856cf8a2bc9dbbd325f90, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_inline", method_pointer_45c74fb7b37252378a3d0a0117424d1e, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_loc_start", method_pointer_c350d487f57f5e65b658d42b57e85845, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_r_brace_loc", method_pointer_01c4ad984947529cb44d6d5e22b9202d, "");
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