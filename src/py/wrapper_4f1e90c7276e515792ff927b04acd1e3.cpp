#include "_clanglite.h"

class ::clang::ASTUnit * (*function_pointer_4f1e90c7276e515792ff927b04acd1e3)(class ::pybind11::object , class ::pybind11::object ) = ::clanglite::build_ast_from_code_with_args;


void wrapper_4f1e90c7276e515792ff927b04acd1e3(pybind11::module& module)
{

    module.def("build_ast_from_code_with_args", function_pointer_4f1e90c7276e515792ff927b04acd1e3, pybind11::return_value_policy::reference, "");
}