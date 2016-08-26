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
    class ::clang::QualType  (::clang::QualType::*method_pointer_42a14b51eec5593a8ae6eba3c1dd793b)() const = &::clang::QualType::IgnoreParens;
    void  (::clang::QualType::*method_pointer_fe3e9f0a560154a99c1c67abb71189f0)() = &::clang::QualType::addConst;
    void  (::clang::QualType::*method_pointer_e3d5eeebb21558de924ba6cd791787e6)(unsigned int ) = &::clang::QualType::addFastQualifiers;
    void  (::clang::QualType::*method_pointer_d0e454b6ec6e5631a8b9bac10d8b6136)() = &::clang::QualType::addRestrict;
    void  (::clang::QualType::*method_pointer_2cca24f3861f5c668874d2d91bdd2a50)() = &::clang::QualType::addVolatile;
    void  (::clang::QualType::*method_pointer_c5106627fed9560c936576eff3ef874b)() const = &::clang::QualType::dump;
    unsigned int  (::clang::QualType::*method_pointer_ab5ce8d3f7f05ea4b298a375a4d469c7)() const = &::clang::QualType::getAddressSpace;
    unsigned int  (::clang::QualType::*method_pointer_3a490a9813355cae9dcfbd027f656740)() const = &::clang::QualType::getCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_0b16589e4786598a8e40e987273db230)() const = &::clang::QualType::getCanonicalType;
    unsigned int  (::clang::QualType::*method_pointer_9a4388004758549a8e3e67991cd988ae)() const = &::clang::QualType::getLocalCVRQualifiers;
    unsigned int  (::clang::QualType::*method_pointer_d23fa67d492e515996be58303678ff9b)() const = &::clang::QualType::getLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_6f626445884a55e8b7e155c9b9e0588f)() const = &::clang::QualType::getLocalUnqualifiedType;
    class ::clang::QualType  (::clang::QualType::*method_pointer_c795759cd98f5a3b9e930a205b5a43bc)() const = &::clang::QualType::getNonReferenceType;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_285364c8ed8f527aa7f3b011522285e6)() const = &::clang::QualType::getTypePtr;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_48d69c8e48b2517bb777b87b8e8f6ab9)() const = &::clang::QualType::getTypePtrOrNull;
    class ::clang::QualType  (::clang::QualType::*method_pointer_61c9c1b7a933535e82991a14ade2efeb)() const = &::clang::QualType::getUnqualifiedType;
    bool  (::clang::QualType::*method_pointer_1ac7ba40cebb5358b2be7c74fc5d0e78)() const = &::clang::QualType::hasLocalNonFastQualifiers;
    bool  (::clang::QualType::*method_pointer_1352d20674c65cc09fcb37dad879d7e7)() const = &::clang::QualType::hasLocalQualifiers;
    bool  (::clang::QualType::*method_pointer_f3681541a68f52958a6e8dbd2ffe8b8e)() const = &::clang::QualType::hasNonTrivialObjCLifetime;
    bool  (::clang::QualType::*method_pointer_857c3558c62f560588e0187b13fcdab8)() const = &::clang::QualType::hasQualifiers;
    bool  (::clang::QualType::*method_pointer_2d25f1c2fe415b218cffadfdf5ffec13)() const = &::clang::QualType::hasStrongOrWeakObjCLifetime;
    bool  (::clang::QualType::*method_pointer_9a6459822f1557098ed3e9f777b8209d)(class ::clang::QualType ) const = &::clang::QualType::isAtLeastAsQualifiedAs;
    bool  (::clang::QualType::*method_pointer_85c0938a56845b368b80d796b2cb4ea2)() const = &::clang::QualType::isCForbiddenLValueType;
    bool  (::clang::QualType::*method_pointer_ffbc837878515520ab082a57e1e16201)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX11PODType;
    bool  (::clang::QualType::*method_pointer_c8d67686c53157cfbe4d8891844ab1e9)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX98PODType;
    bool  (::clang::QualType::*method_pointer_eecbc67cda18510aac0f61c21c0c4898)() const = &::clang::QualType::isCanonical;
    bool  (::clang::QualType::*method_pointer_c889b985ee445ca68afff1cfc79e42c4)() const = &::clang::QualType::isCanonicalAsParam;
    bool  (::clang::QualType::*method_pointer_348e81c56b4c55d5a46d5243ce48ef7b)() const = &::clang::QualType::isConstQualified;
    bool  (::clang::QualType::*method_pointer_2ad114b0ed895125b8b476089500236f)(class ::clang::ASTContext  &) const = &::clang::QualType::isConstant;
    bool  (::clang::QualType::*method_pointer_e5e9fd9402d55a8ea74a5b1506059304)() const = &::clang::QualType::isLocalConstQualified;
    bool  (::clang::QualType::*method_pointer_2b219f89753259f2b9c70b20a324c71d)() const = &::clang::QualType::isLocalRestrictQualified;
    bool  (::clang::QualType::*method_pointer_f044a7e7e82956b4b86d33ec101f1572)() const = &::clang::QualType::isLocalVolatileQualified;
    bool  (::clang::QualType::*method_pointer_4de493c1babe5a3fbacbad19a12bfb98)(class ::clang::QualType ) const = &::clang::QualType::isMoreQualifiedThan;
    bool  (::clang::QualType::*method_pointer_7f9b10de1f3956e6bf5c78f7a3466005)() const = &::clang::QualType::isNull;
    bool  (::clang::QualType::*method_pointer_806eaa8ae5315c3a8fcf405de4b0fd2d)() const = &::clang::QualType::isObjCGCStrong;
    bool  (::clang::QualType::*method_pointer_85ee7d0221ac5831be325d5b4db45efa)() const = &::clang::QualType::isObjCGCWeak;
    bool  (::clang::QualType::*method_pointer_99f950bb648d5cbf9ae41b621ce6ad17)(class ::clang::ASTContext  &) const = &::clang::QualType::isPODType;
    bool  (::clang::QualType::*method_pointer_13f3b664d0ee5f53a6208fb0768debb5)() const = &::clang::QualType::isRestrictQualified;
    bool  (::clang::QualType::*method_pointer_7caa43cb91bd51ff8bf998a039b80859)(class ::clang::ASTContext  &) const = &::clang::QualType::isTrivialType;
    bool  (::clang::QualType::*method_pointer_0fd13a5224245befa369a1e5b5eb6fe6)(class ::clang::ASTContext  &) const = &::clang::QualType::isTriviallyCopyableType;
    bool  (::clang::QualType::*method_pointer_46c7953d57cc5f3aae5f9a41f392d786)() const = &::clang::QualType::isVolatileQualified;
    void  (::clang::QualType::*method_pointer_ad54c4f1f06c5bc2ac6bd000537199f0)(unsigned int ) = &::clang::QualType::removeLocalCVRQualifiers;
    void  (::clang::QualType::*method_pointer_7546a706340b5000801fe7a0128761cf)() = &::clang::QualType::removeLocalConst;
    void  (::clang::QualType::*method_pointer_33572568756754c084eaf35bfa89491e)() = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_a9ff6e5c2f0e5cb68cc2b019a7a7461a)(unsigned int ) = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_4f4cb3d020845134a74de34b6ac1f8bf)() = &::clang::QualType::removeLocalRestrict;
    void  (::clang::QualType::*method_pointer_15e402346f8a55ab8b6b3001b8b496fe)() = &::clang::QualType::removeLocalVolatile;
    void  (::clang::QualType::*method_pointer_b7f7d6532be6596782d89a6f6b6a8f33)(unsigned int ) = &::clang::QualType::setLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_edb50fd4ca26538ab6efb77a0bbcc7dc)(unsigned int ) const = &::clang::QualType::withCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_53358f5af690527588ad701a7c29637f)() const = &::clang::QualType::withConst;
    class ::clang::QualType  (::clang::QualType::*method_pointer_5e3f1e1a08605237a1c3bd93a9f2c8dd)(unsigned int ) const = &::clang::QualType::withExactLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_45ae3eb040335a539332020f7e0dcb9f)(unsigned int ) const = &::clang::QualType::withFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_3655331b1a765bfda425b6409696df29)() const = &::clang::QualType::withRestrict;
    class ::clang::QualType  (::clang::QualType::*method_pointer_57e307202e75503fae5040e96e3fd425)() const = &::clang::QualType::withVolatile;
    class ::clang::QualType  (::clang::QualType::*method_pointer_4eff2c6ad74f5db58165e99c1ed3b259)() const = &::clang::QualType::withoutLocalFastQualifiers;
    boost::python::class_< class ::clang::QualType, autowig::HeldType< class ::clang::QualType > > class_3bcdbbe507dd5ad29df9e33aca4e435f("QualType", "", boost::python::no_init);
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("ignore_parens", method_pointer_42a14b51eec5593a8ae6eba3c1dd793b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_const", method_pointer_fe3e9f0a560154a99c1c67abb71189f0, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_fast_qualifiers", method_pointer_e3d5eeebb21558de924ba6cd791787e6, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_restrict", method_pointer_d0e454b6ec6e5631a8b9bac10d8b6136, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_volatile", method_pointer_2cca24f3861f5c668874d2d91bdd2a50, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("dump", method_pointer_c5106627fed9560c936576eff3ef874b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_address_space", method_pointer_ab5ce8d3f7f05ea4b298a375a4d469c7, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_cvr_qualifiers", method_pointer_3a490a9813355cae9dcfbd027f656740, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_canonical_type", method_pointer_0b16589e4786598a8e40e987273db230, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_cvr_qualifiers", method_pointer_9a4388004758549a8e3e67991cd988ae, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_fast_qualifiers", method_pointer_d23fa67d492e515996be58303678ff9b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_unqualified_type", method_pointer_6f626445884a55e8b7e155c9b9e0588f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_non_reference_type", method_pointer_c795759cd98f5a3b9e930a205b5a43bc, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr", method_pointer_285364c8ed8f527aa7f3b011522285e6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr_or_null", method_pointer_48d69c8e48b2517bb777b87b8e8f6ab9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_unqualified_type", method_pointer_61c9c1b7a933535e82991a14ade2efeb, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_non_fast_qualifiers", method_pointer_1ac7ba40cebb5358b2be7c74fc5d0e78, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_qualifiers", method_pointer_1352d20674c65cc09fcb37dad879d7e7, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_non_trivial_obj_c_lifetime", method_pointer_f3681541a68f52958a6e8dbd2ffe8b8e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_qualifiers", method_pointer_857c3558c62f560588e0187b13fcdab8, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_strong_or_weak_obj_c_lifetime", method_pointer_2d25f1c2fe415b218cffadfdf5ffec13, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_at_least_as_qualified_as", method_pointer_9a6459822f1557098ed3e9f777b8209d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_c_forbidden_l_value_type", method_pointer_85c0938a56845b368b80d796b2cb4ea2, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx11pod_type", method_pointer_ffbc837878515520ab082a57e1e16201, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx98pod_type", method_pointer_c8d67686c53157cfbe4d8891844ab1e9, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical", method_pointer_eecbc67cda18510aac0f61c21c0c4898, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical_as_param", method_pointer_c889b985ee445ca68afff1cfc79e42c4, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_const_qualified", method_pointer_348e81c56b4c55d5a46d5243ce48ef7b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_constant", method_pointer_2ad114b0ed895125b8b476089500236f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_const_qualified", method_pointer_e5e9fd9402d55a8ea74a5b1506059304, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_restrict_qualified", method_pointer_2b219f89753259f2b9c70b20a324c71d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_volatile_qualified", method_pointer_f044a7e7e82956b4b86d33ec101f1572, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_more_qualified_than", method_pointer_4de493c1babe5a3fbacbad19a12bfb98, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_null", method_pointer_7f9b10de1f3956e6bf5c78f7a3466005, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_strong", method_pointer_806eaa8ae5315c3a8fcf405de4b0fd2d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_weak", method_pointer_85ee7d0221ac5831be325d5b4db45efa, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_pod_type", method_pointer_99f950bb648d5cbf9ae41b621ce6ad17, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_restrict_qualified", method_pointer_13f3b664d0ee5f53a6208fb0768debb5, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivial_type", method_pointer_7caa43cb91bd51ff8bf998a039b80859, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivially_copyable_type", method_pointer_0fd13a5224245befa369a1e5b5eb6fe6, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_volatile_qualified", method_pointer_46c7953d57cc5f3aae5f9a41f392d786, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_cvr_qualifiers", method_pointer_ad54c4f1f06c5bc2ac6bd000537199f0, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_const", method_pointer_7546a706340b5000801fe7a0128761cf, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_33572568756754c084eaf35bfa89491e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_a9ff6e5c2f0e5cb68cc2b019a7a7461a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_restrict", method_pointer_4f4cb3d020845134a74de34b6ac1f8bf, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_volatile", method_pointer_15e402346f8a55ab8b6b3001b8b496fe, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("set_local_fast_qualifiers", method_pointer_b7f7d6532be6596782d89a6f6b6a8f33, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_cvr_qualifiers", method_pointer_edb50fd4ca26538ab6efb77a0bbcc7dc, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_const", method_pointer_53358f5af690527588ad701a7c29637f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_exact_local_fast_qualifiers", method_pointer_5e3f1e1a08605237a1c3bd93a9f2c8dd, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_fast_qualifiers", method_pointer_45ae3eb040335a539332020f7e0dcb9f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_restrict", method_pointer_3655331b1a765bfda425b6409696df29, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_volatile", method_pointer_57e307202e75503fae5040e96e3fd425, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("without_local_fast_qualifiers", method_pointer_4eff2c6ad74f5db58165e99c1ed3b259, "");

}