#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::QualType const volatile * get_pointer<class ::clang::QualType const volatile >(class ::clang::QualType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_3bcdbbe507dd5ad29df9e33aca4e435f()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    unsigned int  (::clang::QualType::*method_pointer_9d13a45368705eb8a69b161a89d4fedc)() const = &::clang::QualType::getLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_434f7bf883a858f1ba102745744538e8)(unsigned int ) = &::clang::QualType::setLocalFastQualifiers;
    class ::clang::Type const * (::clang::QualType::*method_pointer_32455f980f905de2969c592693ccb29b)() const = &::clang::QualType::getTypePtr;
    class ::clang::Type const * (::clang::QualType::*method_pointer_33c701e28bdd53a992c34d4066eeed19)() const = &::clang::QualType::getTypePtrOrNull;
    bool  (::clang::QualType::*method_pointer_861ae65118695b69ba2ed5079c4f9ab6)() const = &::clang::QualType::isCanonical;
    bool  (::clang::QualType::*method_pointer_e028b12d9f7455bf9bd7a387bba7e475)() const = &::clang::QualType::isCanonicalAsParam;
    bool  (::clang::QualType::*method_pointer_a6f0a87807da5bdeb58f0c67eda62a59)() const = &::clang::QualType::isNull;
    bool  (::clang::QualType::*method_pointer_c3e8fd9f8f2a5c5eb4765a5c22d83bd8)() const = &::clang::QualType::isLocalConstQualified;
    bool  (::clang::QualType::*method_pointer_2ed7ff6576a3578da214cd2d4ffdf863)() const = &::clang::QualType::isConstQualified;
    bool  (::clang::QualType::*method_pointer_dbfb5df45bb75186b3b35d69ec9a038b)() const = &::clang::QualType::isLocalRestrictQualified;
    bool  (::clang::QualType::*method_pointer_3f4f771ae9835bd7b356f8e42bd36c61)() const = &::clang::QualType::isRestrictQualified;
    bool  (::clang::QualType::*method_pointer_0c2ab5b4bfd051eb8623cf893fb386be)() const = &::clang::QualType::isLocalVolatileQualified;
    bool  (::clang::QualType::*method_pointer_668d3a254e3657289ea9f928ac53de86)() const = &::clang::QualType::isVolatileQualified;
    bool  (::clang::QualType::*method_pointer_88d7e105d3c05362854cd3d31816c4ab)() const = &::clang::QualType::hasLocalQualifiers;
    bool  (::clang::QualType::*method_pointer_939fc863ff4653bbaf05b3600f03bea7)() const = &::clang::QualType::hasQualifiers;
    bool  (::clang::QualType::*method_pointer_be1ee6cb2de95f629af8cc9fd2e74f44)() const = &::clang::QualType::hasLocalNonFastQualifiers;
    unsigned int  (::clang::QualType::*method_pointer_eae0399c712254ffb3bb9b9a1dd33e75)() const = &::clang::QualType::getLocalCVRQualifiers;
    unsigned int  (::clang::QualType::*method_pointer_58d019f8fa5b575abc0976f7a449fd37)() const = &::clang::QualType::getCVRQualifiers;
    bool  (::clang::QualType::*method_pointer_0de3e4fc8aeb5fbe86236e05aafa29ea)(class ::clang::ASTContext &) const = &::clang::QualType::isConstant;
    bool  (::clang::QualType::*method_pointer_59be1f800e305277b98dae1727bbf374)(class ::clang::ASTContext &) const = &::clang::QualType::isPODType;
    bool  (::clang::QualType::*method_pointer_babfa5039e7d5779bb5fe29664bfc9b0)(class ::clang::ASTContext &) const = &::clang::QualType::isCXX98PODType;
    bool  (::clang::QualType::*method_pointer_10964fc31d805045b151adccae4af80b)(class ::clang::ASTContext &) const = &::clang::QualType::isCXX11PODType;
    bool  (::clang::QualType::*method_pointer_8e19495ac51d5baeb204464e480c27c1)(class ::clang::ASTContext &) const = &::clang::QualType::isTrivialType;
    bool  (::clang::QualType::*method_pointer_e50b3b6c584f58de93b228c0ee3d79e5)(class ::clang::ASTContext &) const = &::clang::QualType::isTriviallyCopyableType;
    void  (::clang::QualType::*method_pointer_93a0d318e5b059c5838bd2fbc20883a6)() = &::clang::QualType::addConst;
    class ::clang::QualType  (::clang::QualType::*method_pointer_d31eca56dc7e51f3a2b71d2bc11c831e)() const = &::clang::QualType::withConst;
    void  (::clang::QualType::*method_pointer_a93e00cead855ad4b666077cf16c4609)() = &::clang::QualType::addVolatile;
    class ::clang::QualType  (::clang::QualType::*method_pointer_dc37b7c7bfac5d47b1765a3924e17b7c)() const = &::clang::QualType::withVolatile;
    void  (::clang::QualType::*method_pointer_0432cf68058752b4b54258f71a3e25c1)() = &::clang::QualType::addRestrict;
    class ::clang::QualType  (::clang::QualType::*method_pointer_411bab3e9feb5f398b70ea7b12b1d0ad)() const = &::clang::QualType::withRestrict;
    class ::clang::QualType  (::clang::QualType::*method_pointer_34dc8812c2b15759adadef2cb3ae001a)(unsigned int ) const = &::clang::QualType::withCVRQualifiers;
    void  (::clang::QualType::*method_pointer_47e36855e1be5e02b6489f3a3f60b409)(unsigned int ) = &::clang::QualType::addFastQualifiers;
    void  (::clang::QualType::*method_pointer_396f24fd9365561bbdb488de49ce2e1b)() = &::clang::QualType::removeLocalConst;
    void  (::clang::QualType::*method_pointer_68f5fe1dbee85f42bc9150e4ee0a7997)() = &::clang::QualType::removeLocalVolatile;
    void  (::clang::QualType::*method_pointer_6cc62e38471853de9d2673f7c5a0d553)() = &::clang::QualType::removeLocalRestrict;
    void  (::clang::QualType::*method_pointer_405ff55c8e44510f9542b0928aa5d73d)(unsigned int ) = &::clang::QualType::removeLocalCVRQualifiers;
    void  (::clang::QualType::*method_pointer_c04db886a40d572cbdeb15dc5c698a8d)() = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_3ae3d35562ed57b5b590a97e3a423557)(unsigned int ) = &::clang::QualType::removeLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_2bbe596bab055322ac022041931ed4a4)(unsigned int ) const = &::clang::QualType::withFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_9a250e7a5bc15f64914a900e6702d9ba)(unsigned int ) const = &::clang::QualType::withExactLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_4468a627bd42509a84af012afd754b93)() const = &::clang::QualType::withoutLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_3b506f20485d595bb6ff20b9c21e15ba)() const = &::clang::QualType::getCanonicalType;
    class ::clang::QualType  (::clang::QualType::*method_pointer_da304c245cd6553390dfb95b5731ba7c)() const = &::clang::QualType::getLocalUnqualifiedType;
    class ::clang::QualType  (::clang::QualType::*method_pointer_9e18d16fea8a50d78cd2baf65afaca9f)() const = &::clang::QualType::getUnqualifiedType;
    bool  (::clang::QualType::*method_pointer_6b4091fd2c7555ceab1b7eba30e75edd)(class ::clang::QualType ) const = &::clang::QualType::isMoreQualifiedThan;
    bool  (::clang::QualType::*method_pointer_e958fdb9b65a5c129bd306815f1c9a4f)(class ::clang::QualType ) const = &::clang::QualType::isAtLeastAsQualifiedAs;
    class ::clang::QualType  (::clang::QualType::*method_pointer_6f6f4951ef755454bef8bc120a9d7488)() const = &::clang::QualType::getNonReferenceType;
    class ::clang::QualType  (::clang::QualType::*method_pointer_45e6b8f4825558078063f5e80572a40f)() const = &::clang::QualType::IgnoreParens;
    void  (::clang::QualType::*method_pointer_5c53b21590555440aa1f86351db02d6b)() const = &::clang::QualType::dump;
    unsigned int  (::clang::QualType::*method_pointer_744fbdff0a145a51a9fbf95809f63f6d)() const = &::clang::QualType::getAddressSpace;
    bool  (::clang::QualType::*method_pointer_2bb8c0cca7ef5f58b1163197e0e800be)() const = &::clang::QualType::isObjCGCWeak;
    bool  (::clang::QualType::*method_pointer_c9c0a6198cc8596fb8e654922bd4fa09)() const = &::clang::QualType::isObjCGCStrong;
    bool  (::clang::QualType::*method_pointer_08103855b89b55dba8b33fd4af5c6417)() const = &::clang::QualType::hasNonTrivialObjCLifetime;
    bool  (::clang::QualType::*method_pointer_adfb1e7876575909bf814bca23f18342)() const = &::clang::QualType::hasStrongOrWeakObjCLifetime;
    bool  (::clang::QualType::*method_pointer_a0ad4ed8e5a05b72bb2693a73ad1840e)() const = &::clang::QualType::isCForbiddenLValueType;
    boost::python::class_< class ::clang::QualType, autowig::Held< class ::clang::QualType >::Type > class_3bcdbbe507dd5ad29df9e33aca4e435f("QualType", "", boost::python::no_init);
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def(boost::python::init<  >(""));
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def(boost::python::init< class ::clang::Type const *, unsigned int  >(""));
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def(boost::python::init< class ::clang::QualType const & >(""));
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_fast_qualifiers", method_pointer_9d13a45368705eb8a69b161a89d4fedc, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("set_local_fast_qualifiers", method_pointer_434f7bf883a858f1ba102745744538e8, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr", method_pointer_32455f980f905de2969c592693ccb29b, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.Type`\n\n");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr_or_null", method_pointer_33c701e28bdd53a992c34d4066eeed19, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical", method_pointer_861ae65118695b69ba2ed5079c4f9ab6, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical_as_param", method_pointer_e028b12d9f7455bf9bd7a387bba7e475, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_null", method_pointer_a6f0a87807da5bdeb58f0c67eda62a59, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_const_qualified", method_pointer_c3e8fd9f8f2a5c5eb4765a5c22d83bd8, "Determine whether this particular QualType instance has the 'const'\nqualifier set, without looking through typedefs that may have added\n'const' at a different level.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_const_qualified", method_pointer_2ed7ff6576a3578da214cd2d4ffdf863, "Determine whether this type is const-qualified.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_restrict_qualified", method_pointer_dbfb5df45bb75186b3b35d69ec9a038b, "Determine whether this particular QualType instance has the 'restrict'\nqualifier set, without looking through typedefs that may have added\n'restrict' at a different level.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_restrict_qualified", method_pointer_3f4f771ae9835bd7b356f8e42bd36c61, "Determine whether this type is restrict-qualified.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_volatile_qualified", method_pointer_0c2ab5b4bfd051eb8623cf893fb386be, "Determine whether this particular QualType instance has the 'volatile'\nqualifier set, without looking through typedefs that may have added\n'volatile' at a different level.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_volatile_qualified", method_pointer_668d3a254e3657289ea9f928ac53de86, "Determine whether this type is volatile-qualified.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_qualifiers", method_pointer_88d7e105d3c05362854cd3d31816c4ab, "Determine whether this particular QualType instance has any qualifiers,\nwithout looking through any typedefs that might add qualifiers at a\ndifferent level.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_qualifiers", method_pointer_939fc863ff4653bbaf05b3600f03bea7, "Determine whether this type has any qualifiers.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_non_fast_qualifiers", method_pointer_be1ee6cb2de95f629af8cc9fd2e74f44, "Determine whether this particular QualType instance has any 'non-fast'\nqualifiers, e.g., those that are stored in an ExtQualType instance.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_cvr_qualifiers", method_pointer_eae0399c712254ffb3bb9b9a1dd33e75, "Retrieve the set of CVR (const-volatile-restrict) qualifiers local to\nthis particular QualType instance, not including any qualifiers acquired\nthrough typedefs or other sugar.\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_cvr_qualifiers", method_pointer_58d019f8fa5b575abc0976f7a449fd37, "Retrieve the set of CVR (const-volatile-restrict) qualifiers applied to\nthis type.\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_constant", method_pointer_0de3e4fc8aeb5fbe86236e05aafa29ea, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_pod_type", method_pointer_59be1f800e305277b98dae1727bbf374, "Determine whether this is a Plain Old Data (POD) type (C++ 3.9p10).\n\n:Parameter:\n    `Context` (:py:class:`clanglite.clang.ASTContext`) - Undocumented\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx98pod_type", method_pointer_babfa5039e7d5779bb5fe29664bfc9b0, ":Parameter:\n    `Context` (:py:class:`clanglite.clang.ASTContext`) - Undocumented\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx11pod_type", method_pointer_10964fc31d805045b151adccae4af80b, ":Parameter:\n    `Context` (:py:class:`clanglite.clang.ASTContext`) - Undocumented\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivial_type", method_pointer_8e19495ac51d5baeb204464e480c27c1, ":Parameter:\n    `Context` (:py:class:`clanglite.clang.ASTContext`) - Undocumented\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivially_copyable_type", method_pointer_e50b3b6c584f58de93b228c0ee3d79e5, ":Parameter:\n    `Context` (:py:class:`clanglite.clang.ASTContext`) - Undocumented\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_const", method_pointer_93a0d318e5b059c5838bd2fbc20883a6, ":Return Type:\n    :cpp:any:`void`\n\n");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_const", method_pointer_d31eca56dc7e51f3a2b71d2bc11c831e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_volatile", method_pointer_a93e00cead855ad4b666077cf16c4609, ":Return Type:\n    :cpp:any:`void`\n\n");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_volatile", method_pointer_dc37b7c7bfac5d47b1765a3924e17b7c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_restrict", method_pointer_0432cf68058752b4b54258f71a3e25c1, ":Return Type:\n    :cpp:any:`void`\n\n");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_restrict", method_pointer_411bab3e9feb5f398b70ea7b12b1d0ad, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_cvr_qualifiers", method_pointer_34dc8812c2b15759adadef2cb3ae001a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_fast_qualifiers", method_pointer_47e36855e1be5e02b6489f3a3f60b409, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_const", method_pointer_396f24fd9365561bbdb488de49ce2e1b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_volatile", method_pointer_68f5fe1dbee85f42bc9150e4ee0a7997, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_restrict", method_pointer_6cc62e38471853de9d2673f7c5a0d553, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_cvr_qualifiers", method_pointer_405ff55c8e44510f9542b0928aa5d73d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_c04db886a40d572cbdeb15dc5c698a8d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_3ae3d35562ed57b5b590a97e3a423557, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_fast_qualifiers", method_pointer_2bbe596bab055322ac022041931ed4a4, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_exact_local_fast_qualifiers", method_pointer_9a250e7a5bc15f64914a900e6702d9ba, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("without_local_fast_qualifiers", method_pointer_4468a627bd42509a84af012afd754b93, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_canonical_type", method_pointer_3b506f20485d595bb6ff20b9c21e15ba, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_unqualified_type", method_pointer_da304c245cd6553390dfb95b5731ba7c, "Return this type with all of the instance-specific qualifiers removed,\nbut without removing any qualifiers that may have been applied through\ntypedefs.\n\n:Return Type:\n    :py:class:`clanglite.clang.QualType`\n\n");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_unqualified_type", method_pointer_9e18d16fea8a50d78cd2baf65afaca9f, "Retrieve the unqualified variant of the given type, removing as little\nsugar as possible.\n\nThis routine looks through various kinds of sugar to find the\nleast-desugared type that is unqualified. For example, given:\n\n:Return Type:\n    :py:class:`clanglite.clang.QualType`\n\n");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_more_qualified_than", method_pointer_6b4091fd2c7555ceab1b7eba30e75edd, "Determine whether this type is more qualified than the other given type,\nrequiring exact equality for non-CVR qualifiers.\n\n:Parameter:\n    `Other` (:py:class:`clanglite.clang.QualType`) - Undocumented\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_at_least_as_qualified_as", method_pointer_e958fdb9b65a5c129bd306815f1c9a4f, "Determine whether this type is at least as qualified as the other given\ntype, requiring exact equality for non-CVR qualifiers.\n\n:Parameter:\n    `Other` (:py:class:`clanglite.clang.QualType`) - Undocumented\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_non_reference_type", method_pointer_6f6f4951ef755454bef8bc120a9d7488, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("ignore_parens", method_pointer_45e6b8f4825558078063f5e80572a40f, ":Return Type:\n    :py:class:`clanglite.clang.QualType`\n\n");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("dump", method_pointer_5c53b21590555440aa1f86351db02d6b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_address_space", method_pointer_744fbdff0a145a51a9fbf95809f63f6d, ":Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_weak", method_pointer_2bb8c0cca7ef5f58b1163197e0e800be, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_strong", method_pointer_c9c0a6198cc8596fb8e654922bd4fa09, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_non_trivial_obj_c_lifetime", method_pointer_08103855b89b55dba8b33fd4af5c6417, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_strong_or_weak_obj_c_lifetime", method_pointer_adfb1e7876575909bf814bca23f18342, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_c_forbidden_l_value_type", method_pointer_a0ad4ed8e5a05b72bb2693a73ad1840e, ":Return Type:\n    :cpp:any:`bool`\n\n");

}