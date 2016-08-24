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
        static bool  function_c7a80bd86a285c0e95d44ea0c62b2828(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator<(parameter_0, parameter_1); }
        static bool  function_be65d456fda8533cad9f5b5e187a6fd1(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator>(parameter_0, parameter_1); }
        static bool  function_e50fa2ba44f6561a83b9cf49ee18e392(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator>=(parameter_0, parameter_1); }
        static bool  function_f48a8c64cb1e529ca3d6616e4d142e56(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator==(parameter_0, parameter_1); }
        static bool  function_d0273647b3295f8390a4ec9383d825c0(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator<=(parameter_0, parameter_1); }
        static bool  function_f8a8d74625cf5d7c9bb5fe579eff4680(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator!=(parameter_0, parameter_1); }
        static class ::boost::python::str  function_6644532ee8155ce69b642db5d794f104(class ::llvm::StringRef  * parameter_0)
        { return ::clanglite::str(parameter_0); }
    };
    boost::python::class_< class ::llvm::StringRef, autowig::HeldType< class ::llvm::StringRef > > class_349b01a7525f5245a8ca7e0497dd56cd("StringRef", "", boost::python::no_init);
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__lt__", function_group::function_c7a80bd86a285c0e95d44ea0c62b2828, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__gt__", function_group::function_be65d456fda8533cad9f5b5e187a6fd1, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__ge__", function_group::function_e50fa2ba44f6561a83b9cf49ee18e392, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__eq__", function_group::function_f48a8c64cb1e529ca3d6616e4d142e56, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__le__", function_group::function_d0273647b3295f8390a4ec9383d825c0, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__neq__", function_group::function_f8a8d74625cf5d7c9bb5fe579eff4680, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("str", function_group::function_6644532ee8155ce69b642db5d794f104, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def_readonly("npos", ::llvm::StringRef::npos, "");

}