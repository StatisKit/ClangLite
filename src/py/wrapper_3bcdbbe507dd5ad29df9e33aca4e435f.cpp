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
    class ::clang::QualType  (::clang::QualType::*method_pointer_38015ce5172156748c89678f000444e4)() const = &::clang::QualType::IgnoreParens;
    void  (::clang::QualType::*method_pointer_b290b904a271522a99c08ad75f4ea301)() = &::clang::QualType::addConst;
    void  (::clang::QualType::*method_pointer_391944f29ff050538a0c20e5d7a6268f)(unsigned int ) = &::clang::QualType::addFastQualifiers;
    void  (::clang::QualType::*method_pointer_0bfad35a9d095796beadc66598b24f64)() = &::clang::QualType::addRestrict;
    void  (::clang::QualType::*method_pointer_7d28f3d36c7a5435b4392418efc1a39a)() = &::clang::QualType::addVolatile;
    void  (::clang::QualType::*method_pointer_1876f065526458c386907875859c3f86)() const = &::clang::QualType::dump;
    unsigned int  (::clang::QualType::*method_pointer_96a10cc4ae06542b9b3c20bdc87e4e5f)() const = &::clang::QualType::getAddressSpace;
    unsigned int  (::clang::QualType::*method_pointer_bc71a72fd9f45d218b91e1d980aa1957)() const = &::clang::QualType::getCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_30211f8939cc5f57970a98d9e1edd5c6)() const = &::clang::QualType::getCanonicalType;
    unsigned int  (::clang::QualType::*method_pointer_9df334b76dbe511d96d1dc37f17046e2)() const = &::clang::QualType::getLocalCVRQualifiers;
    unsigned int  (::clang::QualType::*method_pointer_4ff86e83577e5a5491b9143944d00d22)() const = &::clang::QualType::getLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_37f5ebf6cdfd5f79b58a693afb1cffe7)() const = &::clang::QualType::getLocalUnqualifiedType;
    class ::clang::QualType  (::clang::QualType::*method_pointer_93bb1e5acb6f509ab127a4ad45570945)() const = &::clang::QualType::getNonReferenceType;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_0b9f866f2c355b28895277ca3595f469)() const = &::clang::QualType::getTypePtr;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_935e6705d9cb57e98c935c43df343e37)() const = &::clang::QualType::getTypePtrOrNull;
    class ::clang::QualType  (::clang::QualType::*method_pointer_e7758fe6b8895823b5ae0c2f768f02a2)() const = &::clang::QualType::getUnqualifiedType;
    bool  (::clang::QualType::*method_pointer_8db19d893a0153d3bd8b946294b36538)() const = &::clang::QualType::hasLocalNonFastQualifiers;
    bool  (::clang::QualType::*method_pointer_5be90e3c4f3450dcb4cd5c5d4d05c89e)() const = &::clang::QualType::hasLocalQualifiers;
    bool  (::clang::QualType::*method_pointer_7ac45e4ac4f6566d9c068269f72a6bfc)() const = &::clang::QualType::hasNonTrivialObjCLifetime;
    bool  (::clang::QualType::*method_pointer_784a08d658ed571c9aa3b6947592bb94)() const = &::clang::QualType::hasQualifiers;
    bool  (::clang::QualType::*method_pointer_9b1f11bc0cd35ef0b5e89bebefb7eee1)() const = &::clang::QualType::hasStrongOrWeakObjCLifetime;
    bool  (::clang::QualType::*method_pointer_b27a991f57a75831a2d01d512fc4af1e)(class ::clang::QualType ) const = &::clang::QualType::isAtLeastAsQualifiedAs;
    bool  (::clang::QualType::*method_pointer_a63441c872915bf69d741e3af9c93f59)() const = &::clang::QualType::isCForbiddenLValueType;
    bool  (::clang::QualType::*method_pointer_c53431561b1954c892071df1373a8177)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX11PODType;
    bool  (::clang::QualType::*method_pointer_fb1b61abcbff597d8b5375910c13e646)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX98PODType;
    bool  (::clang::QualType::*method_pointer_0075b58f454b52ef9988aa56ea3dacd8)() const = &::clang::QualType::isCanonical;
    bool  (::clang::QualType::*method_pointer_a0eb6ec6dc4955bcaa22f7edb26162d9)() const = &::clang::QualType::isCanonicalAsParam;
    bool  (::clang::QualType::*method_pointer_5ddb5a413e265f8898434112efc78156)() const = &::clang::QualType::isConstQualified;
    bool  (::clang::QualType::*method_pointer_70a0abb4acb953ae8109378eaaf25894)(class ::clang::ASTContext  &) const = &::clang::QualType::isConstant;
    bool  (::clang::QualType::*method_pointer_86762f6dd8e855159772ebf9de331024)() const = &::clang::QualType::isLocalConstQualified;
    bool  (::clang::QualType::*method_pointer_889d056a236c534ebd25d82eef53d867)() const = &::clang::QualType::isLocalRestrictQualified;
    bool  (::clang::QualType::*method_pointer_71fc53342321564fbb233594d6853b95)() const = &::clang::QualType::isLocalVolatileQualified;
    bool  (::clang::QualType::*method_pointer_02302f06d804593eaa4036d6f7741324)(class ::clang::QualType ) const = &::clang::QualType::isMoreQualifiedThan;
    bool  (::clang::QualType::*method_pointer_e6cb8ee1844550d5a53bae31a8ee2a40)() const = &::clang::QualType::isNull;
    bool  (::clang::QualType::*method_pointer_a362735bd70c5a49baa1c969000d77e3)() const = &::clang::QualType::isObjCGCStrong;
    bool  (::clang::QualType::*method_pointer_60402cb31a8d5f37a2f4cdc62a29421a)() const = &::clang::QualType::isObjCGCWeak;
    bool  (::clang::QualType::*method_pointer_391867d84ab75368a59a00b7e17be670)(class ::clang::ASTContext  &) const = &::clang::QualType::isPODType;
    bool  (::clang::QualType::*method_pointer_15dbf87f55975221a6047a1b681aed7f)() const = &::clang::QualType::isRestrictQualified;
    bool  (::clang::QualType::*method_pointer_dcd46934e1955115a04c3eae7608bc4c)(class ::clang::ASTContext  &) const = &::clang::QualType::isTrivialType;
    bool  (::clang::QualType::*method_pointer_450d9e30263b59e88607aad49730c8dd)(class ::clang::ASTContext  &) const = &::clang::QualType::isTriviallyCopyableType;
    bool  (::clang::QualType::*method_pointer_f09692fda3f65edd8f135a58f8a291c6)() const = &::clang::QualType::isVolatileQualified;
    void  (::clang::QualType::*method_pointer_11acf7c72e225abd8ea28bc39e3c68aa)(unsigned int ) = &::clang::QualType::removeLocalCVRQualifiers;
    void  (::clang::QualType::*method_pointer_1a3470ab49e45febb711c0fa73f064ff)() = &::clang::QualType::removeLocalConst;
    void  (::clang::QualType::*method_pointer_0d4ce1e197455d8e8cb990a05588288d)() = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_085c9ee1ee3353bda4a8a93da283eb40)(unsigned int ) = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_819dd295da3b545ca5cfb480ba832658)() = &::clang::QualType::removeLocalRestrict;
    void  (::clang::QualType::*method_pointer_9973036f3dfe53cba585170bbdfaaecb)() = &::clang::QualType::removeLocalVolatile;
    void  (::clang::QualType::*method_pointer_b83f7749ba84575f9c5f8eea1fd4c06f)(unsigned int ) = &::clang::QualType::setLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_f1aaa52db83953dfa87e4ba1d75e1eda)(unsigned int ) const = &::clang::QualType::withCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_9a41382d96495e88a92dec972b7faf4a)() const = &::clang::QualType::withConst;
    class ::clang::QualType  (::clang::QualType::*method_pointer_02988c9cd247516fb270bb072461cd02)(unsigned int ) const = &::clang::QualType::withExactLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_a972b12b3dbf5142bda601da1712a7ee)(unsigned int ) const = &::clang::QualType::withFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_1d393ca31ef956a5b05cbf74b9784b5d)() const = &::clang::QualType::withRestrict;
    class ::clang::QualType  (::clang::QualType::*method_pointer_9e8fe597a967547984ff35d7cba45e53)() const = &::clang::QualType::withVolatile;
    class ::clang::QualType  (::clang::QualType::*method_pointer_23212060147e5bfba0072401f85bffd3)() const = &::clang::QualType::withoutLocalFastQualifiers;
    boost::python::class_< class ::clang::QualType, autowig::HeldType< class ::clang::QualType > > class_3bcdbbe507dd5ad29df9e33aca4e435f("QualType", "", boost::python::no_init);
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("ignore_parens", method_pointer_38015ce5172156748c89678f000444e4, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_const", method_pointer_b290b904a271522a99c08ad75f4ea301, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_fast_qualifiers", method_pointer_391944f29ff050538a0c20e5d7a6268f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_restrict", method_pointer_0bfad35a9d095796beadc66598b24f64, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_volatile", method_pointer_7d28f3d36c7a5435b4392418efc1a39a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("dump", method_pointer_1876f065526458c386907875859c3f86, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_address_space", method_pointer_96a10cc4ae06542b9b3c20bdc87e4e5f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_cvr_qualifiers", method_pointer_bc71a72fd9f45d218b91e1d980aa1957, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_canonical_type", method_pointer_30211f8939cc5f57970a98d9e1edd5c6, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_cvr_qualifiers", method_pointer_9df334b76dbe511d96d1dc37f17046e2, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_fast_qualifiers", method_pointer_4ff86e83577e5a5491b9143944d00d22, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_unqualified_type", method_pointer_37f5ebf6cdfd5f79b58a693afb1cffe7, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_non_reference_type", method_pointer_93bb1e5acb6f509ab127a4ad45570945, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr", method_pointer_0b9f866f2c355b28895277ca3595f469, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr_or_null", method_pointer_935e6705d9cb57e98c935c43df343e37, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_unqualified_type", method_pointer_e7758fe6b8895823b5ae0c2f768f02a2, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_non_fast_qualifiers", method_pointer_8db19d893a0153d3bd8b946294b36538, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_qualifiers", method_pointer_5be90e3c4f3450dcb4cd5c5d4d05c89e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_non_trivial_obj_c_lifetime", method_pointer_7ac45e4ac4f6566d9c068269f72a6bfc, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_qualifiers", method_pointer_784a08d658ed571c9aa3b6947592bb94, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_strong_or_weak_obj_c_lifetime", method_pointer_9b1f11bc0cd35ef0b5e89bebefb7eee1, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_at_least_as_qualified_as", method_pointer_b27a991f57a75831a2d01d512fc4af1e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_c_forbidden_l_value_type", method_pointer_a63441c872915bf69d741e3af9c93f59, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx11pod_type", method_pointer_c53431561b1954c892071df1373a8177, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx98pod_type", method_pointer_fb1b61abcbff597d8b5375910c13e646, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical", method_pointer_0075b58f454b52ef9988aa56ea3dacd8, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical_as_param", method_pointer_a0eb6ec6dc4955bcaa22f7edb26162d9, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_const_qualified", method_pointer_5ddb5a413e265f8898434112efc78156, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_constant", method_pointer_70a0abb4acb953ae8109378eaaf25894, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_const_qualified", method_pointer_86762f6dd8e855159772ebf9de331024, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_restrict_qualified", method_pointer_889d056a236c534ebd25d82eef53d867, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_volatile_qualified", method_pointer_71fc53342321564fbb233594d6853b95, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_more_qualified_than", method_pointer_02302f06d804593eaa4036d6f7741324, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_null", method_pointer_e6cb8ee1844550d5a53bae31a8ee2a40, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_strong", method_pointer_a362735bd70c5a49baa1c969000d77e3, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_weak", method_pointer_60402cb31a8d5f37a2f4cdc62a29421a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_pod_type", method_pointer_391867d84ab75368a59a00b7e17be670, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_restrict_qualified", method_pointer_15dbf87f55975221a6047a1b681aed7f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivial_type", method_pointer_dcd46934e1955115a04c3eae7608bc4c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivially_copyable_type", method_pointer_450d9e30263b59e88607aad49730c8dd, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_volatile_qualified", method_pointer_f09692fda3f65edd8f135a58f8a291c6, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_cvr_qualifiers", method_pointer_11acf7c72e225abd8ea28bc39e3c68aa, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_const", method_pointer_1a3470ab49e45febb711c0fa73f064ff, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_0d4ce1e197455d8e8cb990a05588288d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_085c9ee1ee3353bda4a8a93da283eb40, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_restrict", method_pointer_819dd295da3b545ca5cfb480ba832658, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_volatile", method_pointer_9973036f3dfe53cba585170bbdfaaecb, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("set_local_fast_qualifiers", method_pointer_b83f7749ba84575f9c5f8eea1fd4c06f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_cvr_qualifiers", method_pointer_f1aaa52db83953dfa87e4ba1d75e1eda, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_const", method_pointer_9a41382d96495e88a92dec972b7faf4a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_exact_local_fast_qualifiers", method_pointer_02988c9cd247516fb270bb072461cd02, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_fast_qualifiers", method_pointer_a972b12b3dbf5142bda601da1712a7ee, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_restrict", method_pointer_1d393ca31ef956a5b05cbf74b9784b5d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_volatile", method_pointer_9e8fe597a967547984ff35d7cba45e53, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("without_local_fast_qualifiers", method_pointer_23212060147e5bfba0072401f85bffd3, "");

}