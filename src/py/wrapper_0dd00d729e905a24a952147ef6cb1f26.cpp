#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::StaticAssertDecl const volatile * get_pointer<class ::clang::StaticAssertDecl const volatile >(class ::clang::StaticAssertDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_0dd00d729e905a24a952147ef6cb1f26()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::StaticAssertDecl * (*method_pointer_963caab436945549ab07244ad2283dee)(class ::clang::ASTContext &, unsigned int ) = ::clang::StaticAssertDecl::CreateDeserialized;
    bool  (::clang::StaticAssertDecl::*method_pointer_7e93a72396f9524ea38b7bffd26e77d6)() const = &::clang::StaticAssertDecl::isFailed;
    class ::clang::SourceLocation  (::clang::StaticAssertDecl::*method_pointer_c40008a3cf7f528e93ad078517e6b4d4)() const = &::clang::StaticAssertDecl::getRParenLoc;
    bool  (*method_pointer_ce2a42003f2e58e093275d99c22a2083)(class ::clang::Decl const *) = ::clang::StaticAssertDecl::classof;
    bool  (*method_pointer_066b8f603f1c5898a6bfce4cd6dfd57e)(enum ::clang::Decl::Kind ) = ::clang::StaticAssertDecl::classofKind;
    boost::python::class_< class ::clang::StaticAssertDecl, autowig::Held< class ::clang::StaticAssertDecl >::Type, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_0dd00d729e905a24a952147ef6cb1f26("StaticAssertDecl", "Represents a C++11 static\\_assert declaration.\n\n", boost::python::no_init);
    class_0dd00d729e905a24a952147ef6cb1f26.def("create_deserialized", method_pointer_963caab436945549ab07244ad2283dee, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_0dd00d729e905a24a952147ef6cb1f26.def("is_failed", method_pointer_7e93a72396f9524ea38b7bffd26e77d6, "");
    class_0dd00d729e905a24a952147ef6cb1f26.def("get_r_paren_loc", method_pointer_c40008a3cf7f528e93ad078517e6b4d4, "");
    class_0dd00d729e905a24a952147ef6cb1f26.def("classof", method_pointer_ce2a42003f2e58e093275d99c22a2083, "");
    class_0dd00d729e905a24a952147ef6cb1f26.def("classof_kind", method_pointer_066b8f603f1c5898a6bfce4cd6dfd57e, "");
    class_0dd00d729e905a24a952147ef6cb1f26.staticmethod("classof_kind");
    class_0dd00d729e905a24a952147ef6cb1f26.staticmethod("create_deserialized");
    class_0dd00d729e905a24a952147ef6cb1f26.staticmethod("classof");

    if(autowig::Held< class ::clang::StaticAssertDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::StaticAssertDecl >::Type, autowig::Held< class ::clang::Decl >::Type >();
    }

}