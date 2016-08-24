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
    class ::clang::QualType  (::clang::QualType::*method_pointer_3d126ba4d01d54e897984e6eb5acb1c4)() const = &::clang::QualType::IgnoreParens;
    void  (::clang::QualType::*method_pointer_0ba6246a6cbc5a1893cefd72389a3e30)() = &::clang::QualType::addConst;
    void  (::clang::QualType::*method_pointer_61b622e9d80b595ca35334a9c5471464)(unsigned int ) = &::clang::QualType::addFastQualifiers;
    void  (::clang::QualType::*method_pointer_171f72312a5350d39bd60c2406fc3359)() = &::clang::QualType::addRestrict;
    void  (::clang::QualType::*method_pointer_0a31d9fbad83536d83569453ed39275a)() = &::clang::QualType::addVolatile;
    void  (::clang::QualType::*method_pointer_8bcf2adfbc7c5e7a9cbeecda83af73d6)() const = &::clang::QualType::dump;
    unsigned int  (::clang::QualType::*method_pointer_264dcc31d3aa5809ad20667eaab9db3a)() const = &::clang::QualType::getAddressSpace;
    unsigned int  (::clang::QualType::*method_pointer_6ba7c112417558a69644dbe17491f016)() const = &::clang::QualType::getCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_61f3e8849fc55f5f81b460309cd003ba)() const = &::clang::QualType::getCanonicalType;
    unsigned int  (::clang::QualType::*method_pointer_913278f5a4365532b0ff8818f9197580)() const = &::clang::QualType::getLocalCVRQualifiers;
    unsigned int  (::clang::QualType::*method_pointer_0d1e71292fe959c48c3204bb31ff716f)() const = &::clang::QualType::getLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_cecde0533ce9586e847e8ecfc2490710)() const = &::clang::QualType::getLocalUnqualifiedType;
    class ::clang::QualType  (::clang::QualType::*method_pointer_de947c5e252d51749bd4d6c8a11c01c7)() const = &::clang::QualType::getNonReferenceType;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_0867e1fd4c5256658147fbeb230ae726)() const = &::clang::QualType::getTypePtr;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_04f2948617375d639a195b95fca832ef)() const = &::clang::QualType::getTypePtrOrNull;
    class ::clang::QualType  (::clang::QualType::*method_pointer_f40e088ed8d6551eb3e8e784d9d9ac2e)() const = &::clang::QualType::getUnqualifiedType;
    bool  (::clang::QualType::*method_pointer_1fd3d7bfba4f54b4ae46b04e8db3d2f6)() const = &::clang::QualType::hasLocalNonFastQualifiers;
    bool  (::clang::QualType::*method_pointer_1205150391745e3bb0b8f5ba30e2c53c)() const = &::clang::QualType::hasLocalQualifiers;
    bool  (::clang::QualType::*method_pointer_74c670d386da5c39b21a2d39a74aeb74)() const = &::clang::QualType::hasNonTrivialObjCLifetime;
    bool  (::clang::QualType::*method_pointer_80386b9e9d79535d80548e751fa7b6ca)() const = &::clang::QualType::hasQualifiers;
    bool  (::clang::QualType::*method_pointer_2b6ef811f6a255afa7aade34aaef40ce)() const = &::clang::QualType::hasStrongOrWeakObjCLifetime;
    bool  (::clang::QualType::*method_pointer_86d215ffc519500b9f629dc683cf4852)(class ::clang::QualType ) const = &::clang::QualType::isAtLeastAsQualifiedAs;
    bool  (::clang::QualType::*method_pointer_21f4aa33d39d5af3bb6840ad95dacd66)() const = &::clang::QualType::isCForbiddenLValueType;
    bool  (::clang::QualType::*method_pointer_9a5b35494f275df39b6a65d0594b2dec)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX11PODType;
    bool  (::clang::QualType::*method_pointer_7975420ef5d45a49a7bb6fdd99a2336b)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX98PODType;
    bool  (::clang::QualType::*method_pointer_07659816981f53bc80f1ba8a65c52eb1)() const = &::clang::QualType::isCanonical;
    bool  (::clang::QualType::*method_pointer_514188f4654a5cb8bd763da45b85ab13)() const = &::clang::QualType::isCanonicalAsParam;
    bool  (::clang::QualType::*method_pointer_7daf62593da750b9b48603d60ba0341a)() const = &::clang::QualType::isConstQualified;
    bool  (::clang::QualType::*method_pointer_8d5505e742665fe6b2faccb81e4c5977)(class ::clang::ASTContext  &) const = &::clang::QualType::isConstant;
    bool  (::clang::QualType::*method_pointer_dd34666126cd5ed29b0110a50786a57c)() const = &::clang::QualType::isLocalConstQualified;
    bool  (::clang::QualType::*method_pointer_bb11c356fffe55d08bbb0c0ea6a9e50d)() const = &::clang::QualType::isLocalRestrictQualified;
    bool  (::clang::QualType::*method_pointer_057e988362f45cc79741b094e39a3b57)() const = &::clang::QualType::isLocalVolatileQualified;
    bool  (::clang::QualType::*method_pointer_dbc8dc75e125554eb9a36fd7519d2458)(class ::clang::QualType ) const = &::clang::QualType::isMoreQualifiedThan;
    bool  (::clang::QualType::*method_pointer_044ecf60a8d759b7a01e7e24eab064ac)() const = &::clang::QualType::isNull;
    bool  (::clang::QualType::*method_pointer_68f7dbb5338c50798a900de5d763fdb7)() const = &::clang::QualType::isObjCGCStrong;
    bool  (::clang::QualType::*method_pointer_f9adb48e72485788be96b9a45b5c899f)() const = &::clang::QualType::isObjCGCWeak;
    bool  (::clang::QualType::*method_pointer_35467e29c99d5bd39234cff11274f678)(class ::clang::ASTContext  &) const = &::clang::QualType::isPODType;
    bool  (::clang::QualType::*method_pointer_94998dffa2d25289a57d040f3f2d299b)() const = &::clang::QualType::isRestrictQualified;
    bool  (::clang::QualType::*method_pointer_7882e6c1399d51d19cd2536b9808a395)(class ::clang::ASTContext  &) const = &::clang::QualType::isTrivialType;
    bool  (::clang::QualType::*method_pointer_d017da926cae59359fa0555d9b04cd2a)(class ::clang::ASTContext  &) const = &::clang::QualType::isTriviallyCopyableType;
    bool  (::clang::QualType::*method_pointer_76a9163407d159ac87492d107fd74da6)() const = &::clang::QualType::isVolatileQualified;
    void  (::clang::QualType::*method_pointer_d64f5e3e79f15152b1252b8a3e32cb37)(unsigned int ) = &::clang::QualType::removeLocalCVRQualifiers;
    void  (::clang::QualType::*method_pointer_7fabcb237c6b59b5b5b7347a5189a9c7)() = &::clang::QualType::removeLocalConst;
    void  (::clang::QualType::*method_pointer_3693be58b7bc57b88dce13fc337b1a8c)(unsigned int ) = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_6227dede69055be79c15a83b43f30c2f)() = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_a69779419b6a57219892103a06449307)() = &::clang::QualType::removeLocalRestrict;
    void  (::clang::QualType::*method_pointer_3670b2b0ad655e7cba90cde42ea1b72e)() = &::clang::QualType::removeLocalVolatile;
    void  (::clang::QualType::*method_pointer_6174fa26ca465df78a8d816352e02aa8)(unsigned int ) = &::clang::QualType::setLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_48567dec7f1f5660a2e1108b840489a8)(unsigned int ) const = &::clang::QualType::withCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_14dac271f1fb5058b598d082a6e6be53)() const = &::clang::QualType::withConst;
    class ::clang::QualType  (::clang::QualType::*method_pointer_83fea4e6c2f056c48f392488ea88bae9)(unsigned int ) const = &::clang::QualType::withExactLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_f1c87d102e32510eb51691778aa28f76)(unsigned int ) const = &::clang::QualType::withFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_c835aa44f34a5b899eddb40ade78206e)() const = &::clang::QualType::withRestrict;
    class ::clang::QualType  (::clang::QualType::*method_pointer_18db04a7a281584385db0f43de33478d)() const = &::clang::QualType::withVolatile;
    class ::clang::QualType  (::clang::QualType::*method_pointer_6f781d0e187c5c4a8b4159dba53ea43c)() const = &::clang::QualType::withoutLocalFastQualifiers;
    boost::python::class_< class ::clang::QualType, autowig::HeldType< class ::clang::QualType > > class_3bcdbbe507dd5ad29df9e33aca4e435f("QualType", "", boost::python::no_init);
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("ignore_parens", method_pointer_3d126ba4d01d54e897984e6eb5acb1c4, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_const", method_pointer_0ba6246a6cbc5a1893cefd72389a3e30, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_fast_qualifiers", method_pointer_61b622e9d80b595ca35334a9c5471464, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_restrict", method_pointer_171f72312a5350d39bd60c2406fc3359, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_volatile", method_pointer_0a31d9fbad83536d83569453ed39275a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("dump", method_pointer_8bcf2adfbc7c5e7a9cbeecda83af73d6, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_address_space", method_pointer_264dcc31d3aa5809ad20667eaab9db3a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_cvr_qualifiers", method_pointer_6ba7c112417558a69644dbe17491f016, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_canonical_type", method_pointer_61f3e8849fc55f5f81b460309cd003ba, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_cvr_qualifiers", method_pointer_913278f5a4365532b0ff8818f9197580, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_fast_qualifiers", method_pointer_0d1e71292fe959c48c3204bb31ff716f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_unqualified_type", method_pointer_cecde0533ce9586e847e8ecfc2490710, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_non_reference_type", method_pointer_de947c5e252d51749bd4d6c8a11c01c7, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr", method_pointer_0867e1fd4c5256658147fbeb230ae726, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr_or_null", method_pointer_04f2948617375d639a195b95fca832ef, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_unqualified_type", method_pointer_f40e088ed8d6551eb3e8e784d9d9ac2e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_non_fast_qualifiers", method_pointer_1fd3d7bfba4f54b4ae46b04e8db3d2f6, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_qualifiers", method_pointer_1205150391745e3bb0b8f5ba30e2c53c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_non_trivial_obj_c_lifetime", method_pointer_74c670d386da5c39b21a2d39a74aeb74, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_qualifiers", method_pointer_80386b9e9d79535d80548e751fa7b6ca, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_strong_or_weak_obj_c_lifetime", method_pointer_2b6ef811f6a255afa7aade34aaef40ce, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_at_least_as_qualified_as", method_pointer_86d215ffc519500b9f629dc683cf4852, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_c_forbidden_l_value_type", method_pointer_21f4aa33d39d5af3bb6840ad95dacd66, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx11pod_type", method_pointer_9a5b35494f275df39b6a65d0594b2dec, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx98pod_type", method_pointer_7975420ef5d45a49a7bb6fdd99a2336b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical", method_pointer_07659816981f53bc80f1ba8a65c52eb1, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical_as_param", method_pointer_514188f4654a5cb8bd763da45b85ab13, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_const_qualified", method_pointer_7daf62593da750b9b48603d60ba0341a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_constant", method_pointer_8d5505e742665fe6b2faccb81e4c5977, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_const_qualified", method_pointer_dd34666126cd5ed29b0110a50786a57c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_restrict_qualified", method_pointer_bb11c356fffe55d08bbb0c0ea6a9e50d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_volatile_qualified", method_pointer_057e988362f45cc79741b094e39a3b57, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_more_qualified_than", method_pointer_dbc8dc75e125554eb9a36fd7519d2458, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_null", method_pointer_044ecf60a8d759b7a01e7e24eab064ac, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_strong", method_pointer_68f7dbb5338c50798a900de5d763fdb7, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_weak", method_pointer_f9adb48e72485788be96b9a45b5c899f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_pod_type", method_pointer_35467e29c99d5bd39234cff11274f678, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_restrict_qualified", method_pointer_94998dffa2d25289a57d040f3f2d299b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivial_type", method_pointer_7882e6c1399d51d19cd2536b9808a395, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivially_copyable_type", method_pointer_d017da926cae59359fa0555d9b04cd2a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_volatile_qualified", method_pointer_76a9163407d159ac87492d107fd74da6, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_cvr_qualifiers", method_pointer_d64f5e3e79f15152b1252b8a3e32cb37, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_const", method_pointer_7fabcb237c6b59b5b5b7347a5189a9c7, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_3693be58b7bc57b88dce13fc337b1a8c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_6227dede69055be79c15a83b43f30c2f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_restrict", method_pointer_a69779419b6a57219892103a06449307, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_volatile", method_pointer_3670b2b0ad655e7cba90cde42ea1b72e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("set_local_fast_qualifiers", method_pointer_6174fa26ca465df78a8d816352e02aa8, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_cvr_qualifiers", method_pointer_48567dec7f1f5660a2e1108b840489a8, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_const", method_pointer_14dac271f1fb5058b598d082a6e6be53, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_exact_local_fast_qualifiers", method_pointer_83fea4e6c2f056c48f392488ea88bae9, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_fast_qualifiers", method_pointer_f1c87d102e32510eb51691778aa28f76, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_restrict", method_pointer_c835aa44f34a5b899eddb40ade78206e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_volatile", method_pointer_18db04a7a281584385db0f43de33478d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("without_local_fast_qualifiers", method_pointer_6f781d0e187c5c4a8b4159dba53ea43c, "");

}