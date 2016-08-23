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
    class ::clang::QualType  (::clang::QualType::*method_pointer_89cb609fa8af51339c050ad50a1e3bf1)() const = &::clang::QualType::IgnoreParens;
    void  (::clang::QualType::*method_pointer_b1a869ee407357a595242925e14bb9a8)() = &::clang::QualType::addConst;
    void  (::clang::QualType::*method_pointer_053898df9f335d4a93411e310b686437)(unsigned int ) = &::clang::QualType::addFastQualifiers;
    void  (::clang::QualType::*method_pointer_69957656d1a05b09b323b4dd4804dade)() = &::clang::QualType::addRestrict;
    void  (::clang::QualType::*method_pointer_6371e2d4aabc53af868c9154d595fdff)() = &::clang::QualType::addVolatile;
    void  (::clang::QualType::*method_pointer_369e5949b8aa56238f190c6c9c906554)() const = &::clang::QualType::dump;
    unsigned int  (::clang::QualType::*method_pointer_2d763b059718543a92db661141d9866f)() const = &::clang::QualType::getAddressSpace;
    unsigned int  (::clang::QualType::*method_pointer_8045d26cf5b85ed2a0d1f596e1df18e8)() const = &::clang::QualType::getCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_e5842612d99c5db7911649c4595316e8)() const = &::clang::QualType::getCanonicalType;
    unsigned int  (::clang::QualType::*method_pointer_cf2ff7bdf8065e738bce92e97dbd73d7)() const = &::clang::QualType::getLocalCVRQualifiers;
    unsigned int  (::clang::QualType::*method_pointer_6f4f61e03a3b50abb4455041e74c7ba1)() const = &::clang::QualType::getLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_4a780d0d02dd52f29ad51ac2565f32cd)() const = &::clang::QualType::getLocalUnqualifiedType;
    class ::clang::QualType  (::clang::QualType::*method_pointer_5348d3f780855c4889b6db929336b9c3)() const = &::clang::QualType::getNonReferenceType;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_570ca58d6ac3573494d50dc028fb7943)() const = &::clang::QualType::getTypePtr;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_babcd816e47b57a59327fd752f52b3a9)() const = &::clang::QualType::getTypePtrOrNull;
    class ::clang::QualType  (::clang::QualType::*method_pointer_b05195029670562d805d14b276237c01)() const = &::clang::QualType::getUnqualifiedType;
    bool  (::clang::QualType::*method_pointer_5badb01ddba05e119c68a790e382a577)() const = &::clang::QualType::hasLocalNonFastQualifiers;
    bool  (::clang::QualType::*method_pointer_efe29cc6c2ce57a78b44f294b8ff62fb)() const = &::clang::QualType::hasLocalQualifiers;
    bool  (::clang::QualType::*method_pointer_8972b7504f0c554eb7a624ee9e89a4f7)() const = &::clang::QualType::hasNonTrivialObjCLifetime;
    bool  (::clang::QualType::*method_pointer_8881bc866b3a5dbd897f7138cc5db810)() const = &::clang::QualType::hasQualifiers;
    bool  (::clang::QualType::*method_pointer_5d9dc2494f655c4686c9d349f5028bb4)() const = &::clang::QualType::hasStrongOrWeakObjCLifetime;
    bool  (::clang::QualType::*method_pointer_491ebec713d658b4b7ff716475726bac)(class ::clang::QualType ) const = &::clang::QualType::isAtLeastAsQualifiedAs;
    bool  (::clang::QualType::*method_pointer_178b4ee41c8b5a2ea1273b5934606e99)() const = &::clang::QualType::isCForbiddenLValueType;
    bool  (::clang::QualType::*method_pointer_6a4364fedf2e579b9f05a134d22ac3bb)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX11PODType;
    bool  (::clang::QualType::*method_pointer_8188678f2b77517d9d4553ad1baf1f73)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX98PODType;
    bool  (::clang::QualType::*method_pointer_023ba3b02ede57fe9550b2ea59d2f357)() const = &::clang::QualType::isCanonical;
    bool  (::clang::QualType::*method_pointer_923392a53dae5e0abb278f075ed9235c)() const = &::clang::QualType::isCanonicalAsParam;
    bool  (::clang::QualType::*method_pointer_1d64a667e4bc55cfa30689ce0b4af344)() const = &::clang::QualType::isConstQualified;
    bool  (::clang::QualType::*method_pointer_837cea15b1f35299a9bc80a8e264c8a9)(class ::clang::ASTContext  &) const = &::clang::QualType::isConstant;
    bool  (::clang::QualType::*method_pointer_a6f48335a916586b8cb90575c25d5aef)() const = &::clang::QualType::isLocalConstQualified;
    bool  (::clang::QualType::*method_pointer_4687a4e845465caca5e451835c94adcb)() const = &::clang::QualType::isLocalRestrictQualified;
    bool  (::clang::QualType::*method_pointer_00bba7cd2a3357daaa94304eec42ac78)() const = &::clang::QualType::isLocalVolatileQualified;
    bool  (::clang::QualType::*method_pointer_e80d0e50f5105e748a0c47313429ff24)(class ::clang::QualType ) const = &::clang::QualType::isMoreQualifiedThan;
    bool  (::clang::QualType::*method_pointer_f1d11dd2ef1e5e82a66533e0a50abf26)() const = &::clang::QualType::isNull;
    bool  (::clang::QualType::*method_pointer_c583c4672d445648a2ddec961e0f9a0d)() const = &::clang::QualType::isObjCGCStrong;
    bool  (::clang::QualType::*method_pointer_2e02490f69275f6eb6d6ba6747fd31ec)() const = &::clang::QualType::isObjCGCWeak;
    bool  (::clang::QualType::*method_pointer_fa4d08e9eddb5482aa415780b376542b)(class ::clang::ASTContext  &) const = &::clang::QualType::isPODType;
    bool  (::clang::QualType::*method_pointer_2af8679d23d652b39d3ae032cecfecbb)() const = &::clang::QualType::isRestrictQualified;
    bool  (::clang::QualType::*method_pointer_8dcabf9ff8745480aba99a26457e7f07)(class ::clang::ASTContext  &) const = &::clang::QualType::isTrivialType;
    bool  (::clang::QualType::*method_pointer_643c421444fa5ff9b05fc18771e0789c)(class ::clang::ASTContext  &) const = &::clang::QualType::isTriviallyCopyableType;
    bool  (::clang::QualType::*method_pointer_436aa73d44245233a35bdf7b7cd2dab2)() const = &::clang::QualType::isVolatileQualified;
    void  (::clang::QualType::*method_pointer_97d3339c4bf6523ea3a8f86ed0302894)(unsigned int ) = &::clang::QualType::removeLocalCVRQualifiers;
    void  (::clang::QualType::*method_pointer_2f0c02e214f7546cb2ca71809568f2b1)() = &::clang::QualType::removeLocalConst;
    void  (::clang::QualType::*method_pointer_31d84612ebeb5e219b5440387ef2239d)() = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_9f83e81404465a86a85ee781ecb78606)(unsigned int ) = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_f19e904b7ffa5d5c80e9230eeed9fb3b)() = &::clang::QualType::removeLocalRestrict;
    void  (::clang::QualType::*method_pointer_d3fb17ba51255f32be8682596b3a4f82)() = &::clang::QualType::removeLocalVolatile;
    void  (::clang::QualType::*method_pointer_6b532401059558559acd99d0acefa5f1)(unsigned int ) = &::clang::QualType::setLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_8f995df0ae94525b9266ddd691884143)(unsigned int ) const = &::clang::QualType::withCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_0f9606a64af45b1c862255c1da555581)() const = &::clang::QualType::withConst;
    class ::clang::QualType  (::clang::QualType::*method_pointer_12bf9d116eef52d4a7e1b491be28bd90)(unsigned int ) const = &::clang::QualType::withExactLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_a9773d8d1a135430acb8c6a460e7b8b6)(unsigned int ) const = &::clang::QualType::withFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_508f57610e0a500e91acdbaa8bee658c)() const = &::clang::QualType::withRestrict;
    class ::clang::QualType  (::clang::QualType::*method_pointer_d0b7495e5ea350e4878066a8a4ccf486)() const = &::clang::QualType::withVolatile;
    class ::clang::QualType  (::clang::QualType::*method_pointer_4057f93728df511cb03d1384b3a8fe85)() const = &::clang::QualType::withoutLocalFastQualifiers;
    boost::python::class_< class ::clang::QualType, autowig::HeldType< class ::clang::QualType >, boost::noncopyable > class_3bcdbbe507dd5ad29df9e33aca4e435f("QualType", "", boost::python::no_init);
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("ignore_parens", method_pointer_89cb609fa8af51339c050ad50a1e3bf1, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_const", method_pointer_b1a869ee407357a595242925e14bb9a8, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_fast_qualifiers", method_pointer_053898df9f335d4a93411e310b686437, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_restrict", method_pointer_69957656d1a05b09b323b4dd4804dade, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_volatile", method_pointer_6371e2d4aabc53af868c9154d595fdff, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("dump", method_pointer_369e5949b8aa56238f190c6c9c906554, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_address_space", method_pointer_2d763b059718543a92db661141d9866f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_cvr_qualifiers", method_pointer_8045d26cf5b85ed2a0d1f596e1df18e8, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_canonical_type", method_pointer_e5842612d99c5db7911649c4595316e8, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_cvr_qualifiers", method_pointer_cf2ff7bdf8065e738bce92e97dbd73d7, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_fast_qualifiers", method_pointer_6f4f61e03a3b50abb4455041e74c7ba1, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_unqualified_type", method_pointer_4a780d0d02dd52f29ad51ac2565f32cd, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_non_reference_type", method_pointer_5348d3f780855c4889b6db929336b9c3, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr", method_pointer_570ca58d6ac3573494d50dc028fb7943, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr_or_null", method_pointer_babcd816e47b57a59327fd752f52b3a9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_unqualified_type", method_pointer_b05195029670562d805d14b276237c01, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_non_fast_qualifiers", method_pointer_5badb01ddba05e119c68a790e382a577, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_qualifiers", method_pointer_efe29cc6c2ce57a78b44f294b8ff62fb, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_non_trivial_obj_c_lifetime", method_pointer_8972b7504f0c554eb7a624ee9e89a4f7, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_qualifiers", method_pointer_8881bc866b3a5dbd897f7138cc5db810, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_strong_or_weak_obj_c_lifetime", method_pointer_5d9dc2494f655c4686c9d349f5028bb4, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_at_least_as_qualified_as", method_pointer_491ebec713d658b4b7ff716475726bac, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_c_forbidden_l_value_type", method_pointer_178b4ee41c8b5a2ea1273b5934606e99, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx11pod_type", method_pointer_6a4364fedf2e579b9f05a134d22ac3bb, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx98pod_type", method_pointer_8188678f2b77517d9d4553ad1baf1f73, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical", method_pointer_023ba3b02ede57fe9550b2ea59d2f357, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical_as_param", method_pointer_923392a53dae5e0abb278f075ed9235c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_const_qualified", method_pointer_1d64a667e4bc55cfa30689ce0b4af344, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_constant", method_pointer_837cea15b1f35299a9bc80a8e264c8a9, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_const_qualified", method_pointer_a6f48335a916586b8cb90575c25d5aef, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_restrict_qualified", method_pointer_4687a4e845465caca5e451835c94adcb, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_volatile_qualified", method_pointer_00bba7cd2a3357daaa94304eec42ac78, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_more_qualified_than", method_pointer_e80d0e50f5105e748a0c47313429ff24, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_null", method_pointer_f1d11dd2ef1e5e82a66533e0a50abf26, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_strong", method_pointer_c583c4672d445648a2ddec961e0f9a0d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_weak", method_pointer_2e02490f69275f6eb6d6ba6747fd31ec, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_pod_type", method_pointer_fa4d08e9eddb5482aa415780b376542b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_restrict_qualified", method_pointer_2af8679d23d652b39d3ae032cecfecbb, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivial_type", method_pointer_8dcabf9ff8745480aba99a26457e7f07, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivially_copyable_type", method_pointer_643c421444fa5ff9b05fc18771e0789c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_volatile_qualified", method_pointer_436aa73d44245233a35bdf7b7cd2dab2, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_cvr_qualifiers", method_pointer_97d3339c4bf6523ea3a8f86ed0302894, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_const", method_pointer_2f0c02e214f7546cb2ca71809568f2b1, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_31d84612ebeb5e219b5440387ef2239d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_9f83e81404465a86a85ee781ecb78606, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_restrict", method_pointer_f19e904b7ffa5d5c80e9230eeed9fb3b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_volatile", method_pointer_d3fb17ba51255f32be8682596b3a4f82, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("set_local_fast_qualifiers", method_pointer_6b532401059558559acd99d0acefa5f1, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_cvr_qualifiers", method_pointer_8f995df0ae94525b9266ddd691884143, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_const", method_pointer_0f9606a64af45b1c862255c1da555581, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_exact_local_fast_qualifiers", method_pointer_12bf9d116eef52d4a7e1b491be28bd90, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_fast_qualifiers", method_pointer_a9773d8d1a135430acb8c6a460e7b8b6, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_restrict", method_pointer_508f57610e0a500e91acdbaa8bee658c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_volatile", method_pointer_d0b7495e5ea350e4878066a8a4ccf486, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("without_local_fast_qualifiers", method_pointer_4057f93728df511cb03d1384b3a8fe85, "");

}