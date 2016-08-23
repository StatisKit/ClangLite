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
    class ::clang::QualType  (::clang::QualType::*method_pointer_17df41cffb5251908c971b780190ee8d)() const = &::clang::QualType::IgnoreParens;
    void  (::clang::QualType::*method_pointer_3e5cfeb6409a5e37bd996f895c134c42)() = &::clang::QualType::addConst;
    void  (::clang::QualType::*method_pointer_50216a63b785547c89c1fb04203fece5)(unsigned int ) = &::clang::QualType::addFastQualifiers;
    void  (::clang::QualType::*method_pointer_0633a0d2b54f5c59aabbf1b016b61d2b)() = &::clang::QualType::addRestrict;
    void  (::clang::QualType::*method_pointer_6a7f40fb1bf651fe9ebec94c4835733c)() = &::clang::QualType::addVolatile;
    void  (::clang::QualType::*method_pointer_2d1085609a8a571294a5af7cb88ff4c3)() const = &::clang::QualType::dump;
    unsigned int  (::clang::QualType::*method_pointer_9c3c9e3acf4152ffbfbaf94e4a1b4ec4)() const = &::clang::QualType::getAddressSpace;
    unsigned int  (::clang::QualType::*method_pointer_4d76fec8028e5a35949b4f074a6ab9e6)() const = &::clang::QualType::getCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_6ede9cdcf12c50d19b976a08ca1951ee)() const = &::clang::QualType::getCanonicalType;
    unsigned int  (::clang::QualType::*method_pointer_933de75a68f2504b98b54ede4c51c36e)() const = &::clang::QualType::getLocalCVRQualifiers;
    unsigned int  (::clang::QualType::*method_pointer_64ee225671495d5f8f8c52dab7c0da3c)() const = &::clang::QualType::getLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_2f05ec56a6a65990b8a1d4ed488b281e)() const = &::clang::QualType::getLocalUnqualifiedType;
    class ::clang::QualType  (::clang::QualType::*method_pointer_799e97b078025a21a232e62b0204a910)() const = &::clang::QualType::getNonReferenceType;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_2287703b7ae5536f99cbd4d2b2800f56)() const = &::clang::QualType::getTypePtr;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_f7af9b87c9755f2f94606bce2e173804)() const = &::clang::QualType::getTypePtrOrNull;
    class ::clang::QualType  (::clang::QualType::*method_pointer_b87cb793733854c4b48dc50b2c32b56c)() const = &::clang::QualType::getUnqualifiedType;
    bool  (::clang::QualType::*method_pointer_e17a3161a1a358cca3d6f4722a57d477)() const = &::clang::QualType::hasLocalNonFastQualifiers;
    bool  (::clang::QualType::*method_pointer_994a17bf1f44532083659e35d4ffe0c1)() const = &::clang::QualType::hasLocalQualifiers;
    bool  (::clang::QualType::*method_pointer_65270d4d6e2751478347118abe71b427)() const = &::clang::QualType::hasNonTrivialObjCLifetime;
    bool  (::clang::QualType::*method_pointer_d929750ef58a5c14a5778d709aa23190)() const = &::clang::QualType::hasQualifiers;
    bool  (::clang::QualType::*method_pointer_a3f22a61b2265b41902c413f2bf135d4)() const = &::clang::QualType::hasStrongOrWeakObjCLifetime;
    bool  (::clang::QualType::*method_pointer_9f29ecfcab8f52d9928b4d50b910a583)(class ::clang::QualType ) const = &::clang::QualType::isAtLeastAsQualifiedAs;
    bool  (::clang::QualType::*method_pointer_1263b270385b5623a4c800a16bdaf139)() const = &::clang::QualType::isCForbiddenLValueType;
    bool  (::clang::QualType::*method_pointer_ac21172c699258688f368b818b91d99d)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX11PODType;
    bool  (::clang::QualType::*method_pointer_0646c8c2bff753f797e1b74037baa0ec)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX98PODType;
    bool  (::clang::QualType::*method_pointer_5b13d97182445bd484844e6d9c235a7e)() const = &::clang::QualType::isCanonical;
    bool  (::clang::QualType::*method_pointer_20707e7fc38659ebb4d139f5a9c942af)() const = &::clang::QualType::isCanonicalAsParam;
    bool  (::clang::QualType::*method_pointer_f46bf1a7ba5f5fe398f8ed6e7bc5b959)() const = &::clang::QualType::isConstQualified;
    bool  (::clang::QualType::*method_pointer_1483e3b0cd1152d098e4b41f7122b713)(class ::clang::ASTContext  &) const = &::clang::QualType::isConstant;
    bool  (::clang::QualType::*method_pointer_1651272c08b35eb88588f963f43105e9)() const = &::clang::QualType::isLocalConstQualified;
    bool  (::clang::QualType::*method_pointer_0afce3d5252151cca421e8e470c094fb)() const = &::clang::QualType::isLocalRestrictQualified;
    bool  (::clang::QualType::*method_pointer_641f410019275a25bad3cea1a9589574)() const = &::clang::QualType::isLocalVolatileQualified;
    bool  (::clang::QualType::*method_pointer_7d953859956f56d19d5412572e692482)(class ::clang::QualType ) const = &::clang::QualType::isMoreQualifiedThan;
    bool  (::clang::QualType::*method_pointer_a6bd7b8247df5feea6c779574a01dff5)() const = &::clang::QualType::isNull;
    bool  (::clang::QualType::*method_pointer_449b00913ac15a3688fa9d43fbf35556)() const = &::clang::QualType::isObjCGCStrong;
    bool  (::clang::QualType::*method_pointer_a117cfc563e05a848e3d1c5ee57ca031)() const = &::clang::QualType::isObjCGCWeak;
    bool  (::clang::QualType::*method_pointer_24f3bffd33ea585e9dec417dc9ba8d73)(class ::clang::ASTContext  &) const = &::clang::QualType::isPODType;
    bool  (::clang::QualType::*method_pointer_024e01f384f251a4ab5cc861512a092c)() const = &::clang::QualType::isRestrictQualified;
    bool  (::clang::QualType::*method_pointer_5f51405b6f1e569d974228b64789f530)(class ::clang::ASTContext  &) const = &::clang::QualType::isTrivialType;
    bool  (::clang::QualType::*method_pointer_a85863c9ad1356e79789875c6a06e6df)(class ::clang::ASTContext  &) const = &::clang::QualType::isTriviallyCopyableType;
    bool  (::clang::QualType::*method_pointer_1a34f5a4eff252b5b231e476c13e2126)() const = &::clang::QualType::isVolatileQualified;
    void  (::clang::QualType::*method_pointer_9916816ab0b059e385d9b85fa3bde996)(unsigned int ) = &::clang::QualType::removeLocalCVRQualifiers;
    void  (::clang::QualType::*method_pointer_211c2b0156af5a1baf2550b564641aa8)() = &::clang::QualType::removeLocalConst;
    void  (::clang::QualType::*method_pointer_6f27df51b43855bea527765d9262fbfa)() = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_1069107020435b189058d8e8d3c15ba5)(unsigned int ) = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_73fa131ad28d5318b5605e8e0beb1679)() = &::clang::QualType::removeLocalRestrict;
    void  (::clang::QualType::*method_pointer_3bb077d675755d2badd83c70c88c896a)() = &::clang::QualType::removeLocalVolatile;
    void  (::clang::QualType::*method_pointer_0479ec4438ae5bf9a8fc97cc6b9ca7da)(unsigned int ) = &::clang::QualType::setLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_8762452dfcd2584f8cba42e61393f5ba)(unsigned int ) const = &::clang::QualType::withCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_ce3a2d59bda75b9088cec5771115b4b8)() const = &::clang::QualType::withConst;
    class ::clang::QualType  (::clang::QualType::*method_pointer_2d2eeaf909b65aa59526effa7ce5f52b)(unsigned int ) const = &::clang::QualType::withExactLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_a198668e3a6e56578ab1fc249cbd2e2c)(unsigned int ) const = &::clang::QualType::withFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_bb6d296dea8b57a08582b524e2a6a384)() const = &::clang::QualType::withRestrict;
    class ::clang::QualType  (::clang::QualType::*method_pointer_11b67b82761d5a088378e3d0edca1788)() const = &::clang::QualType::withVolatile;
    class ::clang::QualType  (::clang::QualType::*method_pointer_48c9db6caafb52ac8754249ccd286fc5)() const = &::clang::QualType::withoutLocalFastQualifiers;
    boost::python::class_< class ::clang::QualType, autowig::HeldType< class ::clang::QualType > > class_3bcdbbe507dd5ad29df9e33aca4e435f("QualType", "", boost::python::no_init);
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("ignore_parens", method_pointer_17df41cffb5251908c971b780190ee8d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_const", method_pointer_3e5cfeb6409a5e37bd996f895c134c42, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_fast_qualifiers", method_pointer_50216a63b785547c89c1fb04203fece5, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_restrict", method_pointer_0633a0d2b54f5c59aabbf1b016b61d2b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_volatile", method_pointer_6a7f40fb1bf651fe9ebec94c4835733c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("dump", method_pointer_2d1085609a8a571294a5af7cb88ff4c3, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_address_space", method_pointer_9c3c9e3acf4152ffbfbaf94e4a1b4ec4, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_cvr_qualifiers", method_pointer_4d76fec8028e5a35949b4f074a6ab9e6, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_canonical_type", method_pointer_6ede9cdcf12c50d19b976a08ca1951ee, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_cvr_qualifiers", method_pointer_933de75a68f2504b98b54ede4c51c36e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_fast_qualifiers", method_pointer_64ee225671495d5f8f8c52dab7c0da3c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_unqualified_type", method_pointer_2f05ec56a6a65990b8a1d4ed488b281e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_non_reference_type", method_pointer_799e97b078025a21a232e62b0204a910, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr", method_pointer_2287703b7ae5536f99cbd4d2b2800f56, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr_or_null", method_pointer_f7af9b87c9755f2f94606bce2e173804, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_unqualified_type", method_pointer_b87cb793733854c4b48dc50b2c32b56c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_non_fast_qualifiers", method_pointer_e17a3161a1a358cca3d6f4722a57d477, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_qualifiers", method_pointer_994a17bf1f44532083659e35d4ffe0c1, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_non_trivial_obj_c_lifetime", method_pointer_65270d4d6e2751478347118abe71b427, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_qualifiers", method_pointer_d929750ef58a5c14a5778d709aa23190, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_strong_or_weak_obj_c_lifetime", method_pointer_a3f22a61b2265b41902c413f2bf135d4, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_at_least_as_qualified_as", method_pointer_9f29ecfcab8f52d9928b4d50b910a583, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_c_forbidden_l_value_type", method_pointer_1263b270385b5623a4c800a16bdaf139, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx11pod_type", method_pointer_ac21172c699258688f368b818b91d99d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx98pod_type", method_pointer_0646c8c2bff753f797e1b74037baa0ec, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical", method_pointer_5b13d97182445bd484844e6d9c235a7e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical_as_param", method_pointer_20707e7fc38659ebb4d139f5a9c942af, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_const_qualified", method_pointer_f46bf1a7ba5f5fe398f8ed6e7bc5b959, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_constant", method_pointer_1483e3b0cd1152d098e4b41f7122b713, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_const_qualified", method_pointer_1651272c08b35eb88588f963f43105e9, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_restrict_qualified", method_pointer_0afce3d5252151cca421e8e470c094fb, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_volatile_qualified", method_pointer_641f410019275a25bad3cea1a9589574, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_more_qualified_than", method_pointer_7d953859956f56d19d5412572e692482, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_null", method_pointer_a6bd7b8247df5feea6c779574a01dff5, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_strong", method_pointer_449b00913ac15a3688fa9d43fbf35556, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_weak", method_pointer_a117cfc563e05a848e3d1c5ee57ca031, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_pod_type", method_pointer_24f3bffd33ea585e9dec417dc9ba8d73, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_restrict_qualified", method_pointer_024e01f384f251a4ab5cc861512a092c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivial_type", method_pointer_5f51405b6f1e569d974228b64789f530, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivially_copyable_type", method_pointer_a85863c9ad1356e79789875c6a06e6df, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_volatile_qualified", method_pointer_1a34f5a4eff252b5b231e476c13e2126, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_cvr_qualifiers", method_pointer_9916816ab0b059e385d9b85fa3bde996, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_const", method_pointer_211c2b0156af5a1baf2550b564641aa8, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_6f27df51b43855bea527765d9262fbfa, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_1069107020435b189058d8e8d3c15ba5, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_restrict", method_pointer_73fa131ad28d5318b5605e8e0beb1679, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_volatile", method_pointer_3bb077d675755d2badd83c70c88c896a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("set_local_fast_qualifiers", method_pointer_0479ec4438ae5bf9a8fc97cc6b9ca7da, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_cvr_qualifiers", method_pointer_8762452dfcd2584f8cba42e61393f5ba, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_const", method_pointer_ce3a2d59bda75b9088cec5771115b4b8, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_exact_local_fast_qualifiers", method_pointer_2d2eeaf909b65aa59526effa7ce5f52b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_fast_qualifiers", method_pointer_a198668e3a6e56578ab1fc249cbd2e2c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_restrict", method_pointer_bb6d296dea8b57a08582b524e2a6a384, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_volatile", method_pointer_11b67b82761d5a088378e3d0edca1788, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("without_local_fast_qualifiers", method_pointer_48c9db6caafb52ac8754249ccd286fc5, "");

}