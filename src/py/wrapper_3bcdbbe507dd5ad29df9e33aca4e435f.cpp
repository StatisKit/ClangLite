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
    void  (::clang::QualType::*method_pointer_c7b0fc670eb05689a42496b18799c5de)() = &::clang::QualType::addConst;
    void  (::clang::QualType::*method_pointer_a7bd7cc172b452d3ad41e35891d839f9)(unsigned int ) = &::clang::QualType::addFastQualifiers;
    void  (::clang::QualType::*method_pointer_ca259126f42253e8b0d6964a3eca210f)() = &::clang::QualType::addRestrict;
    void  (::clang::QualType::*method_pointer_c53bd10577ad5c3ca2074b1bfd9190fb)() = &::clang::QualType::addVolatile;
    void  (::clang::QualType::*method_pointer_6f871e189b7a5941952d350fff6f1392)() const = &::clang::QualType::dump;
    unsigned int  (::clang::QualType::*method_pointer_610376de254e5f85975955307e795ba7)() const = &::clang::QualType::getAddressSpace;
    int  (::clang::QualType::*method_pointer_9a15cc9c8c975fd2bc6bae72995089c5)() const = &::clang::QualType::getAsString;
    unsigned int  (::clang::QualType::*method_pointer_b739cba0578557ceba467c2a4808f52c)() const = &::clang::QualType::getCVRQualifiers;
    unsigned int  (::clang::QualType::*method_pointer_693e412440c7540c929c9596470d4a0e)() const = &::clang::QualType::getLocalCVRQualifiers;
    unsigned int  (::clang::QualType::*method_pointer_4a6b90f8246d54a5b039184797bb804b)() const = &::clang::QualType::getLocalFastQualifiers;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_56077f1669265963ac41e9a1f50ee516)() const = &::clang::QualType::getTypePtr;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_46713d977027544fba2533ef24c07f0c)() const = &::clang::QualType::getTypePtrOrNull;
    bool  (::clang::QualType::*method_pointer_1e11e6a75deb5a0791314c635243c106)() const = &::clang::QualType::hasLocalNonFastQualifiers;
    bool  (::clang::QualType::*method_pointer_b5734c51d2c75b6eaedf01a43c854103)() const = &::clang::QualType::hasLocalQualifiers;
    bool  (::clang::QualType::*method_pointer_883a340c02d05169bf92ee78df546e75)() const = &::clang::QualType::hasNonTrivialObjCLifetime;
    bool  (::clang::QualType::*method_pointer_41294dcacead5d72876363d85f6d8ab3)() const = &::clang::QualType::hasQualifiers;
    bool  (::clang::QualType::*method_pointer_02827f389b59511295a3a282e24724b4)() const = &::clang::QualType::hasStrongOrWeakObjCLifetime;
    bool  (::clang::QualType::*method_pointer_82eedce818f85cf7bfe88be0d0ede82a)() const = &::clang::QualType::isCForbiddenLValueType;
    bool  (::clang::QualType::*method_pointer_1f89405f3c3b5ca59b0b55d9304b1434)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX11PODType;
    bool  (::clang::QualType::*method_pointer_5f45a055503e5ae9ba68ac5218200967)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX98PODType;
    bool  (::clang::QualType::*method_pointer_7b50d18cbaeb58dbb9b0648b3615e14b)() const = &::clang::QualType::isCanonical;
    bool  (::clang::QualType::*method_pointer_26f12638bf2d5d798116ef9eac1c5da9)() const = &::clang::QualType::isCanonicalAsParam;
    bool  (::clang::QualType::*method_pointer_b19c50dc7c8d5181aa4a33b741392668)() const = &::clang::QualType::isConstQualified;
    bool  (::clang::QualType::*method_pointer_9b9c5649cbb651378953c945ab66dae5)(class ::clang::ASTContext  &) const = &::clang::QualType::isConstant;
    bool  (::clang::QualType::*method_pointer_d5ef103afdea5262b50e2284aa2948ad)() const = &::clang::QualType::isLocalConstQualified;
    bool  (::clang::QualType::*method_pointer_49dc79d956285a62adb12bfe3fbfaa99)() const = &::clang::QualType::isLocalRestrictQualified;
    bool  (::clang::QualType::*method_pointer_1f6994bb78f85f14a5913118d8c0931d)() const = &::clang::QualType::isLocalVolatileQualified;
    bool  (::clang::QualType::*method_pointer_0ca430207f9d59b5965189da2bbb93d5)() const = &::clang::QualType::isNull;
    bool  (::clang::QualType::*method_pointer_f2a772ac0cb1524d8eadbe9fcfffcec1)() const = &::clang::QualType::isObjCGCStrong;
    bool  (::clang::QualType::*method_pointer_a6d26515f48b5b3ba23f6072d70eef34)() const = &::clang::QualType::isObjCGCWeak;
    bool  (::clang::QualType::*method_pointer_ff88c171eb0850038ee61201aa3c9eb4)(class ::clang::ASTContext  &) const = &::clang::QualType::isPODType;
    bool  (::clang::QualType::*method_pointer_e203c128294e5394a412c3bde917628d)() const = &::clang::QualType::isRestrictQualified;
    bool  (::clang::QualType::*method_pointer_c59f9f7a9eeb5b3082099cb8a816f1a5)(class ::clang::ASTContext  &) const = &::clang::QualType::isTrivialType;
    bool  (::clang::QualType::*method_pointer_4f7a65f782095b6c8265b3e264237b60)(class ::clang::ASTContext  &) const = &::clang::QualType::isTriviallyCopyableType;
    bool  (::clang::QualType::*method_pointer_94f69be5208d5dc2b0b63f12dd4d83ad)() const = &::clang::QualType::isVolatileQualified;
    void  (::clang::QualType::*method_pointer_06952ca7e51655a78688819b68e66b83)(unsigned int ) = &::clang::QualType::removeLocalCVRQualifiers;
    void  (::clang::QualType::*method_pointer_5be0258836015377b3de193de4cb3731)() = &::clang::QualType::removeLocalConst;
    void  (::clang::QualType::*method_pointer_ce3cd2f7451057ae8f8774ee7972ba02)() = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_866f66264a585ae6a9d20d1ac2c0676a)(unsigned int ) = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_3f6c9ba839865e039d7d542d2d3b80c3)() = &::clang::QualType::removeLocalRestrict;
    void  (::clang::QualType::*method_pointer_0b19249ffda551f59ee573789d6d0cd6)() = &::clang::QualType::removeLocalVolatile;
    void  (::clang::QualType::*method_pointer_376ac98d874a52b1b9849f4b1443ce2c)(unsigned int ) = &::clang::QualType::setLocalFastQualifiers;
    boost::python::class_< class ::clang::QualType, autowig::HeldType< class ::clang::QualType >, boost::noncopyable > class_3bcdbbe507dd5ad29df9e33aca4e435f("QualType", "", boost::python::no_init);
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_const", method_pointer_c7b0fc670eb05689a42496b18799c5de, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_fast_qualifiers", method_pointer_a7bd7cc172b452d3ad41e35891d839f9, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_restrict", method_pointer_ca259126f42253e8b0d6964a3eca210f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_volatile", method_pointer_c53bd10577ad5c3ca2074b1bfd9190fb, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("dump", method_pointer_6f871e189b7a5941952d350fff6f1392, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_address_space", method_pointer_610376de254e5f85975955307e795ba7, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_as_string", method_pointer_9a15cc9c8c975fd2bc6bae72995089c5, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_cvr_qualifiers", method_pointer_b739cba0578557ceba467c2a4808f52c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_cvr_qualifiers", method_pointer_693e412440c7540c929c9596470d4a0e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_fast_qualifiers", method_pointer_4a6b90f8246d54a5b039184797bb804b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr", method_pointer_56077f1669265963ac41e9a1f50ee516, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr_or_null", method_pointer_46713d977027544fba2533ef24c07f0c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_non_fast_qualifiers", method_pointer_1e11e6a75deb5a0791314c635243c106, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_qualifiers", method_pointer_b5734c51d2c75b6eaedf01a43c854103, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_non_trivial_obj_c_lifetime", method_pointer_883a340c02d05169bf92ee78df546e75, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_qualifiers", method_pointer_41294dcacead5d72876363d85f6d8ab3, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_strong_or_weak_obj_c_lifetime", method_pointer_02827f389b59511295a3a282e24724b4, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_c_forbidden_l_value_type", method_pointer_82eedce818f85cf7bfe88be0d0ede82a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx11pod_type", method_pointer_1f89405f3c3b5ca59b0b55d9304b1434, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx98pod_type", method_pointer_5f45a055503e5ae9ba68ac5218200967, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical", method_pointer_7b50d18cbaeb58dbb9b0648b3615e14b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical_as_param", method_pointer_26f12638bf2d5d798116ef9eac1c5da9, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_const_qualified", method_pointer_b19c50dc7c8d5181aa4a33b741392668, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_constant", method_pointer_9b9c5649cbb651378953c945ab66dae5, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_const_qualified", method_pointer_d5ef103afdea5262b50e2284aa2948ad, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_restrict_qualified", method_pointer_49dc79d956285a62adb12bfe3fbfaa99, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_volatile_qualified", method_pointer_1f6994bb78f85f14a5913118d8c0931d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_null", method_pointer_0ca430207f9d59b5965189da2bbb93d5, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_strong", method_pointer_f2a772ac0cb1524d8eadbe9fcfffcec1, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_weak", method_pointer_a6d26515f48b5b3ba23f6072d70eef34, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_pod_type", method_pointer_ff88c171eb0850038ee61201aa3c9eb4, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_restrict_qualified", method_pointer_e203c128294e5394a412c3bde917628d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivial_type", method_pointer_c59f9f7a9eeb5b3082099cb8a816f1a5, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivially_copyable_type", method_pointer_4f7a65f782095b6c8265b3e264237b60, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_volatile_qualified", method_pointer_94f69be5208d5dc2b0b63f12dd4d83ad, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_cvr_qualifiers", method_pointer_06952ca7e51655a78688819b68e66b83, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_const", method_pointer_5be0258836015377b3de193de4cb3731, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_ce3cd2f7451057ae8f8774ee7972ba02, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_866f66264a585ae6a9d20d1ac2c0676a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_restrict", method_pointer_3f6c9ba839865e039d7d542d2d3b80c3, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_volatile", method_pointer_0b19249ffda551f59ee573789d6d0cd6, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("set_local_fast_qualifiers", method_pointer_376ac98d874a52b1b9849f4b1443ce2c, "");

}