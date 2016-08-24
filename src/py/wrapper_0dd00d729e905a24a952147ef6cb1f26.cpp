#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_0dd00d729e905a24a952147ef6cb1f26()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::StaticAssertDecl  * (*method_pointer_6790c419f61a5aa38a003b9b8b14788e)(class ::clang::ASTContext  &, unsigned int ) = ::clang::StaticAssertDecl::CreateDeserialized;
    bool  (*method_pointer_146a0de09b7953e39b5bef70edad932b)(class ::clang::Decl  const *) = ::clang::StaticAssertDecl::classof;
    bool  (*method_pointer_b027aff311345130baa363ced4b0138f)(enum ::clang::Decl::Kind ) = ::clang::StaticAssertDecl::classofKind;
    class ::clang::SourceLocation  (::clang::StaticAssertDecl::*method_pointer_8f978145fcce5137a562ac6f638f5b72)() const = &::clang::StaticAssertDecl::getRParenLoc;
    bool  (::clang::StaticAssertDecl::*method_pointer_322690012e75514fa2cbfcf6a2c99f8b)() const = &::clang::StaticAssertDecl::isFailed;
    boost::python::class_< class ::clang::StaticAssertDecl, autowig::HeldType< class ::clang::StaticAssertDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_0dd00d729e905a24a952147ef6cb1f26("StaticAssertDecl", "", boost::python::no_init);
    class_0dd00d729e905a24a952147ef6cb1f26.def("create_deserialized", method_pointer_6790c419f61a5aa38a003b9b8b14788e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_0dd00d729e905a24a952147ef6cb1f26.def("classof", method_pointer_146a0de09b7953e39b5bef70edad932b, "");
    class_0dd00d729e905a24a952147ef6cb1f26.def("classof_kind", method_pointer_b027aff311345130baa363ced4b0138f, "");
    class_0dd00d729e905a24a952147ef6cb1f26.def("get_r_paren_loc", method_pointer_8f978145fcce5137a562ac6f638f5b72, "");
    class_0dd00d729e905a24a952147ef6cb1f26.def("is_failed", method_pointer_322690012e75514fa2cbfcf6a2c99f8b, "");
    class_0dd00d729e905a24a952147ef6cb1f26.staticmethod("classof_kind");
    class_0dd00d729e905a24a952147ef6cb1f26.staticmethod("create_deserialized");
    class_0dd00d729e905a24a952147ef6cb1f26.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::StaticAssertDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::StaticAssertDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}