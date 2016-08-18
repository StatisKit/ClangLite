#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

void wrapper_2c892c6ae5d656f391ed40926c34e7bb()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    std::string name_083742e3e8a8594aac25018c1bb9c10d = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".format");
    boost::python::object module_083742e3e8a8594aac25018c1bb9c10d(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_083742e3e8a8594aac25018c1bb9c10d.c_str()))));
    boost::python::scope().attr("format") = module_083742e3e8a8594aac25018c1bb9c10d;
    boost::python::scope scope_083742e3e8a8594aac25018c1bb9c10d = module_083742e3e8a8594aac25018c1bb9c10d;
    boost::python::scope().attr("style_option_help_description") = ::clang::format::StyleOptionHelpDescription;
}