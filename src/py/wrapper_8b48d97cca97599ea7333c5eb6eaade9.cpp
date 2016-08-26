#include "_clanglite.h"


namespace autowig
{
}


void wrapper_8b48d97cca97599ea7333c5eb6eaade9()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    boost::python::class_< class ::clang::ObjCObjectTypeImpl, autowig::HeldType< class ::clang::ObjCObjectTypeImpl >, boost::python::bases< class ::clang::ObjCObjectType >, boost::noncopyable > class_8b48d97cca97599ea7333c5eb6eaade9("ObjCObjectTypeImpl", "", boost::python::no_init);

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectTypeImpl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectTypeImpl >, autowig::HeldType< class ::clang::ObjCObjectType > >();
    }

}