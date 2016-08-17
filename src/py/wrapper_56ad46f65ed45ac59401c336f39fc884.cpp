#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

void wrapper_56ad46f65ed45ac59401c336f39fc884()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    std::string name_cf8ca95909d45a77a159bd9256b54d67 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".ento");
    boost::python::object module_cf8ca95909d45a77a159bd9256b54d67(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_cf8ca95909d45a77a159bd9256b54d67.c_str()))));
    boost::python::scope().attr("ento") = module_cf8ca95909d45a77a159bd9256b54d67;
    boost::python::scope scope_cf8ca95909d45a77a159bd9256b54d67 = module_cf8ca95909d45a77a159bd9256b54d67;
    boost::python::scope().attr("taint_tag_generic") = ::clang::ento::TaintTagGeneric;
}