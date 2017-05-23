#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::DependentDecltypeType const volatile * get_pointer<class ::clang::DependentDecltypeType const volatile >(class ::clang::DependentDecltypeType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c2665c86b07b57a395ff46c8699e82ba()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    boost::python::class_< class ::clang::DependentDecltypeType, autowig::Held< class ::clang::DependentDecltypeType >::Type, boost::python::bases< class ::clang::DecltypeType >, boost::noncopyable > class_c2665c86b07b57a395ff46c8699e82ba("DependentDecltypeType", "Internal representation of canonical, dependent decltype(expr) types.\n\nThis class is used internally by the ASTContext to manage canonical,\ndependent types, only. Clients will only see instances of this class via\nDecltypeType nodes.\n\n", boost::python::no_init);

    if(autowig::Held< class ::clang::DependentDecltypeType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::DependentDecltypeType >::Type, autowig::Held< class ::clang::DecltypeType >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::DependentDecltypeType >::Type, boost::python::objects::make_ptr_instance< class ::clang::DependentDecltypeType, boost::python::objects::pointer_holder< autowig::Held< class ::clang::DependentDecltypeType >::Type, class ::clang::DependentDecltypeType > > >();
    }

}