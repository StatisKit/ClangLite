#include "_clanglite.h"


void wrapper_8dff7489d4cf55338c9ec5a38967e457()
{

    std::string name_21ee8db290f35815a57c7bf74dca851d = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".boost");
    boost::python::object module_21ee8db290f35815a57c7bf74dca851d(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_21ee8db290f35815a57c7bf74dca851d.c_str()))));
    boost::python::scope().attr("boost") = module_21ee8db290f35815a57c7bf74dca851d;
    boost::python::scope scope_21ee8db290f35815a57c7bf74dca851d = module_21ee8db290f35815a57c7bf74dca851d;
    std::string name_fc29b231afcc5a6587b428f2bab37266 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".python");
    boost::python::object module_fc29b231afcc5a6587b428f2bab37266(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fc29b231afcc5a6587b428f2bab37266.c_str()))));
    boost::python::scope().attr("python") = module_fc29b231afcc5a6587b428f2bab37266;
    boost::python::scope scope_fc29b231afcc5a6587b428f2bab37266 = module_fc29b231afcc5a6587b428f2bab37266;
    std::string name_a419d5cbf59754c3b6ff768cae737af0 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".objects");
    boost::python::object module_a419d5cbf59754c3b6ff768cae737af0(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a419d5cbf59754c3b6ff768cae737af0.c_str()))));
    boost::python::scope().attr("objects") = module_a419d5cbf59754c3b6ff768cae737af0;
    boost::python::scope scope_a419d5cbf59754c3b6ff768cae737af0 = module_a419d5cbf59754c3b6ff768cae737af0;
}