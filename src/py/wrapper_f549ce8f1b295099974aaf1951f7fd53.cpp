#include "_clanglite.h"

class ::clang::QualType  (::clang::VectorType::*method_pointer_ffcaa330e2dc535d95b40688e6d494fc)()const= &::clang::VectorType::getElementType;
unsigned int  (::clang::VectorType::*method_pointer_9b34064c120c5e4a8e79709be23a1e94)()const= &::clang::VectorType::getNumElements;
bool  (*method_pointer_e1976e64e9325da4ae729d86966be033)(unsigned int )= ::clang::VectorType::isVectorSizeTooLarge;
bool  (::clang::VectorType::*method_pointer_7b0d5ea7849b530ba95ee64a0ae7cf99)()const= &::clang::VectorType::isSugared;
class ::clang::QualType  (::clang::VectorType::*method_pointer_b4ac00710d675f7b9b91549eec4bc982)()const= &::clang::VectorType::desugar;
bool  (*method_pointer_2240ddb2f68f58d6a74904d9d1da833f)(class ::clang::Type const *)= ::clang::VectorType::classof;

namespace autowig {
}

void wrapper_f549ce8f1b295099974aaf1951f7fd53(pybind11::module& module)
{

    pybind11::class_<class ::clang::VectorType, autowig::HolderType< class ::clang::VectorType >::Type, class ::clang::Type > class_f549ce8f1b295099974aaf1951f7fd53(module, "VectorType", "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_element_type", method_pointer_ffcaa330e2dc535d95b40688e6d494fc, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_num_elements", method_pointer_9b34064c120c5e4a8e79709be23a1e94, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def_static("is_vector_size_too_large", method_pointer_e1976e64e9325da4ae729d86966be033, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_sugared", method_pointer_7b0d5ea7849b530ba95ee64a0ae7cf99, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("desugar", method_pointer_b4ac00710d675f7b9b91549eec4bc982, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def_static("classof", method_pointer_2240ddb2f68f58d6a74904d9d1da833f, "");

}