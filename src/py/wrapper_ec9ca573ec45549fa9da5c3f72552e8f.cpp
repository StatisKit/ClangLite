#include "_clanglite.h"

class ::clang::RecordDecl * (::clang::RecordType::*method_pointer_ff6eda250e865262b9e3fd7b4e90752a)()const= &::clang::RecordType::getDecl;
bool  (::clang::RecordType::*method_pointer_fae75a2310125b40856980ede4c16072)()const= &::clang::RecordType::hasConstFields;
bool  (::clang::RecordType::*method_pointer_a8f2356e34e651bdb3c5627c71db89cb)()const= &::clang::RecordType::isSugared;
class ::clang::QualType  (::clang::RecordType::*method_pointer_f1d2a98a449159dcaf9735dac348000a)()const= &::clang::RecordType::desugar;
bool  (*method_pointer_1510631969c3579ba251a32c10d01ef3)(class ::clang::Type const *)= ::clang::RecordType::classof;

namespace autowig {
}

void wrapper_ec9ca573ec45549fa9da5c3f72552e8f(pybind11::module& module)
{

    pybind11::class_<class ::clang::RecordType, autowig::HolderType< class ::clang::RecordType >::Type, class ::clang::TagType > class_ec9ca573ec45549fa9da5c3f72552e8f(module, "RecordType", "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("get_decl", method_pointer_ff6eda250e865262b9e3fd7b4e90752a, pybind11::return_value_policy::reference_internal, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("has_const_fields", method_pointer_fae75a2310125b40856980ede4c16072, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("is_sugared", method_pointer_a8f2356e34e651bdb3c5627c71db89cb, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("desugar", method_pointer_f1d2a98a449159dcaf9735dac348000a, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def_static("classof", method_pointer_1510631969c3579ba251a32c10d01ef3, "");

}