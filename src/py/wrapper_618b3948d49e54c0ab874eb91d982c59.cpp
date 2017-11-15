#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::UsingPackDecl const volatile * get_pointer<class ::clang::UsingPackDecl const volatile >(class ::clang::UsingPackDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_618b3948d49e54c0ab874eb91d982c59()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::NamedDecl * (::clang::UsingPackDecl::*method_pointer_cab7f0f1676f58daa02c9a73bdada1ea)() const = &::clang::UsingPackDecl::getInstantiatedFromUsingDecl;
    class ::clang::UsingPackDecl * (*method_pointer_813c6a8afb8053a8aa6f6f2ee03284f4)(class ::clang::ASTContext &, unsigned int , unsigned int ) = ::clang::UsingPackDecl::CreateDeserialized;
    class ::clang::UsingPackDecl * (::clang::UsingPackDecl::*method_pointer_daae5ea6bf125a9fb16886da64d72ada)() = &::clang::UsingPackDecl::getCanonicalDecl;
    class ::clang::UsingPackDecl const * (::clang::UsingPackDecl::*method_pointer_16be1f77a2535a3a8dfd29a20bf12c2a)() const = &::clang::UsingPackDecl::getCanonicalDecl;
    bool  (*method_pointer_d373c20bb78957daa2654bc2928b87b3)(class ::clang::Decl const *) = ::clang::UsingPackDecl::classof;
    bool  (*method_pointer_2fd2eebf49d65449b10b37013e233a41)(enum ::clang::Decl::Kind ) = ::clang::UsingPackDecl::classofKind;
    boost::python::class_< class ::clang::UsingPackDecl, autowig::Held< class ::clang::UsingPackDecl >::Type, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_618b3948d49e54c0ab874eb91d982c59("UsingPackDecl", "", boost::python::no_init);
    class_618b3948d49e54c0ab874eb91d982c59.def("get_instantiated_from_using_decl", method_pointer_cab7f0f1676f58daa02c9a73bdada1ea, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.NamedDecl`\n\n");
    class_618b3948d49e54c0ab874eb91d982c59.def("create_deserialized", method_pointer_813c6a8afb8053a8aa6f6f2ee03284f4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_618b3948d49e54c0ab874eb91d982c59.def("get_canonical_decl", method_pointer_daae5ea6bf125a9fb16886da64d72ada, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_618b3948d49e54c0ab874eb91d982c59.def("get_canonical_decl", method_pointer_16be1f77a2535a3a8dfd29a20bf12c2a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_618b3948d49e54c0ab874eb91d982c59.def("classof", method_pointer_d373c20bb78957daa2654bc2928b87b3, "");
    class_618b3948d49e54c0ab874eb91d982c59.def("classof_kind", method_pointer_2fd2eebf49d65449b10b37013e233a41, "");
    class_618b3948d49e54c0ab874eb91d982c59.staticmethod("classof_kind");
    class_618b3948d49e54c0ab874eb91d982c59.staticmethod("create_deserialized");
    class_618b3948d49e54c0ab874eb91d982c59.staticmethod("classof");

    if(autowig::Held< class ::clang::UsingPackDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::UsingPackDecl >::Type, autowig::Held< class ::clang::NamedDecl >::Type >();
    }

}