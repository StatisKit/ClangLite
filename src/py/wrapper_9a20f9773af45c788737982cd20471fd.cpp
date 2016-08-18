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
    class ::clang::NamespaceDecl  * (*method_pointer_a8c837da47885cf9ace193843aa0545b)(class ::clang::ASTContext  &, unsigned int ) = ::clang::NamespaceDecl::CreateDeserialized;
    class ::clang::NamespaceDecl  * (*method_pointer_3248087057f35616b0f8e88ea55e754e)(class ::clang::DeclContext  const *) = ::clang::NamespaceDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_2d725fcd3ee958828a31025747e64da3)(class ::clang::NamespaceDecl  const *) = ::clang::NamespaceDecl::castToDeclContext;
    bool  (*method_pointer_d712611a42ad5760bf2a5b2f06bf4c48)(class ::clang::Decl  const *) = ::clang::NamespaceDecl::classof;
    bool  (*method_pointer_a2d22c4290bd565ba4bbd2eff476f09e)(enum ::clang::Decl::Kind ) = ::clang::NamespaceDecl::classofKind;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_f6b4fbb4d3c95534ba2dbb1f4dc3b8f6)() const = &::clang::NamespaceDecl::getAnonymousNamespace;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_669aa69d156d5fe9b03886352aa35763)() = &::clang::NamespaceDecl::getCanonicalDecl;
    class ::clang::NamespaceDecl  const * (::clang::NamespaceDecl::*method_pointer_959fd675fc615c1d92451f156f65925b)() const = &::clang::NamespaceDecl::getCanonicalDecl;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_1076c100f7b15f368b0590d78a7d0a52)() = &::clang::NamespaceDecl::getOriginalNamespace;
    class ::clang::NamespaceDecl  const * (::clang::NamespaceDecl::*method_pointer_9adc21b97fb2576aa205a661ef142643)() const = &::clang::NamespaceDecl::getOriginalNamespace;
    bool  (::clang::NamespaceDecl::*method_pointer_86265549c7a55da79b65133f5cfde4ba)() const = &::clang::NamespaceDecl::isAnonymousNamespace;
    bool  (::clang::NamespaceDecl::*method_pointer_b826de8e5f715aa3951f2d59c5abf792)() const = &::clang::NamespaceDecl::isInline;
    bool  (::clang::NamespaceDecl::*method_pointer_2abb9868403756e28c7e87bc29fd9764)() const = &::clang::NamespaceDecl::isOriginalNamespace;
    void  (::clang::NamespaceDecl::*method_pointer_506b58bbb5315577955b5e232f5a33fa)(class ::clang::NamespaceDecl  *) = &::clang::NamespaceDecl::setAnonymousNamespace;
    void  (::clang::NamespaceDecl::*method_pointer_65916ec19354539b86678947e6d1bedd)(bool ) = &::clang::NamespaceDecl::setInline;
    boost::python::class_< class ::clang::NamespaceDecl, autowig::HeldType< class ::clang::NamespaceDecl >, boost::python::bases< class ::clang::NamedDecl, class ::clang::DeclContext >, boost::noncopyable > class_9a20f9773af45c788737982cd20471fd("NamespaceDecl", "", boost::python::no_init);
    class_9a20f9773af45c788737982cd20471fd.def("create_deserialized", method_pointer_a8c837da47885cf9ace193843aa0545b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("cast_from_decl_context", method_pointer_3248087057f35616b0f8e88ea55e754e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("cast_to_decl_context", method_pointer_2d725fcd3ee958828a31025747e64da3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("classof", method_pointer_d712611a42ad5760bf2a5b2f06bf4c48, "");
    class_9a20f9773af45c788737982cd20471fd.def("classof_kind", method_pointer_a2d22c4290bd565ba4bbd2eff476f09e, "");
    class_9a20f9773af45c788737982cd20471fd.def("get_anonymous_namespace", method_pointer_f6b4fbb4d3c95534ba2dbb1f4dc3b8f6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_canonical_decl", method_pointer_669aa69d156d5fe9b03886352aa35763, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_canonical_decl", method_pointer_959fd675fc615c1d92451f156f65925b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_original_namespace", method_pointer_1076c100f7b15f368b0590d78a7d0a52, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_original_namespace", method_pointer_9adc21b97fb2576aa205a661ef142643, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("is_anonymous_namespace", method_pointer_86265549c7a55da79b65133f5cfde4ba, "");
    class_9a20f9773af45c788737982cd20471fd.def("is_inline", method_pointer_b826de8e5f715aa3951f2d59c5abf792, "");
    class_9a20f9773af45c788737982cd20471fd.def("is_original_namespace", method_pointer_2abb9868403756e28c7e87bc29fd9764, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_anonymous_namespace", method_pointer_506b58bbb5315577955b5e232f5a33fa, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_inline", method_pointer_65916ec19354539b86678947e6d1bedd, "");
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