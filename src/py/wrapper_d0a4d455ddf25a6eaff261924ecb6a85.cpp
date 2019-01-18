#include "_clanglite.h"

bool  (::clang::FunctionNoProtoType::*method_pointer_ecc5ed301c775d62a6f5af09361eb6dd)()const= &::clang::FunctionNoProtoType::isSugared;
class ::clang::QualType  (::clang::FunctionNoProtoType::*method_pointer_15ea3562414d5b9c8be2bf144c80e054)()const= &::clang::FunctionNoProtoType::desugar;
bool  (*method_pointer_3a1685f7e81552eb81ef07faedd449c5)(class ::clang::Type const *)= ::clang::FunctionNoProtoType::classof;

namespace autowig {
}

void wrapper_d0a4d455ddf25a6eaff261924ecb6a85(pybind11::module& module)
{

    pybind11::class_<class ::clang::FunctionNoProtoType, autowig::HolderType< class ::clang::FunctionNoProtoType >::Type, class ::clang::FunctionType > class_d0a4d455ddf25a6eaff261924ecb6a85(module, "FunctionNoProtoType", "");
    class_d0a4d455ddf25a6eaff261924ecb6a85.def("is_sugared", method_pointer_ecc5ed301c775d62a6f5af09361eb6dd, "");
    class_d0a4d455ddf25a6eaff261924ecb6a85.def("desugar", method_pointer_15ea3562414d5b9c8be2bf144c80e054, "");
    class_d0a4d455ddf25a6eaff261924ecb6a85.def_static("classof", method_pointer_3a1685f7e81552eb81ef07faedd449c5, "");

}