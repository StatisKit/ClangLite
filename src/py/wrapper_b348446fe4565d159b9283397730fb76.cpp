#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::UnresolvedUsingValueDecl const volatile * get_pointer<class ::clang::UnresolvedUsingValueDecl const volatile >(class ::clang::UnresolvedUsingValueDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_b348446fe4565d159b9283397730fb76()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::SourceLocation  (::clang::UnresolvedUsingValueDecl::*method_pointer_9c1666d4d33a5fecb7a7af979cea0383)() const = &::clang::UnresolvedUsingValueDecl::getUsingLoc;
    void  (::clang::UnresolvedUsingValueDecl::*method_pointer_e02e0fb145585def844b3d71fe2206dc)(class ::clang::SourceLocation ) = &::clang::UnresolvedUsingValueDecl::setUsingLoc;
    bool  (::clang::UnresolvedUsingValueDecl::*method_pointer_aeebcb3aed5155229a6ea101a370af61)() const = &::clang::UnresolvedUsingValueDecl::isAccessDeclaration;
    bool  (::clang::UnresolvedUsingValueDecl::*method_pointer_5a90ed7259b35721b2b2688ad4137459)() const = &::clang::UnresolvedUsingValueDecl::isPackExpansion;
    class ::clang::SourceLocation  (::clang::UnresolvedUsingValueDecl::*method_pointer_3656a1f850235010ba33101ac59f5080)() const = &::clang::UnresolvedUsingValueDecl::getEllipsisLoc;
    class ::clang::UnresolvedUsingValueDecl * (*method_pointer_15aefe6caa355fabbf6fd2cab2974fc8)(class ::clang::ASTContext &, unsigned int ) = ::clang::UnresolvedUsingValueDecl::CreateDeserialized;
    class ::clang::UnresolvedUsingValueDecl * (::clang::UnresolvedUsingValueDecl::*method_pointer_d4d841a11e98558f878c69568be7e38e)() = &::clang::UnresolvedUsingValueDecl::getCanonicalDecl;
    class ::clang::UnresolvedUsingValueDecl const * (::clang::UnresolvedUsingValueDecl::*method_pointer_8710c3e258d256c5860057b4fbad0a81)() const = &::clang::UnresolvedUsingValueDecl::getCanonicalDecl;
    bool  (*method_pointer_a937392d036d55d4b1e04d545b626eb6)(class ::clang::Decl const *) = ::clang::UnresolvedUsingValueDecl::classof;
    bool  (*method_pointer_a187dc7f41a9562ea4483e5370b71a81)(enum ::clang::Decl::Kind ) = ::clang::UnresolvedUsingValueDecl::classofKind;
    boost::python::class_< class ::clang::UnresolvedUsingValueDecl, autowig::Held< class ::clang::UnresolvedUsingValueDecl >::Type, boost::python::bases< class ::clang::ValueDecl >, boost::noncopyable > class_b348446fe4565d159b9283397730fb76("UnresolvedUsingValueDecl", "Represents a dependent using declaration which was not marked with\n\n", boost::python::no_init);
    class_b348446fe4565d159b9283397730fb76.def("get_using_loc", method_pointer_9c1666d4d33a5fecb7a7af979cea0383, "Returns the source location of the 'using' keyword.\n\n:Return Type:\n    :py:class:`clanglite.clang.SourceLocation`\n\n");
    class_b348446fe4565d159b9283397730fb76.def("set_using_loc", method_pointer_e02e0fb145585def844b3d71fe2206dc, "Set the source location of the 'using' keyword.\n\n:Parameter:\n    `L` (:py:class:`clanglite.clang.SourceLocation`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_b348446fe4565d159b9283397730fb76.def("is_access_declaration", method_pointer_aeebcb3aed5155229a6ea101a370af61, "Return true if it is a C++03 access declaration (no 'using').\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_b348446fe4565d159b9283397730fb76.def("is_pack_expansion", method_pointer_5a90ed7259b35721b2b2688ad4137459, "Determine whether this is a pack expansion.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_b348446fe4565d159b9283397730fb76.def("get_ellipsis_loc", method_pointer_3656a1f850235010ba33101ac59f5080, "Get the location of the ellipsis if this is a pack expansion.\n\n:Return Type:\n    :py:class:`clanglite.clang.SourceLocation`\n\n");
    class_b348446fe4565d159b9283397730fb76.def("create_deserialized", method_pointer_15aefe6caa355fabbf6fd2cab2974fc8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b348446fe4565d159b9283397730fb76.def("get_canonical_decl", method_pointer_d4d841a11e98558f878c69568be7e38e, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.UnresolvedUsingValueDecl`\n\n");
    class_b348446fe4565d159b9283397730fb76.def("get_canonical_decl", method_pointer_8710c3e258d256c5860057b4fbad0a81, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b348446fe4565d159b9283397730fb76.def("classof", method_pointer_a937392d036d55d4b1e04d545b626eb6, "");
    class_b348446fe4565d159b9283397730fb76.def("classof_kind", method_pointer_a187dc7f41a9562ea4483e5370b71a81, "");
    class_b348446fe4565d159b9283397730fb76.staticmethod("classof_kind");
    class_b348446fe4565d159b9283397730fb76.staticmethod("create_deserialized");
    class_b348446fe4565d159b9283397730fb76.staticmethod("classof");

    if(autowig::Held< class ::clang::UnresolvedUsingValueDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::UnresolvedUsingValueDecl >::Type, autowig::Held< class ::clang::ValueDecl >::Type >();
    }

}