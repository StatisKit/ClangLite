#include "_clanglite.h"

class ::clang::QualType  (::clang::AtomicType::*method_pointer_8542d97a617b5cdeb8d6ed7d86685dad)()const= &::clang::AtomicType::getValueType;
bool  (::clang::AtomicType::*method_pointer_8fbea8dda98a5d7eb74b5ae8bd6285d3)()const= &::clang::AtomicType::isSugared;
class ::clang::QualType  (::clang::AtomicType::*method_pointer_5580c407b40c50d9a5ddfefbc9ee3a3a)()const= &::clang::AtomicType::desugar;
bool  (*method_pointer_7eae5c9b687b5fc0b0acdffccf127e7f)(class ::clang::Type const *)= ::clang::AtomicType::classof;


void wrapper_17505392838a5ddf8a16f3bdbb8f586b(pybind11::module& module)
{

    pybind11::class_<class ::clang::AtomicType, autowig::HolderType< class ::clang::AtomicType >::Type, class ::clang::Type > class_17505392838a5ddf8a16f3bdbb8f586b(module, "AtomicType", "");
    class_17505392838a5ddf8a16f3bdbb8f586b.def("get_value_type", method_pointer_8542d97a617b5cdeb8d6ed7d86685dad, ":Return Type:\n    :cpp:class:`::clang::QualType`\n\n");
    class_17505392838a5ddf8a16f3bdbb8f586b.def("is_sugared", method_pointer_8fbea8dda98a5d7eb74b5ae8bd6285d3, "");
    class_17505392838a5ddf8a16f3bdbb8f586b.def("desugar", method_pointer_5580c407b40c50d9a5ddfefbc9ee3a3a, "");
    class_17505392838a5ddf8a16f3bdbb8f586b.def_static("classof", method_pointer_7eae5c9b687b5fc0b0acdffccf127e7f, "");

}