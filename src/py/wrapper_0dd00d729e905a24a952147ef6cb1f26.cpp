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
    class ::clang::StaticAssertDecl  * (*method_pointer_2ed1c6e6a53558c28d066439b0e6fb9f)(class ::clang::ASTContext  &, unsigned int ) = ::clang::StaticAssertDecl::CreateDeserialized;
    bool  (*method_pointer_2afe7fdca72457e587112a0a1225a087)(class ::clang::Decl  const *) = ::clang::StaticAssertDecl::classof;
    bool  (*method_pointer_95eb9a75cb6a5463b586501db8233b7b)(enum ::clang::Decl::Kind ) = ::clang::StaticAssertDecl::classofKind;
    class ::clang::SourceLocation  (::clang::StaticAssertDecl::*method_pointer_0ffbdfe3efc954929ab6ce261bbd9945)() const = &::clang::StaticAssertDecl::getRParenLoc;
    bool  (::clang::StaticAssertDecl::*method_pointer_c67f521bad8055a0929a6bd4c01c7796)() const = &::clang::StaticAssertDecl::isFailed;
    boost::python::class_< class ::clang::StaticAssertDecl, autowig::HeldType< class ::clang::StaticAssertDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_0dd00d729e905a24a952147ef6cb1f26("StaticAssertDecl", "", boost::python::no_init);
    class_0dd00d729e905a24a952147ef6cb1f26.def("create_deserialized", method_pointer_2ed1c6e6a53558c28d066439b0e6fb9f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_0dd00d729e905a24a952147ef6cb1f26.def("classof", method_pointer_2afe7fdca72457e587112a0a1225a087, "");
    class_0dd00d729e905a24a952147ef6cb1f26.def("classof_kind", method_pointer_95eb9a75cb6a5463b586501db8233b7b, "");
    class_0dd00d729e905a24a952147ef6cb1f26.def("get_r_paren_loc", method_pointer_0ffbdfe3efc954929ab6ce261bbd9945, "");
    class_0dd00d729e905a24a952147ef6cb1f26.def("is_failed", method_pointer_c67f521bad8055a0929a6bd4c01c7796, "");
    class_0dd00d729e905a24a952147ef6cb1f26.staticmethod("classof_kind");
    class_0dd00d729e905a24a952147ef6cb1f26.staticmethod("create_deserialized");
    class_0dd00d729e905a24a952147ef6cb1f26.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::StaticAssertDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::StaticAssertDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}