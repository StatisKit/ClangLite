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
    class ::clang::QualType  (::clang::QualType::*method_pointer_504dbcd90baa5aff8166cdc6a79e3121)() const = &::clang::QualType::IgnoreParens;
    void  (::clang::QualType::*method_pointer_1daf10af5e7b5b26b6db9694e403679b)() = &::clang::QualType::addConst;
    void  (::clang::QualType::*method_pointer_4997296711c25fe78f503ad536fa781b)(unsigned int ) = &::clang::QualType::addFastQualifiers;
    void  (::clang::QualType::*method_pointer_5208e07c6be95feebd7a01f95d960b66)() = &::clang::QualType::addRestrict;
    void  (::clang::QualType::*method_pointer_7f317b6e28395f4281d02e68947b6dba)() = &::clang::QualType::addVolatile;
    void  (::clang::QualType::*method_pointer_d8ea08cc85b6537dacca8af627c6ede6)() const = &::clang::QualType::dump;
    unsigned int  (::clang::QualType::*method_pointer_859a084fba9b573b9ed7d03716edc645)() const = &::clang::QualType::getAddressSpace;
    unsigned int  (::clang::QualType::*method_pointer_c9709797a083552ead8119804ab9b793)() const = &::clang::QualType::getCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_a263d33f88a95ec6856759ded90ca000)() const = &::clang::QualType::getCanonicalType;
    unsigned int  (::clang::QualType::*method_pointer_92b2c6fdad0e55ac95f92261874337df)() const = &::clang::QualType::getLocalCVRQualifiers;
    unsigned int  (::clang::QualType::*method_pointer_a0a53d89a1935fde99f61e814acefda4)() const = &::clang::QualType::getLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_8fc18da2da90504e8a17883b819cdd65)() const = &::clang::QualType::getLocalUnqualifiedType;
    class ::clang::QualType  (::clang::QualType::*method_pointer_263c0d2d786f5a40ba852c9ee0320f8c)() const = &::clang::QualType::getNonReferenceType;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_137d362750175a9e9b5d8e7dcb7d279f)() const = &::clang::QualType::getTypePtr;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_f2200860691854679cddc3259fe24a14)() const = &::clang::QualType::getTypePtrOrNull;
    class ::clang::QualType  (::clang::QualType::*method_pointer_1ddf39d85a955fe48a5e1ceb441bf64f)() const = &::clang::QualType::getUnqualifiedType;
    bool  (::clang::QualType::*method_pointer_80b8017421b4533c9cb93c8552fb852c)() const = &::clang::QualType::hasLocalNonFastQualifiers;
    bool  (::clang::QualType::*method_pointer_94fbb0390df154e19b9458bf5b30dc80)() const = &::clang::QualType::hasLocalQualifiers;
    bool  (::clang::QualType::*method_pointer_00360a6b9e025c21a73115bbc9aafe0a)() const = &::clang::QualType::hasNonTrivialObjCLifetime;
    bool  (::clang::QualType::*method_pointer_7fe28847b9475248b07806be2ecba9ef)() const = &::clang::QualType::hasQualifiers;
    bool  (::clang::QualType::*method_pointer_7bbd691fb90e581fa84c952eb87a7f02)() const = &::clang::QualType::hasStrongOrWeakObjCLifetime;
    bool  (::clang::QualType::*method_pointer_dc0948aafc9c508f9feb64a9efb1dcb8)(class ::clang::QualType ) const = &::clang::QualType::isAtLeastAsQualifiedAs;
    bool  (::clang::QualType::*method_pointer_eb693eb88fd25197a549e5f684418e8e)() const = &::clang::QualType::isCForbiddenLValueType;
    bool  (::clang::QualType::*method_pointer_70a2d2bb86a454699b4a1be4bbe41c71)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX11PODType;
    bool  (::clang::QualType::*method_pointer_c8d4b858ab575cbabcc8c032c51ccb1a)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX98PODType;
    bool  (::clang::QualType::*method_pointer_ffc31070acfc5207bf594467e1eab4ce)() const = &::clang::QualType::isCanonical;
    bool  (::clang::QualType::*method_pointer_975fb46bffbe53b38738fa7e84b600ae)() const = &::clang::QualType::isCanonicalAsParam;
    bool  (::clang::QualType::*method_pointer_114b54945ea95457b4d35e91527b541c)() const = &::clang::QualType::isConstQualified;
    bool  (::clang::QualType::*method_pointer_d9e96719fb22557ab4fdd55a28249e96)(class ::clang::ASTContext  &) const = &::clang::QualType::isConstant;
    bool  (::clang::QualType::*method_pointer_1d9321d937405e609252ab866763f92e)() const = &::clang::QualType::isLocalConstQualified;
    bool  (::clang::QualType::*method_pointer_48a90edb661a5a5e8485bf38930031d9)() const = &::clang::QualType::isLocalRestrictQualified;
    bool  (::clang::QualType::*method_pointer_37f3ad7e4aa1588f839e4a725a6d2ee5)() const = &::clang::QualType::isLocalVolatileQualified;
    bool  (::clang::QualType::*method_pointer_32784708d0d55009b99acb8e612be43f)(class ::clang::QualType ) const = &::clang::QualType::isMoreQualifiedThan;
    bool  (::clang::QualType::*method_pointer_e59987e9f43d50c48e0c8001b6c14de2)() const = &::clang::QualType::isNull;
    bool  (::clang::QualType::*method_pointer_d2623e922500525e8872accbabe629da)() const = &::clang::QualType::isObjCGCStrong;
    bool  (::clang::QualType::*method_pointer_f10ab66e844b58d0bb729fcd07cb2517)() const = &::clang::QualType::isObjCGCWeak;
    bool  (::clang::QualType::*method_pointer_974a7e9c0dea559db860fe1f3f778a49)(class ::clang::ASTContext  &) const = &::clang::QualType::isPODType;
    bool  (::clang::QualType::*method_pointer_678c886f7143578db01c81e57963ee64)() const = &::clang::QualType::isRestrictQualified;
    bool  (::clang::QualType::*method_pointer_24d0483f3c7e5dbf845133a86e05561c)(class ::clang::ASTContext  &) const = &::clang::QualType::isTrivialType;
    bool  (::clang::QualType::*method_pointer_8bf39c55489e55fdb77a3612782df98c)(class ::clang::ASTContext  &) const = &::clang::QualType::isTriviallyCopyableType;
    bool  (::clang::QualType::*method_pointer_653052e04f7f58aab8d6e1c890e1df6c)() const = &::clang::QualType::isVolatileQualified;
    void  (::clang::QualType::*method_pointer_ac77c76bd10e52c99dbdb0356757eff3)(unsigned int ) = &::clang::QualType::removeLocalCVRQualifiers;
    void  (::clang::QualType::*method_pointer_2e8f1ba613695d35b79ead5ca7070296)() = &::clang::QualType::removeLocalConst;
    void  (::clang::QualType::*method_pointer_0ccc8b07c5ba51e7840b2519c965bb4c)(unsigned int ) = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_b8f8ada285695d598d9acbba5afea85c)() = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_d4f30197dea05f0f87f41864bd6295a1)() = &::clang::QualType::removeLocalRestrict;
    void  (::clang::QualType::*method_pointer_41515c2125bd54958950b73eebd7d7d0)() = &::clang::QualType::removeLocalVolatile;
    void  (::clang::QualType::*method_pointer_c910478528b0595dae3b1b06fb17ff7c)(unsigned int ) = &::clang::QualType::setLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_ad9d4ea9f7cc52baa75dab5c41d9ceb2)(unsigned int ) const = &::clang::QualType::withCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_ea6dd2c9d7d95a4d9d448ba025b8d124)() const = &::clang::QualType::withConst;
    class ::clang::QualType  (::clang::QualType::*method_pointer_204cfed25d4150eebc4b841c97c0b928)(unsigned int ) const = &::clang::QualType::withExactLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_1a999a6b68f45ddf8f375f9efce75bf5)(unsigned int ) const = &::clang::QualType::withFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_a22948428bbc573fa48878846cca7c57)() const = &::clang::QualType::withRestrict;
    class ::clang::QualType  (::clang::QualType::*method_pointer_2d931523bd8754d9aa0504b88fa02974)() const = &::clang::QualType::withVolatile;
    class ::clang::QualType  (::clang::QualType::*method_pointer_0b5224716c3f5160a1508c7246982fb7)() const = &::clang::QualType::withoutLocalFastQualifiers;
    boost::python::class_< class ::clang::QualType, autowig::HeldType< class ::clang::QualType > > class_3bcdbbe507dd5ad29df9e33aca4e435f("QualType", "", boost::python::no_init);
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("ignore_parens", method_pointer_504dbcd90baa5aff8166cdc6a79e3121, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_const", method_pointer_1daf10af5e7b5b26b6db9694e403679b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_fast_qualifiers", method_pointer_4997296711c25fe78f503ad536fa781b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_restrict", method_pointer_5208e07c6be95feebd7a01f95d960b66, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_volatile", method_pointer_7f317b6e28395f4281d02e68947b6dba, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("dump", method_pointer_d8ea08cc85b6537dacca8af627c6ede6, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_address_space", method_pointer_859a084fba9b573b9ed7d03716edc645, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_cvr_qualifiers", method_pointer_c9709797a083552ead8119804ab9b793, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_canonical_type", method_pointer_a263d33f88a95ec6856759ded90ca000, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_cvr_qualifiers", method_pointer_92b2c6fdad0e55ac95f92261874337df, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_fast_qualifiers", method_pointer_a0a53d89a1935fde99f61e814acefda4, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_unqualified_type", method_pointer_8fc18da2da90504e8a17883b819cdd65, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_non_reference_type", method_pointer_263c0d2d786f5a40ba852c9ee0320f8c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr", method_pointer_137d362750175a9e9b5d8e7dcb7d279f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr_or_null", method_pointer_f2200860691854679cddc3259fe24a14, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_unqualified_type", method_pointer_1ddf39d85a955fe48a5e1ceb441bf64f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_non_fast_qualifiers", method_pointer_80b8017421b4533c9cb93c8552fb852c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_qualifiers", method_pointer_94fbb0390df154e19b9458bf5b30dc80, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_non_trivial_obj_c_lifetime", method_pointer_00360a6b9e025c21a73115bbc9aafe0a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_qualifiers", method_pointer_7fe28847b9475248b07806be2ecba9ef, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_strong_or_weak_obj_c_lifetime", method_pointer_7bbd691fb90e581fa84c952eb87a7f02, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_at_least_as_qualified_as", method_pointer_dc0948aafc9c508f9feb64a9efb1dcb8, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_c_forbidden_l_value_type", method_pointer_eb693eb88fd25197a549e5f684418e8e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx11pod_type", method_pointer_70a2d2bb86a454699b4a1be4bbe41c71, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx98pod_type", method_pointer_c8d4b858ab575cbabcc8c032c51ccb1a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical", method_pointer_ffc31070acfc5207bf594467e1eab4ce, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical_as_param", method_pointer_975fb46bffbe53b38738fa7e84b600ae, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_const_qualified", method_pointer_114b54945ea95457b4d35e91527b541c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_constant", method_pointer_d9e96719fb22557ab4fdd55a28249e96, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_const_qualified", method_pointer_1d9321d937405e609252ab866763f92e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_restrict_qualified", method_pointer_48a90edb661a5a5e8485bf38930031d9, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_volatile_qualified", method_pointer_37f3ad7e4aa1588f839e4a725a6d2ee5, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_more_qualified_than", method_pointer_32784708d0d55009b99acb8e612be43f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_null", method_pointer_e59987e9f43d50c48e0c8001b6c14de2, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_strong", method_pointer_d2623e922500525e8872accbabe629da, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_weak", method_pointer_f10ab66e844b58d0bb729fcd07cb2517, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_pod_type", method_pointer_974a7e9c0dea559db860fe1f3f778a49, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_restrict_qualified", method_pointer_678c886f7143578db01c81e57963ee64, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivial_type", method_pointer_24d0483f3c7e5dbf845133a86e05561c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivially_copyable_type", method_pointer_8bf39c55489e55fdb77a3612782df98c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_volatile_qualified", method_pointer_653052e04f7f58aab8d6e1c890e1df6c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_cvr_qualifiers", method_pointer_ac77c76bd10e52c99dbdb0356757eff3, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_const", method_pointer_2e8f1ba613695d35b79ead5ca7070296, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_0ccc8b07c5ba51e7840b2519c965bb4c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_b8f8ada285695d598d9acbba5afea85c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_restrict", method_pointer_d4f30197dea05f0f87f41864bd6295a1, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_volatile", method_pointer_41515c2125bd54958950b73eebd7d7d0, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("set_local_fast_qualifiers", method_pointer_c910478528b0595dae3b1b06fb17ff7c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_cvr_qualifiers", method_pointer_ad9d4ea9f7cc52baa75dab5c41d9ceb2, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_const", method_pointer_ea6dd2c9d7d95a4d9d448ba025b8d124, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_exact_local_fast_qualifiers", method_pointer_204cfed25d4150eebc4b841c97c0b928, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_fast_qualifiers", method_pointer_1a999a6b68f45ddf8f375f9efce75bf5, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_restrict", method_pointer_a22948428bbc573fa48878846cca7c57, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_volatile", method_pointer_2d931523bd8754d9aa0504b88fa02974, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("without_local_fast_qualifiers", method_pointer_0b5224716c3f5160a1508c7246982fb7, "");

}