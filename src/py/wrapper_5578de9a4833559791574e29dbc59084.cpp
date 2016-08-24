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
    class ::clang::AccessSpecDecl  * (*method_pointer_25faebcfb6c05aebbcc8d5496d67fefd)(class ::clang::ASTContext  &, enum ::clang::AccessSpecifier , class ::clang::DeclContext  *, class ::clang::SourceLocation , class ::clang::SourceLocation ) = ::clang::AccessSpecDecl::Create;
    class ::clang::AccessSpecDecl  * (*method_pointer_2cba9db937a05ecdaae3ad0b3d893dbd)(class ::clang::ASTContext  &, unsigned int ) = ::clang::AccessSpecDecl::CreateDeserialized;
    bool  (*method_pointer_2c91c171ba5f5aff899becd4d30d01dd)(class ::clang::Decl  const *) = ::clang::AccessSpecDecl::classof;
    bool  (*method_pointer_8f412e23d1655fae87b35182826fbdec)(enum ::clang::Decl::Kind ) = ::clang::AccessSpecDecl::classofKind;
    class ::clang::SourceLocation  (::clang::AccessSpecDecl::*method_pointer_dbce455f13dd5e35ace75f81af4762bc)() const = &::clang::AccessSpecDecl::getAccessSpecifierLoc;
    class ::clang::SourceLocation  (::clang::AccessSpecDecl::*method_pointer_e6e278ed7c1250119b7677118c86e56f)() const = &::clang::AccessSpecDecl::getColonLoc;
    void  (::clang::AccessSpecDecl::*method_pointer_3cc2db0b5da157479eb9fc9aca4e918d)(class ::clang::SourceLocation ) = &::clang::AccessSpecDecl::setAccessSpecifierLoc;
    void  (::clang::AccessSpecDecl::*method_pointer_669f0ae19b7c5cbb9de6e9e311fd5855)(class ::clang::SourceLocation ) = &::clang::AccessSpecDecl::setColonLoc;
    boost::python::class_< class ::clang::AccessSpecDecl, autowig::HeldType< class ::clang::AccessSpecDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_5578de9a4833559791574e29dbc59084("AccessSpecDecl", "", boost::python::no_init);
    class_5578de9a4833559791574e29dbc59084.def("create", method_pointer_25faebcfb6c05aebbcc8d5496d67fefd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_5578de9a4833559791574e29dbc59084.def("create_deserialized", method_pointer_2cba9db937a05ecdaae3ad0b3d893dbd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_5578de9a4833559791574e29dbc59084.def("classof", method_pointer_2c91c171ba5f5aff899becd4d30d01dd, "");
    class_5578de9a4833559791574e29dbc59084.def("classof_kind", method_pointer_8f412e23d1655fae87b35182826fbdec, "");
    class_5578de9a4833559791574e29dbc59084.def("get_access_specifier_loc", method_pointer_dbce455f13dd5e35ace75f81af4762bc, "");
    class_5578de9a4833559791574e29dbc59084.def("get_colon_loc", method_pointer_e6e278ed7c1250119b7677118c86e56f, "");
    class_5578de9a4833559791574e29dbc59084.def("set_access_specifier_loc", method_pointer_3cc2db0b5da157479eb9fc9aca4e918d, "");
    class_5578de9a4833559791574e29dbc59084.def("set_colon_loc", method_pointer_669f0ae19b7c5cbb9de6e9e311fd5855, "");
    class_5578de9a4833559791574e29dbc59084.staticmethod("classof_kind");
    class_5578de9a4833559791574e29dbc59084.staticmethod("create");
    class_5578de9a4833559791574e29dbc59084.staticmethod("create_deserialized");
    class_5578de9a4833559791574e29dbc59084.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AccessSpecDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AccessSpecDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}