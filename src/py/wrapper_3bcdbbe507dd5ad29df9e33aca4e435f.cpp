/**********************************************************************************/
/*                                                                                */
/* PyClangLite: Python bindings for Clang                                         */
/*                                                                                */
/* Homepage: http://pyclanglite.readthedocs.io/                                   */
/*                                                                                */
/* Copyright (c) 2016 Pierre Fernique                                             */
/*                                                                                */
/* This software is distributed under the CeCILL-C license. You should have       */
/* received a copy of the legalcode along with this work. If not, see             */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/* File authors: Pierre Fernique <pfernique@gmail.com> (26)                       */
/*                                                                                */
/**********************************************************************************/

#include "_clanglite.h"


namespace autowig
{
}


void wrapper_3bcdbbe507dd5ad29df9e33aca4e435f()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::QualType  (::clang::QualType::*method_pointer_4fe7ed93db7f547d930a472e35b3fbf5)() const = &::clang::QualType::IgnoreParens;
    void  (::clang::QualType::*method_pointer_8880a1185da751bb8497d06cf3166a20)() = &::clang::QualType::addConst;
    void  (::clang::QualType::*method_pointer_901667c1c5305c6a8de0c093bd590b4b)(unsigned int ) = &::clang::QualType::addFastQualifiers;
    void  (::clang::QualType::*method_pointer_64e699dd31f55cdb95c360ab0f07b562)() = &::clang::QualType::addRestrict;
    void  (::clang::QualType::*method_pointer_ef4c46d450d4509389dbc77864fdba1d)() = &::clang::QualType::addVolatile;
    void  (::clang::QualType::*method_pointer_1ef5043fadeb5eeb850b0de3f6772b05)() const = &::clang::QualType::dump;
    unsigned int  (::clang::QualType::*method_pointer_063d593250925edeb92db099042bd88e)() const = &::clang::QualType::getAddressSpace;
    unsigned int  (::clang::QualType::*method_pointer_aa721819cab6517f91eaed7955fe19bd)() const = &::clang::QualType::getCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_c70e65085c8755ec926ca38a1acef752)() const = &::clang::QualType::getCanonicalType;
    unsigned int  (::clang::QualType::*method_pointer_70c622319b2e5da1a5158912f2852223)() const = &::clang::QualType::getLocalCVRQualifiers;
    unsigned int  (::clang::QualType::*method_pointer_e3a5e729f2e5526dbddffe5d042e0952)() const = &::clang::QualType::getLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_56d1ecb5fb3452fda0eed1c4c86c20ac)() const = &::clang::QualType::getLocalUnqualifiedType;
    class ::clang::QualType  (::clang::QualType::*method_pointer_29fa4f8ecc8b58cc8e4718dac78185e2)() const = &::clang::QualType::getNonReferenceType;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_3222751ce51f5a3e9ce6975b65605f19)() const = &::clang::QualType::getTypePtr;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_1014ee34a5af5848b88b73412a1bf440)() const = &::clang::QualType::getTypePtrOrNull;
    class ::clang::QualType  (::clang::QualType::*method_pointer_e351ed12cace56c28725b6be23e72aac)() const = &::clang::QualType::getUnqualifiedType;
    bool  (::clang::QualType::*method_pointer_58d2ccf422a0576e931be4972a6bc838)() const = &::clang::QualType::hasLocalNonFastQualifiers;
    bool  (::clang::QualType::*method_pointer_db30af87a80351f7847a5bff51f663f7)() const = &::clang::QualType::hasLocalQualifiers;
    bool  (::clang::QualType::*method_pointer_6f2db0f239b65a19a13faaec578698ac)() const = &::clang::QualType::hasNonTrivialObjCLifetime;
    bool  (::clang::QualType::*method_pointer_5a8f1fe846e75abea6e4e9e326149dc5)() const = &::clang::QualType::hasQualifiers;
    bool  (::clang::QualType::*method_pointer_76fb5f142f4955b9a76fe8465acc6694)() const = &::clang::QualType::hasStrongOrWeakObjCLifetime;
    bool  (::clang::QualType::*method_pointer_eb300125a15f557588cd56b70cc791bd)(class ::clang::QualType ) const = &::clang::QualType::isAtLeastAsQualifiedAs;
    bool  (::clang::QualType::*method_pointer_78d9a51651875885be2575bcba6f9d87)() const = &::clang::QualType::isCForbiddenLValueType;
    bool  (::clang::QualType::*method_pointer_3b772a13bc9f5ec9916dfb01ec22b6f2)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX11PODType;
    bool  (::clang::QualType::*method_pointer_323a1bc884245ad0a6dc9fb4d72eb686)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX98PODType;
    bool  (::clang::QualType::*method_pointer_0481df7941c0574c9faa0a190a5ac8e3)() const = &::clang::QualType::isCanonical;
    bool  (::clang::QualType::*method_pointer_52a08a723add5cd0b54ca821a267fc04)() const = &::clang::QualType::isCanonicalAsParam;
    bool  (::clang::QualType::*method_pointer_023b720a27605598aabd623f09f1ddd1)() const = &::clang::QualType::isConstQualified;
    bool  (::clang::QualType::*method_pointer_99a809ebe70e574ca7e1b3994a0a1c83)(class ::clang::ASTContext  &) const = &::clang::QualType::isConstant;
    bool  (::clang::QualType::*method_pointer_4cb4b9b6070a533ab124102349a39e8b)() const = &::clang::QualType::isLocalConstQualified;
    bool  (::clang::QualType::*method_pointer_d13ce5526012507380e4b10354ddfbdf)() const = &::clang::QualType::isLocalRestrictQualified;
    bool  (::clang::QualType::*method_pointer_93e92d96c5035ce8bf42621516fd292e)() const = &::clang::QualType::isLocalVolatileQualified;
    bool  (::clang::QualType::*method_pointer_e42cf53162135169aa818934bf58752f)(class ::clang::QualType ) const = &::clang::QualType::isMoreQualifiedThan;
    bool  (::clang::QualType::*method_pointer_098cdd32bb3153a7ac6ee5cace2606fb)() const = &::clang::QualType::isNull;
    bool  (::clang::QualType::*method_pointer_d04c3e0666485b039fea95f644d36759)() const = &::clang::QualType::isObjCGCStrong;
    bool  (::clang::QualType::*method_pointer_a4f39cb6f5d05a8cb2c0679475249890)() const = &::clang::QualType::isObjCGCWeak;
    bool  (::clang::QualType::*method_pointer_cf435c693f705a0884c80d26b89cadc9)(class ::clang::ASTContext  &) const = &::clang::QualType::isPODType;
    bool  (::clang::QualType::*method_pointer_da25f1dd25d45a62be2295789b1e84d8)() const = &::clang::QualType::isRestrictQualified;
    bool  (::clang::QualType::*method_pointer_74b71635d2175c968c678819d4fd16f6)(class ::clang::ASTContext  &) const = &::clang::QualType::isTrivialType;
    bool  (::clang::QualType::*method_pointer_cf9c6509e5dc5f9c8cc55f9f6e6e0cfb)(class ::clang::ASTContext  &) const = &::clang::QualType::isTriviallyCopyableType;
    bool  (::clang::QualType::*method_pointer_734ba5f9f1d65166a5da8d98de72ebfd)() const = &::clang::QualType::isVolatileQualified;
    void  (::clang::QualType::*method_pointer_14425931c1d45e07a8966e9bd40189b2)(unsigned int ) = &::clang::QualType::removeLocalCVRQualifiers;
    void  (::clang::QualType::*method_pointer_509cec5a5b0b58b99c05f7e294a545c3)() = &::clang::QualType::removeLocalConst;
    void  (::clang::QualType::*method_pointer_2b22f285a1475232a1b315851cd91ea3)() = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_b92a73146a3c58e89259fbcddec0a52d)(unsigned int ) = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_c15d89225b9452fa956377491285ab01)() = &::clang::QualType::removeLocalRestrict;
    void  (::clang::QualType::*method_pointer_57dda771f2495d2cb3685d58d4997aa5)() = &::clang::QualType::removeLocalVolatile;
    void  (::clang::QualType::*method_pointer_8b9e1328434959b1ad4b87d7bce54229)(unsigned int ) = &::clang::QualType::setLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_fdf20ae884115aa382e913826872a308)(unsigned int ) const = &::clang::QualType::withCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_1ef6be40e1c752ba95feedbf12f70934)() const = &::clang::QualType::withConst;
    class ::clang::QualType  (::clang::QualType::*method_pointer_a356d34c0dc55a2fadcc2675cbf6937d)(unsigned int ) const = &::clang::QualType::withExactLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_fdcf22dbf64a5d63a3047b73dfbb12e5)(unsigned int ) const = &::clang::QualType::withFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_437545744ed15906954bb15fd1f27d0b)() const = &::clang::QualType::withRestrict;
    class ::clang::QualType  (::clang::QualType::*method_pointer_8c5263792a835ded9834a7ae27aabe50)() const = &::clang::QualType::withVolatile;
    class ::clang::QualType  (::clang::QualType::*method_pointer_c99ad106704057fd8c974ccb2ebd9231)() const = &::clang::QualType::withoutLocalFastQualifiers;
    boost::python::class_< class ::clang::QualType, autowig::HeldType< class ::clang::QualType > > class_3bcdbbe507dd5ad29df9e33aca4e435f("QualType", "", boost::python::no_init);
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("ignore_parens", method_pointer_4fe7ed93db7f547d930a472e35b3fbf5, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_const", method_pointer_8880a1185da751bb8497d06cf3166a20, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_fast_qualifiers", method_pointer_901667c1c5305c6a8de0c093bd590b4b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_restrict", method_pointer_64e699dd31f55cdb95c360ab0f07b562, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_volatile", method_pointer_ef4c46d450d4509389dbc77864fdba1d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("dump", method_pointer_1ef5043fadeb5eeb850b0de3f6772b05, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_address_space", method_pointer_063d593250925edeb92db099042bd88e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_cvr_qualifiers", method_pointer_aa721819cab6517f91eaed7955fe19bd, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_canonical_type", method_pointer_c70e65085c8755ec926ca38a1acef752, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_cvr_qualifiers", method_pointer_70c622319b2e5da1a5158912f2852223, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_fast_qualifiers", method_pointer_e3a5e729f2e5526dbddffe5d042e0952, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_unqualified_type", method_pointer_56d1ecb5fb3452fda0eed1c4c86c20ac, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_non_reference_type", method_pointer_29fa4f8ecc8b58cc8e4718dac78185e2, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr", method_pointer_3222751ce51f5a3e9ce6975b65605f19, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr_or_null", method_pointer_1014ee34a5af5848b88b73412a1bf440, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_unqualified_type", method_pointer_e351ed12cace56c28725b6be23e72aac, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_non_fast_qualifiers", method_pointer_58d2ccf422a0576e931be4972a6bc838, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_qualifiers", method_pointer_db30af87a80351f7847a5bff51f663f7, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_non_trivial_obj_c_lifetime", method_pointer_6f2db0f239b65a19a13faaec578698ac, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_qualifiers", method_pointer_5a8f1fe846e75abea6e4e9e326149dc5, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_strong_or_weak_obj_c_lifetime", method_pointer_76fb5f142f4955b9a76fe8465acc6694, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_at_least_as_qualified_as", method_pointer_eb300125a15f557588cd56b70cc791bd, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_c_forbidden_l_value_type", method_pointer_78d9a51651875885be2575bcba6f9d87, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx11pod_type", method_pointer_3b772a13bc9f5ec9916dfb01ec22b6f2, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx98pod_type", method_pointer_323a1bc884245ad0a6dc9fb4d72eb686, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical", method_pointer_0481df7941c0574c9faa0a190a5ac8e3, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical_as_param", method_pointer_52a08a723add5cd0b54ca821a267fc04, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_const_qualified", method_pointer_023b720a27605598aabd623f09f1ddd1, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_constant", method_pointer_99a809ebe70e574ca7e1b3994a0a1c83, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_const_qualified", method_pointer_4cb4b9b6070a533ab124102349a39e8b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_restrict_qualified", method_pointer_d13ce5526012507380e4b10354ddfbdf, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_volatile_qualified", method_pointer_93e92d96c5035ce8bf42621516fd292e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_more_qualified_than", method_pointer_e42cf53162135169aa818934bf58752f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_null", method_pointer_098cdd32bb3153a7ac6ee5cace2606fb, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_strong", method_pointer_d04c3e0666485b039fea95f644d36759, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_weak", method_pointer_a4f39cb6f5d05a8cb2c0679475249890, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_pod_type", method_pointer_cf435c693f705a0884c80d26b89cadc9, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_restrict_qualified", method_pointer_da25f1dd25d45a62be2295789b1e84d8, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivial_type", method_pointer_74b71635d2175c968c678819d4fd16f6, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivially_copyable_type", method_pointer_cf9c6509e5dc5f9c8cc55f9f6e6e0cfb, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_volatile_qualified", method_pointer_734ba5f9f1d65166a5da8d98de72ebfd, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_cvr_qualifiers", method_pointer_14425931c1d45e07a8966e9bd40189b2, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_const", method_pointer_509cec5a5b0b58b99c05f7e294a545c3, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_2b22f285a1475232a1b315851cd91ea3, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_b92a73146a3c58e89259fbcddec0a52d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_restrict", method_pointer_c15d89225b9452fa956377491285ab01, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_volatile", method_pointer_57dda771f2495d2cb3685d58d4997aa5, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("set_local_fast_qualifiers", method_pointer_8b9e1328434959b1ad4b87d7bce54229, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_cvr_qualifiers", method_pointer_fdf20ae884115aa382e913826872a308, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_const", method_pointer_1ef6be40e1c752ba95feedbf12f70934, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_exact_local_fast_qualifiers", method_pointer_a356d34c0dc55a2fadcc2675cbf6937d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_fast_qualifiers", method_pointer_fdcf22dbf64a5d63a3047b73dfbb12e5, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_restrict", method_pointer_437545744ed15906954bb15fd1f27d0b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_volatile", method_pointer_8c5263792a835ded9834a7ae27aabe50, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("without_local_fast_qualifiers", method_pointer_c99ad106704057fd8c974ccb2ebd9231, "");

}