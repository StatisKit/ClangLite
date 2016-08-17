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
    void  (::clang::NamespaceDecl::*method_pointer_6a9e5e33e11956ed90019181a5cd56a4)(class ::clang::NamespaceDecl  *) = &::clang::NamespaceDecl::setAnonymousNamespace;
    bool  (::clang::NamespaceDecl::*method_pointer_48dc611c8f665fada2c5453991ccbcba)() const = &::clang::NamespaceDecl::isAnonymousNamespace;
    class ::clang::NamespaceDecl  * (*method_pointer_5694ad532aac5c02ba8ca851c5f853b5)(class ::clang::DeclContext  const *) = ::clang::NamespaceDecl::castFromDeclContext;
    bool  (::clang::NamespaceDecl::*method_pointer_b9a3038f739c59fb89bfdfa7c7b80aca)() const = &::clang::NamespaceDecl::isOriginalNamespace;
    class ::clang::NamespaceDecl  const * (::clang::NamespaceDecl::*method_pointer_5f3cc8c3dfcc56afbdadf96169fbcff8)() const = &::clang::NamespaceDecl::getOriginalNamespace;
    class ::clang::NamespaceDecl  * (*method_pointer_195b9e8518325aafb86aacab9f6c9601)(class ::clang::ASTContext  &, unsigned int ) = ::clang::NamespaceDecl::CreateDeserialized;
    bool  (::clang::NamespaceDecl::*method_pointer_2040a9f035ae5560b903aef6949ad6d6)() const = &::clang::NamespaceDecl::isInline;
    bool  (*method_pointer_47c84e7035975859a5503b1f9be09973)(enum ::clang::Decl::Kind ) = ::clang::NamespaceDecl::classofKind;
    void  (::clang::NamespaceDecl::*method_pointer_aa68c9f4fd3f52c8878e810aee2d5347)(bool ) = &::clang::NamespaceDecl::setInline;
    bool  (*method_pointer_dd99e43a27875ceda500c027301d7e1c)(class ::clang::Decl  const *) = ::clang::NamespaceDecl::classof;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_3958cb2ebb7f5f75b439c8dd846a8185)() = &::clang::NamespaceDecl::getOriginalNamespace;
    class ::clang::NamespaceDecl  const * (::clang::NamespaceDecl::*method_pointer_c7d835a90cab5a4d84a8324b84408777)() const = &::clang::NamespaceDecl::getCanonicalDecl;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_4aea7589ec6f5064ba0739cb9f058dbb)() const = &::clang::NamespaceDecl::getAnonymousNamespace;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_7f33ae0447dc5841aa3ea24b8da56a8b)() = &::clang::NamespaceDecl::getCanonicalDecl;
    class ::clang::DeclContext  * (*method_pointer_4df73fa2cd2450d0a2d940dc91c4ab55)(class ::clang::NamespaceDecl  const *) = ::clang::NamespaceDecl::castToDeclContext;
    boost::python::class_< class ::clang::NamespaceDecl, autowig::HeldType< class ::clang::NamespaceDecl >, boost::python::bases< class ::clang::NamedDecl, class ::clang::DeclContext >, boost::noncopyable > class_9a20f9773af45c788737982cd20471fd("NamespaceDecl", "", boost::python::no_init);
    class_9a20f9773af45c788737982cd20471fd.def("set_anonymous_namespace", method_pointer_6a9e5e33e11956ed90019181a5cd56a4, "");
    class_9a20f9773af45c788737982cd20471fd.def("is_anonymous_namespace", method_pointer_48dc611c8f665fada2c5453991ccbcba, "");
    class_9a20f9773af45c788737982cd20471fd.def("cast_from_decl_context", method_pointer_5694ad532aac5c02ba8ca851c5f853b5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("is_original_namespace", method_pointer_b9a3038f739c59fb89bfdfa7c7b80aca, "");
    class_9a20f9773af45c788737982cd20471fd.def("get_original_namespace", method_pointer_5f3cc8c3dfcc56afbdadf96169fbcff8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("create_deserialized", method_pointer_195b9e8518325aafb86aacab9f6c9601, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("is_inline", method_pointer_2040a9f035ae5560b903aef6949ad6d6, "");
    class_9a20f9773af45c788737982cd20471fd.def("classof_kind", method_pointer_47c84e7035975859a5503b1f9be09973, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_inline", method_pointer_aa68c9f4fd3f52c8878e810aee2d5347, "");
    class_9a20f9773af45c788737982cd20471fd.def("classof", method_pointer_dd99e43a27875ceda500c027301d7e1c, "");
    class_9a20f9773af45c788737982cd20471fd.def("get_original_namespace", method_pointer_3958cb2ebb7f5f75b439c8dd846a8185, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_canonical_decl", method_pointer_c7d835a90cab5a4d84a8324b84408777, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_anonymous_namespace", method_pointer_4aea7589ec6f5064ba0739cb9f058dbb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_canonical_decl", method_pointer_7f33ae0447dc5841aa3ea24b8da56a8b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("cast_to_decl_context", method_pointer_4df73fa2cd2450d0a2d940dc91c4ab55, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
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