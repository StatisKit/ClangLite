#include "_clanglite.h"

class ::clang::EnumDecl * (::clang::EnumType::*method_pointer_3ca0ced41f6757b3be086535ca224793)()const= &::clang::EnumType::getDecl;
bool  (::clang::EnumType::*method_pointer_18da273eda295f78a61b3e77c15b228e)()const= &::clang::EnumType::isSugared;
class ::clang::QualType  (::clang::EnumType::*method_pointer_af776cb35ddd5f469d1adc1e6fad1851)()const= &::clang::EnumType::desugar;
bool  (*method_pointer_2e170401af7f57e69168a4c65968da36)(class ::clang::Type const *)= ::clang::EnumType::classof;

namespace autowig {
}

void wrapper_434f2e3471bb55ffb2ed175a1ab61e17(pybind11::module& module)
{

    pybind11::class_<class ::clang::EnumType, autowig::HolderType< class ::clang::EnumType >::Type, class ::clang::TagType > class_434f2e3471bb55ffb2ed175a1ab61e17(module, "EnumType", "");
    class_434f2e3471bb55ffb2ed175a1ab61e17.def("get_decl", method_pointer_3ca0ced41f6757b3be086535ca224793, pybind11::return_value_policy::reference_internal, "");
    class_434f2e3471bb55ffb2ed175a1ab61e17.def("is_sugared", method_pointer_18da273eda295f78a61b3e77c15b228e, "");
    class_434f2e3471bb55ffb2ed175a1ab61e17.def("desugar", method_pointer_af776cb35ddd5f469d1adc1e6fad1851, "");
    class_434f2e3471bb55ffb2ed175a1ab61e17.def_static("classof", method_pointer_2e170401af7f57e69168a4c65968da36, "");

}