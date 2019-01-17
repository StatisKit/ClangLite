#include "_clanglite.h"

class ::clang::QualType  (::clang::ArrayType::*method_pointer_b97e156b94cf50cda50477b0d236636a)()const= &::clang::ArrayType::getElementType;
unsigned int  (::clang::ArrayType::*method_pointer_e6278be9114a53939cf3c5aebfcfedfb)()const= &::clang::ArrayType::getIndexTypeCVRQualifiers;
bool  (*method_pointer_0af6cded331f51059bbaf1cbb4f8e66a)(class ::clang::Type const *)= ::clang::ArrayType::classof;


void wrapper_7981b6362f50522ab01234005fa1e76a(pybind11::module& module)
{

    pybind11::class_<class ::clang::ArrayType, autowig::HolderType< class ::clang::ArrayType >::Type, class ::clang::Type > class_7981b6362f50522ab01234005fa1e76a(module, "ArrayType", "");
    class_7981b6362f50522ab01234005fa1e76a.def("get_element_type", method_pointer_b97e156b94cf50cda50477b0d236636a, "");
    class_7981b6362f50522ab01234005fa1e76a.def("get_index_type_cvr_qualifiers", method_pointer_e6278be9114a53939cf3c5aebfcfedfb, "");
    class_7981b6362f50522ab01234005fa1e76a.def_static("classof", method_pointer_0af6cded331f51059bbaf1cbb4f8e66a, "");

}