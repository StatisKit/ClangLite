#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

void wrapper_c2fc05c473215a4983853fa5936c4303()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    std::string name_cf8ca95909d45a77a159bd9256b54d67 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".ento");
    boost::python::object module_cf8ca95909d45a77a159bd9256b54d67(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_cf8ca95909d45a77a159bd9256b54d67.c_str()))));
    boost::python::scope().attr("ento") = module_cf8ca95909d45a77a159bd9256b54d67;
    boost::python::scope scope_cf8ca95909d45a77a159bd9256b54d67 = module_cf8ca95909d45a77a159bd9256b54d67;
    std::string name_78ad6b0e6c5b51b2ba8da4eb124a9130 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".categories");
    boost::python::object module_78ad6b0e6c5b51b2ba8da4eb124a9130(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_78ad6b0e6c5b51b2ba8da4eb124a9130.c_str()))));
    boost::python::scope().attr("categories") = module_78ad6b0e6c5b51b2ba8da4eb124a9130;
    boost::python::scope scope_78ad6b0e6c5b51b2ba8da4eb124a9130 = module_78ad6b0e6c5b51b2ba8da4eb124a9130;
    boost::python::scope().attr("unix_api") = ::clang::ento::categories::UnixAPI;
}