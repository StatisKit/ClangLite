#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

void wrapper_2a54a6e0a6ad5356bf6b38873dd62325()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    std::string name_5f7abfc22abe552ebcc2549639a2e8f1 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".serialization");
    boost::python::object module_5f7abfc22abe552ebcc2549639a2e8f1(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_5f7abfc22abe552ebcc2549639a2e8f1.c_str()))));
    boost::python::scope().attr("serialization") = module_5f7abfc22abe552ebcc2549639a2e8f1;
    boost::python::scope scope_5f7abfc22abe552ebcc2549639a2e8f1 = module_5f7abfc22abe552ebcc2549639a2e8f1;
    boost::python::scope().attr("num_predef_pp_entity_ids") = ::clang::serialization::NUM_PREDEF_PP_ENTITY_IDS;
}