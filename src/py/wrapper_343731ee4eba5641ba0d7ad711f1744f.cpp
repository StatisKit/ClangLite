#include "_clanglite.h"

bool  (::clang::AutoType::*method_pointer_de0a3b96d4815be7b60dacb054abd96b)()const= &::clang::AutoType::isDecltypeAuto;
bool  (::clang::AutoType::*method_pointer_5b463201522750ee986f1f1558fa5caa)()const= &::clang::AutoType::isSugared;
class ::clang::QualType  (::clang::AutoType::*method_pointer_60eb018b23e2515aaa4a7ce2831e6f3f)()const= &::clang::AutoType::desugar;
class ::clang::QualType  (::clang::AutoType::*method_pointer_29c74fdc996b586d8e0c97a9801cc064)()const= &::clang::AutoType::getDeducedType;
bool  (::clang::AutoType::*method_pointer_727dc1f261325c19b899b5076259e761)()const= &::clang::AutoType::isDeduced;
bool  (*method_pointer_c30808f8af3a5cf2a526472cb1fc6d79)(class ::clang::Type const *)= ::clang::AutoType::classof;

namespace autowig {
}

void wrapper_343731ee4eba5641ba0d7ad711f1744f(pybind11::module& module)
{

    pybind11::class_<class ::clang::AutoType, autowig::HolderType< class ::clang::AutoType >::Type, class ::clang::Type > class_343731ee4eba5641ba0d7ad711f1744f(module, "AutoType", "Represents a C++11 auto or C++14 decltype(auto) type.\n\nThese types are usually a placeholder for a deduced type. However,\nbefore the initializer is attached, or (usually) if the initializer is\ntype-dependent, there is no deduced type and an auto type is canonical.\nIn the latter case, it is also a dependent type.\n\n");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_decltype_auto", method_pointer_de0a3b96d4815be7b60dacb054abd96b, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_sugared", method_pointer_5b463201522750ee986f1f1558fa5caa, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("desugar", method_pointer_60eb018b23e2515aaa4a7ce2831e6f3f, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("get_deduced_type", method_pointer_29c74fdc996b586d8e0c97a9801cc064, "Get the type deduced for this auto type, or null if it’s either not been\ndeduced or was deduced to a dependent type.\n\n:Return Type:\n    :cpp:class:`::clang::QualType`\n\n");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_deduced", method_pointer_727dc1f261325c19b899b5076259e761, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def_static("classof", method_pointer_c30808f8af3a5cf2a526472cb1fc6d79, "");

}