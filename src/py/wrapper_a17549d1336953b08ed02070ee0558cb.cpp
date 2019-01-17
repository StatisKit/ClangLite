#include "_clanglite.h"

bool  (::clang::RValueReferenceType::*method_pointer_1ae5834ea12b53f6a176efd14d4d1fa3)()const= &::clang::RValueReferenceType::isSugared;
class ::clang::QualType  (::clang::RValueReferenceType::*method_pointer_6852eaf3b71758da9fa0c162078568f8)()const= &::clang::RValueReferenceType::desugar;
bool  (*method_pointer_9161c083b2455549b2c22476becabef9)(class ::clang::Type const *)= ::clang::RValueReferenceType::classof;


void wrapper_a17549d1336953b08ed02070ee0558cb(pybind11::module& module)
{

    pybind11::class_<class ::clang::RValueReferenceType, autowig::HolderType< class ::clang::RValueReferenceType >::Type, class ::clang::ReferenceType > class_a17549d1336953b08ed02070ee0558cb(module, "RValueReferenceType", "");
    class_a17549d1336953b08ed02070ee0558cb.def("is_sugared", method_pointer_1ae5834ea12b53f6a176efd14d4d1fa3, "");
    class_a17549d1336953b08ed02070ee0558cb.def("desugar", method_pointer_6852eaf3b71758da9fa0c162078568f8, "");
    class_a17549d1336953b08ed02070ee0558cb.def_static("classof", method_pointer_9161c083b2455549b2c22476becabef9, "");

}