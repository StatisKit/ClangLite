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
        static bool  function_4deeb0b261585947a5a65144efa24e96(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator!=(parameter_0, parameter_1); }
        static bool  function_1beb1ff27b555be4bfab736a493fb278(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator<=(parameter_0, parameter_1); }
        static bool  function_c28bac8ffb66536c9b49f7d5bd8e4ba5(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator<(parameter_0, parameter_1); }
        static bool  function_8cbb4863148a5f77b0f3603b7b5cf62e(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator>=(parameter_0, parameter_1); }
        static bool  function_6947b9873cae563495a95bf03d2bbf9e(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator>(parameter_0, parameter_1); }
        static bool  function_4d9a0478b1225bb0bf5a04716eb62f2d(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator==(parameter_0, parameter_1); }
        static class ::boost::python::str  function_f1f61f21ecb75c7cb899889affebd0f2(class ::llvm::StringRef  * parameter_0)
        { return ::clanglite::str(parameter_0); }
    };
    boost::python::class_< class ::llvm::StringRef, autowig::HeldType< class ::llvm::StringRef > > class_349b01a7525f5245a8ca7e0497dd56cd("StringRef", "", boost::python::no_init);
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__neq__", function_group::function_4deeb0b261585947a5a65144efa24e96, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__le__", function_group::function_1beb1ff27b555be4bfab736a493fb278, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__lt__", function_group::function_c28bac8ffb66536c9b49f7d5bd8e4ba5, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__ge__", function_group::function_8cbb4863148a5f77b0f3603b7b5cf62e, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__gt__", function_group::function_6947b9873cae563495a95bf03d2bbf9e, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__eq__", function_group::function_4d9a0478b1225bb0bf5a04716eb62f2d, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("str", function_group::function_f1f61f21ecb75c7cb899889affebd0f2, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def_readonly("npos", ::llvm::StringRef::npos, "");

}