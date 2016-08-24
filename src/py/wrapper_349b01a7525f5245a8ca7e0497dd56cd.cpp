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
        static bool  function_abddb368b6e95fbba00f9dbf3d266f0f(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator>(parameter_0, parameter_1); }
        static bool  function_2c2df2f35b0b50fc8a6390fa2313a350(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator>=(parameter_0, parameter_1); }
        static bool  function_4066a17f10515f8fabba10d7155c2554(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator!=(parameter_0, parameter_1); }
        static bool  function_f0aa800bc8cd5831aa02a898cd0ff0f6(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator<(parameter_0, parameter_1); }
        static bool  function_708296d5f683501ab5c39061c465fc00(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator==(parameter_0, parameter_1); }
        static bool  function_954d7f5202ee59ec880cc2781c83b9d0(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator<=(parameter_0, parameter_1); }
        static class ::boost::python::str  function_260b1cef389a5b43abf7624d7748da32(class ::llvm::StringRef  * parameter_0)
        { return ::clanglite::str(parameter_0); }
    };
    boost::python::class_< class ::llvm::StringRef, autowig::HeldType< class ::llvm::StringRef > > class_349b01a7525f5245a8ca7e0497dd56cd("StringRef", "", boost::python::no_init);
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__gt__", function_group::function_abddb368b6e95fbba00f9dbf3d266f0f, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__ge__", function_group::function_2c2df2f35b0b50fc8a6390fa2313a350, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__neq__", function_group::function_4066a17f10515f8fabba10d7155c2554, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__lt__", function_group::function_f0aa800bc8cd5831aa02a898cd0ff0f6, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__eq__", function_group::function_708296d5f683501ab5c39061c465fc00, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__le__", function_group::function_954d7f5202ee59ec880cc2781c83b9d0, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("str", function_group::function_260b1cef389a5b43abf7624d7748da32, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def_readonly("npos", ::llvm::StringRef::npos, "");

}