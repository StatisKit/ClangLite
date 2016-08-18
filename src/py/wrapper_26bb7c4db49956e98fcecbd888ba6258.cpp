#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

void wrapper_26bb7c4db49956e98fcecbd888ba6258()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    std::string name_0d1e4162cf3c52049f245fbfd6150626 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".thread_safety");
    boost::python::object module_0d1e4162cf3c52049f245fbfd6150626(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_0d1e4162cf3c52049f245fbfd6150626.c_str()))));
    boost::python::scope().attr("thread_safety") = module_0d1e4162cf3c52049f245fbfd6150626;
    boost::python::scope scope_0d1e4162cf3c52049f245fbfd6150626 = module_0d1e4162cf3c52049f245fbfd6150626;
    std::string name_40c195f7d86e5b52a7d4c9d1b3fca77f = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".til");
    boost::python::object module_40c195f7d86e5b52a7d4c9d1b3fca77f(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_40c195f7d86e5b52a7d4c9d1b3fca77f.c_str()))));
    boost::python::scope().attr("til") = module_40c195f7d86e5b52a7d4c9d1b3fca77f;
    boost::python::scope scope_40c195f7d86e5b52a7d4c9d1b3fca77f = module_40c195f7d86e5b52a7d4c9d1b3fca77f;
    boost::python::scope().attr("cop__min") = ::clang::threadSafety::til::COP_Min;
}