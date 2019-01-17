#include "_clanglite.h"

bool  (::clang::LValueReferenceType::*method_pointer_a392b76d939e5322901265b03d2455d2)()const= &::clang::LValueReferenceType::isSugared;
class ::clang::QualType  (::clang::LValueReferenceType::*method_pointer_bd233f6783815c9397b379d4eabe8bd7)()const= &::clang::LValueReferenceType::desugar;
bool  (*method_pointer_5fb415f086275c28931aad42f67f2430)(class ::clang::Type const *)= ::clang::LValueReferenceType::classof;


void wrapper_ca60b4fc83ce57b1b8f217896573c57c(pybind11::module& module)
{

    pybind11::class_<class ::clang::LValueReferenceType, autowig::HolderType< class ::clang::LValueReferenceType >::Type, class ::clang::ReferenceType > class_ca60b4fc83ce57b1b8f217896573c57c(module, "LValueReferenceType", "");
    class_ca60b4fc83ce57b1b8f217896573c57c.def("is_sugared", method_pointer_a392b76d939e5322901265b03d2455d2, "");
    class_ca60b4fc83ce57b1b8f217896573c57c.def("desugar", method_pointer_bd233f6783815c9397b379d4eabe8bd7, "");
    class_ca60b4fc83ce57b1b8f217896573c57c.def_static("classof", method_pointer_5fb415f086275c28931aad42f67f2430, "");

}