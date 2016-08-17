#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

void wrapper_cd2c7aedfa30589298b6c9ed7dd66b23()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    std::string name_5f7abfc22abe552ebcc2549639a2e8f1 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".serialization");
    boost::python::object module_5f7abfc22abe552ebcc2549639a2e8f1(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_5f7abfc22abe552ebcc2549639a2e8f1.c_str()))));
    boost::python::scope().attr("serialization") = module_5f7abfc22abe552ebcc2549639a2e8f1;
    boost::python::scope scope_5f7abfc22abe552ebcc2549639a2e8f1 = module_5f7abfc22abe552ebcc2549639a2e8f1;
    boost::python::scope().attr("num_special_type_i_ds") = ::clang::serialization::NumSpecialTypeIDs;
}