#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_6d094fa53b15516db85a0d4b3b7fd665()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    enum ::clang::AccessSpecifier  (*method_pointer_4c25140e55f1523e9315fb10d28c1c31)(enum ::clang::AccessSpecifier , enum ::clang::AccessSpecifier ) = ::clang::CXXRecordDecl::MergeAccess;
    bool  (*method_pointer_f3f0e5146b885e7995cf91695b354ad5)(class ::clang::Decl  const *) = ::clang::CXXRecordDecl::classof;
    bool  (*method_pointer_6651dee06e30510ab7834f093671d391)(enum ::clang::Decl::Kind ) = ::clang::CXXRecordDecl::classofKind;
    void  (::clang::CXXRecordDecl::*method_pointer_0513e65542d9521f9397115746f314ae)() = &::clang::CXXRecordDecl::completeDefinition;
    bool  (::clang::CXXRecordDecl::*method_pointer_49de4937af9c55a0bea6305dffcdf904)() const = &::clang::CXXRecordDecl::defaultedDefaultConstructorIsConstexpr;
    void  (::clang::CXXRecordDecl::*method_pointer_a7800312e66755d1b9aaf7a1ac2ae7b4)(class ::clang::CXXMethodDecl  *) = &::clang::CXXRecordDecl::finishedDefaultedOrDeletedMember;
    class ::clang::CXXRecordDecl  const * (::clang::CXXRecordDecl::*method_pointer_b1dfb49bf9ef5eb1b43ca2cceb957fae)() const = &::clang::CXXRecordDecl::getCanonicalDecl;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_f6d4255c78db5736bae5ce32f288aff6)() = &::clang::CXXRecordDecl::getCanonicalDecl;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_7dcdcf71e1885d668100ee8e020b1577)() const = &::clang::CXXRecordDecl::getDefinition;
    class ::clang::ClassTemplateDecl  * (::clang::CXXRecordDecl::*method_pointer_706a9d03a7b556539f8541716b444f1c)() const = &::clang::CXXRecordDecl::getDescribedClassTemplate;
    class ::clang::CXXDestructorDecl  * (::clang::CXXRecordDecl::*method_pointer_67c9d2540daa5e4eab98698a618ecdc5)() const = &::clang::CXXRecordDecl::getDestructor;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_cccb5899c5db54af8a628730d853dc94)() const = &::clang::CXXRecordDecl::getInstantiatedFromMemberClass;
    class ::clang::CXXMethodDecl  * (::clang::CXXRecordDecl::*method_pointer_793f1141f9cb5900b475272a8015181c)() const = &::clang::CXXRecordDecl::getLambdaCallOperator;
    class ::clang::Decl  * (::clang::CXXRecordDecl::*method_pointer_166bfd0fb1245074b3c8838b996efbac)() const = &::clang::CXXRecordDecl::getLambdaContextDecl;
    unsigned int  (::clang::CXXRecordDecl::*method_pointer_1d60f5f30e4857be9e05117f19558f46)() const = &::clang::CXXRecordDecl::getLambdaManglingNumber;
    class ::clang::CXXMethodDecl  * (::clang::CXXRecordDecl::*method_pointer_6a4ba6b56efb5076b601183b96ee0777)() const = &::clang::CXXRecordDecl::getLambdaStaticInvoker;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_c88c22d13f92586682592d040ab34d10)() = &::clang::CXXRecordDecl::getMostRecentDecl;
    class ::clang::CXXRecordDecl  const * (::clang::CXXRecordDecl::*method_pointer_1907ee1065175df1bffd07f5717ee7d1)() const = &::clang::CXXRecordDecl::getMostRecentDecl;
    unsigned int  (::clang::CXXRecordDecl::*method_pointer_9964cd7cc89a56efb705bc898842a985)() const = &::clang::CXXRecordDecl::getNumBases;
    unsigned int  (::clang::CXXRecordDecl::*method_pointer_05864587ed6b535ba73412d79b5b70cd)() const = &::clang::CXXRecordDecl::getNumVBases;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_9ba06ce440b3516b895e21a096934f30)() = &::clang::CXXRecordDecl::getPreviousDecl;
    class ::clang::CXXRecordDecl  const * (::clang::CXXRecordDecl::*method_pointer_184b2b5a7ced5311833c23c9ce2cfa3a)() const = &::clang::CXXRecordDecl::getPreviousDecl;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_6702ac276f63586c9e3f73b8325400de)() = &::clang::CXXRecordDecl::getTemplateInstantiationPattern;
    class ::clang::CXXRecordDecl  const * (::clang::CXXRecordDecl::*method_pointer_3daf70bb2a88594bb37e3af3be081ba5)() const = &::clang::CXXRecordDecl::getTemplateInstantiationPattern;
    bool  (::clang::CXXRecordDecl::*method_pointer_4b9b38e8766f5c87886721169a248ff7)() const = &::clang::CXXRecordDecl::hasAnyDependentBases;
    bool  (::clang::CXXRecordDecl::*method_pointer_c606bf6afec55ae495919d156ac1a24f)() const = &::clang::CXXRecordDecl::hasConstexprDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_1691bb3afd815c0aa04dc4ec09dd5601)() const = &::clang::CXXRecordDecl::hasConstexprNonCopyMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_6b45606afe525dcf9aa0e9591160b427)() const = &::clang::CXXRecordDecl::hasCopyAssignmentWithConstParam;
    bool  (::clang::CXXRecordDecl::*method_pointer_7ee5288c519457cfb7bb8dbd93dcd95e)() const = &::clang::CXXRecordDecl::hasCopyConstructorWithConstParam;
    bool  (::clang::CXXRecordDecl::*method_pointer_3a21f2823a3a5f918bb6df50ca2fc067)() const = &::clang::CXXRecordDecl::hasDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_fd565e15eb3759ecbed45c91f1b81207)() const = &::clang::CXXRecordDecl::hasDefinition;
    bool  (::clang::CXXRecordDecl::*method_pointer_42881d0f3c8e5254ad6044baeac9e981)() const = &::clang::CXXRecordDecl::hasFriends;
    bool  (::clang::CXXRecordDecl::*method_pointer_ea09cddd4856510183c0ee71a65ddac1)() const = &::clang::CXXRecordDecl::hasInClassInitializer;
    bool  (::clang::CXXRecordDecl::*method_pointer_2da0f10aa547517a8f06f9ea512377a6)() const = &::clang::CXXRecordDecl::hasIrrelevantDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_3cecc189cccc5ceb80b1253ee70be1a5)() const = &::clang::CXXRecordDecl::hasMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_991d2477fd3d5c9cbf58fc6912ac47a4)() const = &::clang::CXXRecordDecl::hasMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_a4789ed42465544b933e677af2b78f53)() const = &::clang::CXXRecordDecl::hasMutableFields;
    bool  (::clang::CXXRecordDecl::*method_pointer_c884e8b596cf52d1bd8706732bed8298)() const = &::clang::CXXRecordDecl::hasNonLiteralTypeFieldsOrBases;
    bool  (::clang::CXXRecordDecl::*method_pointer_d31e68e950f257dca140b4a870260a74)() const = &::clang::CXXRecordDecl::hasNonTrivialCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_db3e5e203b7150e498f8790b9ef83e6d)() const = &::clang::CXXRecordDecl::hasNonTrivialCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_4b69258ce7d358e48c4b7fbc025318bc)() const = &::clang::CXXRecordDecl::hasNonTrivialDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_c6deb5b1b2e657db935076f8012f07d6)() const = &::clang::CXXRecordDecl::hasNonTrivialDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_b7c7c67408e352c6b6513e633681c773)() const = &::clang::CXXRecordDecl::hasNonTrivialMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_ade4880b7742549b8c9fecc1f909cddd)() const = &::clang::CXXRecordDecl::hasNonTrivialMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_547ee37da232511ba69a74241c65e8e7)() const = &::clang::CXXRecordDecl::hasSimpleDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_bfd576d62b925a57886337e7d56d73cc)() const = &::clang::CXXRecordDecl::hasSimpleMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_c247926f28ea5617beb6d9439fe2d45e)() const = &::clang::CXXRecordDecl::hasSimpleMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_7aeae90d4ca250af872674b18c0f0a7d)() const = &::clang::CXXRecordDecl::hasTrivialCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_443f8215f9a2563887364c0b0882bbf3)() const = &::clang::CXXRecordDecl::hasTrivialCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_422c654786955505b163f95060f34a95)() const = &::clang::CXXRecordDecl::hasTrivialDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_7d5d77d65fd95c828f93c0caa3e4b5bf)() const = &::clang::CXXRecordDecl::hasTrivialDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_edfc94de61395adc9d49c7292eec05e1)() const = &::clang::CXXRecordDecl::hasTrivialMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_7aaa69ea90ed52728788b92ff5984915)() const = &::clang::CXXRecordDecl::hasTrivialMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_7b1279cc81085211b2f7be63a9b9f544)() const = &::clang::CXXRecordDecl::hasUninitializedReferenceMember;
    bool  (::clang::CXXRecordDecl::*method_pointer_4087501903aa586f8bcd9e1e98161656)() const = &::clang::CXXRecordDecl::hasUserDeclaredConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_6674b0415bf65105823d48ea0d09b129)() const = &::clang::CXXRecordDecl::hasUserDeclaredCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_8c1786143d5854faa39727d579d62f4e)() const = &::clang::CXXRecordDecl::hasUserDeclaredCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_01160724057a5ac4a313e29a91aa64fe)() const = &::clang::CXXRecordDecl::hasUserDeclaredDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_1b80ca458b9c52299f50743adc4ed3ed)() const = &::clang::CXXRecordDecl::hasUserDeclaredMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_5e7d1a2ee18351248505627b80961ef7)() const = &::clang::CXXRecordDecl::hasUserDeclaredMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_4f67e28f38075c9b832360ef35e44a24)() const = &::clang::CXXRecordDecl::hasUserDeclaredMoveOperation;
    bool  (::clang::CXXRecordDecl::*method_pointer_37c1149c99c95888afd576c3a3fb1afc)() const = &::clang::CXXRecordDecl::hasUserProvidedDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_1175248909cd51bc8cd43d74aed6467d)() const = &::clang::CXXRecordDecl::hasVariantMembers;
    bool  (::clang::CXXRecordDecl::*method_pointer_c003381d718d52aeb0633724e0c7fc78)() const = &::clang::CXXRecordDecl::implicitCopyAssignmentHasConstParam;
    bool  (::clang::CXXRecordDecl::*method_pointer_e119027a0d8850f4816eda863c005542)() const = &::clang::CXXRecordDecl::implicitCopyConstructorHasConstParam;
    bool  (::clang::CXXRecordDecl::*method_pointer_d0ce742193cb5fed92febcf59c8ea957)() const = &::clang::CXXRecordDecl::isAbstract;
    bool  (::clang::CXXRecordDecl::*method_pointer_3041d81fa8895083b52611e625b57225)() const = &::clang::CXXRecordDecl::isAggregate;
    bool  (::clang::CXXRecordDecl::*method_pointer_3c7ee49ec8ed54f3b6d8ed4718addeb7)() const = &::clang::CXXRecordDecl::isAnyDestructorNoReturn;
    bool  (::clang::CXXRecordDecl::*method_pointer_2cff5b1d735f5d869b330fea2a5940a9)() const = &::clang::CXXRecordDecl::isCLike;
    bool  (::clang::CXXRecordDecl::*method_pointer_08546114093a591f88af343bdb994352)(class ::clang::DeclContext  const *) const = &::clang::CXXRecordDecl::isCurrentInstantiation;
    bool  (::clang::CXXRecordDecl::*method_pointer_5f66bd8568835c42815b7f836c8065de)() const = &::clang::CXXRecordDecl::isDependentLambda;
    bool  (::clang::CXXRecordDecl::*method_pointer_1d2c74f8f9315e67855a9b8bf821dfab)(class ::clang::CXXRecordDecl  const *) const = &::clang::CXXRecordDecl::isDerivedFrom;
    bool  (::clang::CXXRecordDecl::*method_pointer_ad730d1a81a15289b799b9d55443c475)() const = &::clang::CXXRecordDecl::isDynamicClass;
    bool  (::clang::CXXRecordDecl::*method_pointer_b70c0ce2fbb35f64add623ba687cfc42)() const = &::clang::CXXRecordDecl::isEmpty;
    bool  (::clang::CXXRecordDecl::*method_pointer_c3cb1a4f67505b65be8f008527d6c582)() const = &::clang::CXXRecordDecl::isGenericLambda;
    bool  (::clang::CXXRecordDecl::*method_pointer_d0bea818b16855f9aae5ae311a67a58a)() const = &::clang::CXXRecordDecl::isLambda;
    bool  (::clang::CXXRecordDecl::*method_pointer_0cfd66b4e6a65d84a9dca7476a216d15)() const = &::clang::CXXRecordDecl::isLiteral;
    class ::clang::FunctionDecl  * (::clang::CXXRecordDecl::*method_pointer_e67f0dd803a258599e6e1e56d4a959f6)() = &::clang::CXXRecordDecl::isLocalClass;
    class ::clang::FunctionDecl  const * (::clang::CXXRecordDecl::*method_pointer_1efd6bdfe16652bc8db9e647f3861286)() const = &::clang::CXXRecordDecl::isLocalClass;
    bool  (::clang::CXXRecordDecl::*method_pointer_34c51d8ffb7152b19d597ba2b4bba5f2)() const = &::clang::CXXRecordDecl::isPOD;
    bool  (::clang::CXXRecordDecl::*method_pointer_dbd54fd82fd357ddb31987065cd25332)() const = &::clang::CXXRecordDecl::isParsingBaseSpecifiers;
    bool  (::clang::CXXRecordDecl::*method_pointer_0d673b3e1e6755aeb1eac5ea84e53f22)() const = &::clang::CXXRecordDecl::isPolymorphic;
    bool  (::clang::CXXRecordDecl::*method_pointer_23758d992dc1589d871988a11e34b811)(class ::clang::CXXRecordDecl  const *) const = &::clang::CXXRecordDecl::isProvablyNotDerivedFrom;
    bool  (::clang::CXXRecordDecl::*method_pointer_f68bcdc6bb4854dcb5f93b0a55691ece)() const = &::clang::CXXRecordDecl::isStandardLayout;
    bool  (::clang::CXXRecordDecl::*method_pointer_32dd81384680537faa1ba43cccd9d754)() const = &::clang::CXXRecordDecl::isTrivial;
    bool  (::clang::CXXRecordDecl::*method_pointer_f064ae0e911151bc8de593ee5adce3f2)() const = &::clang::CXXRecordDecl::isTriviallyCopyable;
    bool  (::clang::CXXRecordDecl::*method_pointer_f7c8e27bee2f55898d8758c96818d6ec)(class ::clang::CXXRecordDecl  const *) const = &::clang::CXXRecordDecl::isVirtuallyDerivedFrom;
    bool  (::clang::CXXRecordDecl::*method_pointer_ddd40b1785725b7a9965687ec906138a)() const = &::clang::CXXRecordDecl::mayBeAbstract;
    bool  (::clang::CXXRecordDecl::*method_pointer_06cb47a6b3a05a9a8903b9f4332f0a13)() const = &::clang::CXXRecordDecl::needsImplicitCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_c0a9c6fe055754fc835e654b4fc28ad3)() const = &::clang::CXXRecordDecl::needsImplicitCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_b8190a423e9255729c3ba50fe6b335b1)() const = &::clang::CXXRecordDecl::needsImplicitDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_17a42dcaae495ecc88be32b550507bd9)() const = &::clang::CXXRecordDecl::needsImplicitDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_4fdcb2bff81c5e9287a2ca20dc61ea27)() const = &::clang::CXXRecordDecl::needsImplicitMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_7591fda92b335ea7ae0c5c417cbd6ccd)() const = &::clang::CXXRecordDecl::needsImplicitMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_ed7fff5ea34f59ec8d2fb8a10f471bf4)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_3b866255a6ab5351a875e2b6e6b0df24)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_377b71b7dfa95672abb72e3901a97844)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_b946e43bd9c75937a4b4138813b01ef4)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_a36ff9614bc0510d9617195ddfc37767)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_5876019e0a445741b7d23e939e53ecbc)() const = &::clang::CXXRecordDecl::nullFieldOffsetIsZero;
    void  (::clang::CXXRecordDecl::*method_pointer_c3ce78ad5d205065a8d91a03fea7bd1f)(class ::clang::FriendDecl  *) = &::clang::CXXRecordDecl::pushFriendDecl;
    void  (::clang::CXXRecordDecl::*method_pointer_06f621800acf521abd90b627a2574264)(class ::clang::NamedDecl  const *) = &::clang::CXXRecordDecl::removeConversion;
    void  (::clang::CXXRecordDecl::*method_pointer_f88bef36093b5d0ab37e7cc593230ac2)(class ::clang::ClassTemplateDecl  *) = &::clang::CXXRecordDecl::setDescribedClassTemplate;
    void  (::clang::CXXRecordDecl::*method_pointer_d3b0c4abd31953628e1bb502f5e43af4)() = &::clang::CXXRecordDecl::setImplicitMoveAssignmentIsDeleted;
    void  (::clang::CXXRecordDecl::*method_pointer_8775693e35fd576c9d9b26fc785e3210)() = &::clang::CXXRecordDecl::setImplicitMoveConstructorIsDeleted;
    void  (::clang::CXXRecordDecl::*method_pointer_c2217d26e3bd5245a9341e06fb6a0a39)() = &::clang::CXXRecordDecl::setIsParsingBaseSpecifiers;
    void  (::clang::CXXRecordDecl::*method_pointer_393f1491dad45a3d83fd94ef9979db58)(unsigned int , class ::clang::Decl  *) = &::clang::CXXRecordDecl::setLambdaMangling;
    void  (::clang::CXXRecordDecl::*method_pointer_207826f18b585e5fa049a8474e83ac63)(class ::clang::ASTContext  &) const = &::clang::CXXRecordDecl::viewInheritance;
    struct function_group
    {
        static class ::boost::python::list  function_82418c57f8ab5c4ea0eb59c884345586(class ::clang::CXXRecordDecl  & parameter_0)
        { return ::clanglite::get_bases(parameter_0); }
        static class ::boost::python::list  function_c4c994f256b25ecbb10dc7cbb6906a67(class ::clang::CXXRecordDecl  & parameter_0)
        { return ::clanglite::get_constructors(parameter_0); }
        static class ::boost::python::list  function_e3b806b2e2295bd8a42083e159a3787c(class ::clang::CXXRecordDecl  & parameter_0)
        { return ::clanglite::get_virtual_bases(parameter_0); }
    };
    boost::python::class_< class ::clang::CXXRecordDecl, autowig::HeldType< class ::clang::CXXRecordDecl >, boost::python::bases< class ::clang::RecordDecl >, boost::noncopyable > class_6d094fa53b15516db85a0d4b3b7fd665("CXXRecordDecl", "", boost::python::no_init);
    class_6d094fa53b15516db85a0d4b3b7fd665.def("merge_access", method_pointer_4c25140e55f1523e9315fb10d28c1c31, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("classof", method_pointer_f3f0e5146b885e7995cf91695b354ad5, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("classof_kind", method_pointer_6651dee06e30510ab7834f093671d391, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("complete_definition", method_pointer_0513e65542d9521f9397115746f314ae, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("defaulted_default_constructor_is_constexpr", method_pointer_49de4937af9c55a0bea6305dffcdf904, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("finished_defaulted_or_deleted_member", method_pointer_a7800312e66755d1b9aaf7a1ac2ae7b4, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_canonical_decl", method_pointer_b1dfb49bf9ef5eb1b43ca2cceb957fae, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_canonical_decl", method_pointer_f6d4255c78db5736bae5ce32f288aff6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_definition", method_pointer_7dcdcf71e1885d668100ee8e020b1577, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_described_class_template", method_pointer_706a9d03a7b556539f8541716b444f1c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_destructor", method_pointer_67c9d2540daa5e4eab98698a618ecdc5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_instantiated_from_member_class", method_pointer_cccb5899c5db54af8a628730d853dc94, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_lambda_call_operator", method_pointer_793f1141f9cb5900b475272a8015181c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_lambda_context_decl", method_pointer_166bfd0fb1245074b3c8838b996efbac, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_lambda_mangling_number", method_pointer_1d60f5f30e4857be9e05117f19558f46, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_lambda_static_invoker", method_pointer_6a4ba6b56efb5076b601183b96ee0777, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_most_recent_decl", method_pointer_c88c22d13f92586682592d040ab34d10, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_most_recent_decl", method_pointer_1907ee1065175df1bffd07f5717ee7d1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_num_bases", method_pointer_9964cd7cc89a56efb705bc898842a985, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_num_v_bases", method_pointer_05864587ed6b535ba73412d79b5b70cd, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_previous_decl", method_pointer_9ba06ce440b3516b895e21a096934f30, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_previous_decl", method_pointer_184b2b5a7ced5311833c23c9ce2cfa3a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_template_instantiation_pattern", method_pointer_6702ac276f63586c9e3f73b8325400de, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_template_instantiation_pattern", method_pointer_3daf70bb2a88594bb37e3af3be081ba5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_any_dependent_bases", method_pointer_4b9b38e8766f5c87886721169a248ff7, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_constexpr_default_constructor", method_pointer_c606bf6afec55ae495919d156ac1a24f, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_constexpr_non_copy_move_constructor", method_pointer_1691bb3afd815c0aa04dc4ec09dd5601, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_copy_assignment_with_const_param", method_pointer_6b45606afe525dcf9aa0e9591160b427, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_copy_constructor_with_const_param", method_pointer_7ee5288c519457cfb7bb8dbd93dcd95e, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_default_constructor", method_pointer_3a21f2823a3a5f918bb6df50ca2fc067, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_definition", method_pointer_fd565e15eb3759ecbed45c91f1b81207, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_friends", method_pointer_42881d0f3c8e5254ad6044baeac9e981, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_in_class_initializer", method_pointer_ea09cddd4856510183c0ee71a65ddac1, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_irrelevant_destructor", method_pointer_2da0f10aa547517a8f06f9ea512377a6, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_move_assignment", method_pointer_3cecc189cccc5ceb80b1253ee70be1a5, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_move_constructor", method_pointer_991d2477fd3d5c9cbf58fc6912ac47a4, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_mutable_fields", method_pointer_a4789ed42465544b933e677af2b78f53, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_literal_type_fields_or_bases", method_pointer_c884e8b596cf52d1bd8706732bed8298, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_copy_assignment", method_pointer_d31e68e950f257dca140b4a870260a74, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_copy_constructor", method_pointer_db3e5e203b7150e498f8790b9ef83e6d, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_default_constructor", method_pointer_4b69258ce7d358e48c4b7fbc025318bc, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_destructor", method_pointer_c6deb5b1b2e657db935076f8012f07d6, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_move_assignment", method_pointer_b7c7c67408e352c6b6513e633681c773, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_move_constructor", method_pointer_ade4880b7742549b8c9fecc1f909cddd, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_simple_destructor", method_pointer_547ee37da232511ba69a74241c65e8e7, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_simple_move_assignment", method_pointer_bfd576d62b925a57886337e7d56d73cc, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_simple_move_constructor", method_pointer_c247926f28ea5617beb6d9439fe2d45e, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_copy_assignment", method_pointer_7aeae90d4ca250af872674b18c0f0a7d, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_copy_constructor", method_pointer_443f8215f9a2563887364c0b0882bbf3, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_default_constructor", method_pointer_422c654786955505b163f95060f34a95, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_destructor", method_pointer_7d5d77d65fd95c828f93c0caa3e4b5bf, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_move_assignment", method_pointer_edfc94de61395adc9d49c7292eec05e1, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_move_constructor", method_pointer_7aaa69ea90ed52728788b92ff5984915, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_uninitialized_reference_member", method_pointer_7b1279cc81085211b2f7be63a9b9f544, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_constructor", method_pointer_4087501903aa586f8bcd9e1e98161656, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_copy_assignment", method_pointer_6674b0415bf65105823d48ea0d09b129, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_copy_constructor", method_pointer_8c1786143d5854faa39727d579d62f4e, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_destructor", method_pointer_01160724057a5ac4a313e29a91aa64fe, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_move_assignment", method_pointer_1b80ca458b9c52299f50743adc4ed3ed, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_move_constructor", method_pointer_5e7d1a2ee18351248505627b80961ef7, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_move_operation", method_pointer_4f67e28f38075c9b832360ef35e44a24, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_provided_default_constructor", method_pointer_37c1149c99c95888afd576c3a3fb1afc, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_variant_members", method_pointer_1175248909cd51bc8cd43d74aed6467d, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("implicit_copy_assignment_has_const_param", method_pointer_c003381d718d52aeb0633724e0c7fc78, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("implicit_copy_constructor_has_const_param", method_pointer_e119027a0d8850f4816eda863c005542, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_abstract", method_pointer_d0ce742193cb5fed92febcf59c8ea957, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_aggregate", method_pointer_3041d81fa8895083b52611e625b57225, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_any_destructor_no_return", method_pointer_3c7ee49ec8ed54f3b6d8ed4718addeb7, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_c_like", method_pointer_2cff5b1d735f5d869b330fea2a5940a9, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_current_instantiation", method_pointer_08546114093a591f88af343bdb994352, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_dependent_lambda", method_pointer_5f66bd8568835c42815b7f836c8065de, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_derived_from", method_pointer_1d2c74f8f9315e67855a9b8bf821dfab, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_dynamic_class", method_pointer_ad730d1a81a15289b799b9d55443c475, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_empty", method_pointer_b70c0ce2fbb35f64add623ba687cfc42, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_generic_lambda", method_pointer_c3cb1a4f67505b65be8f008527d6c582, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_lambda", method_pointer_d0bea818b16855f9aae5ae311a67a58a, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_literal", method_pointer_0cfd66b4e6a65d84a9dca7476a216d15, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_local_class", method_pointer_e67f0dd803a258599e6e1e56d4a959f6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_local_class", method_pointer_1efd6bdfe16652bc8db9e647f3861286, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_pod", method_pointer_34c51d8ffb7152b19d597ba2b4bba5f2, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_parsing_base_specifiers", method_pointer_dbd54fd82fd357ddb31987065cd25332, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_polymorphic", method_pointer_0d673b3e1e6755aeb1eac5ea84e53f22, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_provably_not_derived_from", method_pointer_23758d992dc1589d871988a11e34b811, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_standard_layout", method_pointer_f68bcdc6bb4854dcb5f93b0a55691ece, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_trivial", method_pointer_32dd81384680537faa1ba43cccd9d754, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_trivially_copyable", method_pointer_f064ae0e911151bc8de593ee5adce3f2, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_virtually_derived_from", method_pointer_f7c8e27bee2f55898d8758c96818d6ec, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("may_be_abstract", method_pointer_ddd40b1785725b7a9965687ec906138a, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_copy_assignment", method_pointer_06cb47a6b3a05a9a8903b9f4332f0a13, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_copy_constructor", method_pointer_c0a9c6fe055754fc835e654b4fc28ad3, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_default_constructor", method_pointer_b8190a423e9255729c3ba50fe6b335b1, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_destructor", method_pointer_17a42dcaae495ecc88be32b550507bd9, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_move_assignment", method_pointer_4fdcb2bff81c5e9287a2ca20dc61ea27, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_move_constructor", method_pointer_7591fda92b335ea7ae0c5c417cbd6ccd, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_copy_assignment", method_pointer_ed7fff5ea34f59ec8d2fb8a10f471bf4, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_copy_constructor", method_pointer_3b866255a6ab5351a875e2b6e6b0df24, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_destructor", method_pointer_377b71b7dfa95672abb72e3901a97844, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_move_assignment", method_pointer_b946e43bd9c75937a4b4138813b01ef4, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_move_constructor", method_pointer_a36ff9614bc0510d9617195ddfc37767, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("null_field_offset_is_zero", method_pointer_5876019e0a445741b7d23e939e53ecbc, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("push_friend_decl", method_pointer_c3ce78ad5d205065a8d91a03fea7bd1f, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("remove_conversion", method_pointer_06f621800acf521abd90b627a2574264, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_described_class_template", method_pointer_f88bef36093b5d0ab37e7cc593230ac2, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_implicit_move_assignment_is_deleted", method_pointer_d3b0c4abd31953628e1bb502f5e43af4, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_implicit_move_constructor_is_deleted", method_pointer_8775693e35fd576c9d9b26fc785e3210, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_is_parsing_base_specifiers", method_pointer_c2217d26e3bd5245a9341e06fb6a0a39, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_lambda_mangling", method_pointer_393f1491dad45a3d83fd94ef9979db58, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("view_inheritance", method_pointer_207826f18b585e5fa049a8474e83ac63, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.staticmethod("classof_kind");
    class_6d094fa53b15516db85a0d4b3b7fd665.staticmethod("merge_access");
    class_6d094fa53b15516db85a0d4b3b7fd665.staticmethod("classof");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_bases", function_group::function_82418c57f8ab5c4ea0eb59c884345586, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_constructors", function_group::function_c4c994f256b25ecbb10dc7cbb6906a67, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_virtual_bases", function_group::function_e3b806b2e2295bd8a42083e159a3787c, "");

    if(std::is_class< autowig::HeldType< class ::clang::CXXRecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXRecordDecl >, autowig::HeldType< class ::clang::RecordDecl > >();
    }

}