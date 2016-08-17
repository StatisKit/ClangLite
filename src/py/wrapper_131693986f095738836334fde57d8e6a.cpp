#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

void wrapper_131693986f095738836334fde57d8e6a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    std::string name_1b1abae452145f4ba0da54a71d260eeb = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".ast_matchers");
    boost::python::object module_1b1abae452145f4ba0da54a71d260eeb(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_1b1abae452145f4ba0da54a71d260eeb.c_str()))));
    boost::python::scope().attr("ast_matchers") = module_1b1abae452145f4ba0da54a71d260eeb;
    boost::python::scope scope_1b1abae452145f4ba0da54a71d260eeb = module_1b1abae452145f4ba0da54a71d260eeb;
    boost::python::scope().attr("for_each_descendant") = ::clang::ast_matchers::forEachDescendant;
}