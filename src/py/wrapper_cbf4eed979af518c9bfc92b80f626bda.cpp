#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::TypeWithKeyword const volatile * get_pointer<class ::clang::TypeWithKeyword const volatile >(class ::clang::TypeWithKeyword const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_cbf4eed979af518c9bfc92b80f626bda()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    boost::python::class_< class ::clang::TypeWithKeyword, autowig::Held< class ::clang::TypeWithKeyword >::Type, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_cbf4eed979af518c9bfc92b80f626bda("TypeWithKeyword", "", boost::python::no_init);

    if(autowig::Held< class ::clang::TypeWithKeyword >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::TypeWithKeyword >::Type, autowig::Held< class ::clang::Type >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::TypeWithKeyword >::Type, boost::python::objects::make_ptr_instance< class ::clang::TypeWithKeyword, boost::python::objects::pointer_holder< autowig::Held< class ::clang::TypeWithKeyword >::Type, class ::clang::TypeWithKeyword > > >();
    }

}