#include "_clanglite.h"


void wrapper_4b4e99a998695d79afb2678ecd4ef38b()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    boost::python::enum_< enum ::clang::AccessSpecifier >("access_specifier")
        .value("AS__NONE", ::clang::AS_none)
        .value("AS__PRIVATE", ::clang::AS_private)
        .value("AS__PROTECTED", ::clang::AS_protected)
        .value("AS__PUBLIC", ::clang::AS_public);
}