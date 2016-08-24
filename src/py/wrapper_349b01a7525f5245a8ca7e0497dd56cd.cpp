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
        static bool  function_c9f931c28d525c6a858ef6f6e8319a72(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator<=(parameter_0, parameter_1); }
        static bool  function_5a20080eb7f45879a07071328275114d(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator==(parameter_0, parameter_1); }
        static bool  function_5e328cb7789159779808b0dd456b9e4e(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator>=(parameter_0, parameter_1); }
        static bool  function_1dfbfb0171b75f269bbc743a0b428113(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator!=(parameter_0, parameter_1); }
        static bool  function_6f2b9133378653bda83dd61ee6072e05(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator>(parameter_0, parameter_1); }
        static bool  function_373ef0ffa71254b0ab075a1c1da57c96(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator<(parameter_0, parameter_1); }
        static class ::boost::python::str  function_d9223de37702581d9d83319be01b6691(class ::llvm::StringRef  * parameter_0)
        { return ::clanglite::str(parameter_0); }
    };
    boost::python::class_< class ::llvm::StringRef, autowig::HeldType< class ::llvm::StringRef > > class_349b01a7525f5245a8ca7e0497dd56cd("StringRef", "", boost::python::no_init);
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__le__", function_group::function_c9f931c28d525c6a858ef6f6e8319a72, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__eq__", function_group::function_5a20080eb7f45879a07071328275114d, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__ge__", function_group::function_5e328cb7789159779808b0dd456b9e4e, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__neq__", function_group::function_1dfbfb0171b75f269bbc743a0b428113, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__gt__", function_group::function_6f2b9133378653bda83dd61ee6072e05, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__lt__", function_group::function_373ef0ffa71254b0ab075a1c1da57c96, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("str", function_group::function_d9223de37702581d9d83319be01b6691, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def_readonly("npos", ::llvm::StringRef::npos, "");

}