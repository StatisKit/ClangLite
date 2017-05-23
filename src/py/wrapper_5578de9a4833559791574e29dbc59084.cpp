#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::AccessSpecDecl const volatile * get_pointer<class ::clang::AccessSpecDecl const volatile >(class ::clang::AccessSpecDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_5578de9a4833559791574e29dbc59084()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::SourceLocation  (::clang::AccessSpecDecl::*method_pointer_a3dd3ef8839059dcb9e9626f363f8ba0)() const = &::clang::AccessSpecDecl::getAccessSpecifierLoc;
    void  (::clang::AccessSpecDecl::*method_pointer_60c726d3b5925e79a864660e36aaf700)(class ::clang::SourceLocation ) = &::clang::AccessSpecDecl::setAccessSpecifierLoc;
    class ::clang::SourceLocation  (::clang::AccessSpecDecl::*method_pointer_af190be9d3505982ae132e469362641d)() const = &::clang::AccessSpecDecl::getColonLoc;
    void  (::clang::AccessSpecDecl::*method_pointer_4f0bb50a789150e6ad4130c05c7e3e80)(class ::clang::SourceLocation ) = &::clang::AccessSpecDecl::setColonLoc;
    class ::clang::AccessSpecDecl * (*method_pointer_3fc9e84aee9252559a710caa6ed6ec7f)(class ::clang::ASTContext &, enum ::clang::AccessSpecifier , class ::clang::DeclContext *, class ::clang::SourceLocation , class ::clang::SourceLocation ) = ::clang::AccessSpecDecl::Create;
    class ::clang::AccessSpecDecl * (*method_pointer_e3442be0485f5b7fb521e0e4ca2f9120)(class ::clang::ASTContext &, unsigned int ) = ::clang::AccessSpecDecl::CreateDeserialized;
    bool  (*method_pointer_b35a84cc20405c778fd4d0e3cd52e5ae)(class ::clang::Decl const *) = ::clang::AccessSpecDecl::classof;
    bool  (*method_pointer_7b0bfaa783db544b8041dc1cd346f3f2)(enum ::clang::Decl::Kind ) = ::clang::AccessSpecDecl::classofKind;
    boost::python::class_< class ::clang::AccessSpecDecl, autowig::Held< class ::clang::AccessSpecDecl >::Type, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_5578de9a4833559791574e29dbc59084("AccessSpecDecl", "Represents an access specifier followed by colon ':'.\n\nAn objects of this class represents sugar for the syntactic occurrence\nof an access specifier followed by a colon in the list of member\nspecifiers of a C++ class definition.\n\nNote that they do not represent other uses of access specifiers, such as\nthose occurring in a list of base specifiers. Also note that this class\nhas nothing to do with so-called 'access declarations' (C++98 11.3\n[class.access.dcl]).\n\n", boost::python::no_init);
    class_5578de9a4833559791574e29dbc59084.def("get_access_specifier_loc", method_pointer_a3dd3ef8839059dcb9e9626f363f8ba0, "The location of the access specifier.\n\n:Return Type:\n    :py:class:`clanglite.clang.SourceLocation`\n\n");
    class_5578de9a4833559791574e29dbc59084.def("set_access_specifier_loc", method_pointer_60c726d3b5925e79a864660e36aaf700, "Sets the location of the access specifier.\n\n:Parameter:\n    `ASLoc` (:py:class:`clanglite.clang.SourceLocation`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_5578de9a4833559791574e29dbc59084.def("get_colon_loc", method_pointer_af190be9d3505982ae132e469362641d, "The location of the colon following the access specifier.\n\n:Return Type:\n    :py:class:`clanglite.clang.SourceLocation`\n\n");
    class_5578de9a4833559791574e29dbc59084.def("set_colon_loc", method_pointer_4f0bb50a789150e6ad4130c05c7e3e80, "Sets the location of the colon.\n\n:Parameter:\n    `CLoc` (:py:class:`clanglite.clang.SourceLocation`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_5578de9a4833559791574e29dbc59084.def("create", method_pointer_3fc9e84aee9252559a710caa6ed6ec7f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_5578de9a4833559791574e29dbc59084.def("create_deserialized", method_pointer_e3442be0485f5b7fb521e0e4ca2f9120, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_5578de9a4833559791574e29dbc59084.def("classof", method_pointer_b35a84cc20405c778fd4d0e3cd52e5ae, "");
    class_5578de9a4833559791574e29dbc59084.def("classof_kind", method_pointer_7b0bfaa783db544b8041dc1cd346f3f2, "");
    class_5578de9a4833559791574e29dbc59084.staticmethod("classof_kind");
    class_5578de9a4833559791574e29dbc59084.staticmethod("create");
    class_5578de9a4833559791574e29dbc59084.staticmethod("create_deserialized");
    class_5578de9a4833559791574e29dbc59084.staticmethod("classof");

    if(autowig::Held< class ::clang::AccessSpecDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::AccessSpecDecl >::Type, autowig::Held< class ::clang::Decl >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::AccessSpecDecl >::Type, boost::python::objects::make_ptr_instance< class ::clang::AccessSpecDecl, boost::python::objects::pointer_holder< autowig::Held< class ::clang::AccessSpecDecl >::Type, class ::clang::AccessSpecDecl > > >();
    }

}