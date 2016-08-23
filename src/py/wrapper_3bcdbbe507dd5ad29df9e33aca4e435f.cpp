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
    void  (::clang::QualType::*method_pointer_6579e67235425c2eb1a84300b10610a0)() = &::clang::QualType::addConst;
    void  (::clang::QualType::*method_pointer_95a0286f591c552ba87b7c2c5bd36099)(unsigned int ) = &::clang::QualType::addFastQualifiers;
    void  (::clang::QualType::*method_pointer_a2e27f5774d7526da5f8b8972e3d5016)() = &::clang::QualType::addRestrict;
    void  (::clang::QualType::*method_pointer_11b4d87cd6f35322b5223e53f40f74b2)() = &::clang::QualType::addVolatile;
    void  (::clang::QualType::*method_pointer_771d94ee02a25be7b797f723d4a80063)() const = &::clang::QualType::dump;
    unsigned int  (::clang::QualType::*method_pointer_d0aa70691a725217b372cef2acde4c8d)() const = &::clang::QualType::getAddressSpace;
    unsigned int  (::clang::QualType::*method_pointer_7e8737433bca527bb7fc47d745a790af)() const = &::clang::QualType::getCVRQualifiers;
    unsigned int  (::clang::QualType::*method_pointer_7d9f4eb26ee05ded97003e1571db90ad)() const = &::clang::QualType::getLocalCVRQualifiers;
    unsigned int  (::clang::QualType::*method_pointer_4fc1a297bd3454029652f04a58926130)() const = &::clang::QualType::getLocalFastQualifiers;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_865c37621fc05ec8824bc959d89df041)() const = &::clang::QualType::getTypePtr;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_f436dea8f90c5586bb6b1cd1d902440c)() const = &::clang::QualType::getTypePtrOrNull;
    bool  (::clang::QualType::*method_pointer_73e2ecc142b15fc980a84ce87ed30d5a)() const = &::clang::QualType::hasLocalNonFastQualifiers;
    bool  (::clang::QualType::*method_pointer_de1032e8a2dd5ec18c81ec7197dd6304)() const = &::clang::QualType::hasLocalQualifiers;
    bool  (::clang::QualType::*method_pointer_9a97c00736cd5ca68a48a79e2181d996)() const = &::clang::QualType::hasNonTrivialObjCLifetime;
    bool  (::clang::QualType::*method_pointer_a2c87a95fda759f6bc6d83c4238a5917)() const = &::clang::QualType::hasQualifiers;
    bool  (::clang::QualType::*method_pointer_952585eb09d257828692a325f232ede4)() const = &::clang::QualType::hasStrongOrWeakObjCLifetime;
    bool  (::clang::QualType::*method_pointer_a99eb4e4fca5588299f13269b6b9f1b6)() const = &::clang::QualType::isCForbiddenLValueType;
    bool  (::clang::QualType::*method_pointer_f33ad04eb8055975b13c37e1a51e482f)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX11PODType;
    bool  (::clang::QualType::*method_pointer_5c84a5b3694c5696922b77804fdcfc77)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX98PODType;
    bool  (::clang::QualType::*method_pointer_0980518e3ffb55eebfc6a2cfb1d2664c)() const = &::clang::QualType::isCanonical;
    bool  (::clang::QualType::*method_pointer_0243904b43e15da58758c5587cf8fd2b)() const = &::clang::QualType::isCanonicalAsParam;
    bool  (::clang::QualType::*method_pointer_a4cba4de47e052a88169d74117ae9c14)() const = &::clang::QualType::isConstQualified;
    bool  (::clang::QualType::*method_pointer_91829e58d96c50e78135ba9ef4ddfeba)(class ::clang::ASTContext  &) const = &::clang::QualType::isConstant;
    bool  (::clang::QualType::*method_pointer_996bd1109bb35c11a228c6fcecbe6366)() const = &::clang::QualType::isLocalConstQualified;
    bool  (::clang::QualType::*method_pointer_bc7eb90086c9561bb93c80017a359ebd)() const = &::clang::QualType::isLocalRestrictQualified;
    bool  (::clang::QualType::*method_pointer_f14697b7eccb59ddbafb7a75052d5505)() const = &::clang::QualType::isLocalVolatileQualified;
    bool  (::clang::QualType::*method_pointer_1b53635bb90b596b8d976aeb59b8078e)() const = &::clang::QualType::isNull;
    bool  (::clang::QualType::*method_pointer_86f5ff0ec9265841bacd893dc9ea426e)() const = &::clang::QualType::isObjCGCStrong;
    bool  (::clang::QualType::*method_pointer_49f9a8984c715599abdd24fbdf6a9791)() const = &::clang::QualType::isObjCGCWeak;
    bool  (::clang::QualType::*method_pointer_d476ec63587d5a06ace7b4193132128c)(class ::clang::ASTContext  &) const = &::clang::QualType::isPODType;
    bool  (::clang::QualType::*method_pointer_653c343f73a851b0aafb00e508333aef)() const = &::clang::QualType::isRestrictQualified;
    bool  (::clang::QualType::*method_pointer_b4436959aa96541d8b636a46f563e02d)(class ::clang::ASTContext  &) const = &::clang::QualType::isTrivialType;
    bool  (::clang::QualType::*method_pointer_63d07e46be1d513bb5dc4ffb1137d8fc)(class ::clang::ASTContext  &) const = &::clang::QualType::isTriviallyCopyableType;
    bool  (::clang::QualType::*method_pointer_1f36a0f55c0050798dc6ace2b24490ea)() const = &::clang::QualType::isVolatileQualified;
    void  (::clang::QualType::*method_pointer_a4b9a3760e815fe185a3b9bc7f076657)(unsigned int ) = &::clang::QualType::removeLocalCVRQualifiers;
    void  (::clang::QualType::*method_pointer_dc853701e3405d67aa0c6a010b157af5)() = &::clang::QualType::removeLocalConst;
    void  (::clang::QualType::*method_pointer_53bb883b2b9e5dbebaacaad13200987d)(unsigned int ) = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_80c0da0a38cd5822bf1cf46f0a322f0f)() = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_07d2bb60d6525c8fb20feebb98d5b1f6)() = &::clang::QualType::removeLocalRestrict;
    void  (::clang::QualType::*method_pointer_cd651813a7215c87bf782dad6c2a1096)() = &::clang::QualType::removeLocalVolatile;
    void  (::clang::QualType::*method_pointer_99fcafdee27e5e82ae70d90bcbc6d720)(unsigned int ) = &::clang::QualType::setLocalFastQualifiers;
    boost::python::class_< class ::clang::QualType, autowig::HeldType< class ::clang::QualType >, boost::noncopyable > class_3bcdbbe507dd5ad29df9e33aca4e435f("QualType", "", boost::python::no_init);
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_const", method_pointer_6579e67235425c2eb1a84300b10610a0, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_fast_qualifiers", method_pointer_95a0286f591c552ba87b7c2c5bd36099, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_restrict", method_pointer_a2e27f5774d7526da5f8b8972e3d5016, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_volatile", method_pointer_11b4d87cd6f35322b5223e53f40f74b2, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("dump", method_pointer_771d94ee02a25be7b797f723d4a80063, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_address_space", method_pointer_d0aa70691a725217b372cef2acde4c8d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_cvr_qualifiers", method_pointer_7e8737433bca527bb7fc47d745a790af, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_cvr_qualifiers", method_pointer_7d9f4eb26ee05ded97003e1571db90ad, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_fast_qualifiers", method_pointer_4fc1a297bd3454029652f04a58926130, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr", method_pointer_865c37621fc05ec8824bc959d89df041, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr_or_null", method_pointer_f436dea8f90c5586bb6b1cd1d902440c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_non_fast_qualifiers", method_pointer_73e2ecc142b15fc980a84ce87ed30d5a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_qualifiers", method_pointer_de1032e8a2dd5ec18c81ec7197dd6304, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_non_trivial_obj_c_lifetime", method_pointer_9a97c00736cd5ca68a48a79e2181d996, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_qualifiers", method_pointer_a2c87a95fda759f6bc6d83c4238a5917, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_strong_or_weak_obj_c_lifetime", method_pointer_952585eb09d257828692a325f232ede4, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_c_forbidden_l_value_type", method_pointer_a99eb4e4fca5588299f13269b6b9f1b6, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx11pod_type", method_pointer_f33ad04eb8055975b13c37e1a51e482f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx98pod_type", method_pointer_5c84a5b3694c5696922b77804fdcfc77, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical", method_pointer_0980518e3ffb55eebfc6a2cfb1d2664c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical_as_param", method_pointer_0243904b43e15da58758c5587cf8fd2b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_const_qualified", method_pointer_a4cba4de47e052a88169d74117ae9c14, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_constant", method_pointer_91829e58d96c50e78135ba9ef4ddfeba, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_const_qualified", method_pointer_996bd1109bb35c11a228c6fcecbe6366, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_restrict_qualified", method_pointer_bc7eb90086c9561bb93c80017a359ebd, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_volatile_qualified", method_pointer_f14697b7eccb59ddbafb7a75052d5505, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_null", method_pointer_1b53635bb90b596b8d976aeb59b8078e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_strong", method_pointer_86f5ff0ec9265841bacd893dc9ea426e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_weak", method_pointer_49f9a8984c715599abdd24fbdf6a9791, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_pod_type", method_pointer_d476ec63587d5a06ace7b4193132128c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_restrict_qualified", method_pointer_653c343f73a851b0aafb00e508333aef, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivial_type", method_pointer_b4436959aa96541d8b636a46f563e02d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivially_copyable_type", method_pointer_63d07e46be1d513bb5dc4ffb1137d8fc, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_volatile_qualified", method_pointer_1f36a0f55c0050798dc6ace2b24490ea, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_cvr_qualifiers", method_pointer_a4b9a3760e815fe185a3b9bc7f076657, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_const", method_pointer_dc853701e3405d67aa0c6a010b157af5, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_53bb883b2b9e5dbebaacaad13200987d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_80c0da0a38cd5822bf1cf46f0a322f0f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_restrict", method_pointer_07d2bb60d6525c8fb20feebb98d5b1f6, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_volatile", method_pointer_cd651813a7215c87bf782dad6c2a1096, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("set_local_fast_qualifiers", method_pointer_99fcafdee27e5e82ae70d90bcbc6d720, "");

}