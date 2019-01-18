#include "_clanglite.h"

class ::clang::QualType  (::clang::BlockPointerType::*method_pointer_ac326caf5d225910bb57e1e4dd267deb)()const= &::clang::BlockPointerType::getPointeeType;
bool  (::clang::BlockPointerType::*method_pointer_e20a3b52bd94599cb72da0fb7563f41c)()const= &::clang::BlockPointerType::isSugared;
class ::clang::QualType  (::clang::BlockPointerType::*method_pointer_e0ec0b39968a557fa0c9739ee98a702f)()const= &::clang::BlockPointerType::desugar;
bool  (*method_pointer_547a4e01b42e58979c54e846ca51ca05)(class ::clang::Type const *)= ::clang::BlockPointerType::classof;

namespace autowig {
}

void wrapper_bda52e5bd7bb54feb63e41eb6b39b7c5(pybind11::module& module)
{

    pybind11::class_<class ::clang::BlockPointerType, autowig::HolderType< class ::clang::BlockPointerType >::Type, class ::clang::Type > class_bda52e5bd7bb54feb63e41eb6b39b7c5(module, "BlockPointerType", "");
    class_bda52e5bd7bb54feb63e41eb6b39b7c5.def("get_pointee_type", method_pointer_ac326caf5d225910bb57e1e4dd267deb, "");
    class_bda52e5bd7bb54feb63e41eb6b39b7c5.def("is_sugared", method_pointer_e20a3b52bd94599cb72da0fb7563f41c, "");
    class_bda52e5bd7bb54feb63e41eb6b39b7c5.def("desugar", method_pointer_e0ec0b39968a557fa0c9739ee98a702f, "");
    class_bda52e5bd7bb54feb63e41eb6b39b7c5.def_static("classof", method_pointer_547a4e01b42e58979c54e846ca51ca05, "");

}