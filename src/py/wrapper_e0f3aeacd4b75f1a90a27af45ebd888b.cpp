#include "_clanglite.h"

class ::clang::QualType  (::clang::ParenType::*method_pointer_dd1bae29579d548384aecbd6050b960c)()const= &::clang::ParenType::getInnerType;
bool  (::clang::ParenType::*method_pointer_a7b287453222500aa4c939e3ba0d9d20)()const= &::clang::ParenType::isSugared;
class ::clang::QualType  (::clang::ParenType::*method_pointer_740de9d7c372547c91ca3a2f93b00248)()const= &::clang::ParenType::desugar;
bool  (*method_pointer_21be3abf0c1659f09cf5241140a41abb)(class ::clang::Type const *)= ::clang::ParenType::classof;

namespace autowig {
}

void wrapper_e0f3aeacd4b75f1a90a27af45ebd888b(pybind11::module& module)
{

    pybind11::class_<class ::clang::ParenType, autowig::HolderType< class ::clang::ParenType >::Type, class ::clang::Type > class_e0f3aeacd4b75f1a90a27af45ebd888b(module, "ParenType", "");
    class_e0f3aeacd4b75f1a90a27af45ebd888b.def("get_inner_type", method_pointer_dd1bae29579d548384aecbd6050b960c, "");
    class_e0f3aeacd4b75f1a90a27af45ebd888b.def("is_sugared", method_pointer_a7b287453222500aa4c939e3ba0d9d20, "");
    class_e0f3aeacd4b75f1a90a27af45ebd888b.def("desugar", method_pointer_740de9d7c372547c91ca3a2f93b00248, "");
    class_e0f3aeacd4b75f1a90a27af45ebd888b.def_static("classof", method_pointer_21be3abf0c1659f09cf5241140a41abb, "");

}