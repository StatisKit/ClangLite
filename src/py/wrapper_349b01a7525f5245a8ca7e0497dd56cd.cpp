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
        static bool  function_b8a582cd265156fcbdc3e5a289a06cfd(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator<=(parameter_0, parameter_1); }
        static bool  function_c5ef1d76a6ad5e26917eaa0000ebddcc(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator==(parameter_0, parameter_1); }
        static bool  function_bf1ea5d3b6db5895955928bb449f01d0(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator>(parameter_0, parameter_1); }
        static bool  function_22bedc4fe8025b198cfad057292d83ea(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator!=(parameter_0, parameter_1); }
        static bool  function_c01a5fb08d9f515788b31d666dd1d002(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator>=(parameter_0, parameter_1); }
        static bool  function_f59e3eb88fb55aae84b36c0db4c26ab4(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator<(parameter_0, parameter_1); }
        static class ::boost::python::str  function_fa95f5c73aba574d8f5587a7a525019e(class ::llvm::StringRef  * parameter_0)
        { return ::clanglite::str(parameter_0); }
    };
    boost::python::class_< class ::llvm::StringRef, autowig::HeldType< class ::llvm::StringRef > > class_349b01a7525f5245a8ca7e0497dd56cd("StringRef", "", boost::python::no_init);
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__le__", function_group::function_b8a582cd265156fcbdc3e5a289a06cfd, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__eq__", function_group::function_c5ef1d76a6ad5e26917eaa0000ebddcc, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__gt__", function_group::function_bf1ea5d3b6db5895955928bb449f01d0, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__neq__", function_group::function_22bedc4fe8025b198cfad057292d83ea, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__ge__", function_group::function_c01a5fb08d9f515788b31d666dd1d002, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__lt__", function_group::function_f59e3eb88fb55aae84b36c0db4c26ab4, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("str", function_group::function_fa95f5c73aba574d8f5587a7a525019e, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def_readonly("npos", ::llvm::StringRef::npos, "");

}