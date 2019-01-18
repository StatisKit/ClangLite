#include "_clanglite.h"

class ::clang::QualType  (::clang::DependentSizedExtVectorType::*method_pointer_f91f23f0fd375062ae158b25dcad6834)()const= &::clang::DependentSizedExtVectorType::getElementType;
class ::clang::SourceLocation  (::clang::DependentSizedExtVectorType::*method_pointer_f8a4f7dead185ec2b8e098f7bd4d6172)()const= &::clang::DependentSizedExtVectorType::getAttributeLoc;
bool  (::clang::DependentSizedExtVectorType::*method_pointer_137a2faf33fe59a59d5bc6fa22773297)()const= &::clang::DependentSizedExtVectorType::isSugared;
class ::clang::QualType  (::clang::DependentSizedExtVectorType::*method_pointer_ed6b22c67de15c75bc0fede3c2eb5ac2)()const= &::clang::DependentSizedExtVectorType::desugar;
bool  (*method_pointer_739102925faa5693a39e5e597c74456a)(class ::clang::Type const *)= ::clang::DependentSizedExtVectorType::classof;

namespace autowig {
}

void wrapper_7d10a38ead5950acb903ebd8bb882a64(pybind11::module& module)
{

    pybind11::class_<class ::clang::DependentSizedExtVectorType, autowig::HolderType< class ::clang::DependentSizedExtVectorType >::Type, class ::clang::Type > class_7d10a38ead5950acb903ebd8bb882a64(module, "DependentSizedExtVectorType", "");
    class_7d10a38ead5950acb903ebd8bb882a64.def("get_element_type", method_pointer_f91f23f0fd375062ae158b25dcad6834, "");
    class_7d10a38ead5950acb903ebd8bb882a64.def("get_attribute_loc", method_pointer_f8a4f7dead185ec2b8e098f7bd4d6172, "");
    class_7d10a38ead5950acb903ebd8bb882a64.def("is_sugared", method_pointer_137a2faf33fe59a59d5bc6fa22773297, "");
    class_7d10a38ead5950acb903ebd8bb882a64.def("desugar", method_pointer_ed6b22c67de15c75bc0fede3c2eb5ac2, "");
    class_7d10a38ead5950acb903ebd8bb882a64.def_static("classof", method_pointer_739102925faa5693a39e5e597c74456a, "");

}