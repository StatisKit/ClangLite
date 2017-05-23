#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::DeclaratorDecl const volatile * get_pointer<class ::clang::DeclaratorDecl const volatile >(class ::clang::DeclaratorDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_905349ffcd105c71941a2e3b1ec8ec3a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::SourceLocation  (::clang::DeclaratorDecl::*method_pointer_ab9998e5e0885430875c2fc8cd1ad775)() const = &::clang::DeclaratorDecl::getInnerLocStart;
    void  (::clang::DeclaratorDecl::*method_pointer_36a389672d6f5460af1e3a39c83f568e)(class ::clang::SourceLocation ) = &::clang::DeclaratorDecl::setInnerLocStart;
    class ::clang::SourceLocation  (::clang::DeclaratorDecl::*method_pointer_64b9abf1d21357b193bcdc39d9c96682)() const = &::clang::DeclaratorDecl::getOuterLocStart;
    class ::clang::SourceLocation  (::clang::DeclaratorDecl::*method_pointer_58ee57fc476c540ab08bc7dcb698897d)() const = &::clang::DeclaratorDecl::getLocStart;
    unsigned int  (::clang::DeclaratorDecl::*method_pointer_3bd6d987a7865534a195f65922b9462f)() const = &::clang::DeclaratorDecl::getNumTemplateParameterLists;
    class ::clang::SourceLocation  (::clang::DeclaratorDecl::*method_pointer_36229576723857529c84e41401fccc7a)() const = &::clang::DeclaratorDecl::getTypeSpecStartLoc;
    bool  (*method_pointer_b3658cce40755fe6a7e7dd4b54ddeef3)(class ::clang::Decl const *) = ::clang::DeclaratorDecl::classof;
    bool  (*method_pointer_7233360e90415f578f404b7256c33ffb)(enum ::clang::Decl::Kind ) = ::clang::DeclaratorDecl::classofKind;
    boost::python::class_< class ::clang::DeclaratorDecl, autowig::Held< class ::clang::DeclaratorDecl >::Type, boost::python::bases< class ::clang::ValueDecl >, boost::noncopyable > class_905349ffcd105c71941a2e3b1ec8ec3a("DeclaratorDecl", "Represents a ValueDecl that came out of a declarator. Contains type\nsource information through TypeSourceInfo.\n\n", boost::python::no_init);
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("get_inner_loc_start", method_pointer_ab9998e5e0885430875c2fc8cd1ad775, ":Return Type:\n    :py:class:`clanglite.clang.SourceLocation`\n\n");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("set_inner_loc_start", method_pointer_36a389672d6f5460af1e3a39c83f568e, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("get_outer_loc_start", method_pointer_64b9abf1d21357b193bcdc39d9c96682, ":Return Type:\n    :py:class:`clanglite.clang.SourceLocation`\n\n");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("get_loc_start", method_pointer_58ee57fc476c540ab08bc7dcb698897d, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("get_num_template_parameter_lists", method_pointer_3bd6d987a7865534a195f65922b9462f, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("get_type_spec_start_loc", method_pointer_36229576723857529c84e41401fccc7a, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("classof", method_pointer_b3658cce40755fe6a7e7dd4b54ddeef3, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("classof_kind", method_pointer_7233360e90415f578f404b7256c33ffb, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.staticmethod("classof_kind");
    class_905349ffcd105c71941a2e3b1ec8ec3a.staticmethod("classof");

    if(autowig::Held< class ::clang::DeclaratorDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::DeclaratorDecl >::Type, autowig::Held< class ::clang::ValueDecl >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::DeclaratorDecl >::Type, boost::python::objects::make_ptr_instance< class ::clang::DeclaratorDecl, boost::python::objects::pointer_holder< autowig::Held< class ::clang::DeclaratorDecl >::Type, class ::clang::DeclaratorDecl > > >();
    }

}