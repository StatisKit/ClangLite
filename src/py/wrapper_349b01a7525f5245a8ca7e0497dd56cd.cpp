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
        static bool  function_ae40af6663c158b182307f36121d5ab4(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator>=(parameter_0, parameter_1); }
        static bool  function_58dbca19ce8f571c9ed61cc0be2c225d(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator<(parameter_0, parameter_1); }
        static bool  function_accecec3615e5ed390764d02666302b1(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator<=(parameter_0, parameter_1); }
        static bool  function_6b65a3f182785dc288665ec385e5d3c8(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator>(parameter_0, parameter_1); }
        static bool  function_7e7e669bf344582189698b1ee97c43a0(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator==(parameter_0, parameter_1); }
        static bool  function_77c8b438c8655320a5f0f44d201b57d9(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator!=(parameter_0, parameter_1); }
        static class ::boost::python::str  function_7bb928feca9353c0a33d6685fb260b87(class ::llvm::StringRef  * parameter_0)
        { return ::clanglite::str(parameter_0); }
    };
    boost::python::class_< class ::llvm::StringRef, autowig::HeldType< class ::llvm::StringRef > > class_349b01a7525f5245a8ca7e0497dd56cd("StringRef", "", boost::python::no_init);
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__ge__", function_group::function_ae40af6663c158b182307f36121d5ab4, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__lt__", function_group::function_58dbca19ce8f571c9ed61cc0be2c225d, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__le__", function_group::function_accecec3615e5ed390764d02666302b1, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__gt__", function_group::function_6b65a3f182785dc288665ec385e5d3c8, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__eq__", function_group::function_7e7e669bf344582189698b1ee97c43a0, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__neq__", function_group::function_77c8b438c8655320a5f0f44d201b57d9, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("str", function_group::function_7bb928feca9353c0a33d6685fb260b87, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def_readonly("npos", ::llvm::StringRef::npos, "");

}