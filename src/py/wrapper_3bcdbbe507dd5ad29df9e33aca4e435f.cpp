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
    class ::clang::QualType  (::clang::QualType::*method_pointer_ff9c36f331a65dd3b8f9279f981fd61c)() const = &::clang::QualType::IgnoreParens;
    void  (::clang::QualType::*method_pointer_a3ffb02fe73058cb9fbe028f45c580dc)() = &::clang::QualType::addConst;
    void  (::clang::QualType::*method_pointer_e504a3efc468565b953a18b7bf4f33fa)(unsigned int ) = &::clang::QualType::addFastQualifiers;
    void  (::clang::QualType::*method_pointer_dae0cb69e4d75ab2bf72d78279c30e97)() = &::clang::QualType::addRestrict;
    void  (::clang::QualType::*method_pointer_0589616d50b65f41a6f7350095c14818)() = &::clang::QualType::addVolatile;
    void  (::clang::QualType::*method_pointer_701215ca92135e8686fa906920496b8e)() const = &::clang::QualType::dump;
    unsigned int  (::clang::QualType::*method_pointer_1c940ca165565822bccdbf110fb3188b)() const = &::clang::QualType::getAddressSpace;
    unsigned int  (::clang::QualType::*method_pointer_63129595a13950f88457063c18727ba7)() const = &::clang::QualType::getCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_b99d6d7ab04c598eaeea0831eace1ba6)() const = &::clang::QualType::getCanonicalType;
    unsigned int  (::clang::QualType::*method_pointer_9e8faafee96c5cb0b3eb8430bf058fb3)() const = &::clang::QualType::getLocalCVRQualifiers;
    unsigned int  (::clang::QualType::*method_pointer_dda90a90f4c751af837a9dbfa0949c22)() const = &::clang::QualType::getLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_4cc6436fac115e1993d315fd8b02ec9f)() const = &::clang::QualType::getLocalUnqualifiedType;
    class ::clang::QualType  (::clang::QualType::*method_pointer_ad206622b7bb5412870e8e4e6616501c)() const = &::clang::QualType::getNonReferenceType;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_6c85bc6219445e61b62bb83520d70207)() const = &::clang::QualType::getTypePtr;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_d9ba79b0b4925a1398f9c87d27e024fe)() const = &::clang::QualType::getTypePtrOrNull;
    class ::clang::QualType  (::clang::QualType::*method_pointer_51b6586489df559586e827e6490c485c)() const = &::clang::QualType::getUnqualifiedType;
    bool  (::clang::QualType::*method_pointer_31d0f9eb0a8c570ea48a7f34c20b95b3)() const = &::clang::QualType::hasLocalNonFastQualifiers;
    bool  (::clang::QualType::*method_pointer_470a70bdb8ac5d4ab3cd83390a7eba46)() const = &::clang::QualType::hasLocalQualifiers;
    bool  (::clang::QualType::*method_pointer_2b027b1297fa55eba14dc49e0a8f4b18)() const = &::clang::QualType::hasNonTrivialObjCLifetime;
    bool  (::clang::QualType::*method_pointer_aa868bb187a255459fe8b6edb4bb4c57)() const = &::clang::QualType::hasQualifiers;
    bool  (::clang::QualType::*method_pointer_d0fc665cf49c5fa6beaaeaebb3fcc873)() const = &::clang::QualType::hasStrongOrWeakObjCLifetime;
    bool  (::clang::QualType::*method_pointer_08b170de0b3e59918ce2fd64e40644fc)(class ::clang::QualType ) const = &::clang::QualType::isAtLeastAsQualifiedAs;
    bool  (::clang::QualType::*method_pointer_5c67124d041e588d87dc6b73232ea446)() const = &::clang::QualType::isCForbiddenLValueType;
    bool  (::clang::QualType::*method_pointer_1174e5e0c60a516e93c0ae73f8606506)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX11PODType;
    bool  (::clang::QualType::*method_pointer_2598efa4dbd95bc8982ed794782c1b2e)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX98PODType;
    bool  (::clang::QualType::*method_pointer_e2594e90855057c6864a86d9df1dbed4)() const = &::clang::QualType::isCanonical;
    bool  (::clang::QualType::*method_pointer_b5508f96043b5a8fa52a457f2f2a1a81)() const = &::clang::QualType::isCanonicalAsParam;
    bool  (::clang::QualType::*method_pointer_a46f9ecfe4a95cd2a0b2f2c8fbdb4591)() const = &::clang::QualType::isConstQualified;
    bool  (::clang::QualType::*method_pointer_394f20bb10e8502c854ea11224c37cb0)(class ::clang::ASTContext  &) const = &::clang::QualType::isConstant;
    bool  (::clang::QualType::*method_pointer_09cbc29772e857ed8559ed4ffafcab9b)() const = &::clang::QualType::isLocalConstQualified;
    bool  (::clang::QualType::*method_pointer_04dfa076ec4a53d5a1382bcdcf256211)() const = &::clang::QualType::isLocalRestrictQualified;
    bool  (::clang::QualType::*method_pointer_915d2fcd28485b81bcd550fa524837d6)() const = &::clang::QualType::isLocalVolatileQualified;
    bool  (::clang::QualType::*method_pointer_4856b8f88d7453edb6928ede0e44932b)(class ::clang::QualType ) const = &::clang::QualType::isMoreQualifiedThan;
    bool  (::clang::QualType::*method_pointer_358491170188512b99be5445da95295d)() const = &::clang::QualType::isNull;
    bool  (::clang::QualType::*method_pointer_3a2437d75dde511faa2fe4b35fea4f5f)() const = &::clang::QualType::isObjCGCStrong;
    bool  (::clang::QualType::*method_pointer_77e08df47275586c91168164e7070053)() const = &::clang::QualType::isObjCGCWeak;
    bool  (::clang::QualType::*method_pointer_92b7b2b998b356d6ab605688e98eff55)(class ::clang::ASTContext  &) const = &::clang::QualType::isPODType;
    bool  (::clang::QualType::*method_pointer_a778458c6daa5dcb8f741ca36b068559)() const = &::clang::QualType::isRestrictQualified;
    bool  (::clang::QualType::*method_pointer_0536d20e0289508bbe72ed8c843f46c4)(class ::clang::ASTContext  &) const = &::clang::QualType::isTrivialType;
    bool  (::clang::QualType::*method_pointer_e9c2cefd9f1d5d49973634842d26f6bf)(class ::clang::ASTContext  &) const = &::clang::QualType::isTriviallyCopyableType;
    bool  (::clang::QualType::*method_pointer_fe6c05bdd24b58b7a643d14fe7ea3c70)() const = &::clang::QualType::isVolatileQualified;
    void  (::clang::QualType::*method_pointer_6968a9100f4e5220aa748635deb8c290)(unsigned int ) = &::clang::QualType::removeLocalCVRQualifiers;
    void  (::clang::QualType::*method_pointer_52d8fe6cac40527297b65423aa209164)() = &::clang::QualType::removeLocalConst;
    void  (::clang::QualType::*method_pointer_fff03aad05c65ff6ac63e1ac877e66e9)() = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_b90ff6c08c8c5932bdb1276702b25d87)(unsigned int ) = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_112797019d9a5283a37cd8b211152302)() = &::clang::QualType::removeLocalRestrict;
    void  (::clang::QualType::*method_pointer_b9bfeaae593e56d7af93ecdea79d5fb7)() = &::clang::QualType::removeLocalVolatile;
    void  (::clang::QualType::*method_pointer_d9a6495bdb115985872a97d54e7570bd)(unsigned int ) = &::clang::QualType::setLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_081226bbeee35fd596db556bdce42271)(unsigned int ) const = &::clang::QualType::withCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_d8cd4f26d0bc5ce5a63cabbc54ad541f)() const = &::clang::QualType::withConst;
    class ::clang::QualType  (::clang::QualType::*method_pointer_aa4bf803e6bf56d2999eb5c3a1506f61)(unsigned int ) const = &::clang::QualType::withExactLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_d1a1ac7620d656be932c76d6f740377a)(unsigned int ) const = &::clang::QualType::withFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_cdf318489883531997280e99098e79ab)() const = &::clang::QualType::withRestrict;
    class ::clang::QualType  (::clang::QualType::*method_pointer_2cf8712250195da0b35105aa85ebb14e)() const = &::clang::QualType::withVolatile;
    class ::clang::QualType  (::clang::QualType::*method_pointer_cee379e716c55dd48388dde494597b83)() const = &::clang::QualType::withoutLocalFastQualifiers;
    boost::python::class_< class ::clang::QualType, autowig::HeldType< class ::clang::QualType > > class_3bcdbbe507dd5ad29df9e33aca4e435f("QualType", "", boost::python::no_init);
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("ignore_parens", method_pointer_ff9c36f331a65dd3b8f9279f981fd61c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_const", method_pointer_a3ffb02fe73058cb9fbe028f45c580dc, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_fast_qualifiers", method_pointer_e504a3efc468565b953a18b7bf4f33fa, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_restrict", method_pointer_dae0cb69e4d75ab2bf72d78279c30e97, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_volatile", method_pointer_0589616d50b65f41a6f7350095c14818, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("dump", method_pointer_701215ca92135e8686fa906920496b8e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_address_space", method_pointer_1c940ca165565822bccdbf110fb3188b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_cvr_qualifiers", method_pointer_63129595a13950f88457063c18727ba7, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_canonical_type", method_pointer_b99d6d7ab04c598eaeea0831eace1ba6, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_cvr_qualifiers", method_pointer_9e8faafee96c5cb0b3eb8430bf058fb3, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_fast_qualifiers", method_pointer_dda90a90f4c751af837a9dbfa0949c22, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_unqualified_type", method_pointer_4cc6436fac115e1993d315fd8b02ec9f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_non_reference_type", method_pointer_ad206622b7bb5412870e8e4e6616501c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr", method_pointer_6c85bc6219445e61b62bb83520d70207, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr_or_null", method_pointer_d9ba79b0b4925a1398f9c87d27e024fe, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_unqualified_type", method_pointer_51b6586489df559586e827e6490c485c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_non_fast_qualifiers", method_pointer_31d0f9eb0a8c570ea48a7f34c20b95b3, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_qualifiers", method_pointer_470a70bdb8ac5d4ab3cd83390a7eba46, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_non_trivial_obj_c_lifetime", method_pointer_2b027b1297fa55eba14dc49e0a8f4b18, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_qualifiers", method_pointer_aa868bb187a255459fe8b6edb4bb4c57, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_strong_or_weak_obj_c_lifetime", method_pointer_d0fc665cf49c5fa6beaaeaebb3fcc873, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_at_least_as_qualified_as", method_pointer_08b170de0b3e59918ce2fd64e40644fc, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_c_forbidden_l_value_type", method_pointer_5c67124d041e588d87dc6b73232ea446, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx11pod_type", method_pointer_1174e5e0c60a516e93c0ae73f8606506, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx98pod_type", method_pointer_2598efa4dbd95bc8982ed794782c1b2e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical", method_pointer_e2594e90855057c6864a86d9df1dbed4, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical_as_param", method_pointer_b5508f96043b5a8fa52a457f2f2a1a81, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_const_qualified", method_pointer_a46f9ecfe4a95cd2a0b2f2c8fbdb4591, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_constant", method_pointer_394f20bb10e8502c854ea11224c37cb0, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_const_qualified", method_pointer_09cbc29772e857ed8559ed4ffafcab9b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_restrict_qualified", method_pointer_04dfa076ec4a53d5a1382bcdcf256211, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_volatile_qualified", method_pointer_915d2fcd28485b81bcd550fa524837d6, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_more_qualified_than", method_pointer_4856b8f88d7453edb6928ede0e44932b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_null", method_pointer_358491170188512b99be5445da95295d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_strong", method_pointer_3a2437d75dde511faa2fe4b35fea4f5f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_weak", method_pointer_77e08df47275586c91168164e7070053, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_pod_type", method_pointer_92b7b2b998b356d6ab605688e98eff55, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_restrict_qualified", method_pointer_a778458c6daa5dcb8f741ca36b068559, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivial_type", method_pointer_0536d20e0289508bbe72ed8c843f46c4, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivially_copyable_type", method_pointer_e9c2cefd9f1d5d49973634842d26f6bf, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_volatile_qualified", method_pointer_fe6c05bdd24b58b7a643d14fe7ea3c70, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_cvr_qualifiers", method_pointer_6968a9100f4e5220aa748635deb8c290, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_const", method_pointer_52d8fe6cac40527297b65423aa209164, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_fff03aad05c65ff6ac63e1ac877e66e9, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_b90ff6c08c8c5932bdb1276702b25d87, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_restrict", method_pointer_112797019d9a5283a37cd8b211152302, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_volatile", method_pointer_b9bfeaae593e56d7af93ecdea79d5fb7, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("set_local_fast_qualifiers", method_pointer_d9a6495bdb115985872a97d54e7570bd, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_cvr_qualifiers", method_pointer_081226bbeee35fd596db556bdce42271, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_const", method_pointer_d8cd4f26d0bc5ce5a63cabbc54ad541f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_exact_local_fast_qualifiers", method_pointer_aa4bf803e6bf56d2999eb5c3a1506f61, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_fast_qualifiers", method_pointer_d1a1ac7620d656be932c76d6f740377a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_restrict", method_pointer_cdf318489883531997280e99098e79ab, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_volatile", method_pointer_2cf8712250195da0b35105aa85ebb14e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("without_local_fast_qualifiers", method_pointer_cee379e716c55dd48388dde494597b83, "");

}