#include <boost/python.hpp>
#include <clang/Basic/Specifiers.h>

void enumeration_clang_access_specifier()
{
        std::string clang_7bbff48d109853e88270b3595c663a99_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
        boost::python::object clang_7bbff48d109853e88270b3595c663a99_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(clang_7bbff48d109853e88270b3595c663a99_name.c_str()))));
        boost::python::scope().attr("clang") = clang_7bbff48d109853e88270b3595c663a99_module;
        boost::python::scope clang_7bbff48d109853e88270b3595c663a99_scope = clang_7bbff48d109853e88270b3595c663a99_module;
        boost::python::enum_< enum ::clang::AccessSpecifier >("access_specifier")
            .value("AS__PUBLIC", ::clang::AccessSpecifier::AS_public)
            .value("AS__PROTECTED", ::clang::AccessSpecifier::AS_protected)
            .value("AS__PRIVATE", ::clang::AccessSpecifier::AS_private)
            .value("AS__NONE", ::clang::AccessSpecifier::AS_none);
}