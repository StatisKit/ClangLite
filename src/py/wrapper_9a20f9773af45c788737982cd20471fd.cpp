#include "_clanglite.h"


namespace autowig
{
}


void wrapper_9a20f9773af45c788737982cd20471fd()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::NamespaceDecl  * (*method_pointer_58fde79159a65c988c6b5b17770a91f2)(class ::clang::ASTContext  &, unsigned int ) = ::clang::NamespaceDecl::CreateDeserialized;
    class ::clang::NamespaceDecl  * (*method_pointer_088c588401c15d47948315151934d620)(class ::clang::DeclContext  const *) = ::clang::NamespaceDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_5ffbeb4e9e9d583fba77125138c43a32)(class ::clang::NamespaceDecl  const *) = ::clang::NamespaceDecl::castToDeclContext;
    bool  (*method_pointer_ff9deab4cf4d58a791eb5d5a136b02bf)(class ::clang::Decl  const *) = ::clang::NamespaceDecl::classof;
    bool  (*method_pointer_0e8f911891045c0fb3ff5287f2469491)(enum ::clang::Decl::Kind ) = ::clang::NamespaceDecl::classofKind;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_dcfae3b7e8205df38d71f86d8d29c904)() const = &::clang::NamespaceDecl::getAnonymousNamespace;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_e03b1aaea89155f2948c7c9b4dd95889)() = &::clang::NamespaceDecl::getCanonicalDecl;
    class ::clang::NamespaceDecl  const * (::clang::NamespaceDecl::*method_pointer_05339e98bdee58b4ba317ca45241ed92)() const = &::clang::NamespaceDecl::getCanonicalDecl;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_4c78d2b13a175ee1828edf19bf886034)() = &::clang::NamespaceDecl::getOriginalNamespace;
    class ::clang::NamespaceDecl  const * (::clang::NamespaceDecl::*method_pointer_f7b143e4cef95547b254f0068c5fb027)() const = &::clang::NamespaceDecl::getOriginalNamespace;
    bool  (::clang::NamespaceDecl::*method_pointer_6fb2b909443958cbbd004969dd389dbd)() const = &::clang::NamespaceDecl::isAnonymousNamespace;
    bool  (::clang::NamespaceDecl::*method_pointer_9efe8f09b19759f9b71ffee7dad37e42)() const = &::clang::NamespaceDecl::isInline;
    bool  (::clang::NamespaceDecl::*method_pointer_f9423f7146575d55abe18eb5be9d3aa8)() const = &::clang::NamespaceDecl::isOriginalNamespace;
    void  (::clang::NamespaceDecl::*method_pointer_55f569ffdedd5f47912cb6333c741eb3)(class ::clang::NamespaceDecl  *) = &::clang::NamespaceDecl::setAnonymousNamespace;
    void  (::clang::NamespaceDecl::*method_pointer_b485d1c0c71e5af496c5de0e8f5a4e0e)(bool ) = &::clang::NamespaceDecl::setInline;
    boost::python::class_< class ::clang::NamespaceDecl, autowig::HeldType< class ::clang::NamespaceDecl >, boost::python::bases< class ::clang::NamedDecl, class ::clang::DeclContext >, boost::noncopyable > class_9a20f9773af45c788737982cd20471fd("NamespaceDecl", "", boost::python::no_init);
    class_9a20f9773af45c788737982cd20471fd.def("create_deserialized", method_pointer_58fde79159a65c988c6b5b17770a91f2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("cast_from_decl_context", method_pointer_088c588401c15d47948315151934d620, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("cast_to_decl_context", method_pointer_5ffbeb4e9e9d583fba77125138c43a32, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("classof", method_pointer_ff9deab4cf4d58a791eb5d5a136b02bf, "");
    class_9a20f9773af45c788737982cd20471fd.def("classof_kind", method_pointer_0e8f911891045c0fb3ff5287f2469491, "");
    class_9a20f9773af45c788737982cd20471fd.def("get_anonymous_namespace", method_pointer_dcfae3b7e8205df38d71f86d8d29c904, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_canonical_decl", method_pointer_e03b1aaea89155f2948c7c9b4dd95889, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_canonical_decl", method_pointer_05339e98bdee58b4ba317ca45241ed92, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_original_namespace", method_pointer_4c78d2b13a175ee1828edf19bf886034, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_original_namespace", method_pointer_f7b143e4cef95547b254f0068c5fb027, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("is_anonymous_namespace", method_pointer_6fb2b909443958cbbd004969dd389dbd, "");
    class_9a20f9773af45c788737982cd20471fd.def("is_inline", method_pointer_9efe8f09b19759f9b71ffee7dad37e42, "");
    class_9a20f9773af45c788737982cd20471fd.def("is_original_namespace", method_pointer_f9423f7146575d55abe18eb5be9d3aa8, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_anonymous_namespace", method_pointer_55f569ffdedd5f47912cb6333c741eb3, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_inline", method_pointer_b485d1c0c71e5af496c5de0e8f5a4e0e, "");
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