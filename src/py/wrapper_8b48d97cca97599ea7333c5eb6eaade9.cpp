#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::ObjCObjectTypeImpl const volatile * get_pointer<class ::clang::ObjCObjectTypeImpl const volatile >(class ::clang::ObjCObjectTypeImpl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_8b48d97cca97599ea7333c5eb6eaade9()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    boost::python::class_< class ::clang::ObjCObjectTypeImpl, autowig::Held< class ::clang::ObjCObjectTypeImpl >::Type, boost::python::bases< class ::clang::ObjCObjectType >, boost::noncopyable > class_8b48d97cca97599ea7333c5eb6eaade9("ObjCObjectTypeImpl", "", boost::python::no_init);

    if(autowig::Held< class ::clang::ObjCObjectTypeImpl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::ObjCObjectTypeImpl >::Type, autowig::Held< class ::clang::ObjCObjectType >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::ObjCObjectTypeImpl >::Type, boost::python::objects::make_ptr_instance< class ::clang::ObjCObjectTypeImpl, boost::python::objects::pointer_holder< autowig::Held< class ::clang::ObjCObjectTypeImpl >::Type, class ::clang::ObjCObjectTypeImpl > > >();
    }

}