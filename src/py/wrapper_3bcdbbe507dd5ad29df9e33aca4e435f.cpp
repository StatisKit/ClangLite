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
    class ::clang::QualType  (::clang::QualType::*method_pointer_d088487764405e529cf4cc92240174b7)() const = &::clang::QualType::IgnoreParens;
    void  (::clang::QualType::*method_pointer_7664d21c9e425c31b3051986e8ff5c7d)() = &::clang::QualType::addConst;
    void  (::clang::QualType::*method_pointer_82d04472c13754c7a450a64e455bfe44)(unsigned int ) = &::clang::QualType::addFastQualifiers;
    void  (::clang::QualType::*method_pointer_1501ceb542995698a1ade771405b6512)() = &::clang::QualType::addRestrict;
    void  (::clang::QualType::*method_pointer_0a9fc13e87725084af15dff18e94ee2b)() = &::clang::QualType::addVolatile;
    void  (::clang::QualType::*method_pointer_a504730659135bedad785fe2bd460758)() const = &::clang::QualType::dump;
    unsigned int  (::clang::QualType::*method_pointer_70495b66488c502f89fbb098931ddc15)() const = &::clang::QualType::getAddressSpace;
    unsigned int  (::clang::QualType::*method_pointer_0f6aa2f432735e978165bcaadf869936)() const = &::clang::QualType::getCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_2b44edb1a97d517cbc01ee22572db991)() const = &::clang::QualType::getCanonicalType;
    unsigned int  (::clang::QualType::*method_pointer_92b2686e487c552f84172f322d82d51f)() const = &::clang::QualType::getLocalCVRQualifiers;
    unsigned int  (::clang::QualType::*method_pointer_c76248715d2e5984b88401b6f1355a01)() const = &::clang::QualType::getLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_e1fe7dc52b5c53d4a65493b59c77c6b8)() const = &::clang::QualType::getLocalUnqualifiedType;
    class ::clang::QualType  (::clang::QualType::*method_pointer_7373f9e122fc57bd90c9de0b906d4e88)() const = &::clang::QualType::getNonReferenceType;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_8cc12680e8d25792b7e9d750066aad93)() const = &::clang::QualType::getTypePtr;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_fed64f367481513b902a76c0edef143e)() const = &::clang::QualType::getTypePtrOrNull;
    class ::clang::QualType  (::clang::QualType::*method_pointer_5a5a7f19c87658b6b2de143de7ed823c)() const = &::clang::QualType::getUnqualifiedType;
    bool  (::clang::QualType::*method_pointer_b622d17993ce50a488aca75115da79c1)() const = &::clang::QualType::hasLocalNonFastQualifiers;
    bool  (::clang::QualType::*method_pointer_074163b8fec15b509c1cc0838b21012b)() const = &::clang::QualType::hasLocalQualifiers;
    bool  (::clang::QualType::*method_pointer_ebb892802bf055f888cce3b417987fcf)() const = &::clang::QualType::hasNonTrivialObjCLifetime;
    bool  (::clang::QualType::*method_pointer_6f6380860c4e5a5394c9b8fe9880cf06)() const = &::clang::QualType::hasQualifiers;
    bool  (::clang::QualType::*method_pointer_5bdf743bc83659669e04853218d286b7)() const = &::clang::QualType::hasStrongOrWeakObjCLifetime;
    bool  (::clang::QualType::*method_pointer_80a8b59a0ab05682913c3703c70e3d15)(class ::clang::QualType ) const = &::clang::QualType::isAtLeastAsQualifiedAs;
    bool  (::clang::QualType::*method_pointer_51f33067cec355c5b0d4b4ee98a7ede8)() const = &::clang::QualType::isCForbiddenLValueType;
    bool  (::clang::QualType::*method_pointer_461837b153a95f2fbbe1cadd99a00c3a)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX11PODType;
    bool  (::clang::QualType::*method_pointer_093335e0d5f756ff8f05291819b849c4)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX98PODType;
    bool  (::clang::QualType::*method_pointer_c2bdd72d2d3c57adb34fef06f2392c10)() const = &::clang::QualType::isCanonical;
    bool  (::clang::QualType::*method_pointer_3f43610c290f51df8772d3e1ef59788e)() const = &::clang::QualType::isCanonicalAsParam;
    bool  (::clang::QualType::*method_pointer_43d5fa747c415fccb19f7d5c71871fbf)() const = &::clang::QualType::isConstQualified;
    bool  (::clang::QualType::*method_pointer_5264581b156b56049bee86900379e7c7)(class ::clang::ASTContext  &) const = &::clang::QualType::isConstant;
    bool  (::clang::QualType::*method_pointer_b4064903f9c75156a33cd278d3a1d332)() const = &::clang::QualType::isLocalConstQualified;
    bool  (::clang::QualType::*method_pointer_bcd7a9db780c599f98d48019fa19ad60)() const = &::clang::QualType::isLocalRestrictQualified;
    bool  (::clang::QualType::*method_pointer_40b507413c5c597a8f598825f8f0abdf)() const = &::clang::QualType::isLocalVolatileQualified;
    bool  (::clang::QualType::*method_pointer_19fd184e01685004933074f0e50c4e3e)(class ::clang::QualType ) const = &::clang::QualType::isMoreQualifiedThan;
    bool  (::clang::QualType::*method_pointer_b248bf3a0d9f54399a55517c267836f7)() const = &::clang::QualType::isNull;
    bool  (::clang::QualType::*method_pointer_6660f06b6968555ca1addb19e111da49)() const = &::clang::QualType::isObjCGCStrong;
    bool  (::clang::QualType::*method_pointer_2e470030baff57308d8f2208deaa2bbc)() const = &::clang::QualType::isObjCGCWeak;
    bool  (::clang::QualType::*method_pointer_120a0f5e780b5536b64f86b07b359a3e)(class ::clang::ASTContext  &) const = &::clang::QualType::isPODType;
    bool  (::clang::QualType::*method_pointer_ea3e02c77863577393be28ba5054d4b8)() const = &::clang::QualType::isRestrictQualified;
    bool  (::clang::QualType::*method_pointer_2db232463aba56c691a14a736b7d71b1)(class ::clang::ASTContext  &) const = &::clang::QualType::isTrivialType;
    bool  (::clang::QualType::*method_pointer_f82d879d3a86558dac03a5f3be0628c1)(class ::clang::ASTContext  &) const = &::clang::QualType::isTriviallyCopyableType;
    bool  (::clang::QualType::*method_pointer_48426857d57a558f9dfb0de77f8448b5)() const = &::clang::QualType::isVolatileQualified;
    void  (::clang::QualType::*method_pointer_90d188c4f12c5827a792097cbdc0ba9a)(unsigned int ) = &::clang::QualType::removeLocalCVRQualifiers;
    void  (::clang::QualType::*method_pointer_3a29f98be6145e7cb945a50c3562df3c)() = &::clang::QualType::removeLocalConst;
    void  (::clang::QualType::*method_pointer_6cc0846651cd5e4989b89d4aeed4ce4e)() = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_c4c4412091c6527e80267ae28cd9d804)(unsigned int ) = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_2659f6c58f755b1db976b6e56bad2674)() = &::clang::QualType::removeLocalRestrict;
    void  (::clang::QualType::*method_pointer_b1ca72f556295b62b4c71a9ef304540c)() = &::clang::QualType::removeLocalVolatile;
    void  (::clang::QualType::*method_pointer_5fc891a34bbf5c80a47d770dc88611be)(unsigned int ) = &::clang::QualType::setLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_378d2f3b414c5da79a34f28b42ed5ffd)(unsigned int ) const = &::clang::QualType::withCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_d8542d6deaba5edf9443fe1a1a1dd3b9)() const = &::clang::QualType::withConst;
    class ::clang::QualType  (::clang::QualType::*method_pointer_8eaa976eb99e5afca1bb7b11a0709b3b)(unsigned int ) const = &::clang::QualType::withExactLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_c2e989db7d3b5a688fddf166146ea1fc)(unsigned int ) const = &::clang::QualType::withFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_7e8c066ac83450b98020f93f04570093)() const = &::clang::QualType::withRestrict;
    class ::clang::QualType  (::clang::QualType::*method_pointer_e299185befd558e7853b8857ad62d439)() const = &::clang::QualType::withVolatile;
    class ::clang::QualType  (::clang::QualType::*method_pointer_e5fe154831025c6ead4344ec9bd8760c)() const = &::clang::QualType::withoutLocalFastQualifiers;
    boost::python::class_< class ::clang::QualType, autowig::HeldType< class ::clang::QualType > > class_3bcdbbe507dd5ad29df9e33aca4e435f("QualType", "", boost::python::no_init);
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("ignore_parens", method_pointer_d088487764405e529cf4cc92240174b7, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_const", method_pointer_7664d21c9e425c31b3051986e8ff5c7d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_fast_qualifiers", method_pointer_82d04472c13754c7a450a64e455bfe44, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_restrict", method_pointer_1501ceb542995698a1ade771405b6512, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_volatile", method_pointer_0a9fc13e87725084af15dff18e94ee2b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("dump", method_pointer_a504730659135bedad785fe2bd460758, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_address_space", method_pointer_70495b66488c502f89fbb098931ddc15, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_cvr_qualifiers", method_pointer_0f6aa2f432735e978165bcaadf869936, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_canonical_type", method_pointer_2b44edb1a97d517cbc01ee22572db991, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_cvr_qualifiers", method_pointer_92b2686e487c552f84172f322d82d51f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_fast_qualifiers", method_pointer_c76248715d2e5984b88401b6f1355a01, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_unqualified_type", method_pointer_e1fe7dc52b5c53d4a65493b59c77c6b8, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_non_reference_type", method_pointer_7373f9e122fc57bd90c9de0b906d4e88, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr", method_pointer_8cc12680e8d25792b7e9d750066aad93, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr_or_null", method_pointer_fed64f367481513b902a76c0edef143e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_unqualified_type", method_pointer_5a5a7f19c87658b6b2de143de7ed823c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_non_fast_qualifiers", method_pointer_b622d17993ce50a488aca75115da79c1, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_qualifiers", method_pointer_074163b8fec15b509c1cc0838b21012b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_non_trivial_obj_c_lifetime", method_pointer_ebb892802bf055f888cce3b417987fcf, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_qualifiers", method_pointer_6f6380860c4e5a5394c9b8fe9880cf06, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_strong_or_weak_obj_c_lifetime", method_pointer_5bdf743bc83659669e04853218d286b7, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_at_least_as_qualified_as", method_pointer_80a8b59a0ab05682913c3703c70e3d15, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_c_forbidden_l_value_type", method_pointer_51f33067cec355c5b0d4b4ee98a7ede8, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx11pod_type", method_pointer_461837b153a95f2fbbe1cadd99a00c3a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx98pod_type", method_pointer_093335e0d5f756ff8f05291819b849c4, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical", method_pointer_c2bdd72d2d3c57adb34fef06f2392c10, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical_as_param", method_pointer_3f43610c290f51df8772d3e1ef59788e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_const_qualified", method_pointer_43d5fa747c415fccb19f7d5c71871fbf, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_constant", method_pointer_5264581b156b56049bee86900379e7c7, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_const_qualified", method_pointer_b4064903f9c75156a33cd278d3a1d332, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_restrict_qualified", method_pointer_bcd7a9db780c599f98d48019fa19ad60, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_volatile_qualified", method_pointer_40b507413c5c597a8f598825f8f0abdf, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_more_qualified_than", method_pointer_19fd184e01685004933074f0e50c4e3e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_null", method_pointer_b248bf3a0d9f54399a55517c267836f7, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_strong", method_pointer_6660f06b6968555ca1addb19e111da49, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_weak", method_pointer_2e470030baff57308d8f2208deaa2bbc, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_pod_type", method_pointer_120a0f5e780b5536b64f86b07b359a3e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_restrict_qualified", method_pointer_ea3e02c77863577393be28ba5054d4b8, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivial_type", method_pointer_2db232463aba56c691a14a736b7d71b1, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivially_copyable_type", method_pointer_f82d879d3a86558dac03a5f3be0628c1, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_volatile_qualified", method_pointer_48426857d57a558f9dfb0de77f8448b5, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_cvr_qualifiers", method_pointer_90d188c4f12c5827a792097cbdc0ba9a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_const", method_pointer_3a29f98be6145e7cb945a50c3562df3c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_6cc0846651cd5e4989b89d4aeed4ce4e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_c4c4412091c6527e80267ae28cd9d804, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_restrict", method_pointer_2659f6c58f755b1db976b6e56bad2674, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_volatile", method_pointer_b1ca72f556295b62b4c71a9ef304540c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("set_local_fast_qualifiers", method_pointer_5fc891a34bbf5c80a47d770dc88611be, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_cvr_qualifiers", method_pointer_378d2f3b414c5da79a34f28b42ed5ffd, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_const", method_pointer_d8542d6deaba5edf9443fe1a1a1dd3b9, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_exact_local_fast_qualifiers", method_pointer_8eaa976eb99e5afca1bb7b11a0709b3b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_fast_qualifiers", method_pointer_c2e989db7d3b5a688fddf166146ea1fc, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_restrict", method_pointer_7e8c066ac83450b98020f93f04570093, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_volatile", method_pointer_e299185befd558e7853b8857ad62d439, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("without_local_fast_qualifiers", method_pointer_e5fe154831025c6ead4344ec9bd8760c, "");

}