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
    class ::clang::QualType  (::clang::QualType::*method_pointer_ae0f4d822bdd59f4b9d8d62c30ec9594)() const = &::clang::QualType::IgnoreParens;
    void  (::clang::QualType::*method_pointer_3d100f437d8f57b388cd8832348a4789)() = &::clang::QualType::addConst;
    void  (::clang::QualType::*method_pointer_02f03224062e5dc78e2b59c0e29948b5)(unsigned int ) = &::clang::QualType::addFastQualifiers;
    void  (::clang::QualType::*method_pointer_462ae438b63b50db8037db0bb4997083)() = &::clang::QualType::addRestrict;
    void  (::clang::QualType::*method_pointer_5138ab98451a5bcb8f25a69dd73f9a8c)() = &::clang::QualType::addVolatile;
    void  (::clang::QualType::*method_pointer_bda095c52b255ab99cf5ee85d7678b4f)() const = &::clang::QualType::dump;
    unsigned int  (::clang::QualType::*method_pointer_bd12dee9ea4c52868bb597017bd370dc)() const = &::clang::QualType::getAddressSpace;
    unsigned int  (::clang::QualType::*method_pointer_1f51e712ae0b5ee2a47d337f8d57fd39)() const = &::clang::QualType::getCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_8b64387e831e5b33b192e7a6f94294eb)() const = &::clang::QualType::getCanonicalType;
    unsigned int  (::clang::QualType::*method_pointer_75c4d5e173f9541884d799df6ce45f3a)() const = &::clang::QualType::getLocalCVRQualifiers;
    unsigned int  (::clang::QualType::*method_pointer_3fd760c5d13b5e40955fad7857564965)() const = &::clang::QualType::getLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_002d838ba22e57ebb0e6bc26e6320f18)() const = &::clang::QualType::getLocalUnqualifiedType;
    class ::clang::QualType  (::clang::QualType::*method_pointer_4b8d2425da345a70ab2b35d0a86bb9b1)() const = &::clang::QualType::getNonReferenceType;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_66379bfb93665c4fa5a95106d6a321e0)() const = &::clang::QualType::getTypePtr;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_7a048f43749d562dbffadaaf2adb5b33)() const = &::clang::QualType::getTypePtrOrNull;
    class ::clang::QualType  (::clang::QualType::*method_pointer_cc5fdf751e23517da2faad06ed8edc8b)() const = &::clang::QualType::getUnqualifiedType;
    bool  (::clang::QualType::*method_pointer_6ede31119ec957b29ea7371e79633f49)() const = &::clang::QualType::hasLocalNonFastQualifiers;
    bool  (::clang::QualType::*method_pointer_8c13254deadc5175a7a1c7edc4a64cba)() const = &::clang::QualType::hasLocalQualifiers;
    bool  (::clang::QualType::*method_pointer_d5c3c24beb805d759035628283b47ef2)() const = &::clang::QualType::hasNonTrivialObjCLifetime;
    bool  (::clang::QualType::*method_pointer_d6e8ba2628cb502a8ff7030bf31b79af)() const = &::clang::QualType::hasQualifiers;
    bool  (::clang::QualType::*method_pointer_551cf9ca7cac5f0dab1ab4a9e381ef1b)() const = &::clang::QualType::hasStrongOrWeakObjCLifetime;
    bool  (::clang::QualType::*method_pointer_bda8ec65694e58a8903da9ffe40588ce)(class ::clang::QualType ) const = &::clang::QualType::isAtLeastAsQualifiedAs;
    bool  (::clang::QualType::*method_pointer_ad01c892af9451ae96f9b255d858b127)() const = &::clang::QualType::isCForbiddenLValueType;
    bool  (::clang::QualType::*method_pointer_33b7e912c5e852409d4a48fd75153974)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX11PODType;
    bool  (::clang::QualType::*method_pointer_146bb529a84d50ac962ed376bc840d3e)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX98PODType;
    bool  (::clang::QualType::*method_pointer_ccfac4f56d275aaf8d5f770a400a1f87)() const = &::clang::QualType::isCanonical;
    bool  (::clang::QualType::*method_pointer_cebc50ff3be75d13b4c8950ed6245738)() const = &::clang::QualType::isCanonicalAsParam;
    bool  (::clang::QualType::*method_pointer_552fa076c867567aaf95977afc5c0665)() const = &::clang::QualType::isConstQualified;
    bool  (::clang::QualType::*method_pointer_235e850498c558e198e0c56dcc195580)(class ::clang::ASTContext  &) const = &::clang::QualType::isConstant;
    bool  (::clang::QualType::*method_pointer_acb9ad33b40655149a95745113a48347)() const = &::clang::QualType::isLocalConstQualified;
    bool  (::clang::QualType::*method_pointer_4746f21945665a318a035cd9b32eb4fb)() const = &::clang::QualType::isLocalRestrictQualified;
    bool  (::clang::QualType::*method_pointer_7a7f83e355b25b47bb8da8e709841116)() const = &::clang::QualType::isLocalVolatileQualified;
    bool  (::clang::QualType::*method_pointer_861480965a8650318efbb1d5deb793af)(class ::clang::QualType ) const = &::clang::QualType::isMoreQualifiedThan;
    bool  (::clang::QualType::*method_pointer_7350ddbbd9845c6d8a7e778c055c481c)() const = &::clang::QualType::isNull;
    bool  (::clang::QualType::*method_pointer_f9563e4b108e50efa7a009f62796e971)() const = &::clang::QualType::isObjCGCStrong;
    bool  (::clang::QualType::*method_pointer_84b4e8f0f91a5417b0a12cae6636f8df)() const = &::clang::QualType::isObjCGCWeak;
    bool  (::clang::QualType::*method_pointer_3666d7dba2a35b44aa8e30c9654eaff7)(class ::clang::ASTContext  &) const = &::clang::QualType::isPODType;
    bool  (::clang::QualType::*method_pointer_d63741a61b3258b4b1e28ba7194900dc)() const = &::clang::QualType::isRestrictQualified;
    bool  (::clang::QualType::*method_pointer_13a75268c7f55a79b16ac39a1b85bd0b)(class ::clang::ASTContext  &) const = &::clang::QualType::isTrivialType;
    bool  (::clang::QualType::*method_pointer_2ea41899deca5463ab49d5c3f00b9a70)(class ::clang::ASTContext  &) const = &::clang::QualType::isTriviallyCopyableType;
    bool  (::clang::QualType::*method_pointer_b04518fbb50651e5b81af5e589ada418)() const = &::clang::QualType::isVolatileQualified;
    void  (::clang::QualType::*method_pointer_922efb6822f3584385894181ab1dd6e1)(unsigned int ) = &::clang::QualType::removeLocalCVRQualifiers;
    void  (::clang::QualType::*method_pointer_df699105377a50e78987d56cb9d4d2ab)() = &::clang::QualType::removeLocalConst;
    void  (::clang::QualType::*method_pointer_320bff5407fd5abf83d2eeedfc048e89)() = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_4af5af011fb55cf9bcf2a467ea822aa0)(unsigned int ) = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_a44ec339379a585aa6234a1e3133fe93)() = &::clang::QualType::removeLocalRestrict;
    void  (::clang::QualType::*method_pointer_954b74cad56f57caba1e42d78ead9cc8)() = &::clang::QualType::removeLocalVolatile;
    void  (::clang::QualType::*method_pointer_885ecc5705635d808e07e5b93ba9f9ad)(unsigned int ) = &::clang::QualType::setLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_3900fd660d19556985be0ad2fdde372b)(unsigned int ) const = &::clang::QualType::withCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_a10a49c600235302b1ee90c7ca970f6f)() const = &::clang::QualType::withConst;
    class ::clang::QualType  (::clang::QualType::*method_pointer_b7b8c23cc8f35504a159d74a800bb5ef)(unsigned int ) const = &::clang::QualType::withExactLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_59b46b62fe0d5465b83c79f7afce794c)(unsigned int ) const = &::clang::QualType::withFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_2b8c7c98d380587e8724160c8719f8e6)() const = &::clang::QualType::withRestrict;
    class ::clang::QualType  (::clang::QualType::*method_pointer_309fff882754580ba8b2999851226619)() const = &::clang::QualType::withVolatile;
    class ::clang::QualType  (::clang::QualType::*method_pointer_e547546ecfff5cc6a274a478510e3097)() const = &::clang::QualType::withoutLocalFastQualifiers;
    boost::python::class_< class ::clang::QualType, autowig::HeldType< class ::clang::QualType > > class_3bcdbbe507dd5ad29df9e33aca4e435f("QualType", "", boost::python::no_init);
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("ignore_parens", method_pointer_ae0f4d822bdd59f4b9d8d62c30ec9594, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_const", method_pointer_3d100f437d8f57b388cd8832348a4789, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_fast_qualifiers", method_pointer_02f03224062e5dc78e2b59c0e29948b5, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_restrict", method_pointer_462ae438b63b50db8037db0bb4997083, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_volatile", method_pointer_5138ab98451a5bcb8f25a69dd73f9a8c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("dump", method_pointer_bda095c52b255ab99cf5ee85d7678b4f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_address_space", method_pointer_bd12dee9ea4c52868bb597017bd370dc, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_cvr_qualifiers", method_pointer_1f51e712ae0b5ee2a47d337f8d57fd39, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_canonical_type", method_pointer_8b64387e831e5b33b192e7a6f94294eb, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_cvr_qualifiers", method_pointer_75c4d5e173f9541884d799df6ce45f3a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_fast_qualifiers", method_pointer_3fd760c5d13b5e40955fad7857564965, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_unqualified_type", method_pointer_002d838ba22e57ebb0e6bc26e6320f18, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_non_reference_type", method_pointer_4b8d2425da345a70ab2b35d0a86bb9b1, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr", method_pointer_66379bfb93665c4fa5a95106d6a321e0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr_or_null", method_pointer_7a048f43749d562dbffadaaf2adb5b33, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_unqualified_type", method_pointer_cc5fdf751e23517da2faad06ed8edc8b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_non_fast_qualifiers", method_pointer_6ede31119ec957b29ea7371e79633f49, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_qualifiers", method_pointer_8c13254deadc5175a7a1c7edc4a64cba, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_non_trivial_obj_c_lifetime", method_pointer_d5c3c24beb805d759035628283b47ef2, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_qualifiers", method_pointer_d6e8ba2628cb502a8ff7030bf31b79af, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_strong_or_weak_obj_c_lifetime", method_pointer_551cf9ca7cac5f0dab1ab4a9e381ef1b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_at_least_as_qualified_as", method_pointer_bda8ec65694e58a8903da9ffe40588ce, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_c_forbidden_l_value_type", method_pointer_ad01c892af9451ae96f9b255d858b127, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx11pod_type", method_pointer_33b7e912c5e852409d4a48fd75153974, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx98pod_type", method_pointer_146bb529a84d50ac962ed376bc840d3e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical", method_pointer_ccfac4f56d275aaf8d5f770a400a1f87, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical_as_param", method_pointer_cebc50ff3be75d13b4c8950ed6245738, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_const_qualified", method_pointer_552fa076c867567aaf95977afc5c0665, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_constant", method_pointer_235e850498c558e198e0c56dcc195580, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_const_qualified", method_pointer_acb9ad33b40655149a95745113a48347, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_restrict_qualified", method_pointer_4746f21945665a318a035cd9b32eb4fb, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_volatile_qualified", method_pointer_7a7f83e355b25b47bb8da8e709841116, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_more_qualified_than", method_pointer_861480965a8650318efbb1d5deb793af, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_null", method_pointer_7350ddbbd9845c6d8a7e778c055c481c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_strong", method_pointer_f9563e4b108e50efa7a009f62796e971, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_weak", method_pointer_84b4e8f0f91a5417b0a12cae6636f8df, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_pod_type", method_pointer_3666d7dba2a35b44aa8e30c9654eaff7, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_restrict_qualified", method_pointer_d63741a61b3258b4b1e28ba7194900dc, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivial_type", method_pointer_13a75268c7f55a79b16ac39a1b85bd0b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivially_copyable_type", method_pointer_2ea41899deca5463ab49d5c3f00b9a70, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_volatile_qualified", method_pointer_b04518fbb50651e5b81af5e589ada418, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_cvr_qualifiers", method_pointer_922efb6822f3584385894181ab1dd6e1, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_const", method_pointer_df699105377a50e78987d56cb9d4d2ab, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_320bff5407fd5abf83d2eeedfc048e89, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_4af5af011fb55cf9bcf2a467ea822aa0, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_restrict", method_pointer_a44ec339379a585aa6234a1e3133fe93, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_volatile", method_pointer_954b74cad56f57caba1e42d78ead9cc8, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("set_local_fast_qualifiers", method_pointer_885ecc5705635d808e07e5b93ba9f9ad, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_cvr_qualifiers", method_pointer_3900fd660d19556985be0ad2fdde372b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_const", method_pointer_a10a49c600235302b1ee90c7ca970f6f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_exact_local_fast_qualifiers", method_pointer_b7b8c23cc8f35504a159d74a800bb5ef, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_fast_qualifiers", method_pointer_59b46b62fe0d5465b83c79f7afce794c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_restrict", method_pointer_2b8c7c98d380587e8724160c8719f8e6, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_volatile", method_pointer_309fff882754580ba8b2999851226619, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("without_local_fast_qualifiers", method_pointer_e547546ecfff5cc6a274a478510e3097, "");

}