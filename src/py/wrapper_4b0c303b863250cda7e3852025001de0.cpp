#include "_clanglite.h"

class ::clang::QualType  (::clang::PipeType::*method_pointer_a28dac01f14c563f851694931b746d7d)()const= &::clang::PipeType::getElementType;
bool  (::clang::PipeType::*method_pointer_c4102d0df09056e2ad4b8622528a95fd)()const= &::clang::PipeType::isSugared;
class ::clang::QualType  (::clang::PipeType::*method_pointer_7689b76cdf4e5a77b71e2b0c7c988bd8)()const= &::clang::PipeType::desugar;
bool  (*method_pointer_81a6d05534945367b64c62d70e0e00cb)(class ::clang::Type const *)= ::clang::PipeType::classof;
bool  (::clang::PipeType::*method_pointer_61145c82bd4f5972bc8ab737f729e741)()const= &::clang::PipeType::isReadOnly;


void wrapper_4b0c303b863250cda7e3852025001de0(pybind11::module& module)
{

    pybind11::class_<class ::clang::PipeType, autowig::HolderType< class ::clang::PipeType >::Type, class ::clang::Type > class_4b0c303b863250cda7e3852025001de0(module, "PipeType", "");
    class_4b0c303b863250cda7e3852025001de0.def("get_element_type", method_pointer_a28dac01f14c563f851694931b746d7d, "");
    class_4b0c303b863250cda7e3852025001de0.def("is_sugared", method_pointer_c4102d0df09056e2ad4b8622528a95fd, "");
    class_4b0c303b863250cda7e3852025001de0.def("desugar", method_pointer_7689b76cdf4e5a77b71e2b0c7c988bd8, "");
    class_4b0c303b863250cda7e3852025001de0.def_static("classof", method_pointer_81a6d05534945367b64c62d70e0e00cb, "");
    class_4b0c303b863250cda7e3852025001de0.def("is_read_only", method_pointer_61145c82bd4f5972bc8ab737f729e741, "");

}