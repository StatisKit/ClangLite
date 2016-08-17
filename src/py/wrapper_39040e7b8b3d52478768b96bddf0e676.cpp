#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_39040e7b8b3d52478768b96bddf0e676()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_b96c23722c2a5243b3cc5cd1da3b3273)(enum ::clang::Decl::Kind ) = ::clang::ObjCCompatibleAliasDecl::classofKind;
    bool  (*method_pointer_0d4e1683179958cea8e82fea3cd0c3a0)(class ::clang::Decl  const *) = ::clang::ObjCCompatibleAliasDecl::classof;
    void  (::clang::ObjCCompatibleAliasDecl::*method_pointer_817df043e3555f5293a8a3b37e6adca4)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCCompatibleAliasDecl::setClassInterface;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCCompatibleAliasDecl::*method_pointer_9a0392ba052059a8bf415d64cd6cb5ab)() const = &::clang::ObjCCompatibleAliasDecl::getClassInterface;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCCompatibleAliasDecl::*method_pointer_027299f1ccdc58be87b157c7763d4f08)() = &::clang::ObjCCompatibleAliasDecl::getClassInterface;
    class ::clang::ObjCCompatibleAliasDecl  * (*method_pointer_7837ab0974d757d8bdc26b61a882aee0)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCCompatibleAliasDecl::CreateDeserialized;
    boost::python::class_< class ::clang::ObjCCompatibleAliasDecl, autowig::HeldType< class ::clang::ObjCCompatibleAliasDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_39040e7b8b3d52478768b96bddf0e676("ObjCCompatibleAliasDecl", "", boost::python::no_init);
    class_39040e7b8b3d52478768b96bddf0e676.def("classof_kind", method_pointer_b96c23722c2a5243b3cc5cd1da3b3273, "");
    class_39040e7b8b3d52478768b96bddf0e676.def("classof", method_pointer_0d4e1683179958cea8e82fea3cd0c3a0, "");
    class_39040e7b8b3d52478768b96bddf0e676.def("set_class_interface", method_pointer_817df043e3555f5293a8a3b37e6adca4, "");
    class_39040e7b8b3d52478768b96bddf0e676.def("get_class_interface", method_pointer_9a0392ba052059a8bf415d64cd6cb5ab, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_39040e7b8b3d52478768b96bddf0e676.def("get_class_interface", method_pointer_027299f1ccdc58be87b157c7763d4f08, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_39040e7b8b3d52478768b96bddf0e676.def("create_deserialized", method_pointer_7837ab0974d757d8bdc26b61a882aee0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_39040e7b8b3d52478768b96bddf0e676.staticmethod("classof_kind");
    class_39040e7b8b3d52478768b96bddf0e676.staticmethod("create_deserialized");
    class_39040e7b8b3d52478768b96bddf0e676.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCCompatibleAliasDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCCompatibleAliasDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}