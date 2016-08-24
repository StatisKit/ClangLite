#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_b968379b40f8521d806301d873d53080()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TranslationUnitDecl  * (*method_pointer_824b416b119f58169ececf61d9f04399)(class ::clang::ASTContext  &) = ::clang::TranslationUnitDecl::Create;
    class ::clang::TranslationUnitDecl  * (*method_pointer_e7edbfbd3a345a1399f58f83951e9f90)(class ::clang::DeclContext  const *) = ::clang::TranslationUnitDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_5de92022ed025440b4b4583e136d2210)(class ::clang::TranslationUnitDecl  const *) = ::clang::TranslationUnitDecl::castToDeclContext;
    bool  (*method_pointer_f02b9af8b7a55b8cb0daae2603725339)(class ::clang::Decl  const *) = ::clang::TranslationUnitDecl::classof;
    bool  (*method_pointer_cab82efd605d5d30b3cfb6690246cbbb)(enum ::clang::Decl::Kind ) = ::clang::TranslationUnitDecl::classofKind;
    class ::clang::ASTContext  & (::clang::TranslationUnitDecl::*method_pointer_f03dbdba257757068dcf867e16fab515)() const = &::clang::TranslationUnitDecl::getASTContext;
    class ::clang::NamespaceDecl  * (::clang::TranslationUnitDecl::*method_pointer_3fab61ca0ed759ebb540e347eab8eab2)() const = &::clang::TranslationUnitDecl::getAnonymousNamespace;
    void  (::clang::TranslationUnitDecl::*method_pointer_ea86207a5d975e548174c8979d376313)(class ::clang::NamespaceDecl  *) = &::clang::TranslationUnitDecl::setAnonymousNamespace;
    boost::python::class_< class ::clang::TranslationUnitDecl, autowig::HeldType< class ::clang::TranslationUnitDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_b968379b40f8521d806301d873d53080("TranslationUnitDecl", "", boost::python::no_init);
    class_b968379b40f8521d806301d873d53080.def("create", method_pointer_824b416b119f58169ececf61d9f04399, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b968379b40f8521d806301d873d53080.def("cast_from_decl_context", method_pointer_e7edbfbd3a345a1399f58f83951e9f90, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b968379b40f8521d806301d873d53080.def("cast_to_decl_context", method_pointer_5de92022ed025440b4b4583e136d2210, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b968379b40f8521d806301d873d53080.def("classof", method_pointer_f02b9af8b7a55b8cb0daae2603725339, "");
    class_b968379b40f8521d806301d873d53080.def("classof_kind", method_pointer_cab82efd605d5d30b3cfb6690246cbbb, "");
    class_b968379b40f8521d806301d873d53080.def("get_ast_context", method_pointer_f03dbdba257757068dcf867e16fab515, boost::python::return_internal_reference<>(), "");
    class_b968379b40f8521d806301d873d53080.def("get_anonymous_namespace", method_pointer_3fab61ca0ed759ebb540e347eab8eab2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b968379b40f8521d806301d873d53080.def("set_anonymous_namespace", method_pointer_ea86207a5d975e548174c8979d376313, "");
    class_b968379b40f8521d806301d873d53080.staticmethod("classof_kind");
    class_b968379b40f8521d806301d873d53080.staticmethod("create");
    class_b968379b40f8521d806301d873d53080.staticmethod("classof");
    class_b968379b40f8521d806301d873d53080.staticmethod("cast_from_decl_context");
    class_b968379b40f8521d806301d873d53080.staticmethod("cast_to_decl_context");

    if(std::is_class< autowig::HeldType< class ::clang::TranslationUnitDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TranslationUnitDecl >, autowig::HeldType< class ::clang::Decl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TranslationUnitDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}