#include "_clanglite.h"


namespace autowig
{
}


void wrapper_6d094fa53b15516db85a0d4b3b7fd665()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    enum ::clang::AccessSpecifier  (*method_pointer_8d97ef1a202852e09763351d7ccc6ac1)(enum ::clang::AccessSpecifier , enum ::clang::AccessSpecifier ) = ::clang::CXXRecordDecl::MergeAccess;
    bool  (*method_pointer_97f87e01448c5110b66146a859dcc40f)(class ::clang::Decl  const *) = ::clang::CXXRecordDecl::classof;
    bool  (*method_pointer_df4a1cf0d5b057628b2d858c0cf13f19)(enum ::clang::Decl::Kind ) = ::clang::CXXRecordDecl::classofKind;
    void  (::clang::CXXRecordDecl::*method_pointer_09f7fea7bf4f5c3f96fbac8066e144e2)() = &::clang::CXXRecordDecl::completeDefinition;
    bool  (::clang::CXXRecordDecl::*method_pointer_fbffb3746d2c5b5fb8937ee63873ffa6)() const = &::clang::CXXRecordDecl::defaultedDefaultConstructorIsConstexpr;
    void  (::clang::CXXRecordDecl::*method_pointer_9df1941dad8e58fcb5bc832e533d3f9b)(class ::clang::CXXMethodDecl  *) = &::clang::CXXRecordDecl::finishedDefaultedOrDeletedMember;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_d072e3b89f49516b9a10ef1bd0d301a0)() = &::clang::CXXRecordDecl::getCanonicalDecl;
    class ::clang::CXXRecordDecl  const * (::clang::CXXRecordDecl::*method_pointer_8e93f0e17c5253ff9c999f69c11e2020)() const = &::clang::CXXRecordDecl::getCanonicalDecl;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_f4d0122ed0f352e8bc85845c3bbcd3af)() const = &::clang::CXXRecordDecl::getDefinition;
    class ::clang::ClassTemplateDecl  * (::clang::CXXRecordDecl::*method_pointer_379ed3a2a20f5fc08230413bdd8a0d93)() const = &::clang::CXXRecordDecl::getDescribedClassTemplate;
    class ::clang::CXXDestructorDecl  * (::clang::CXXRecordDecl::*method_pointer_56fb32c3cd2d56afa8f0e676bb77207f)() const = &::clang::CXXRecordDecl::getDestructor;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_f1dfa5d8d4f85c8cb7b2a2d0e5a05563)() const = &::clang::CXXRecordDecl::getInstantiatedFromMemberClass;
    class ::clang::CXXMethodDecl  * (::clang::CXXRecordDecl::*method_pointer_2765b682f3185cbdbe1d5ea78be35af7)() const = &::clang::CXXRecordDecl::getLambdaCallOperator;
    class ::clang::Decl  * (::clang::CXXRecordDecl::*method_pointer_d0edc8fa15595c03bc929eb0eaf6057f)() const = &::clang::CXXRecordDecl::getLambdaContextDecl;
    unsigned int  (::clang::CXXRecordDecl::*method_pointer_91b5e4ffc23d5a009fff10b5e2f58214)() const = &::clang::CXXRecordDecl::getLambdaManglingNumber;
    class ::clang::CXXMethodDecl  * (::clang::CXXRecordDecl::*method_pointer_1210e2a7a8fa533faef6aa81dc0f98e8)() const = &::clang::CXXRecordDecl::getLambdaStaticInvoker;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_ed2a89a4a4675b73830795345b857dc0)() = &::clang::CXXRecordDecl::getMostRecentDecl;
    class ::clang::CXXRecordDecl  const * (::clang::CXXRecordDecl::*method_pointer_30f6e6f08167511299788fba7193b0fe)() const = &::clang::CXXRecordDecl::getMostRecentDecl;
    unsigned int  (::clang::CXXRecordDecl::*method_pointer_62eefd80a75c5129a99d1fd0667c1656)() const = &::clang::CXXRecordDecl::getNumBases;
    unsigned int  (::clang::CXXRecordDecl::*method_pointer_83074129d4cb5dbb8d03259ff44ec477)() const = &::clang::CXXRecordDecl::getNumVBases;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_b26c84cbc6c2525ab0442f06b66f7d35)() = &::clang::CXXRecordDecl::getPreviousDecl;
    class ::clang::CXXRecordDecl  const * (::clang::CXXRecordDecl::*method_pointer_c1cdd96d125957409463d9158fdd9091)() const = &::clang::CXXRecordDecl::getPreviousDecl;
    class ::clang::CXXRecordDecl  const * (::clang::CXXRecordDecl::*method_pointer_8849552987b852578c3cdd7e9b1674a6)() const = &::clang::CXXRecordDecl::getTemplateInstantiationPattern;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_407ab8b3f1585e4db9bdf85bedf5d1c4)() = &::clang::CXXRecordDecl::getTemplateInstantiationPattern;
    bool  (::clang::CXXRecordDecl::*method_pointer_3f0dd0f889e45598aa415d19628a67ee)() const = &::clang::CXXRecordDecl::hasAnyDependentBases;
    bool  (::clang::CXXRecordDecl::*method_pointer_43d156be903f5b0c9023327543d7a543)() const = &::clang::CXXRecordDecl::hasConstexprDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_6406160b284c5158b476daa8cedb4477)() const = &::clang::CXXRecordDecl::hasConstexprNonCopyMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_e95828aedc42566d9278a6870d3f31c1)() const = &::clang::CXXRecordDecl::hasCopyAssignmentWithConstParam;
    bool  (::clang::CXXRecordDecl::*method_pointer_0a0fb85a7333553aa7dc98aa8d2ac935)() const = &::clang::CXXRecordDecl::hasCopyConstructorWithConstParam;
    bool  (::clang::CXXRecordDecl::*method_pointer_f3c8a357a93257c29995989e87798312)() const = &::clang::CXXRecordDecl::hasDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_f583e1497fe55ae197f6713883495eb7)() const = &::clang::CXXRecordDecl::hasDefinition;
    bool  (::clang::CXXRecordDecl::*method_pointer_06ffc0d16ab35085885531c9aeb151a2)() const = &::clang::CXXRecordDecl::hasFriends;
    bool  (::clang::CXXRecordDecl::*method_pointer_4ea6ff847e3e5e62b1e1f38ef72ac24a)() const = &::clang::CXXRecordDecl::hasInClassInitializer;
    bool  (::clang::CXXRecordDecl::*method_pointer_2e337b73bf805ee9808092613eb401b5)() const = &::clang::CXXRecordDecl::hasIrrelevantDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_77b53b4ba3505025ac9ff316f48ddb4f)() const = &::clang::CXXRecordDecl::hasMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_970dd741d3ab5a0bb1306f78f8c03f4b)() const = &::clang::CXXRecordDecl::hasMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_25f37bc362a05067ad042f56e90e8814)() const = &::clang::CXXRecordDecl::hasMutableFields;
    bool  (::clang::CXXRecordDecl::*method_pointer_436c46916393596f94e5cc87c59984f0)() const = &::clang::CXXRecordDecl::hasNonLiteralTypeFieldsOrBases;
    bool  (::clang::CXXRecordDecl::*method_pointer_3b9ab5c7837b53fd884decc27c870ca7)() const = &::clang::CXXRecordDecl::hasNonTrivialCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_6757f56e77de5dab92461265fe7fe5ba)() const = &::clang::CXXRecordDecl::hasNonTrivialCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_c929efba14a55eb286a042107b2623e4)() const = &::clang::CXXRecordDecl::hasNonTrivialDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_66afaf598d155cddb02e59a722a8c4bc)() const = &::clang::CXXRecordDecl::hasNonTrivialDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_fa3929ce5e1f55548ffdcf93f9a8be25)() const = &::clang::CXXRecordDecl::hasNonTrivialMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_07ce4a59acb852a299b9a9ec21695504)() const = &::clang::CXXRecordDecl::hasNonTrivialMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_be02e367b709529582d1a20a90c98757)() const = &::clang::CXXRecordDecl::hasSimpleDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_f4a0f925e7f25980a0c0a70317824abf)() const = &::clang::CXXRecordDecl::hasSimpleMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_9bf784719b275c9c8a44c7826f6b67d4)() const = &::clang::CXXRecordDecl::hasSimpleMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_fade6dea18555f0da830eba85f219f08)() const = &::clang::CXXRecordDecl::hasTrivialCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_46613c3c05095558823669c3d2a898ce)() const = &::clang::CXXRecordDecl::hasTrivialCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_d9f93c19677c5b88a3ccaa71263114fa)() const = &::clang::CXXRecordDecl::hasTrivialDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_4b7a85e61bda5e078601bf87885b6969)() const = &::clang::CXXRecordDecl::hasTrivialDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_b2ba24421a81516b97033584267fd640)() const = &::clang::CXXRecordDecl::hasTrivialMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_5c62437798995a05b533b6a196964c68)() const = &::clang::CXXRecordDecl::hasTrivialMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_cf2e2a9184f25a1e904c43872dcd033b)() const = &::clang::CXXRecordDecl::hasUninitializedReferenceMember;
    bool  (::clang::CXXRecordDecl::*method_pointer_672c453c63765185944c0b027cb3ab43)() const = &::clang::CXXRecordDecl::hasUserDeclaredConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_dd030fa9ccd055289b5e22501b7c1f5d)() const = &::clang::CXXRecordDecl::hasUserDeclaredCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_772659aa49105960b17ab019d7a30e3d)() const = &::clang::CXXRecordDecl::hasUserDeclaredCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_8e30ce70192355c78188570b9f2c5ab1)() const = &::clang::CXXRecordDecl::hasUserDeclaredDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_f37393fad9ce582ba0c6387d18657b76)() const = &::clang::CXXRecordDecl::hasUserDeclaredMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_86fa18b594b95f24b85060f864811a5a)() const = &::clang::CXXRecordDecl::hasUserDeclaredMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_aa9b15ad4dbb5e84bbd826ebcc998d5a)() const = &::clang::CXXRecordDecl::hasUserDeclaredMoveOperation;
    bool  (::clang::CXXRecordDecl::*method_pointer_abe28a4d15e351eea7b29aa972738a5a)() const = &::clang::CXXRecordDecl::hasUserProvidedDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_fa93ff88f1a7580e94f84670c6ddc53c)() const = &::clang::CXXRecordDecl::hasVariantMembers;
    bool  (::clang::CXXRecordDecl::*method_pointer_3cb65890486958c0bac7fe1fc00eebb9)() const = &::clang::CXXRecordDecl::implicitCopyAssignmentHasConstParam;
    bool  (::clang::CXXRecordDecl::*method_pointer_531fca539d365ebda8d93bf5f79b5be4)() const = &::clang::CXXRecordDecl::implicitCopyConstructorHasConstParam;
    bool  (::clang::CXXRecordDecl::*method_pointer_13b79469fc615006b0686a188fff6f74)() const = &::clang::CXXRecordDecl::isAbstract;
    bool  (::clang::CXXRecordDecl::*method_pointer_9d8e23431bd55f57adc271cb0c177b71)() const = &::clang::CXXRecordDecl::isAggregate;
    bool  (::clang::CXXRecordDecl::*method_pointer_1c761f71515954d78fce30ba02180153)() const = &::clang::CXXRecordDecl::isAnyDestructorNoReturn;
    bool  (::clang::CXXRecordDecl::*method_pointer_f4b4453165a65e9694d0d8784956253e)() const = &::clang::CXXRecordDecl::isCLike;
    bool  (::clang::CXXRecordDecl::*method_pointer_2d72afd9548059ca8ef4614fad3ddcdc)(class ::clang::DeclContext  const *) const = &::clang::CXXRecordDecl::isCurrentInstantiation;
    bool  (::clang::CXXRecordDecl::*method_pointer_b1ad440b3cd15ce1b5010018c38e2a01)() const = &::clang::CXXRecordDecl::isDependentLambda;
    bool  (::clang::CXXRecordDecl::*method_pointer_9e341a32987a5685bfad5ffae765de4b)(class ::clang::CXXRecordDecl  const *) const = &::clang::CXXRecordDecl::isDerivedFrom;
    bool  (::clang::CXXRecordDecl::*method_pointer_9a2b62cd8580542d8d67c2ac008b8077)() const = &::clang::CXXRecordDecl::isDynamicClass;
    bool  (::clang::CXXRecordDecl::*method_pointer_a332310d189857c98350ec9c1331896f)() const = &::clang::CXXRecordDecl::isEmpty;
    bool  (::clang::CXXRecordDecl::*method_pointer_5907b4ea8a72552f85cfdaca1e34d9bd)() const = &::clang::CXXRecordDecl::isGenericLambda;
    bool  (::clang::CXXRecordDecl::*method_pointer_93611bdd013f56d88bcb32a97d8c7c72)() const = &::clang::CXXRecordDecl::isLambda;
    bool  (::clang::CXXRecordDecl::*method_pointer_9556cd2268d252f4a821a336227a6586)() const = &::clang::CXXRecordDecl::isLiteral;
    class ::clang::FunctionDecl  * (::clang::CXXRecordDecl::*method_pointer_2c1e5949c57e5a4ba90e0de09d0c8e7b)() = &::clang::CXXRecordDecl::isLocalClass;
    class ::clang::FunctionDecl  const * (::clang::CXXRecordDecl::*method_pointer_84ab0271ba075ab2908381b69cd81a64)() const = &::clang::CXXRecordDecl::isLocalClass;
    bool  (::clang::CXXRecordDecl::*method_pointer_5c95108df1235edf8a27fd0d3352940f)() const = &::clang::CXXRecordDecl::isPOD;
    bool  (::clang::CXXRecordDecl::*method_pointer_684d7e6943aa5d4ab7c3afefb9912051)() const = &::clang::CXXRecordDecl::isParsingBaseSpecifiers;
    bool  (::clang::CXXRecordDecl::*method_pointer_9114cac5429b5953af2cf458f2b9340b)() const = &::clang::CXXRecordDecl::isPolymorphic;
    bool  (::clang::CXXRecordDecl::*method_pointer_5fcc1489cc4257e48c84edc0ab0f3b14)(class ::clang::CXXRecordDecl  const *) const = &::clang::CXXRecordDecl::isProvablyNotDerivedFrom;
    bool  (::clang::CXXRecordDecl::*method_pointer_48fa9099141158b39cf845c17c5b2f8b)() const = &::clang::CXXRecordDecl::isStandardLayout;
    bool  (::clang::CXXRecordDecl::*method_pointer_b56ee2742050552bb706c9cc3eb969b6)() const = &::clang::CXXRecordDecl::isTrivial;
    bool  (::clang::CXXRecordDecl::*method_pointer_2af7b96f03d35ed5861c9299f9e9273a)() const = &::clang::CXXRecordDecl::isTriviallyCopyable;
    bool  (::clang::CXXRecordDecl::*method_pointer_36a8be61d9e55060886a23ef684098ca)(class ::clang::CXXRecordDecl  const *) const = &::clang::CXXRecordDecl::isVirtuallyDerivedFrom;
    bool  (::clang::CXXRecordDecl::*method_pointer_3977d9344b1f524fab72b31fbc12ea33)() const = &::clang::CXXRecordDecl::mayBeAbstract;
    bool  (::clang::CXXRecordDecl::*method_pointer_bc5632064c0f5b85a01835f22e454af5)() const = &::clang::CXXRecordDecl::needsImplicitCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_2904e2bbf0575921bd7e626d3c269352)() const = &::clang::CXXRecordDecl::needsImplicitCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_8674f557bdb75c53b50986065cf66fe1)() const = &::clang::CXXRecordDecl::needsImplicitDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_fe4f0bc32dbb50efb91339196b9ee039)() const = &::clang::CXXRecordDecl::needsImplicitDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_d98c653b835d568eac64b079ba57bec9)() const = &::clang::CXXRecordDecl::needsImplicitMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_b23395bebecf59d0ab5ed1045212535a)() const = &::clang::CXXRecordDecl::needsImplicitMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_e8762e3623935f0885d809997c5ae028)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_235deab2e9a25afeb9752dd1fb973e57)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_0f08a28aef1f5d1bb5267b1dc095b2f4)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_d42fad92cba55a43808a3ccc6384469b)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_f649cced141d558daa28543f97a4a7f9)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_b74f5a83c503575f942e87b2703f10c0)() const = &::clang::CXXRecordDecl::nullFieldOffsetIsZero;
    void  (::clang::CXXRecordDecl::*method_pointer_31cc5e6bf73253119ce586647de2ef8b)(class ::clang::FriendDecl  *) = &::clang::CXXRecordDecl::pushFriendDecl;
    void  (::clang::CXXRecordDecl::*method_pointer_669260c32cf25d3aa4537fb2b9b971eb)(class ::clang::NamedDecl  const *) = &::clang::CXXRecordDecl::removeConversion;
    void  (::clang::CXXRecordDecl::*method_pointer_b0c4bd6213cb5e14acbb4e68d53e5996)(class ::clang::ClassTemplateDecl  *) = &::clang::CXXRecordDecl::setDescribedClassTemplate;
    void  (::clang::CXXRecordDecl::*method_pointer_eb5e26255af05596a0eb36f362022e33)() = &::clang::CXXRecordDecl::setImplicitMoveAssignmentIsDeleted;
    void  (::clang::CXXRecordDecl::*method_pointer_3551f66e1cd85c6586972327e91a0d63)() = &::clang::CXXRecordDecl::setImplicitMoveConstructorIsDeleted;
    void  (::clang::CXXRecordDecl::*method_pointer_2b218c2a820253c89cdadcd8b4a63f2c)() = &::clang::CXXRecordDecl::setIsParsingBaseSpecifiers;
    void  (::clang::CXXRecordDecl::*method_pointer_30e1e2d91ef456f794119aa4c814722c)(unsigned int , class ::clang::Decl  *) = &::clang::CXXRecordDecl::setLambdaMangling;
    void  (::clang::CXXRecordDecl::*method_pointer_67909421aa845b61b89dc88c7b9f7547)(class ::clang::ASTContext  &) const = &::clang::CXXRecordDecl::viewInheritance;
    struct function_group
    {
        static class ::boost::python::list  function_53efecbee0cf50e69d70793ea43a6adb(class ::clang::CXXRecordDecl  & parameter_0)
        { return ::clanglite::get_bases(parameter_0); }
        static class ::boost::python::list  function_b5c12bf5341f53df94bffe66f4725909(class ::clang::CXXRecordDecl  & parameter_0)
        { return ::clanglite::get_constructors(parameter_0); }
        static class ::boost::python::list  function_55b6ae8fd48c5a86a92bedc9d76914ca(class ::clang::CXXRecordDecl  & parameter_0)
        { return ::clanglite::get_virtual_bases(parameter_0); }
    };
    boost::python::class_< class ::clang::CXXRecordDecl, autowig::HeldType< class ::clang::CXXRecordDecl >, boost::python::bases< class ::clang::RecordDecl >, boost::noncopyable > class_6d094fa53b15516db85a0d4b3b7fd665("CXXRecordDecl", "", boost::python::no_init);
    class_6d094fa53b15516db85a0d4b3b7fd665.def("merge_access", method_pointer_8d97ef1a202852e09763351d7ccc6ac1, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("classof", method_pointer_97f87e01448c5110b66146a859dcc40f, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("classof_kind", method_pointer_df4a1cf0d5b057628b2d858c0cf13f19, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("complete_definition", method_pointer_09f7fea7bf4f5c3f96fbac8066e144e2, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("defaulted_default_constructor_is_constexpr", method_pointer_fbffb3746d2c5b5fb8937ee63873ffa6, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("finished_defaulted_or_deleted_member", method_pointer_9df1941dad8e58fcb5bc832e533d3f9b, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_canonical_decl", method_pointer_d072e3b89f49516b9a10ef1bd0d301a0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_canonical_decl", method_pointer_8e93f0e17c5253ff9c999f69c11e2020, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_definition", method_pointer_f4d0122ed0f352e8bc85845c3bbcd3af, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_described_class_template", method_pointer_379ed3a2a20f5fc08230413bdd8a0d93, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_destructor", method_pointer_56fb32c3cd2d56afa8f0e676bb77207f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_instantiated_from_member_class", method_pointer_f1dfa5d8d4f85c8cb7b2a2d0e5a05563, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_lambda_call_operator", method_pointer_2765b682f3185cbdbe1d5ea78be35af7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_lambda_context_decl", method_pointer_d0edc8fa15595c03bc929eb0eaf6057f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_lambda_mangling_number", method_pointer_91b5e4ffc23d5a009fff10b5e2f58214, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_lambda_static_invoker", method_pointer_1210e2a7a8fa533faef6aa81dc0f98e8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_most_recent_decl", method_pointer_ed2a89a4a4675b73830795345b857dc0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_most_recent_decl", method_pointer_30f6e6f08167511299788fba7193b0fe, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_num_bases", method_pointer_62eefd80a75c5129a99d1fd0667c1656, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_num_v_bases", method_pointer_83074129d4cb5dbb8d03259ff44ec477, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_previous_decl", method_pointer_b26c84cbc6c2525ab0442f06b66f7d35, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_previous_decl", method_pointer_c1cdd96d125957409463d9158fdd9091, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_template_instantiation_pattern", method_pointer_8849552987b852578c3cdd7e9b1674a6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_template_instantiation_pattern", method_pointer_407ab8b3f1585e4db9bdf85bedf5d1c4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_any_dependent_bases", method_pointer_3f0dd0f889e45598aa415d19628a67ee, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_constexpr_default_constructor", method_pointer_43d156be903f5b0c9023327543d7a543, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_constexpr_non_copy_move_constructor", method_pointer_6406160b284c5158b476daa8cedb4477, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_copy_assignment_with_const_param", method_pointer_e95828aedc42566d9278a6870d3f31c1, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_copy_constructor_with_const_param", method_pointer_0a0fb85a7333553aa7dc98aa8d2ac935, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_default_constructor", method_pointer_f3c8a357a93257c29995989e87798312, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_definition", method_pointer_f583e1497fe55ae197f6713883495eb7, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_friends", method_pointer_06ffc0d16ab35085885531c9aeb151a2, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_in_class_initializer", method_pointer_4ea6ff847e3e5e62b1e1f38ef72ac24a, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_irrelevant_destructor", method_pointer_2e337b73bf805ee9808092613eb401b5, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_move_assignment", method_pointer_77b53b4ba3505025ac9ff316f48ddb4f, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_move_constructor", method_pointer_970dd741d3ab5a0bb1306f78f8c03f4b, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_mutable_fields", method_pointer_25f37bc362a05067ad042f56e90e8814, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_literal_type_fields_or_bases", method_pointer_436c46916393596f94e5cc87c59984f0, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_copy_assignment", method_pointer_3b9ab5c7837b53fd884decc27c870ca7, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_copy_constructor", method_pointer_6757f56e77de5dab92461265fe7fe5ba, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_default_constructor", method_pointer_c929efba14a55eb286a042107b2623e4, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_destructor", method_pointer_66afaf598d155cddb02e59a722a8c4bc, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_move_assignment", method_pointer_fa3929ce5e1f55548ffdcf93f9a8be25, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_move_constructor", method_pointer_07ce4a59acb852a299b9a9ec21695504, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_simple_destructor", method_pointer_be02e367b709529582d1a20a90c98757, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_simple_move_assignment", method_pointer_f4a0f925e7f25980a0c0a70317824abf, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_simple_move_constructor", method_pointer_9bf784719b275c9c8a44c7826f6b67d4, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_copy_assignment", method_pointer_fade6dea18555f0da830eba85f219f08, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_copy_constructor", method_pointer_46613c3c05095558823669c3d2a898ce, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_default_constructor", method_pointer_d9f93c19677c5b88a3ccaa71263114fa, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_destructor", method_pointer_4b7a85e61bda5e078601bf87885b6969, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_move_assignment", method_pointer_b2ba24421a81516b97033584267fd640, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_move_constructor", method_pointer_5c62437798995a05b533b6a196964c68, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_uninitialized_reference_member", method_pointer_cf2e2a9184f25a1e904c43872dcd033b, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_constructor", method_pointer_672c453c63765185944c0b027cb3ab43, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_copy_assignment", method_pointer_dd030fa9ccd055289b5e22501b7c1f5d, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_copy_constructor", method_pointer_772659aa49105960b17ab019d7a30e3d, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_destructor", method_pointer_8e30ce70192355c78188570b9f2c5ab1, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_move_assignment", method_pointer_f37393fad9ce582ba0c6387d18657b76, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_move_constructor", method_pointer_86fa18b594b95f24b85060f864811a5a, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_move_operation", method_pointer_aa9b15ad4dbb5e84bbd826ebcc998d5a, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_provided_default_constructor", method_pointer_abe28a4d15e351eea7b29aa972738a5a, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_variant_members", method_pointer_fa93ff88f1a7580e94f84670c6ddc53c, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("implicit_copy_assignment_has_const_param", method_pointer_3cb65890486958c0bac7fe1fc00eebb9, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("implicit_copy_constructor_has_const_param", method_pointer_531fca539d365ebda8d93bf5f79b5be4, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_abstract", method_pointer_13b79469fc615006b0686a188fff6f74, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_aggregate", method_pointer_9d8e23431bd55f57adc271cb0c177b71, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_any_destructor_no_return", method_pointer_1c761f71515954d78fce30ba02180153, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_c_like", method_pointer_f4b4453165a65e9694d0d8784956253e, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_current_instantiation", method_pointer_2d72afd9548059ca8ef4614fad3ddcdc, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_dependent_lambda", method_pointer_b1ad440b3cd15ce1b5010018c38e2a01, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_derived_from", method_pointer_9e341a32987a5685bfad5ffae765de4b, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_dynamic_class", method_pointer_9a2b62cd8580542d8d67c2ac008b8077, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_empty", method_pointer_a332310d189857c98350ec9c1331896f, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_generic_lambda", method_pointer_5907b4ea8a72552f85cfdaca1e34d9bd, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_lambda", method_pointer_93611bdd013f56d88bcb32a97d8c7c72, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_literal", method_pointer_9556cd2268d252f4a821a336227a6586, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_local_class", method_pointer_2c1e5949c57e5a4ba90e0de09d0c8e7b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_local_class", method_pointer_84ab0271ba075ab2908381b69cd81a64, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_pod", method_pointer_5c95108df1235edf8a27fd0d3352940f, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_parsing_base_specifiers", method_pointer_684d7e6943aa5d4ab7c3afefb9912051, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_polymorphic", method_pointer_9114cac5429b5953af2cf458f2b9340b, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_provably_not_derived_from", method_pointer_5fcc1489cc4257e48c84edc0ab0f3b14, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_standard_layout", method_pointer_48fa9099141158b39cf845c17c5b2f8b, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_trivial", method_pointer_b56ee2742050552bb706c9cc3eb969b6, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_trivially_copyable", method_pointer_2af7b96f03d35ed5861c9299f9e9273a, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_virtually_derived_from", method_pointer_36a8be61d9e55060886a23ef684098ca, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("may_be_abstract", method_pointer_3977d9344b1f524fab72b31fbc12ea33, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_copy_assignment", method_pointer_bc5632064c0f5b85a01835f22e454af5, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_copy_constructor", method_pointer_2904e2bbf0575921bd7e626d3c269352, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_default_constructor", method_pointer_8674f557bdb75c53b50986065cf66fe1, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_destructor", method_pointer_fe4f0bc32dbb50efb91339196b9ee039, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_move_assignment", method_pointer_d98c653b835d568eac64b079ba57bec9, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_move_constructor", method_pointer_b23395bebecf59d0ab5ed1045212535a, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_copy_assignment", method_pointer_e8762e3623935f0885d809997c5ae028, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_copy_constructor", method_pointer_235deab2e9a25afeb9752dd1fb973e57, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_destructor", method_pointer_0f08a28aef1f5d1bb5267b1dc095b2f4, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_move_assignment", method_pointer_d42fad92cba55a43808a3ccc6384469b, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_move_constructor", method_pointer_f649cced141d558daa28543f97a4a7f9, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("null_field_offset_is_zero", method_pointer_b74f5a83c503575f942e87b2703f10c0, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("push_friend_decl", method_pointer_31cc5e6bf73253119ce586647de2ef8b, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("remove_conversion", method_pointer_669260c32cf25d3aa4537fb2b9b971eb, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_described_class_template", method_pointer_b0c4bd6213cb5e14acbb4e68d53e5996, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_implicit_move_assignment_is_deleted", method_pointer_eb5e26255af05596a0eb36f362022e33, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_implicit_move_constructor_is_deleted", method_pointer_3551f66e1cd85c6586972327e91a0d63, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_is_parsing_base_specifiers", method_pointer_2b218c2a820253c89cdadcd8b4a63f2c, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_lambda_mangling", method_pointer_30e1e2d91ef456f794119aa4c814722c, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("view_inheritance", method_pointer_67909421aa845b61b89dc88c7b9f7547, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.staticmethod("classof_kind");
    class_6d094fa53b15516db85a0d4b3b7fd665.staticmethod("merge_access");
    class_6d094fa53b15516db85a0d4b3b7fd665.staticmethod("classof");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_bases", function_group::function_53efecbee0cf50e69d70793ea43a6adb, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_constructors", function_group::function_b5c12bf5341f53df94bffe66f4725909, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_virtual_bases", function_group::function_55b6ae8fd48c5a86a92bedc9d76914ca, "");

    if(std::is_class< autowig::HeldType< class ::clang::CXXRecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXRecordDecl >, autowig::HeldType< class ::clang::RecordDecl > >();
    }

}