#include "_clanglite.h"

class ::clang::QualType  (::clang::PointerType::*method_pointer_7021b7996796525db4137ebe32e04d8c)()const= &::clang::PointerType::getPointeeType;
bool  (::clang::PointerType::*method_pointer_e3ff63a8111a5ef2b6b6802f060ef9a8)()const= &::clang::PointerType::isSugared;
class ::clang::QualType  (::clang::PointerType::*method_pointer_b3a12e54b87b572591874024e45bb43f)()const= &::clang::PointerType::desugar;
bool  (*method_pointer_c5412972a3fb530f9aa6397a506b069b)(class ::clang::Type const *)= ::clang::PointerType::classof;

namespace autowig {
}

void wrapper_c36c84c61d245be2a9de47ae3c87a824(pybind11::module& module)
{

    pybind11::class_<class ::clang::PointerType, autowig::HolderType< class ::clang::PointerType >::Type, class ::clang::Type > class_c36c84c61d245be2a9de47ae3c87a824(module, "PointerType", "");
    class_c36c84c61d245be2a9de47ae3c87a824.def("get_pointee_type", method_pointer_7021b7996796525db4137ebe32e04d8c, "");
    class_c36c84c61d245be2a9de47ae3c87a824.def("is_sugared", method_pointer_e3ff63a8111a5ef2b6b6802f060ef9a8, "");
    class_c36c84c61d245be2a9de47ae3c87a824.def("desugar", method_pointer_b3a12e54b87b572591874024e45bb43f, "");
    class_c36c84c61d245be2a9de47ae3c87a824.def_static("classof", method_pointer_c5412972a3fb530f9aa6397a506b069b, "");

}