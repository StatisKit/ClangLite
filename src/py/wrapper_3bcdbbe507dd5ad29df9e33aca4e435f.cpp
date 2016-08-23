#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_3bcdbbe507dd5ad29df9e33aca4e435f()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    void  (::clang::QualType::*method_pointer_b37b14d8ae8b550aa4c65eae02c9917d)() = &::clang::QualType::addConst;
    void  (::clang::QualType::*method_pointer_46d58a7e38c756d6b136fac0f685c4b8)(unsigned int ) = &::clang::QualType::addFastQualifiers;
    void  (::clang::QualType::*method_pointer_6b021dafa1775917966a4a02d47751ee)() = &::clang::QualType::addRestrict;
    void  (::clang::QualType::*method_pointer_5aa9dacd7bdd59bcb25a1a1c35b8cedc)() = &::clang::QualType::addVolatile;
    void  (::clang::QualType::*method_pointer_4bfd435a2acf55f29ee2b10d0b17aa05)() const = &::clang::QualType::dump;
    unsigned int  (::clang::QualType::*method_pointer_6cf4cff318785df8a08f6f35ce7fc23b)() const = &::clang::QualType::getAddressSpace;
    unsigned int  (::clang::QualType::*method_pointer_7b841e7a6de2593e9637be3c193e6c60)() const = &::clang::QualType::getCVRQualifiers;
    unsigned int  (::clang::QualType::*method_pointer_94ffba2b66b1533a8dd9ca5f37f5c9ba)() const = &::clang::QualType::getLocalCVRQualifiers;
    unsigned int  (::clang::QualType::*method_pointer_53a800ff5aef50f982cad3ea50b73ea4)() const = &::clang::QualType::getLocalFastQualifiers;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_ab00fe43b77d5de1a8ab2669713a0023)() const = &::clang::QualType::getTypePtr;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_6cc6b9a31a5a5c0b853bb0f94aa644e3)() const = &::clang::QualType::getTypePtrOrNull;
    bool  (::clang::QualType::*method_pointer_34cb91cc64a855f2937486357e525684)() const = &::clang::QualType::hasLocalNonFastQualifiers;
    bool  (::clang::QualType::*method_pointer_dcf8dee5214755a2b2395c74f2e75fbc)() const = &::clang::QualType::hasLocalQualifiers;
    bool  (::clang::QualType::*method_pointer_1cae8228df5951b2bd4efdf242545fc7)() const = &::clang::QualType::hasNonTrivialObjCLifetime;
    bool  (::clang::QualType::*method_pointer_93ef9bf15dd75aaa9fd743f83f5f1012)() const = &::clang::QualType::hasQualifiers;
    bool  (::clang::QualType::*method_pointer_d36a5c6699875c4cad6add73f4f6b13a)() const = &::clang::QualType::hasStrongOrWeakObjCLifetime;
    bool  (::clang::QualType::*method_pointer_7004094f6d5358cab3a402ba3eb2ebc1)() const = &::clang::QualType::isCForbiddenLValueType;
    bool  (::clang::QualType::*method_pointer_1f1df51abae45ad8b0f8e6db2f268bc7)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX11PODType;
    bool  (::clang::QualType::*method_pointer_cfe11d6437675ba7b45c0f444e81b6fc)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX98PODType;
    bool  (::clang::QualType::*method_pointer_5a9da373f730512a9942bb70821cde8e)() const = &::clang::QualType::isCanonical;
    bool  (::clang::QualType::*method_pointer_f98d750083435362a88e26de04a79ce7)() const = &::clang::QualType::isCanonicalAsParam;
    bool  (::clang::QualType::*method_pointer_8799ce87e55257eba87ad9a1f2080126)() const = &::clang::QualType::isConstQualified;
    bool  (::clang::QualType::*method_pointer_d7ea90283dd2540aaf65295f54835638)(class ::clang::ASTContext  &) const = &::clang::QualType::isConstant;
    bool  (::clang::QualType::*method_pointer_aaf7c4402bae5288883387c11a18e985)() const = &::clang::QualType::isLocalConstQualified;
    bool  (::clang::QualType::*method_pointer_777fa2e09534522a895af56a676975e1)() const = &::clang::QualType::isLocalRestrictQualified;
    bool  (::clang::QualType::*method_pointer_25bc90de0e5251218f516880fc343fbc)() const = &::clang::QualType::isLocalVolatileQualified;
    bool  (::clang::QualType::*method_pointer_6e06bc96a33f5c3f8bf68a5008fb01ed)() const = &::clang::QualType::isNull;
    bool  (::clang::QualType::*method_pointer_9d306c2c60dd5047ae6ac88cf0967e66)() const = &::clang::QualType::isObjCGCStrong;
    bool  (::clang::QualType::*method_pointer_8d3d64b8575f56209548a8c19517b552)() const = &::clang::QualType::isObjCGCWeak;
    bool  (::clang::QualType::*method_pointer_0ea37adcef935c11a4ea026ef5a650b1)(class ::clang::ASTContext  &) const = &::clang::QualType::isPODType;
    bool  (::clang::QualType::*method_pointer_e97500c83e7b5fa7aef98a0a6ff8ebff)() const = &::clang::QualType::isRestrictQualified;
    bool  (::clang::QualType::*method_pointer_7ce2fc99cbe4562d93ff451b33ffd6c7)(class ::clang::ASTContext  &) const = &::clang::QualType::isTrivialType;
    bool  (::clang::QualType::*method_pointer_0301846ecfff5dc9a62585629baba5d8)(class ::clang::ASTContext  &) const = &::clang::QualType::isTriviallyCopyableType;
    bool  (::clang::QualType::*method_pointer_26b91e4862db5bcc853f54f7d3ef8ced)() const = &::clang::QualType::isVolatileQualified;
    void  (::clang::QualType::*method_pointer_fe2a4c998c2958adb4154cb727ce6287)(unsigned int ) = &::clang::QualType::removeLocalCVRQualifiers;
    void  (::clang::QualType::*method_pointer_6dde168218db59e1afbdf9801e011dad)() = &::clang::QualType::removeLocalConst;
    void  (::clang::QualType::*method_pointer_e6c98ff0e54c564486f3870b82d7f599)() = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_58279cc443c952da96a5ac01fa15fcec)(unsigned int ) = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_e8bf6b03514256898c359dd99f5ec40b)() = &::clang::QualType::removeLocalRestrict;
    void  (::clang::QualType::*method_pointer_cce1be0172f95f4e9b61dabb8bcaeffb)() = &::clang::QualType::removeLocalVolatile;
    void  (::clang::QualType::*method_pointer_0523287e29785e68934807f3965b0fd1)(unsigned int ) = &::clang::QualType::setLocalFastQualifiers;
    boost::python::class_< class ::clang::QualType, autowig::HeldType< class ::clang::QualType >, boost::noncopyable > class_3bcdbbe507dd5ad29df9e33aca4e435f("QualType", "", boost::python::no_init);
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_const", method_pointer_b37b14d8ae8b550aa4c65eae02c9917d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_fast_qualifiers", method_pointer_46d58a7e38c756d6b136fac0f685c4b8, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_restrict", method_pointer_6b021dafa1775917966a4a02d47751ee, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_volatile", method_pointer_5aa9dacd7bdd59bcb25a1a1c35b8cedc, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("dump", method_pointer_4bfd435a2acf55f29ee2b10d0b17aa05, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_address_space", method_pointer_6cf4cff318785df8a08f6f35ce7fc23b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_cvr_qualifiers", method_pointer_7b841e7a6de2593e9637be3c193e6c60, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_cvr_qualifiers", method_pointer_94ffba2b66b1533a8dd9ca5f37f5c9ba, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_fast_qualifiers", method_pointer_53a800ff5aef50f982cad3ea50b73ea4, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr", method_pointer_ab00fe43b77d5de1a8ab2669713a0023, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr_or_null", method_pointer_6cc6b9a31a5a5c0b853bb0f94aa644e3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_non_fast_qualifiers", method_pointer_34cb91cc64a855f2937486357e525684, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_qualifiers", method_pointer_dcf8dee5214755a2b2395c74f2e75fbc, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_non_trivial_obj_c_lifetime", method_pointer_1cae8228df5951b2bd4efdf242545fc7, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_qualifiers", method_pointer_93ef9bf15dd75aaa9fd743f83f5f1012, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_strong_or_weak_obj_c_lifetime", method_pointer_d36a5c6699875c4cad6add73f4f6b13a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_c_forbidden_l_value_type", method_pointer_7004094f6d5358cab3a402ba3eb2ebc1, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx11pod_type", method_pointer_1f1df51abae45ad8b0f8e6db2f268bc7, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx98pod_type", method_pointer_cfe11d6437675ba7b45c0f444e81b6fc, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical", method_pointer_5a9da373f730512a9942bb70821cde8e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical_as_param", method_pointer_f98d750083435362a88e26de04a79ce7, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_const_qualified", method_pointer_8799ce87e55257eba87ad9a1f2080126, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_constant", method_pointer_d7ea90283dd2540aaf65295f54835638, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_const_qualified", method_pointer_aaf7c4402bae5288883387c11a18e985, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_restrict_qualified", method_pointer_777fa2e09534522a895af56a676975e1, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_volatile_qualified", method_pointer_25bc90de0e5251218f516880fc343fbc, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_null", method_pointer_6e06bc96a33f5c3f8bf68a5008fb01ed, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_strong", method_pointer_9d306c2c60dd5047ae6ac88cf0967e66, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_weak", method_pointer_8d3d64b8575f56209548a8c19517b552, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_pod_type", method_pointer_0ea37adcef935c11a4ea026ef5a650b1, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_restrict_qualified", method_pointer_e97500c83e7b5fa7aef98a0a6ff8ebff, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivial_type", method_pointer_7ce2fc99cbe4562d93ff451b33ffd6c7, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivially_copyable_type", method_pointer_0301846ecfff5dc9a62585629baba5d8, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_volatile_qualified", method_pointer_26b91e4862db5bcc853f54f7d3ef8ced, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_cvr_qualifiers", method_pointer_fe2a4c998c2958adb4154cb727ce6287, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_const", method_pointer_6dde168218db59e1afbdf9801e011dad, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_e6c98ff0e54c564486f3870b82d7f599, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_58279cc443c952da96a5ac01fa15fcec, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_restrict", method_pointer_e8bf6b03514256898c359dd99f5ec40b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_volatile", method_pointer_cce1be0172f95f4e9b61dabb8bcaeffb, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("set_local_fast_qualifiers", method_pointer_0523287e29785e68934807f3965b0fd1, "");

}