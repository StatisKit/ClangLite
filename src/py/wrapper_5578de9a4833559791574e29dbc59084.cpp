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
    class ::clang::AccessSpecDecl  * (*method_pointer_588fd13120755eb783b3cb8725809110)(class ::clang::ASTContext  &, enum ::clang::AccessSpecifier , class ::clang::DeclContext  *, class ::clang::SourceLocation , class ::clang::SourceLocation ) = ::clang::AccessSpecDecl::Create;
    class ::clang::AccessSpecDecl  * (*method_pointer_8fe7db2f9a765166934b7d6da53ee568)(class ::clang::ASTContext  &, unsigned int ) = ::clang::AccessSpecDecl::CreateDeserialized;
    bool  (*method_pointer_0a6712cec07f5d4b976660d62b878e28)(class ::clang::Decl  const *) = ::clang::AccessSpecDecl::classof;
    bool  (*method_pointer_9111534e03f85f9a970843676764ab4a)(enum ::clang::Decl::Kind ) = ::clang::AccessSpecDecl::classofKind;
    class ::clang::SourceLocation  (::clang::AccessSpecDecl::*method_pointer_fea30d63d6a35773980e630c5876557f)() const = &::clang::AccessSpecDecl::getAccessSpecifierLoc;
    class ::clang::SourceLocation  (::clang::AccessSpecDecl::*method_pointer_a7db4f46e3df570698caf305f136f6dc)() const = &::clang::AccessSpecDecl::getColonLoc;
    void  (::clang::AccessSpecDecl::*method_pointer_37f015294d6659a2a64069dffd74ec5a)(class ::clang::SourceLocation ) = &::clang::AccessSpecDecl::setAccessSpecifierLoc;
    void  (::clang::AccessSpecDecl::*method_pointer_acff497b591c57b5916831a3e0611f66)(class ::clang::SourceLocation ) = &::clang::AccessSpecDecl::setColonLoc;
    boost::python::class_< class ::clang::AccessSpecDecl, autowig::HeldType< class ::clang::AccessSpecDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_5578de9a4833559791574e29dbc59084("AccessSpecDecl", "", boost::python::no_init);
    class_5578de9a4833559791574e29dbc59084.def("create", method_pointer_588fd13120755eb783b3cb8725809110, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_5578de9a4833559791574e29dbc59084.def("create_deserialized", method_pointer_8fe7db2f9a765166934b7d6da53ee568, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_5578de9a4833559791574e29dbc59084.def("classof", method_pointer_0a6712cec07f5d4b976660d62b878e28, "");
    class_5578de9a4833559791574e29dbc59084.def("classof_kind", method_pointer_9111534e03f85f9a970843676764ab4a, "");
    class_5578de9a4833559791574e29dbc59084.def("get_access_specifier_loc", method_pointer_fea30d63d6a35773980e630c5876557f, "");
    class_5578de9a4833559791574e29dbc59084.def("get_colon_loc", method_pointer_a7db4f46e3df570698caf305f136f6dc, "");
    class_5578de9a4833559791574e29dbc59084.def("set_access_specifier_loc", method_pointer_37f015294d6659a2a64069dffd74ec5a, "");
    class_5578de9a4833559791574e29dbc59084.def("set_colon_loc", method_pointer_acff497b591c57b5916831a3e0611f66, "");
    class_5578de9a4833559791574e29dbc59084.staticmethod("classof_kind");
    class_5578de9a4833559791574e29dbc59084.staticmethod("create");
    class_5578de9a4833559791574e29dbc59084.staticmethod("create_deserialized");
    class_5578de9a4833559791574e29dbc59084.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AccessSpecDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AccessSpecDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}