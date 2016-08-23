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
    class ::clang::NamespaceDecl  * (*method_pointer_92f148e6cad5599eb11cb2f2e09afaf1)(class ::clang::ASTContext  &, unsigned int ) = ::clang::NamespaceDecl::CreateDeserialized;
    class ::clang::NamespaceDecl  * (*method_pointer_c8a3bd53f1ad584ba2e445a11e45f895)(class ::clang::DeclContext  const *) = ::clang::NamespaceDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_fbce9a6528655f1e8ab525083b3e39c8)(class ::clang::NamespaceDecl  const *) = ::clang::NamespaceDecl::castToDeclContext;
    bool  (*method_pointer_31c8b34e9c365b62957e7d45a3b18ec3)(class ::clang::Decl  const *) = ::clang::NamespaceDecl::classof;
    bool  (*method_pointer_a894dec4cf47584ca4a30542df75a15a)(enum ::clang::Decl::Kind ) = ::clang::NamespaceDecl::classofKind;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_ce94fc20625656789dc23873e84e7e48)() const = &::clang::NamespaceDecl::getAnonymousNamespace;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_8e1043cd2dca5efb970ce7fc3e823dd0)() = &::clang::NamespaceDecl::getCanonicalDecl;
    class ::clang::NamespaceDecl  const * (::clang::NamespaceDecl::*method_pointer_390f8bd14c985109af54079a5c0ae350)() const = &::clang::NamespaceDecl::getCanonicalDecl;
    class ::clang::SourceLocation  (::clang::NamespaceDecl::*method_pointer_ef37f9554fb2568482bab4bdd1e533bd)() const = &::clang::NamespaceDecl::getLocStart;
    class ::clang::NamespaceDecl  const * (::clang::NamespaceDecl::*method_pointer_1f29b89dc3c959d4a53ed45e29ffb231)() const = &::clang::NamespaceDecl::getOriginalNamespace;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_12d53392223f5f67be83c729c340de02)() = &::clang::NamespaceDecl::getOriginalNamespace;
    class ::clang::SourceLocation  (::clang::NamespaceDecl::*method_pointer_b8b466c32e0b54ae8607d16a339932d0)() const = &::clang::NamespaceDecl::getRBraceLoc;
    bool  (::clang::NamespaceDecl::*method_pointer_09fb8b97afd756f1a361540ef02d3001)() const = &::clang::NamespaceDecl::isAnonymousNamespace;
    bool  (::clang::NamespaceDecl::*method_pointer_ce87ab98846759089bce9c51b439af57)() const = &::clang::NamespaceDecl::isInline;
    bool  (::clang::NamespaceDecl::*method_pointer_4ef9ad7d608a5278b5f90a471c7d9de1)() const = &::clang::NamespaceDecl::isOriginalNamespace;
    void  (::clang::NamespaceDecl::*method_pointer_a66bfe5177c656c1b0a9de71dfb3f024)(class ::clang::NamespaceDecl  *) = &::clang::NamespaceDecl::setAnonymousNamespace;
    void  (::clang::NamespaceDecl::*method_pointer_c646302a0ec954ffa00fcef1d26bcc85)(bool ) = &::clang::NamespaceDecl::setInline;
    void  (::clang::NamespaceDecl::*method_pointer_44d92498cc79583fa620de1216f4743a)(class ::clang::SourceLocation ) = &::clang::NamespaceDecl::setLocStart;
    void  (::clang::NamespaceDecl::*method_pointer_a81debeb274d5d359103b77892500929)(class ::clang::SourceLocation ) = &::clang::NamespaceDecl::setRBraceLoc;
    boost::python::class_< class ::clang::NamespaceDecl, autowig::HeldType< class ::clang::NamespaceDecl >, boost::python::bases< class ::clang::NamedDecl, class ::clang::DeclContext >, boost::noncopyable > class_9a20f9773af45c788737982cd20471fd("NamespaceDecl", "", boost::python::no_init);
    class_9a20f9773af45c788737982cd20471fd.def("create_deserialized", method_pointer_92f148e6cad5599eb11cb2f2e09afaf1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("cast_from_decl_context", method_pointer_c8a3bd53f1ad584ba2e445a11e45f895, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("cast_to_decl_context", method_pointer_fbce9a6528655f1e8ab525083b3e39c8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("classof", method_pointer_31c8b34e9c365b62957e7d45a3b18ec3, "");
    class_9a20f9773af45c788737982cd20471fd.def("classof_kind", method_pointer_a894dec4cf47584ca4a30542df75a15a, "");
    class_9a20f9773af45c788737982cd20471fd.def("get_anonymous_namespace", method_pointer_ce94fc20625656789dc23873e84e7e48, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_canonical_decl", method_pointer_8e1043cd2dca5efb970ce7fc3e823dd0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_canonical_decl", method_pointer_390f8bd14c985109af54079a5c0ae350, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_loc_start", method_pointer_ef37f9554fb2568482bab4bdd1e533bd, "");
    class_9a20f9773af45c788737982cd20471fd.def("get_original_namespace", method_pointer_1f29b89dc3c959d4a53ed45e29ffb231, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_original_namespace", method_pointer_12d53392223f5f67be83c729c340de02, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_r_brace_loc", method_pointer_b8b466c32e0b54ae8607d16a339932d0, "");
    class_9a20f9773af45c788737982cd20471fd.def("is_anonymous_namespace", method_pointer_09fb8b97afd756f1a361540ef02d3001, "");
    class_9a20f9773af45c788737982cd20471fd.def("is_inline", method_pointer_ce87ab98846759089bce9c51b439af57, "");
    class_9a20f9773af45c788737982cd20471fd.def("is_original_namespace", method_pointer_4ef9ad7d608a5278b5f90a471c7d9de1, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_anonymous_namespace", method_pointer_a66bfe5177c656c1b0a9de71dfb3f024, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_inline", method_pointer_c646302a0ec954ffa00fcef1d26bcc85, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_loc_start", method_pointer_44d92498cc79583fa620de1216f4743a, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_r_brace_loc", method_pointer_a81debeb274d5d359103b77892500929, "");
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