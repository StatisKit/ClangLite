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
    class ::clang::AccessSpecDecl  * (*method_pointer_2e4f39360d5c5990bd4846beaa9f18db)(class ::clang::ASTContext  &, enum ::clang::AccessSpecifier , class ::clang::DeclContext  *, class ::clang::SourceLocation , class ::clang::SourceLocation ) = ::clang::AccessSpecDecl::Create;
    class ::clang::AccessSpecDecl  * (*method_pointer_f7e2fb6067595cf6a11c96adce8f65bd)(class ::clang::ASTContext  &, unsigned int ) = ::clang::AccessSpecDecl::CreateDeserialized;
    bool  (*method_pointer_fd72849efa07598db8037d4e20125e4c)(class ::clang::Decl  const *) = ::clang::AccessSpecDecl::classof;
    bool  (*method_pointer_d999c05be0e3538c8dab260b6c195234)(enum ::clang::Decl::Kind ) = ::clang::AccessSpecDecl::classofKind;
    class ::clang::SourceLocation  (::clang::AccessSpecDecl::*method_pointer_ae5086bab7b9577a8d2eaccfebed5b02)() const = &::clang::AccessSpecDecl::getAccessSpecifierLoc;
    class ::clang::SourceLocation  (::clang::AccessSpecDecl::*method_pointer_e489baae180059f4985d569cafa65a76)() const = &::clang::AccessSpecDecl::getColonLoc;
    void  (::clang::AccessSpecDecl::*method_pointer_1f12c247e30d5d49b9223e728213e7a1)(class ::clang::SourceLocation ) = &::clang::AccessSpecDecl::setAccessSpecifierLoc;
    void  (::clang::AccessSpecDecl::*method_pointer_d465a7fd827757aeb76a4cb962381eaa)(class ::clang::SourceLocation ) = &::clang::AccessSpecDecl::setColonLoc;
    boost::python::class_< class ::clang::AccessSpecDecl, autowig::HeldType< class ::clang::AccessSpecDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_5578de9a4833559791574e29dbc59084("AccessSpecDecl", "", boost::python::no_init);
    class_5578de9a4833559791574e29dbc59084.def("create", method_pointer_2e4f39360d5c5990bd4846beaa9f18db, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_5578de9a4833559791574e29dbc59084.def("create_deserialized", method_pointer_f7e2fb6067595cf6a11c96adce8f65bd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_5578de9a4833559791574e29dbc59084.def("classof", method_pointer_fd72849efa07598db8037d4e20125e4c, "");
    class_5578de9a4833559791574e29dbc59084.def("classof_kind", method_pointer_d999c05be0e3538c8dab260b6c195234, "");
    class_5578de9a4833559791574e29dbc59084.def("get_access_specifier_loc", method_pointer_ae5086bab7b9577a8d2eaccfebed5b02, "");
    class_5578de9a4833559791574e29dbc59084.def("get_colon_loc", method_pointer_e489baae180059f4985d569cafa65a76, "");
    class_5578de9a4833559791574e29dbc59084.def("set_access_specifier_loc", method_pointer_1f12c247e30d5d49b9223e728213e7a1, "");
    class_5578de9a4833559791574e29dbc59084.def("set_colon_loc", method_pointer_d465a7fd827757aeb76a4cb962381eaa, "");
    class_5578de9a4833559791574e29dbc59084.staticmethod("classof_kind");
    class_5578de9a4833559791574e29dbc59084.staticmethod("create");
    class_5578de9a4833559791574e29dbc59084.staticmethod("create_deserialized");
    class_5578de9a4833559791574e29dbc59084.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AccessSpecDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AccessSpecDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}