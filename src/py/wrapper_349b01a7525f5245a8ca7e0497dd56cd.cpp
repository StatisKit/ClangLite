#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_349b01a7525f5245a8ca7e0497dd56cd()
{

    std::string name_d1608489da065e6eadeb67121a123bdd = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".llvm");
    boost::python::object module_d1608489da065e6eadeb67121a123bdd(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_d1608489da065e6eadeb67121a123bdd.c_str()))));
    boost::python::scope().attr("llvm") = module_d1608489da065e6eadeb67121a123bdd;
    boost::python::scope scope_d1608489da065e6eadeb67121a123bdd = module_d1608489da065e6eadeb67121a123bdd;
    struct function_group
    {
        static bool  function_d5725e7d14475c96aaa28106e0f11f26(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator==(parameter_0, parameter_1); }
        static bool  function_a01ed4e5f70754c7992a14b540ef48c3(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator>(parameter_0, parameter_1); }
        static bool  function_91751d73cacb5c019d9ac516732e0316(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator!=(parameter_0, parameter_1); }
        static bool  function_c3211311de6b5e27819768cff12aa5a6(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator>=(parameter_0, parameter_1); }
        static bool  function_1d2678c3c82b5aec98ee610433dee5e8(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator<(parameter_0, parameter_1); }
        static bool  function_ed63f3e3883e58918c06d92e716cdaab(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator<=(parameter_0, parameter_1); }
        static class ::boost::python::str  function_1cf7158437e75d3584ffd53e86c0d5b9(class ::llvm::StringRef  * parameter_0)
        { return ::clanglite::str(parameter_0); }
    };
    boost::python::class_< class ::llvm::StringRef, autowig::HeldType< class ::llvm::StringRef > > class_349b01a7525f5245a8ca7e0497dd56cd("StringRef", "", boost::python::no_init);
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__eq__", function_group::function_d5725e7d14475c96aaa28106e0f11f26, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__gt__", function_group::function_a01ed4e5f70754c7992a14b540ef48c3, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__neq__", function_group::function_91751d73cacb5c019d9ac516732e0316, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__ge__", function_group::function_c3211311de6b5e27819768cff12aa5a6, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__lt__", function_group::function_1d2678c3c82b5aec98ee610433dee5e8, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__le__", function_group::function_ed63f3e3883e58918c06d92e716cdaab, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("str", function_group::function_1cf7158437e75d3584ffd53e86c0d5b9, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def_readonly("npos", ::llvm::StringRef::npos, "");

}