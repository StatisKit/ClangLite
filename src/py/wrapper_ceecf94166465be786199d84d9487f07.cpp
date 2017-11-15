#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::DependentUnaryTransformType const volatile * get_pointer<class ::clang::DependentUnaryTransformType const volatile >(class ::clang::DependentUnaryTransformType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ceecf94166465be786199d84d9487f07()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    boost::python::class_< class ::clang::DependentUnaryTransformType, autowig::Held< class ::clang::DependentUnaryTransformType >::Type, boost::python::bases< class ::clang::UnaryTransformType >, boost::noncopyable > class_ceecf94166465be786199d84d9487f07("DependentUnaryTransformType", "Internal representation of canonical, dependent\n\\_\\_underlying\\_type(type) types.\n\nThis class is used internally by the ASTContext to manage canonical,\ndependent types, only. Clients will only see instances of this class via\nUnaryTransformType nodes.\n\n", boost::python::no_init);

    if(autowig::Held< class ::clang::DependentUnaryTransformType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::DependentUnaryTransformType >::Type, autowig::Held< class ::clang::UnaryTransformType >::Type >();
    }

}