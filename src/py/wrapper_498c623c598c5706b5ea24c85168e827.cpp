#include "_clanglite.h"


void wrapper_498c623c598c5706b5ea24c85168e827()
{

    std::string name_21ee8db290f35815a57c7bf74dca851d = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".boost");
    boost::python::object module_21ee8db290f35815a57c7bf74dca851d(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_21ee8db290f35815a57c7bf74dca851d.c_str()))));
    boost::python::scope().attr("boost") = module_21ee8db290f35815a57c7bf74dca851d;
    boost::python::scope scope_21ee8db290f35815a57c7bf74dca851d = module_21ee8db290f35815a57c7bf74dca851d;
    std::string name_fc29b231afcc5a6587b428f2bab37266 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".python");
    boost::python::object module_fc29b231afcc5a6587b428f2bab37266(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fc29b231afcc5a6587b428f2bab37266.c_str()))));
    boost::python::scope().attr("python") = module_fc29b231afcc5a6587b428f2bab37266;
    boost::python::scope scope_fc29b231afcc5a6587b428f2bab37266 = module_fc29b231afcc5a6587b428f2bab37266;
    std::string name_0bad2e5cfdec5f1695656d4f0b1ba163 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".api");
    boost::python::object module_0bad2e5cfdec5f1695656d4f0b1ba163(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_0bad2e5cfdec5f1695656d4f0b1ba163.c_str()))));
    boost::python::scope().attr("api") = module_0bad2e5cfdec5f1695656d4f0b1ba163;
    boost::python::scope scope_0bad2e5cfdec5f1695656d4f0b1ba163 = module_0bad2e5cfdec5f1695656d4f0b1ba163;
}