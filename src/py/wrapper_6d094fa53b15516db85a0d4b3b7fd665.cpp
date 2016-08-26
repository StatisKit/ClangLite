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
    enum ::clang::AccessSpecifier  (*method_pointer_7c99d954994753458381681e78c28ef0)(enum ::clang::AccessSpecifier , enum ::clang::AccessSpecifier ) = ::clang::CXXRecordDecl::MergeAccess;
    bool  (*method_pointer_2ac47697f0b852faa34344976b227c17)(class ::clang::Decl  const *) = ::clang::CXXRecordDecl::classof;
    bool  (*method_pointer_3b2f8bcb17785aeabf43db395508f3ef)(enum ::clang::Decl::Kind ) = ::clang::CXXRecordDecl::classofKind;
    void  (::clang::CXXRecordDecl::*method_pointer_d0fb09cf335c5cda9c2d573e16fe8ce2)() = &::clang::CXXRecordDecl::completeDefinition;
    bool  (::clang::CXXRecordDecl::*method_pointer_1296ce40de2c5dc989d21b20717f5c23)() const = &::clang::CXXRecordDecl::defaultedDefaultConstructorIsConstexpr;
    void  (::clang::CXXRecordDecl::*method_pointer_abeadfbb9db35f909e21254ead608ff6)(class ::clang::CXXMethodDecl  *) = &::clang::CXXRecordDecl::finishedDefaultedOrDeletedMember;
    class ::clang::CXXRecordDecl  const * (::clang::CXXRecordDecl::*method_pointer_90fe4de1547953a99c8ade952fa69557)() const = &::clang::CXXRecordDecl::getCanonicalDecl;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_772d4fcc918a55f89bbeec9db61d988c)() = &::clang::CXXRecordDecl::getCanonicalDecl;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_f1428d45d841536cb7d8aa356c2f45fb)() const = &::clang::CXXRecordDecl::getDefinition;
    class ::clang::ClassTemplateDecl  * (::clang::CXXRecordDecl::*method_pointer_c472726128655943b0d8e875b89bec7e)() const = &::clang::CXXRecordDecl::getDescribedClassTemplate;
    class ::clang::CXXDestructorDecl  * (::clang::CXXRecordDecl::*method_pointer_653c435504465d72af42238a33be49dd)() const = &::clang::CXXRecordDecl::getDestructor;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_c195081ce8035dd0991b71c45665cc19)() const = &::clang::CXXRecordDecl::getInstantiatedFromMemberClass;
    class ::clang::CXXMethodDecl  * (::clang::CXXRecordDecl::*method_pointer_5456ce0f9f795d399d86b3ef61d48f71)() const = &::clang::CXXRecordDecl::getLambdaCallOperator;
    class ::clang::Decl  * (::clang::CXXRecordDecl::*method_pointer_d0098e00b7d75b30b38c10af50d9b363)() const = &::clang::CXXRecordDecl::getLambdaContextDecl;
    unsigned int  (::clang::CXXRecordDecl::*method_pointer_cb9b7b28cfd657fe844a3843a0bb5716)() const = &::clang::CXXRecordDecl::getLambdaManglingNumber;
    class ::clang::CXXMethodDecl  * (::clang::CXXRecordDecl::*method_pointer_41a04569b7b95fa597fca8219dcf2a28)() const = &::clang::CXXRecordDecl::getLambdaStaticInvoker;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_7b93b620e376592f97508a406311ba1c)() = &::clang::CXXRecordDecl::getMostRecentDecl;
    class ::clang::CXXRecordDecl  const * (::clang::CXXRecordDecl::*method_pointer_f9ac88d432a35ddf88c296587748fedc)() const = &::clang::CXXRecordDecl::getMostRecentDecl;
    unsigned int  (::clang::CXXRecordDecl::*method_pointer_94e72eca827f55bbb28b6cccca1e8be9)() const = &::clang::CXXRecordDecl::getNumBases;
    unsigned int  (::clang::CXXRecordDecl::*method_pointer_8d0eddcc0151543197e93cbe585a3699)() const = &::clang::CXXRecordDecl::getNumVBases;
    class ::clang::CXXRecordDecl  const * (::clang::CXXRecordDecl::*method_pointer_20059467f7435f3eab127b66696764c3)() const = &::clang::CXXRecordDecl::getPreviousDecl;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_fcc86a405191592080b19177dca1c925)() = &::clang::CXXRecordDecl::getPreviousDecl;
    class ::clang::CXXRecordDecl  const * (::clang::CXXRecordDecl::*method_pointer_c66d69837198564e82317892e6af241c)() const = &::clang::CXXRecordDecl::getTemplateInstantiationPattern;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_a0cdf3f6b2b3530cad041ec8a60768f6)() = &::clang::CXXRecordDecl::getTemplateInstantiationPattern;
    bool  (::clang::CXXRecordDecl::*method_pointer_ba34d6652ec55be489f345dfec6bcf97)() const = &::clang::CXXRecordDecl::hasAnyDependentBases;
    bool  (::clang::CXXRecordDecl::*method_pointer_ba4a1fe38d2b5f749bc7524cda32380f)() const = &::clang::CXXRecordDecl::hasConstexprDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_0f6198a67b9d5d3095ace6071e1ea27e)() const = &::clang::CXXRecordDecl::hasConstexprNonCopyMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_b7a716d090ae595196de3f7b164b171d)() const = &::clang::CXXRecordDecl::hasCopyAssignmentWithConstParam;
    bool  (::clang::CXXRecordDecl::*method_pointer_c2cb444cfb66560eb72a61ffbaccc816)() const = &::clang::CXXRecordDecl::hasCopyConstructorWithConstParam;
    bool  (::clang::CXXRecordDecl::*method_pointer_7cb080594c1e5928858e992752d561d0)() const = &::clang::CXXRecordDecl::hasDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_3558e8f703015b3b9c4ebaaafca4025a)() const = &::clang::CXXRecordDecl::hasDefinition;
    bool  (::clang::CXXRecordDecl::*method_pointer_d981b80b4ab25e3d82af21c0dc3458c0)() const = &::clang::CXXRecordDecl::hasFriends;
    bool  (::clang::CXXRecordDecl::*method_pointer_aaf30f4047ee55e5b1b74ce27818873e)() const = &::clang::CXXRecordDecl::hasInClassInitializer;
    bool  (::clang::CXXRecordDecl::*method_pointer_a58f8839fa7253e1aec6fc891228464a)() const = &::clang::CXXRecordDecl::hasIrrelevantDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_987822a9711b5f6384dfd3187953b6d5)() const = &::clang::CXXRecordDecl::hasMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_748ee08686865c8889132420f318a510)() const = &::clang::CXXRecordDecl::hasMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_6effaf4000cd517f9692f052b577ff38)() const = &::clang::CXXRecordDecl::hasMutableFields;
    bool  (::clang::CXXRecordDecl::*method_pointer_af5b9c2cdc005076ab7fa3fa71ad6e90)() const = &::clang::CXXRecordDecl::hasNonLiteralTypeFieldsOrBases;
    bool  (::clang::CXXRecordDecl::*method_pointer_258b3b814eed5d259ae52249e741b801)() const = &::clang::CXXRecordDecl::hasNonTrivialCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_c61baa1de8d05ce8a1de8b4a7542ee50)() const = &::clang::CXXRecordDecl::hasNonTrivialCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_102003fba4605a7ba60fda516ed0e85f)() const = &::clang::CXXRecordDecl::hasNonTrivialDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_9c78d276653b5b05858c929d972c7b55)() const = &::clang::CXXRecordDecl::hasNonTrivialDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_6a955f29473256c09cbe00afa0743b7b)() const = &::clang::CXXRecordDecl::hasNonTrivialMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_3be2a452c6775592ab1758f63afc0470)() const = &::clang::CXXRecordDecl::hasNonTrivialMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_d023f9bf6a7156f290703da6924b080d)() const = &::clang::CXXRecordDecl::hasSimpleDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_f2ba88a4f7135311846a5190bee47aa7)() const = &::clang::CXXRecordDecl::hasSimpleMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_03547549644f5f2490c2c923b5543d5d)() const = &::clang::CXXRecordDecl::hasSimpleMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_38fe7bca7010562999e41a40455de5d6)() const = &::clang::CXXRecordDecl::hasTrivialCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_d1db9379fa92522e822098acc38f8028)() const = &::clang::CXXRecordDecl::hasTrivialCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_465eee18414a5549b51a8b3596d6f956)() const = &::clang::CXXRecordDecl::hasTrivialDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_dd1dcddc790c57d898940be96c817c38)() const = &::clang::CXXRecordDecl::hasTrivialDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_7f152ad5f9e55844a3f3a6cba943d91d)() const = &::clang::CXXRecordDecl::hasTrivialMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_c521d257e266528ea8c55c9583591dcf)() const = &::clang::CXXRecordDecl::hasTrivialMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_b39f49bf9c995d9a8577f9a151b5d445)() const = &::clang::CXXRecordDecl::hasUninitializedReferenceMember;
    bool  (::clang::CXXRecordDecl::*method_pointer_cd65fa83712e5750b701dace2acac30b)() const = &::clang::CXXRecordDecl::hasUserDeclaredConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_e033ceac3c0d5b84bf76f8c5b8bb279a)() const = &::clang::CXXRecordDecl::hasUserDeclaredCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_c1cd0d675b4e5d8ab9fcf68f8d4b0645)() const = &::clang::CXXRecordDecl::hasUserDeclaredCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_e5ae5bdd611258deaadaee476e1e4b4d)() const = &::clang::CXXRecordDecl::hasUserDeclaredDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_ef7b96ad591059bbbbe448f315580d46)() const = &::clang::CXXRecordDecl::hasUserDeclaredMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_519ec75ba13550b693789f3a6b3daa76)() const = &::clang::CXXRecordDecl::hasUserDeclaredMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_d1d37c992cc05c76bd32b36d0089674f)() const = &::clang::CXXRecordDecl::hasUserDeclaredMoveOperation;
    bool  (::clang::CXXRecordDecl::*method_pointer_0f9bcc8db9f45247b88afdbae8404f53)() const = &::clang::CXXRecordDecl::hasUserProvidedDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_0e863730f4325cd19174e1dc4e33a26a)() const = &::clang::CXXRecordDecl::hasVariantMembers;
    bool  (::clang::CXXRecordDecl::*method_pointer_db7321a5e86a5a82902b94df0894848e)() const = &::clang::CXXRecordDecl::implicitCopyAssignmentHasConstParam;
    bool  (::clang::CXXRecordDecl::*method_pointer_4fa4d9218fa1572aa91dfb98756d9fc6)() const = &::clang::CXXRecordDecl::implicitCopyConstructorHasConstParam;
    bool  (::clang::CXXRecordDecl::*method_pointer_9fa2b1f982795ede891af63acd2b8b2d)() const = &::clang::CXXRecordDecl::isAbstract;
    bool  (::clang::CXXRecordDecl::*method_pointer_00f7c42d05785852b4640dd772c731f9)() const = &::clang::CXXRecordDecl::isAggregate;
    bool  (::clang::CXXRecordDecl::*method_pointer_06dba99c0b24536b8b87f475d90e9e60)() const = &::clang::CXXRecordDecl::isAnyDestructorNoReturn;
    bool  (::clang::CXXRecordDecl::*method_pointer_26a1255806975e938ebd124c452d5b12)() const = &::clang::CXXRecordDecl::isCLike;
    bool  (::clang::CXXRecordDecl::*method_pointer_2c16e5ab155a5a1081fbe6e3ea911fc3)(class ::clang::DeclContext  const *) const = &::clang::CXXRecordDecl::isCurrentInstantiation;
    bool  (::clang::CXXRecordDecl::*method_pointer_a12c63dd48415f4b8ccd417f94da16bf)() const = &::clang::CXXRecordDecl::isDependentLambda;
    bool  (::clang::CXXRecordDecl::*method_pointer_bb21291424395140b5b30adaccf8690d)(class ::clang::CXXRecordDecl  const *) const = &::clang::CXXRecordDecl::isDerivedFrom;
    bool  (::clang::CXXRecordDecl::*method_pointer_cf3ff4a62bad587bba9266035a663490)() const = &::clang::CXXRecordDecl::isDynamicClass;
    bool  (::clang::CXXRecordDecl::*method_pointer_70629402cb2c5f2cacb34a62424e942f)() const = &::clang::CXXRecordDecl::isEmpty;
    bool  (::clang::CXXRecordDecl::*method_pointer_e56192529efe5210af309424f6bc9507)() const = &::clang::CXXRecordDecl::isGenericLambda;
    bool  (::clang::CXXRecordDecl::*method_pointer_7245eb388e675bdeb015aa68ceb44c6e)() const = &::clang::CXXRecordDecl::isLambda;
    bool  (::clang::CXXRecordDecl::*method_pointer_198d0fbde4df5d0c8bf5f1aa0bd38fce)() const = &::clang::CXXRecordDecl::isLiteral;
    class ::clang::FunctionDecl  const * (::clang::CXXRecordDecl::*method_pointer_305aff7de1ea54f7a187825d1a626b1b)() const = &::clang::CXXRecordDecl::isLocalClass;
    class ::clang::FunctionDecl  * (::clang::CXXRecordDecl::*method_pointer_684bd01687685289aa7e662c96514642)() = &::clang::CXXRecordDecl::isLocalClass;
    bool  (::clang::CXXRecordDecl::*method_pointer_e527071feb965f4dbbb672d0275c6acc)() const = &::clang::CXXRecordDecl::isPOD;
    bool  (::clang::CXXRecordDecl::*method_pointer_3f71a85f2b3d50b28aed8d05f2dae67b)() const = &::clang::CXXRecordDecl::isParsingBaseSpecifiers;
    bool  (::clang::CXXRecordDecl::*method_pointer_e24d394f1fc35789a606252193b0a1f7)() const = &::clang::CXXRecordDecl::isPolymorphic;
    bool  (::clang::CXXRecordDecl::*method_pointer_24127b0457bd5c70ba72541d53b84db0)(class ::clang::CXXRecordDecl  const *) const = &::clang::CXXRecordDecl::isProvablyNotDerivedFrom;
    bool  (::clang::CXXRecordDecl::*method_pointer_643fc11937e85e33814ad5a24d92944e)() const = &::clang::CXXRecordDecl::isStandardLayout;
    bool  (::clang::CXXRecordDecl::*method_pointer_bd3e0bbe7cd85deaa556ee1d56d63e6e)() const = &::clang::CXXRecordDecl::isTrivial;
    bool  (::clang::CXXRecordDecl::*method_pointer_7929b9a0c66d52f1988e9a542bde6daf)() const = &::clang::CXXRecordDecl::isTriviallyCopyable;
    bool  (::clang::CXXRecordDecl::*method_pointer_d5133e4c065b5ff086877cc243dcacb6)(class ::clang::CXXRecordDecl  const *) const = &::clang::CXXRecordDecl::isVirtuallyDerivedFrom;
    bool  (::clang::CXXRecordDecl::*method_pointer_11c9377ef40e5323b9e49f3178d4ced1)() const = &::clang::CXXRecordDecl::mayBeAbstract;
    bool  (::clang::CXXRecordDecl::*method_pointer_b04aa8e014b55d10b6c2e7447dd12cb2)() const = &::clang::CXXRecordDecl::needsImplicitCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_fb83440305ee5dc1b02c10c63da9627f)() const = &::clang::CXXRecordDecl::needsImplicitCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_875ed4559c3c5f51ba8c7152eb45d23f)() const = &::clang::CXXRecordDecl::needsImplicitDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_fb67f95c4367583eaa0bf8c1f1dfd74f)() const = &::clang::CXXRecordDecl::needsImplicitDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_84f617cdef0b55e69f4e12a0cbff2b9c)() const = &::clang::CXXRecordDecl::needsImplicitMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_fd046a6481415d629dadfcdcb91cf95d)() const = &::clang::CXXRecordDecl::needsImplicitMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_e744768f82ed5d6aba588bbfa66ba18c)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_776f83a313cc5779b8cbbd7367a14727)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_65b76316c79e51dd95beac22623b5969)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_6379f91845cd5c0f8a1be83734041a66)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_6721908baf2256728f80026d2b07d062)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_003b084b01bf52e3a27f416d14fa9b95)() const = &::clang::CXXRecordDecl::nullFieldOffsetIsZero;
    void  (::clang::CXXRecordDecl::*method_pointer_83f9f276749751b2bfddd207719a40e3)(class ::clang::FriendDecl  *) = &::clang::CXXRecordDecl::pushFriendDecl;
    void  (::clang::CXXRecordDecl::*method_pointer_738c9702fd81570ab6bd36c701fc0a0d)(class ::clang::NamedDecl  const *) = &::clang::CXXRecordDecl::removeConversion;
    void  (::clang::CXXRecordDecl::*method_pointer_3a02190525745357922401671489b528)(class ::clang::ClassTemplateDecl  *) = &::clang::CXXRecordDecl::setDescribedClassTemplate;
    void  (::clang::CXXRecordDecl::*method_pointer_8524278e2fad581fbde620f16c83ec69)() = &::clang::CXXRecordDecl::setImplicitMoveAssignmentIsDeleted;
    void  (::clang::CXXRecordDecl::*method_pointer_8a89b73d553f5010bb142352b1b6f1b6)() = &::clang::CXXRecordDecl::setImplicitMoveConstructorIsDeleted;
    void  (::clang::CXXRecordDecl::*method_pointer_852ef04833105f6eb0d90485c6fbdd34)() = &::clang::CXXRecordDecl::setIsParsingBaseSpecifiers;
    void  (::clang::CXXRecordDecl::*method_pointer_86c1ba3e1a70585081c01cc03bbc5d4b)(unsigned int , class ::clang::Decl  *) = &::clang::CXXRecordDecl::setLambdaMangling;
    void  (::clang::CXXRecordDecl::*method_pointer_7e9e0bc26bb05b6f9559da6e0f866313)(class ::clang::ASTContext  &) const = &::clang::CXXRecordDecl::viewInheritance;
    struct function_group
    {
        static class ::boost::python::list  function_ab5654211b7352a0932d7b4c02a7012b(class ::clang::CXXRecordDecl  & parameter_0)
        { return ::clanglite::get_bases(parameter_0); }
        static class ::boost::python::list  function_48cd95898b55580eab38de340c35f092(class ::clang::CXXRecordDecl  & parameter_0)
        { return ::clanglite::get_constructors(parameter_0); }
        static class ::boost::python::list  function_009b808ba3c65771b2222ebd4efb4e0a(class ::clang::CXXRecordDecl  & parameter_0)
        { return ::clanglite::get_virtual_bases(parameter_0); }
    };
    boost::python::class_< class ::clang::CXXRecordDecl, autowig::HeldType< class ::clang::CXXRecordDecl >, boost::python::bases< class ::clang::RecordDecl >, boost::noncopyable > class_6d094fa53b15516db85a0d4b3b7fd665("CXXRecordDecl", "", boost::python::no_init);
    class_6d094fa53b15516db85a0d4b3b7fd665.def("merge_access", method_pointer_7c99d954994753458381681e78c28ef0, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("classof", method_pointer_2ac47697f0b852faa34344976b227c17, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("classof_kind", method_pointer_3b2f8bcb17785aeabf43db395508f3ef, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("complete_definition", method_pointer_d0fb09cf335c5cda9c2d573e16fe8ce2, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("defaulted_default_constructor_is_constexpr", method_pointer_1296ce40de2c5dc989d21b20717f5c23, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("finished_defaulted_or_deleted_member", method_pointer_abeadfbb9db35f909e21254ead608ff6, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_canonical_decl", method_pointer_90fe4de1547953a99c8ade952fa69557, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_canonical_decl", method_pointer_772d4fcc918a55f89bbeec9db61d988c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_definition", method_pointer_f1428d45d841536cb7d8aa356c2f45fb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_described_class_template", method_pointer_c472726128655943b0d8e875b89bec7e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_destructor", method_pointer_653c435504465d72af42238a33be49dd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_instantiated_from_member_class", method_pointer_c195081ce8035dd0991b71c45665cc19, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_lambda_call_operator", method_pointer_5456ce0f9f795d399d86b3ef61d48f71, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_lambda_context_decl", method_pointer_d0098e00b7d75b30b38c10af50d9b363, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_lambda_mangling_number", method_pointer_cb9b7b28cfd657fe844a3843a0bb5716, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_lambda_static_invoker", method_pointer_41a04569b7b95fa597fca8219dcf2a28, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_most_recent_decl", method_pointer_7b93b620e376592f97508a406311ba1c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_most_recent_decl", method_pointer_f9ac88d432a35ddf88c296587748fedc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_num_bases", method_pointer_94e72eca827f55bbb28b6cccca1e8be9, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_num_v_bases", method_pointer_8d0eddcc0151543197e93cbe585a3699, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_previous_decl", method_pointer_20059467f7435f3eab127b66696764c3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_previous_decl", method_pointer_fcc86a405191592080b19177dca1c925, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_template_instantiation_pattern", method_pointer_c66d69837198564e82317892e6af241c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_template_instantiation_pattern", method_pointer_a0cdf3f6b2b3530cad041ec8a60768f6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_any_dependent_bases", method_pointer_ba34d6652ec55be489f345dfec6bcf97, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_constexpr_default_constructor", method_pointer_ba4a1fe38d2b5f749bc7524cda32380f, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_constexpr_non_copy_move_constructor", method_pointer_0f6198a67b9d5d3095ace6071e1ea27e, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_copy_assignment_with_const_param", method_pointer_b7a716d090ae595196de3f7b164b171d, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_copy_constructor_with_const_param", method_pointer_c2cb444cfb66560eb72a61ffbaccc816, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_default_constructor", method_pointer_7cb080594c1e5928858e992752d561d0, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_definition", method_pointer_3558e8f703015b3b9c4ebaaafca4025a, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_friends", method_pointer_d981b80b4ab25e3d82af21c0dc3458c0, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_in_class_initializer", method_pointer_aaf30f4047ee55e5b1b74ce27818873e, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_irrelevant_destructor", method_pointer_a58f8839fa7253e1aec6fc891228464a, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_move_assignment", method_pointer_987822a9711b5f6384dfd3187953b6d5, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_move_constructor", method_pointer_748ee08686865c8889132420f318a510, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_mutable_fields", method_pointer_6effaf4000cd517f9692f052b577ff38, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_literal_type_fields_or_bases", method_pointer_af5b9c2cdc005076ab7fa3fa71ad6e90, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_copy_assignment", method_pointer_258b3b814eed5d259ae52249e741b801, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_copy_constructor", method_pointer_c61baa1de8d05ce8a1de8b4a7542ee50, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_default_constructor", method_pointer_102003fba4605a7ba60fda516ed0e85f, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_destructor", method_pointer_9c78d276653b5b05858c929d972c7b55, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_move_assignment", method_pointer_6a955f29473256c09cbe00afa0743b7b, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_move_constructor", method_pointer_3be2a452c6775592ab1758f63afc0470, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_simple_destructor", method_pointer_d023f9bf6a7156f290703da6924b080d, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_simple_move_assignment", method_pointer_f2ba88a4f7135311846a5190bee47aa7, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_simple_move_constructor", method_pointer_03547549644f5f2490c2c923b5543d5d, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_copy_assignment", method_pointer_38fe7bca7010562999e41a40455de5d6, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_copy_constructor", method_pointer_d1db9379fa92522e822098acc38f8028, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_default_constructor", method_pointer_465eee18414a5549b51a8b3596d6f956, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_destructor", method_pointer_dd1dcddc790c57d898940be96c817c38, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_move_assignment", method_pointer_7f152ad5f9e55844a3f3a6cba943d91d, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_move_constructor", method_pointer_c521d257e266528ea8c55c9583591dcf, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_uninitialized_reference_member", method_pointer_b39f49bf9c995d9a8577f9a151b5d445, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_constructor", method_pointer_cd65fa83712e5750b701dace2acac30b, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_copy_assignment", method_pointer_e033ceac3c0d5b84bf76f8c5b8bb279a, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_copy_constructor", method_pointer_c1cd0d675b4e5d8ab9fcf68f8d4b0645, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_destructor", method_pointer_e5ae5bdd611258deaadaee476e1e4b4d, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_move_assignment", method_pointer_ef7b96ad591059bbbbe448f315580d46, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_move_constructor", method_pointer_519ec75ba13550b693789f3a6b3daa76, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_move_operation", method_pointer_d1d37c992cc05c76bd32b36d0089674f, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_provided_default_constructor", method_pointer_0f9bcc8db9f45247b88afdbae8404f53, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_variant_members", method_pointer_0e863730f4325cd19174e1dc4e33a26a, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("implicit_copy_assignment_has_const_param", method_pointer_db7321a5e86a5a82902b94df0894848e, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("implicit_copy_constructor_has_const_param", method_pointer_4fa4d9218fa1572aa91dfb98756d9fc6, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_abstract", method_pointer_9fa2b1f982795ede891af63acd2b8b2d, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_aggregate", method_pointer_00f7c42d05785852b4640dd772c731f9, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_any_destructor_no_return", method_pointer_06dba99c0b24536b8b87f475d90e9e60, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_c_like", method_pointer_26a1255806975e938ebd124c452d5b12, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_current_instantiation", method_pointer_2c16e5ab155a5a1081fbe6e3ea911fc3, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_dependent_lambda", method_pointer_a12c63dd48415f4b8ccd417f94da16bf, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_derived_from", method_pointer_bb21291424395140b5b30adaccf8690d, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_dynamic_class", method_pointer_cf3ff4a62bad587bba9266035a663490, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_empty", method_pointer_70629402cb2c5f2cacb34a62424e942f, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_generic_lambda", method_pointer_e56192529efe5210af309424f6bc9507, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_lambda", method_pointer_7245eb388e675bdeb015aa68ceb44c6e, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_literal", method_pointer_198d0fbde4df5d0c8bf5f1aa0bd38fce, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_local_class", method_pointer_305aff7de1ea54f7a187825d1a626b1b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_local_class", method_pointer_684bd01687685289aa7e662c96514642, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_pod", method_pointer_e527071feb965f4dbbb672d0275c6acc, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_parsing_base_specifiers", method_pointer_3f71a85f2b3d50b28aed8d05f2dae67b, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_polymorphic", method_pointer_e24d394f1fc35789a606252193b0a1f7, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_provably_not_derived_from", method_pointer_24127b0457bd5c70ba72541d53b84db0, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_standard_layout", method_pointer_643fc11937e85e33814ad5a24d92944e, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_trivial", method_pointer_bd3e0bbe7cd85deaa556ee1d56d63e6e, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_trivially_copyable", method_pointer_7929b9a0c66d52f1988e9a542bde6daf, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_virtually_derived_from", method_pointer_d5133e4c065b5ff086877cc243dcacb6, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("may_be_abstract", method_pointer_11c9377ef40e5323b9e49f3178d4ced1, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_copy_assignment", method_pointer_b04aa8e014b55d10b6c2e7447dd12cb2, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_copy_constructor", method_pointer_fb83440305ee5dc1b02c10c63da9627f, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_default_constructor", method_pointer_875ed4559c3c5f51ba8c7152eb45d23f, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_destructor", method_pointer_fb67f95c4367583eaa0bf8c1f1dfd74f, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_move_assignment", method_pointer_84f617cdef0b55e69f4e12a0cbff2b9c, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_move_constructor", method_pointer_fd046a6481415d629dadfcdcb91cf95d, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_copy_assignment", method_pointer_e744768f82ed5d6aba588bbfa66ba18c, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_copy_constructor", method_pointer_776f83a313cc5779b8cbbd7367a14727, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_destructor", method_pointer_65b76316c79e51dd95beac22623b5969, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_move_assignment", method_pointer_6379f91845cd5c0f8a1be83734041a66, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_move_constructor", method_pointer_6721908baf2256728f80026d2b07d062, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("null_field_offset_is_zero", method_pointer_003b084b01bf52e3a27f416d14fa9b95, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("push_friend_decl", method_pointer_83f9f276749751b2bfddd207719a40e3, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("remove_conversion", method_pointer_738c9702fd81570ab6bd36c701fc0a0d, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_described_class_template", method_pointer_3a02190525745357922401671489b528, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_implicit_move_assignment_is_deleted", method_pointer_8524278e2fad581fbde620f16c83ec69, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_implicit_move_constructor_is_deleted", method_pointer_8a89b73d553f5010bb142352b1b6f1b6, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_is_parsing_base_specifiers", method_pointer_852ef04833105f6eb0d90485c6fbdd34, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_lambda_mangling", method_pointer_86c1ba3e1a70585081c01cc03bbc5d4b, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("view_inheritance", method_pointer_7e9e0bc26bb05b6f9559da6e0f866313, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.staticmethod("classof_kind");
    class_6d094fa53b15516db85a0d4b3b7fd665.staticmethod("merge_access");
    class_6d094fa53b15516db85a0d4b3b7fd665.staticmethod("classof");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_bases", function_group::function_ab5654211b7352a0932d7b4c02a7012b, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_constructors", function_group::function_48cd95898b55580eab38de340c35f092, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_virtual_bases", function_group::function_009b808ba3c65771b2222ebd4efb4e0a, "");

    if(std::is_class< autowig::HeldType< class ::clang::CXXRecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXRecordDecl >, autowig::HeldType< class ::clang::RecordDecl > >();
    }

}