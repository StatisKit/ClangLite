#include "_clanglite.h"


namespace autowig
{
}


void wrapper_c2665c86b07b57a395ff46c8699e82ba()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    boost::python::class_< class ::clang::DependentDecltypeType, autowig::HeldType< class ::clang::DependentDecltypeType >, boost::python::bases< class ::clang::DecltypeType >, boost::noncopyable > class_c2665c86b07b57a395ff46c8699e82ba("DependentDecltypeType", "", boost::python::no_init);

    if(std::is_class< autowig::HeldType< class ::clang::DependentDecltypeType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::DependentDecltypeType >, autowig::HeldType< class ::clang::DecltypeType > >();
    }

}