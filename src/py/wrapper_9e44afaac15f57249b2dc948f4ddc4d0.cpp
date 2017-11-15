#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::UnresolvedUsingTypenameDecl const volatile * get_pointer<class ::clang::UnresolvedUsingTypenameDecl const volatile >(class ::clang::UnresolvedUsingTypenameDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_9e44afaac15f57249b2dc948f4ddc4d0()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::SourceLocation  (::clang::UnresolvedUsingTypenameDecl::*method_pointer_18ba354845bb53ba86b181ef7d9892c9)() const = &::clang::UnresolvedUsingTypenameDecl::getUsingLoc;
    class ::clang::SourceLocation  (::clang::UnresolvedUsingTypenameDecl::*method_pointer_1afb07a45de35fa4aa27afbb1c872f2b)() const = &::clang::UnresolvedUsingTypenameDecl::getTypenameLoc;
    bool  (::clang::UnresolvedUsingTypenameDecl::*method_pointer_5b991e1e497f5d38896fb91d406cc080)() const = &::clang::UnresolvedUsingTypenameDecl::isPackExpansion;
    class ::clang::SourceLocation  (::clang::UnresolvedUsingTypenameDecl::*method_pointer_6a6b7a92c7b55182ad665f0b57ac8165)() const = &::clang::UnresolvedUsingTypenameDecl::getEllipsisLoc;
    class ::clang::UnresolvedUsingTypenameDecl * (*method_pointer_e97c7477db6f5f29aedc61ffcf33e2d8)(class ::clang::ASTContext &, unsigned int ) = ::clang::UnresolvedUsingTypenameDecl::CreateDeserialized;
    class ::clang::UnresolvedUsingTypenameDecl * (::clang::UnresolvedUsingTypenameDecl::*method_pointer_047bd3939ee0507caa0ffd970cc8d2ff)() = &::clang::UnresolvedUsingTypenameDecl::getCanonicalDecl;
    class ::clang::UnresolvedUsingTypenameDecl const * (::clang::UnresolvedUsingTypenameDecl::*method_pointer_12dcee017acf5bae8c384cdda502e2b7)() const = &::clang::UnresolvedUsingTypenameDecl::getCanonicalDecl;
    bool  (*method_pointer_af92266bff3352da98249ac9cc72b42e)(class ::clang::Decl const *) = ::clang::UnresolvedUsingTypenameDecl::classof;
    bool  (*method_pointer_1b5fbae185a65c99aa6bfd0a22ec5a2e)(enum ::clang::Decl::Kind ) = ::clang::UnresolvedUsingTypenameDecl::classofKind;
    boost::python::class_< class ::clang::UnresolvedUsingTypenameDecl, autowig::Held< class ::clang::UnresolvedUsingTypenameDecl >::Type, boost::python::bases< class ::clang::TypeDecl >, boost::noncopyable > class_9e44afaac15f57249b2dc948f4ddc4d0("UnresolvedUsingTypenameDecl", "Represents a dependent using declaration which was marked with\n\n", boost::python::no_init);
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("get_using_loc", method_pointer_18ba354845bb53ba86b181ef7d9892c9, "Returns the source location of the 'using' keyword.\n\n:Return Type:\n    :py:class:`clanglite.clang.SourceLocation`\n\n");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("get_typename_loc", method_pointer_1afb07a45de35fa4aa27afbb1c872f2b, "Returns the source location of the 'typename' keyword.\n\n:Return Type:\n    :py:class:`clanglite.clang.SourceLocation`\n\n");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("is_pack_expansion", method_pointer_5b991e1e497f5d38896fb91d406cc080, "Determine whether this is a pack expansion.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("get_ellipsis_loc", method_pointer_6a6b7a92c7b55182ad665f0b57ac8165, "Get the location of the ellipsis if this is a pack expansion.\n\n:Return Type:\n    :py:class:`clanglite.clang.SourceLocation`\n\n");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("create_deserialized", method_pointer_e97c7477db6f5f29aedc61ffcf33e2d8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("get_canonical_decl", method_pointer_047bd3939ee0507caa0ffd970cc8d2ff, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.UnresolvedUsingTypenameDecl`\n\n");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("get_canonical_decl", method_pointer_12dcee017acf5bae8c384cdda502e2b7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("classof", method_pointer_af92266bff3352da98249ac9cc72b42e, "");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("classof_kind", method_pointer_1b5fbae185a65c99aa6bfd0a22ec5a2e, "");
    class_9e44afaac15f57249b2dc948f4ddc4d0.staticmethod("classof_kind");
    class_9e44afaac15f57249b2dc948f4ddc4d0.staticmethod("create_deserialized");
    class_9e44afaac15f57249b2dc948f4ddc4d0.staticmethod("classof");

    if(autowig::Held< class ::clang::UnresolvedUsingTypenameDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::UnresolvedUsingTypenameDecl >::Type, autowig::Held< class ::clang::TypeDecl >::Type >();
    }

}