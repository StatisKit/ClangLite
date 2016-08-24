#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_5578de9a4833559791574e29dbc59084()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::AccessSpecDecl  * (*method_pointer_d45d453189c6504ba8251dc67b577968)(class ::clang::ASTContext  &, enum ::clang::AccessSpecifier , class ::clang::DeclContext  *, class ::clang::SourceLocation , class ::clang::SourceLocation ) = ::clang::AccessSpecDecl::Create;
    class ::clang::AccessSpecDecl  * (*method_pointer_84d6cf3a215d55ae85c38e6446a88134)(class ::clang::ASTContext  &, unsigned int ) = ::clang::AccessSpecDecl::CreateDeserialized;
    bool  (*method_pointer_71c03d196a075ab5b95b0cdc5b3a6b13)(class ::clang::Decl  const *) = ::clang::AccessSpecDecl::classof;
    bool  (*method_pointer_e4c0c781364d59cc8dbe5b4abb490e44)(enum ::clang::Decl::Kind ) = ::clang::AccessSpecDecl::classofKind;
    class ::clang::SourceLocation  (::clang::AccessSpecDecl::*method_pointer_ebb9e1b585955ab49c7ae85baaa845b1)() const = &::clang::AccessSpecDecl::getAccessSpecifierLoc;
    class ::clang::SourceLocation  (::clang::AccessSpecDecl::*method_pointer_9639e44129965735b64c72328bbbc569)() const = &::clang::AccessSpecDecl::getColonLoc;
    void  (::clang::AccessSpecDecl::*method_pointer_221b9c578af4596d85588cb57a15dde4)(class ::clang::SourceLocation ) = &::clang::AccessSpecDecl::setAccessSpecifierLoc;
    void  (::clang::AccessSpecDecl::*method_pointer_3f4bb1f0c6145448abae9f72bde17f30)(class ::clang::SourceLocation ) = &::clang::AccessSpecDecl::setColonLoc;
    boost::python::class_< class ::clang::AccessSpecDecl, autowig::HeldType< class ::clang::AccessSpecDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_5578de9a4833559791574e29dbc59084("AccessSpecDecl", "", boost::python::no_init);
    class_5578de9a4833559791574e29dbc59084.def("create", method_pointer_d45d453189c6504ba8251dc67b577968, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_5578de9a4833559791574e29dbc59084.def("create_deserialized", method_pointer_84d6cf3a215d55ae85c38e6446a88134, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_5578de9a4833559791574e29dbc59084.def("classof", method_pointer_71c03d196a075ab5b95b0cdc5b3a6b13, "");
    class_5578de9a4833559791574e29dbc59084.def("classof_kind", method_pointer_e4c0c781364d59cc8dbe5b4abb490e44, "");
    class_5578de9a4833559791574e29dbc59084.def("get_access_specifier_loc", method_pointer_ebb9e1b585955ab49c7ae85baaa845b1, "");
    class_5578de9a4833559791574e29dbc59084.def("get_colon_loc", method_pointer_9639e44129965735b64c72328bbbc569, "");
    class_5578de9a4833559791574e29dbc59084.def("set_access_specifier_loc", method_pointer_221b9c578af4596d85588cb57a15dde4, "");
    class_5578de9a4833559791574e29dbc59084.def("set_colon_loc", method_pointer_3f4bb1f0c6145448abae9f72bde17f30, "");
    class_5578de9a4833559791574e29dbc59084.staticmethod("classof_kind");
    class_5578de9a4833559791574e29dbc59084.staticmethod("create");
    class_5578de9a4833559791574e29dbc59084.staticmethod("create_deserialized");
    class_5578de9a4833559791574e29dbc59084.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AccessSpecDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AccessSpecDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}