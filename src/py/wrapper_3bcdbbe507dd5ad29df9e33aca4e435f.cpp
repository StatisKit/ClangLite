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
    class ::clang::QualType  (::clang::QualType::*method_pointer_5d2fc8f66788547198abf80d489877f9)() const = &::clang::QualType::IgnoreParens;
    void  (::clang::QualType::*method_pointer_b072dfde96ee553887eb107a029f3e06)() = &::clang::QualType::addConst;
    void  (::clang::QualType::*method_pointer_2b7183cd4ec95a7a91e70ea84d57a90b)(unsigned int ) = &::clang::QualType::addFastQualifiers;
    void  (::clang::QualType::*method_pointer_6c2f281e24245bef8064ead68d72bfe8)() = &::clang::QualType::addRestrict;
    void  (::clang::QualType::*method_pointer_da905617f4de5a6cab98a4d1b6740ea2)() = &::clang::QualType::addVolatile;
    void  (::clang::QualType::*method_pointer_e44a697c9c2f5c578c9163a73dcd8d61)() const = &::clang::QualType::dump;
    unsigned int  (::clang::QualType::*method_pointer_9f6c725caf19501aab83ce52c0e74e26)() const = &::clang::QualType::getAddressSpace;
    unsigned int  (::clang::QualType::*method_pointer_b4a1d4e44ecf59ce98b9fc9df2dfd818)() const = &::clang::QualType::getCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_d5f5dcb653875f35ac935d7e884a484f)() const = &::clang::QualType::getCanonicalType;
    unsigned int  (::clang::QualType::*method_pointer_e4f27cfc54275c5990796c2334596e2e)() const = &::clang::QualType::getLocalCVRQualifiers;
    unsigned int  (::clang::QualType::*method_pointer_4ede3bfc4e63574ebfb1436c0287becd)() const = &::clang::QualType::getLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_9a0c7d0ab5395bbcb482298dfb23c998)() const = &::clang::QualType::getLocalUnqualifiedType;
    class ::clang::QualType  (::clang::QualType::*method_pointer_3cff751f401355aabf545f330eafd7de)() const = &::clang::QualType::getNonReferenceType;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_556f18ba49235a8e948bb154fb50adc3)() const = &::clang::QualType::getTypePtr;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_b1391e5aaeb25ac8967af6ff32816e55)() const = &::clang::QualType::getTypePtrOrNull;
    class ::clang::QualType  (::clang::QualType::*method_pointer_bd80055b5c295ef28d3f1a73993cfd52)() const = &::clang::QualType::getUnqualifiedType;
    bool  (::clang::QualType::*method_pointer_f5ffb6db9dde5e8686228f8da0559792)() const = &::clang::QualType::hasLocalNonFastQualifiers;
    bool  (::clang::QualType::*method_pointer_f5898312d943525fa828b202f6dba8ad)() const = &::clang::QualType::hasLocalQualifiers;
    bool  (::clang::QualType::*method_pointer_c864b53db4a45a96a1fffc45f7d3c06a)() const = &::clang::QualType::hasNonTrivialObjCLifetime;
    bool  (::clang::QualType::*method_pointer_328b5b9b780151fdaa73332f24f6e3ff)() const = &::clang::QualType::hasQualifiers;
    bool  (::clang::QualType::*method_pointer_9abadf968f2555cf96682b917c033ac1)() const = &::clang::QualType::hasStrongOrWeakObjCLifetime;
    bool  (::clang::QualType::*method_pointer_2f4577d018a55456ad47851edae31a7e)(class ::clang::QualType ) const = &::clang::QualType::isAtLeastAsQualifiedAs;
    bool  (::clang::QualType::*method_pointer_eaf6c836577d5e0ebe5a529c6f6e71c7)() const = &::clang::QualType::isCForbiddenLValueType;
    bool  (::clang::QualType::*method_pointer_ba31f2caecd458538cfcf67c0b7562fb)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX11PODType;
    bool  (::clang::QualType::*method_pointer_ce47391f89795758a24ec2941d4092d8)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX98PODType;
    bool  (::clang::QualType::*method_pointer_90993255c94c5212a6b49279705ed81a)() const = &::clang::QualType::isCanonical;
    bool  (::clang::QualType::*method_pointer_be116504578356ea899fd7a81f2d46a9)() const = &::clang::QualType::isCanonicalAsParam;
    bool  (::clang::QualType::*method_pointer_a4f47c9d70aa5ee6a3ea0658f02c1ca0)() const = &::clang::QualType::isConstQualified;
    bool  (::clang::QualType::*method_pointer_0adfd3022237562f94fb657ce2dddc70)(class ::clang::ASTContext  &) const = &::clang::QualType::isConstant;
    bool  (::clang::QualType::*method_pointer_405b5b8b89e254fc9e103362c15a0f21)() const = &::clang::QualType::isLocalConstQualified;
    bool  (::clang::QualType::*method_pointer_df13e76b3fbe5e4fa463be3810ddc529)() const = &::clang::QualType::isLocalRestrictQualified;
    bool  (::clang::QualType::*method_pointer_638cefa86cea593c8306b12ab006fb9d)() const = &::clang::QualType::isLocalVolatileQualified;
    bool  (::clang::QualType::*method_pointer_62b807e3d527507d9ea1011e8710d2c3)(class ::clang::QualType ) const = &::clang::QualType::isMoreQualifiedThan;
    bool  (::clang::QualType::*method_pointer_96100ef71d1b5a7b88ada20e013e7897)() const = &::clang::QualType::isNull;
    bool  (::clang::QualType::*method_pointer_fed22c388d045601b6677fc2f3891165)() const = &::clang::QualType::isObjCGCStrong;
    bool  (::clang::QualType::*method_pointer_784f3412606b59e2a4a61cba42318143)() const = &::clang::QualType::isObjCGCWeak;
    bool  (::clang::QualType::*method_pointer_28c4e3e804d05f60a1a2b1754bb54c32)(class ::clang::ASTContext  &) const = &::clang::QualType::isPODType;
    bool  (::clang::QualType::*method_pointer_5684c1869367502793e99cbfd060a4aa)() const = &::clang::QualType::isRestrictQualified;
    bool  (::clang::QualType::*method_pointer_5dc7d1fb7bc5586ebfa0797750c8d96d)(class ::clang::ASTContext  &) const = &::clang::QualType::isTrivialType;
    bool  (::clang::QualType::*method_pointer_41298db439795995b961623b0688ca18)(class ::clang::ASTContext  &) const = &::clang::QualType::isTriviallyCopyableType;
    bool  (::clang::QualType::*method_pointer_a7637acad93c51ad815331f4e790ade4)() const = &::clang::QualType::isVolatileQualified;
    void  (::clang::QualType::*method_pointer_fb5619e48db45cb7b4d035643772b72e)(unsigned int ) = &::clang::QualType::removeLocalCVRQualifiers;
    void  (::clang::QualType::*method_pointer_0dd2d03becae53e5ae4625b0c0a410f1)() = &::clang::QualType::removeLocalConst;
    void  (::clang::QualType::*method_pointer_6df3ea3b63535812b6993ee2a44def20)(unsigned int ) = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_a87b49e7e3e15bb0ba254d5999bf723b)() = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_63d3c6d22057590699a6c20bf1796769)() = &::clang::QualType::removeLocalRestrict;
    void  (::clang::QualType::*method_pointer_d575d19919775960ae68005bf10027ad)() = &::clang::QualType::removeLocalVolatile;
    void  (::clang::QualType::*method_pointer_fa5e943743a55205a0f586b1b2e282be)(unsigned int ) = &::clang::QualType::setLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_30e01d89dc715605838ebd88c1bde733)(unsigned int ) const = &::clang::QualType::withCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_15af816b485b5eedbfd2860666993861)() const = &::clang::QualType::withConst;
    class ::clang::QualType  (::clang::QualType::*method_pointer_72b1880bfc975103877ba4f1e94722f5)(unsigned int ) const = &::clang::QualType::withExactLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_acecc34415595064ba664f74facbf1be)(unsigned int ) const = &::clang::QualType::withFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_be8ec97fee9b5e4c968b79beaf1e02ae)() const = &::clang::QualType::withRestrict;
    class ::clang::QualType  (::clang::QualType::*method_pointer_c9627e1278125f70ab6fa1b785ec7aea)() const = &::clang::QualType::withVolatile;
    class ::clang::QualType  (::clang::QualType::*method_pointer_b6ff01e51ce0512b8cda3926bd63c0f2)() const = &::clang::QualType::withoutLocalFastQualifiers;
    boost::python::class_< class ::clang::QualType, autowig::HeldType< class ::clang::QualType > > class_3bcdbbe507dd5ad29df9e33aca4e435f("QualType", "", boost::python::no_init);
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("ignore_parens", method_pointer_5d2fc8f66788547198abf80d489877f9, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_const", method_pointer_b072dfde96ee553887eb107a029f3e06, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_fast_qualifiers", method_pointer_2b7183cd4ec95a7a91e70ea84d57a90b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_restrict", method_pointer_6c2f281e24245bef8064ead68d72bfe8, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_volatile", method_pointer_da905617f4de5a6cab98a4d1b6740ea2, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("dump", method_pointer_e44a697c9c2f5c578c9163a73dcd8d61, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_address_space", method_pointer_9f6c725caf19501aab83ce52c0e74e26, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_cvr_qualifiers", method_pointer_b4a1d4e44ecf59ce98b9fc9df2dfd818, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_canonical_type", method_pointer_d5f5dcb653875f35ac935d7e884a484f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_cvr_qualifiers", method_pointer_e4f27cfc54275c5990796c2334596e2e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_fast_qualifiers", method_pointer_4ede3bfc4e63574ebfb1436c0287becd, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_unqualified_type", method_pointer_9a0c7d0ab5395bbcb482298dfb23c998, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_non_reference_type", method_pointer_3cff751f401355aabf545f330eafd7de, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr", method_pointer_556f18ba49235a8e948bb154fb50adc3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr_or_null", method_pointer_b1391e5aaeb25ac8967af6ff32816e55, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_unqualified_type", method_pointer_bd80055b5c295ef28d3f1a73993cfd52, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_non_fast_qualifiers", method_pointer_f5ffb6db9dde5e8686228f8da0559792, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_qualifiers", method_pointer_f5898312d943525fa828b202f6dba8ad, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_non_trivial_obj_c_lifetime", method_pointer_c864b53db4a45a96a1fffc45f7d3c06a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_qualifiers", method_pointer_328b5b9b780151fdaa73332f24f6e3ff, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_strong_or_weak_obj_c_lifetime", method_pointer_9abadf968f2555cf96682b917c033ac1, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_at_least_as_qualified_as", method_pointer_2f4577d018a55456ad47851edae31a7e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_c_forbidden_l_value_type", method_pointer_eaf6c836577d5e0ebe5a529c6f6e71c7, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx11pod_type", method_pointer_ba31f2caecd458538cfcf67c0b7562fb, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx98pod_type", method_pointer_ce47391f89795758a24ec2941d4092d8, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical", method_pointer_90993255c94c5212a6b49279705ed81a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical_as_param", method_pointer_be116504578356ea899fd7a81f2d46a9, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_const_qualified", method_pointer_a4f47c9d70aa5ee6a3ea0658f02c1ca0, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_constant", method_pointer_0adfd3022237562f94fb657ce2dddc70, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_const_qualified", method_pointer_405b5b8b89e254fc9e103362c15a0f21, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_restrict_qualified", method_pointer_df13e76b3fbe5e4fa463be3810ddc529, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_volatile_qualified", method_pointer_638cefa86cea593c8306b12ab006fb9d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_more_qualified_than", method_pointer_62b807e3d527507d9ea1011e8710d2c3, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_null", method_pointer_96100ef71d1b5a7b88ada20e013e7897, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_strong", method_pointer_fed22c388d045601b6677fc2f3891165, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_weak", method_pointer_784f3412606b59e2a4a61cba42318143, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_pod_type", method_pointer_28c4e3e804d05f60a1a2b1754bb54c32, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_restrict_qualified", method_pointer_5684c1869367502793e99cbfd060a4aa, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivial_type", method_pointer_5dc7d1fb7bc5586ebfa0797750c8d96d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivially_copyable_type", method_pointer_41298db439795995b961623b0688ca18, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_volatile_qualified", method_pointer_a7637acad93c51ad815331f4e790ade4, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_cvr_qualifiers", method_pointer_fb5619e48db45cb7b4d035643772b72e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_const", method_pointer_0dd2d03becae53e5ae4625b0c0a410f1, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_6df3ea3b63535812b6993ee2a44def20, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_a87b49e7e3e15bb0ba254d5999bf723b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_restrict", method_pointer_63d3c6d22057590699a6c20bf1796769, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_volatile", method_pointer_d575d19919775960ae68005bf10027ad, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("set_local_fast_qualifiers", method_pointer_fa5e943743a55205a0f586b1b2e282be, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_cvr_qualifiers", method_pointer_30e01d89dc715605838ebd88c1bde733, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_const", method_pointer_15af816b485b5eedbfd2860666993861, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_exact_local_fast_qualifiers", method_pointer_72b1880bfc975103877ba4f1e94722f5, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_fast_qualifiers", method_pointer_acecc34415595064ba664f74facbf1be, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_restrict", method_pointer_be8ec97fee9b5e4c968b79beaf1e02ae, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_volatile", method_pointer_c9627e1278125f70ab6fa1b785ec7aea, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("without_local_fast_qualifiers", method_pointer_b6ff01e51ce0512b8cda3926bd63c0f2, "");

}