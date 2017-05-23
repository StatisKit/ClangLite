#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::UnresolvedUsingType const volatile * get_pointer<class ::clang::UnresolvedUsingType const volatile >(class ::clang::UnresolvedUsingType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_708015b5173c579ca15734236c01d5a8()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::UnresolvedUsingTypenameDecl * (::clang::UnresolvedUsingType::*method_pointer_5c54a9bc4ce8567ca8cd25971788cb29)() const = &::clang::UnresolvedUsingType::getDecl;
    bool  (::clang::UnresolvedUsingType::*method_pointer_49a47117dcdd552884f49f5ad2a0130d)() const = &::clang::UnresolvedUsingType::isSugared;
    class ::clang::QualType  (::clang::UnresolvedUsingType::*method_pointer_25404b70309156e1a88b847c57749557)() const = &::clang::UnresolvedUsingType::desugar;
    bool  (*method_pointer_3350ea98493b5a609335c8a9bf2b6b9a)(class ::clang::Type const *) = ::clang::UnresolvedUsingType::classof;
    boost::python::class_< class ::clang::UnresolvedUsingType, autowig::Held< class ::clang::UnresolvedUsingType >::Type, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_708015b5173c579ca15734236c01d5a8("UnresolvedUsingType", "Represents the dependent type named by a dependently-scoped typename\nusing declaration, e.g. using typename Base::foo;\n\nTemplate instantiation turns these into the underlying type.\n\n", boost::python::no_init);
    class_708015b5173c579ca15734236c01d5a8.def("get_decl", method_pointer_5c54a9bc4ce8567ca8cd25971788cb29, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_708015b5173c579ca15734236c01d5a8.def("is_sugared", method_pointer_49a47117dcdd552884f49f5ad2a0130d, "");
    class_708015b5173c579ca15734236c01d5a8.def("desugar", method_pointer_25404b70309156e1a88b847c57749557, "");
    class_708015b5173c579ca15734236c01d5a8.def("classof", method_pointer_3350ea98493b5a609335c8a9bf2b6b9a, "");
    class_708015b5173c579ca15734236c01d5a8.staticmethod("classof");

    if(autowig::Held< class ::clang::UnresolvedUsingType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::UnresolvedUsingType >::Type, autowig::Held< class ::clang::Type >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::UnresolvedUsingType >::Type, boost::python::objects::make_ptr_instance< class ::clang::UnresolvedUsingType, boost::python::objects::pointer_holder< autowig::Held< class ::clang::UnresolvedUsingType >::Type, class ::clang::UnresolvedUsingType > > >();
    }

}