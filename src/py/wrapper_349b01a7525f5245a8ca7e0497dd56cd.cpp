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
        static bool  function_5d292cd940fa562d9c45d5b09cf5c65b(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator<=(parameter_0, parameter_1); }
        static bool  function_810a894b1e0f529f8dc130af3379adc0(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator==(parameter_0, parameter_1); }
        static bool  function_68a8ede1f9a0562f9b4013cf9a51e5e2(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator>=(parameter_0, parameter_1); }
        static bool  function_467666f8049c5b3a819bfa23791ac92d(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator<(parameter_0, parameter_1); }
        static bool  function_248b9926a40a5351847dab3bfe5bc6a9(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator>(parameter_0, parameter_1); }
        static bool  function_78e6e51808c65f25aeaf13b32650c4eb(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator!=(parameter_0, parameter_1); }
        static class ::boost::python::str  function_eaeffb135120539c853b94080c504c62(class ::llvm::StringRef  * parameter_0)
        { return ::clanglite::str(parameter_0); }
    };
    boost::python::class_< class ::llvm::StringRef, autowig::HeldType< class ::llvm::StringRef > > class_349b01a7525f5245a8ca7e0497dd56cd("StringRef", "", boost::python::no_init);
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__le__", function_group::function_5d292cd940fa562d9c45d5b09cf5c65b, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__eq__", function_group::function_810a894b1e0f529f8dc130af3379adc0, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__ge__", function_group::function_68a8ede1f9a0562f9b4013cf9a51e5e2, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__lt__", function_group::function_467666f8049c5b3a819bfa23791ac92d, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__gt__", function_group::function_248b9926a40a5351847dab3bfe5bc6a9, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__neq__", function_group::function_78e6e51808c65f25aeaf13b32650c4eb, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("str", function_group::function_eaeffb135120539c853b94080c504c62, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def_readonly("npos", ::llvm::StringRef::npos, "");

}