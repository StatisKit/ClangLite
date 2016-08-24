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
    enum ::clang::AccessSpecifier  (*method_pointer_ad97b68f9e475d3ca056e992ab7828a1)(enum ::clang::AccessSpecifier , enum ::clang::AccessSpecifier ) = ::clang::CXXRecordDecl::MergeAccess;
    bool  (*method_pointer_c43332be40ad510a803cd7058fceb9d9)(class ::clang::Decl  const *) = ::clang::CXXRecordDecl::classof;
    bool  (*method_pointer_6b5bc10fd9a6543090a9dc87a90203a1)(enum ::clang::Decl::Kind ) = ::clang::CXXRecordDecl::classofKind;
    void  (::clang::CXXRecordDecl::*method_pointer_cea1db279ef55f6c9da17e2e3b985fb4)() = &::clang::CXXRecordDecl::completeDefinition;
    bool  (::clang::CXXRecordDecl::*method_pointer_991f926132bd5967aefe0f63b782c45b)() const = &::clang::CXXRecordDecl::defaultedDefaultConstructorIsConstexpr;
    void  (::clang::CXXRecordDecl::*method_pointer_2766314619ee5293be7cbd10dab90fd0)(class ::clang::CXXMethodDecl  *) = &::clang::CXXRecordDecl::finishedDefaultedOrDeletedMember;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_4bfa448a7eb15d70ab8686c82771abf2)() = &::clang::CXXRecordDecl::getCanonicalDecl;
    class ::clang::CXXRecordDecl  const * (::clang::CXXRecordDecl::*method_pointer_64f60ef5720b59919c86e7de7181c257)() const = &::clang::CXXRecordDecl::getCanonicalDecl;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_f458f82598715aeb93752fddc114e729)() const = &::clang::CXXRecordDecl::getDefinition;
    class ::clang::ClassTemplateDecl  * (::clang::CXXRecordDecl::*method_pointer_6ff33479b2a95d5b8db07782f355da9e)() const = &::clang::CXXRecordDecl::getDescribedClassTemplate;
    class ::clang::CXXDestructorDecl  * (::clang::CXXRecordDecl::*method_pointer_3b4f491f7d5b5e189cbf281d635d2eac)() const = &::clang::CXXRecordDecl::getDestructor;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_61f57978e4565e33a03523e0bd149e04)() const = &::clang::CXXRecordDecl::getInstantiatedFromMemberClass;
    class ::clang::CXXMethodDecl  * (::clang::CXXRecordDecl::*method_pointer_119d38391afa5ac9b1a095b8a5a507b2)() const = &::clang::CXXRecordDecl::getLambdaCallOperator;
    class ::clang::Decl  * (::clang::CXXRecordDecl::*method_pointer_138f50f41b255abbba948e8f9a6dee4a)() const = &::clang::CXXRecordDecl::getLambdaContextDecl;
    unsigned int  (::clang::CXXRecordDecl::*method_pointer_0e12a25cfb9958fcad3ad068a9fc2e68)() const = &::clang::CXXRecordDecl::getLambdaManglingNumber;
    class ::clang::CXXMethodDecl  * (::clang::CXXRecordDecl::*method_pointer_5296916f3bd252baae5e13208abe40c1)() const = &::clang::CXXRecordDecl::getLambdaStaticInvoker;
    class ::clang::CXXRecordDecl  const * (::clang::CXXRecordDecl::*method_pointer_5125aa40c2f553868ed577bec5e8e588)() const = &::clang::CXXRecordDecl::getMostRecentDecl;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_05e5402675ff5d09b00bed502bfea1ba)() = &::clang::CXXRecordDecl::getMostRecentDecl;
    unsigned int  (::clang::CXXRecordDecl::*method_pointer_83517ab769c55c71b58a7c0f5fb1f375)() const = &::clang::CXXRecordDecl::getNumBases;
    unsigned int  (::clang::CXXRecordDecl::*method_pointer_67989b8350c25035b8e00f4b3a3df4ee)() const = &::clang::CXXRecordDecl::getNumVBases;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_7d00a7c3b9e65ef0baafa8c0b281a1ea)() = &::clang::CXXRecordDecl::getPreviousDecl;
    class ::clang::CXXRecordDecl  const * (::clang::CXXRecordDecl::*method_pointer_8d4e497006c055749a2bcd148023d380)() const = &::clang::CXXRecordDecl::getPreviousDecl;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_f12be4b7270d5d928350b9db7e303e01)() = &::clang::CXXRecordDecl::getTemplateInstantiationPattern;
    class ::clang::CXXRecordDecl  const * (::clang::CXXRecordDecl::*method_pointer_64b33ee7e60951a5b646c75c5177e1bb)() const = &::clang::CXXRecordDecl::getTemplateInstantiationPattern;
    bool  (::clang::CXXRecordDecl::*method_pointer_3b7579cc59905344aaa85ef56e560374)() const = &::clang::CXXRecordDecl::hasAnyDependentBases;
    bool  (::clang::CXXRecordDecl::*method_pointer_648317af27ab5a40be0cda02ad1d34de)() const = &::clang::CXXRecordDecl::hasConstexprDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_45f8e554419c59a899c1fc5a4ddae048)() const = &::clang::CXXRecordDecl::hasConstexprNonCopyMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_ee67d471c8f25ca398bab697e86fc270)() const = &::clang::CXXRecordDecl::hasCopyAssignmentWithConstParam;
    bool  (::clang::CXXRecordDecl::*method_pointer_51fe6c241dca5f2498a10ad718af0e14)() const = &::clang::CXXRecordDecl::hasCopyConstructorWithConstParam;
    bool  (::clang::CXXRecordDecl::*method_pointer_15bd47b98cf7524c807d6141cd8a2708)() const = &::clang::CXXRecordDecl::hasDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_b14e02a3cf955941875310e4460ef5c6)() const = &::clang::CXXRecordDecl::hasDefinition;
    bool  (::clang::CXXRecordDecl::*method_pointer_0fb9a03d8abf53aea07710c9aa03f7bd)() const = &::clang::CXXRecordDecl::hasFriends;
    bool  (::clang::CXXRecordDecl::*method_pointer_05ad2587e30353a8b6454e9e5651bbf9)() const = &::clang::CXXRecordDecl::hasInClassInitializer;
    bool  (::clang::CXXRecordDecl::*method_pointer_46f1d14efcec546e8c858b40e5c91dbf)() const = &::clang::CXXRecordDecl::hasIrrelevantDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_b6ecd2a976e15fd89d0352fbb4bb4f2b)() const = &::clang::CXXRecordDecl::hasMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_473668b2d0fe5e1dbb78d7622e263579)() const = &::clang::CXXRecordDecl::hasMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_5bb9116ba33d5701abab54c4f6634e43)() const = &::clang::CXXRecordDecl::hasMutableFields;
    bool  (::clang::CXXRecordDecl::*method_pointer_c8abeed31deb5088aeb2ea49327c96a8)() const = &::clang::CXXRecordDecl::hasNonLiteralTypeFieldsOrBases;
    bool  (::clang::CXXRecordDecl::*method_pointer_e6fc3f23e0425602baa2b80e5385cb61)() const = &::clang::CXXRecordDecl::hasNonTrivialCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_da531b0b163d5a35b7675d5a7159d791)() const = &::clang::CXXRecordDecl::hasNonTrivialCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_8b14adf07ebc562aa0dd217f5bb118f5)() const = &::clang::CXXRecordDecl::hasNonTrivialDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_3a3afe763bd35a1b9d64c7026d3213a8)() const = &::clang::CXXRecordDecl::hasNonTrivialDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_a426e2c3b9235171bdea1a68a7c6b1ce)() const = &::clang::CXXRecordDecl::hasNonTrivialMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_f4447ea462815ccf8074e3453d6cb107)() const = &::clang::CXXRecordDecl::hasNonTrivialMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_fdbccb426704571a9e0fcc27279e2cb9)() const = &::clang::CXXRecordDecl::hasSimpleDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_2c56069ce7f35c71a57658484f825b67)() const = &::clang::CXXRecordDecl::hasSimpleMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_d93af337a1ac5ebdbab719ea3d87a5f2)() const = &::clang::CXXRecordDecl::hasSimpleMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_d3c3bf73b61c5d32bcc129b233e04b46)() const = &::clang::CXXRecordDecl::hasTrivialCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_35ee549c448359c886d415e0ce08e674)() const = &::clang::CXXRecordDecl::hasTrivialCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_d4839b8dcb585558975ab16fd60cd816)() const = &::clang::CXXRecordDecl::hasTrivialDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_2459a9f199475860acbfb0e14d21654a)() const = &::clang::CXXRecordDecl::hasTrivialDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_d27df357b4735bb1ac30caca56f5ab6c)() const = &::clang::CXXRecordDecl::hasTrivialMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_733d3df2f4405f8386d4c68dd5534ebf)() const = &::clang::CXXRecordDecl::hasTrivialMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_9fefc9e9e1c55785a4e1e600a1a71ad0)() const = &::clang::CXXRecordDecl::hasUninitializedReferenceMember;
    bool  (::clang::CXXRecordDecl::*method_pointer_ed358df943575542a2c1dd8ab3d7f4ba)() const = &::clang::CXXRecordDecl::hasUserDeclaredConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_4ca7388370e55ababcf87cf8f983688c)() const = &::clang::CXXRecordDecl::hasUserDeclaredCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_e3031489b9b7592884fbdc822dfb4d5a)() const = &::clang::CXXRecordDecl::hasUserDeclaredCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_e4a30ad240545eabb71e9bda6a3dcc4a)() const = &::clang::CXXRecordDecl::hasUserDeclaredDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_da28cbab180357678ffe1a7013cd96ee)() const = &::clang::CXXRecordDecl::hasUserDeclaredMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_b273decbe62c52bc8a95535d22278822)() const = &::clang::CXXRecordDecl::hasUserDeclaredMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_b1cf66a74f5252248a89a9bc559dc066)() const = &::clang::CXXRecordDecl::hasUserDeclaredMoveOperation;
    bool  (::clang::CXXRecordDecl::*method_pointer_92ad1769ed2e5d35a49f6142ca76e927)() const = &::clang::CXXRecordDecl::hasUserProvidedDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_41f90cc8c964538b8e1581cc72ea0294)() const = &::clang::CXXRecordDecl::hasVariantMembers;
    bool  (::clang::CXXRecordDecl::*method_pointer_dcdeaec959095eecb9cafaa26761db02)() const = &::clang::CXXRecordDecl::implicitCopyAssignmentHasConstParam;
    bool  (::clang::CXXRecordDecl::*method_pointer_9dc4341f6d7855ac996a58b9cbc3f23b)() const = &::clang::CXXRecordDecl::implicitCopyConstructorHasConstParam;
    bool  (::clang::CXXRecordDecl::*method_pointer_a3a0f67b45b857db8028d5e03639b014)() const = &::clang::CXXRecordDecl::isAbstract;
    bool  (::clang::CXXRecordDecl::*method_pointer_47e00487ba395da081b458b5d749638a)() const = &::clang::CXXRecordDecl::isAggregate;
    bool  (::clang::CXXRecordDecl::*method_pointer_14eb0073e4ae5b588edb2a0da7865f9d)() const = &::clang::CXXRecordDecl::isAnyDestructorNoReturn;
    bool  (::clang::CXXRecordDecl::*method_pointer_100cf4802a295311938e8010b28134b6)() const = &::clang::CXXRecordDecl::isCLike;
    bool  (::clang::CXXRecordDecl::*method_pointer_be5fadc1906f563187625a280569abb1)(class ::clang::DeclContext  const *) const = &::clang::CXXRecordDecl::isCurrentInstantiation;
    bool  (::clang::CXXRecordDecl::*method_pointer_91127bc65b5359949042d0da6d05028d)() const = &::clang::CXXRecordDecl::isDependentLambda;
    bool  (::clang::CXXRecordDecl::*method_pointer_e5f78f07b4065d02a2c40ca2e291ff68)(class ::clang::CXXRecordDecl  const *) const = &::clang::CXXRecordDecl::isDerivedFrom;
    bool  (::clang::CXXRecordDecl::*method_pointer_ff7c5f333bad5443af867cdf6b29268c)() const = &::clang::CXXRecordDecl::isDynamicClass;
    bool  (::clang::CXXRecordDecl::*method_pointer_b5bfa3b048185555974232c4ee4c9527)() const = &::clang::CXXRecordDecl::isEmpty;
    bool  (::clang::CXXRecordDecl::*method_pointer_ba842802993252f28415d91251cd1800)() const = &::clang::CXXRecordDecl::isGenericLambda;
    bool  (::clang::CXXRecordDecl::*method_pointer_c4c441a194385cff8ec0c7e4546e2f82)() const = &::clang::CXXRecordDecl::isLambda;
    bool  (::clang::CXXRecordDecl::*method_pointer_b86e16590194589aaa32a5461c3890f1)() const = &::clang::CXXRecordDecl::isLiteral;
    class ::clang::FunctionDecl  const * (::clang::CXXRecordDecl::*method_pointer_5337a175b8395fc0bcc372cf7d0d1c22)() const = &::clang::CXXRecordDecl::isLocalClass;
    class ::clang::FunctionDecl  * (::clang::CXXRecordDecl::*method_pointer_9bb4759b79e65031a1d9ca2c6e9f0f83)() = &::clang::CXXRecordDecl::isLocalClass;
    bool  (::clang::CXXRecordDecl::*method_pointer_d4e4c35a88da541187bca688bb0f5045)() const = &::clang::CXXRecordDecl::isPOD;
    bool  (::clang::CXXRecordDecl::*method_pointer_a838f0014ec45cf4abaaea229621fe5f)() const = &::clang::CXXRecordDecl::isParsingBaseSpecifiers;
    bool  (::clang::CXXRecordDecl::*method_pointer_5d2ac7b3cf865fbb94645cf66af1e435)() const = &::clang::CXXRecordDecl::isPolymorphic;
    bool  (::clang::CXXRecordDecl::*method_pointer_47c5cc478b645c999a664dae61d799c1)(class ::clang::CXXRecordDecl  const *) const = &::clang::CXXRecordDecl::isProvablyNotDerivedFrom;
    bool  (::clang::CXXRecordDecl::*method_pointer_c3c00f135de355ef902a5c09633bc248)() const = &::clang::CXXRecordDecl::isStandardLayout;
    bool  (::clang::CXXRecordDecl::*method_pointer_9d15500a28f051f89ea58deba79e1a52)() const = &::clang::CXXRecordDecl::isTrivial;
    bool  (::clang::CXXRecordDecl::*method_pointer_72a945b9c8c55f009fae6beb11bd086c)() const = &::clang::CXXRecordDecl::isTriviallyCopyable;
    bool  (::clang::CXXRecordDecl::*method_pointer_04ef1c4ba6075945bea3a47cf3254c2c)(class ::clang::CXXRecordDecl  const *) const = &::clang::CXXRecordDecl::isVirtuallyDerivedFrom;
    bool  (::clang::CXXRecordDecl::*method_pointer_8e592c2ab5f05b5e97aea05681db3ee9)() const = &::clang::CXXRecordDecl::mayBeAbstract;
    bool  (::clang::CXXRecordDecl::*method_pointer_672ef9e6f0a9578d9eb9a632eba63418)() const = &::clang::CXXRecordDecl::needsImplicitCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_7295443df9d45bb8b92e1b47a0210925)() const = &::clang::CXXRecordDecl::needsImplicitCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_490abdbb0e1254cb9897177a2f47c92b)() const = &::clang::CXXRecordDecl::needsImplicitDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_301892cc147d5652be365f8cb541897a)() const = &::clang::CXXRecordDecl::needsImplicitDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_d9af683a6bbb597d94f614ce0c4dfc5d)() const = &::clang::CXXRecordDecl::needsImplicitMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_a9f23a32b36e5fc29201e70475cb36d1)() const = &::clang::CXXRecordDecl::needsImplicitMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_beb306d2d84650b0a4753306f5aac940)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_5114a73922cb598886c79fba9474d389)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_7de7a384cf575fd7af2e880523b30cd6)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_bd7c3157ea035d249be8170dbc30f7f4)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_3431ddde92d75fc6969a6a22388d16fb)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_cb55446e37d25970afef4012d8bc4251)() const = &::clang::CXXRecordDecl::nullFieldOffsetIsZero;
    void  (::clang::CXXRecordDecl::*method_pointer_09620bb71bb95bc29dc370daa1fa103b)(class ::clang::FriendDecl  *) = &::clang::CXXRecordDecl::pushFriendDecl;
    void  (::clang::CXXRecordDecl::*method_pointer_3e5a55ca987e536f9966e9c31e981e04)(class ::clang::NamedDecl  const *) = &::clang::CXXRecordDecl::removeConversion;
    void  (::clang::CXXRecordDecl::*method_pointer_c19b4c4c04d755f1a17c2bdfd66ac26f)(class ::clang::ClassTemplateDecl  *) = &::clang::CXXRecordDecl::setDescribedClassTemplate;
    void  (::clang::CXXRecordDecl::*method_pointer_c913fb02b31e50b680913857b99efb35)() = &::clang::CXXRecordDecl::setImplicitMoveAssignmentIsDeleted;
    void  (::clang::CXXRecordDecl::*method_pointer_a041a23169695e1693587fb76b136cbe)() = &::clang::CXXRecordDecl::setImplicitMoveConstructorIsDeleted;
    void  (::clang::CXXRecordDecl::*method_pointer_f7f60d36f9dc5f4f90f09241bf854fed)() = &::clang::CXXRecordDecl::setIsParsingBaseSpecifiers;
    void  (::clang::CXXRecordDecl::*method_pointer_618f45c6210557dead9b80524316d083)(unsigned int , class ::clang::Decl  *) = &::clang::CXXRecordDecl::setLambdaMangling;
    void  (::clang::CXXRecordDecl::*method_pointer_92268bb66f405c8bab482e998e6e0066)(class ::clang::ASTContext  &) const = &::clang::CXXRecordDecl::viewInheritance;
    struct function_group
    {
        static class ::boost::python::list  function_c8eecfc3046a59f58ed01f85e8ca43e2(class ::clang::CXXRecordDecl  & parameter_0)
        { return ::clanglite::get_bases(parameter_0); }
        static class ::boost::python::list  function_7095b5c033a057dc86048c504f3f4f47(class ::clang::CXXRecordDecl  & parameter_0)
        { return ::clanglite::get_constructors(parameter_0); }
        static class ::boost::python::list  function_451dbe236266532aa74e9164ba528c10(class ::clang::CXXRecordDecl  & parameter_0)
        { return ::clanglite::get_virtual_bases(parameter_0); }
    };
    boost::python::class_< class ::clang::CXXRecordDecl, autowig::HeldType< class ::clang::CXXRecordDecl >, boost::python::bases< class ::clang::RecordDecl >, boost::noncopyable > class_6d094fa53b15516db85a0d4b3b7fd665("CXXRecordDecl", "", boost::python::no_init);
    class_6d094fa53b15516db85a0d4b3b7fd665.def("merge_access", method_pointer_ad97b68f9e475d3ca056e992ab7828a1, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("classof", method_pointer_c43332be40ad510a803cd7058fceb9d9, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("classof_kind", method_pointer_6b5bc10fd9a6543090a9dc87a90203a1, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("complete_definition", method_pointer_cea1db279ef55f6c9da17e2e3b985fb4, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("defaulted_default_constructor_is_constexpr", method_pointer_991f926132bd5967aefe0f63b782c45b, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("finished_defaulted_or_deleted_member", method_pointer_2766314619ee5293be7cbd10dab90fd0, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_canonical_decl", method_pointer_4bfa448a7eb15d70ab8686c82771abf2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_canonical_decl", method_pointer_64f60ef5720b59919c86e7de7181c257, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_definition", method_pointer_f458f82598715aeb93752fddc114e729, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_described_class_template", method_pointer_6ff33479b2a95d5b8db07782f355da9e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_destructor", method_pointer_3b4f491f7d5b5e189cbf281d635d2eac, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_instantiated_from_member_class", method_pointer_61f57978e4565e33a03523e0bd149e04, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_lambda_call_operator", method_pointer_119d38391afa5ac9b1a095b8a5a507b2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_lambda_context_decl", method_pointer_138f50f41b255abbba948e8f9a6dee4a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_lambda_mangling_number", method_pointer_0e12a25cfb9958fcad3ad068a9fc2e68, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_lambda_static_invoker", method_pointer_5296916f3bd252baae5e13208abe40c1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_most_recent_decl", method_pointer_5125aa40c2f553868ed577bec5e8e588, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_most_recent_decl", method_pointer_05e5402675ff5d09b00bed502bfea1ba, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_num_bases", method_pointer_83517ab769c55c71b58a7c0f5fb1f375, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_num_v_bases", method_pointer_67989b8350c25035b8e00f4b3a3df4ee, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_previous_decl", method_pointer_7d00a7c3b9e65ef0baafa8c0b281a1ea, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_previous_decl", method_pointer_8d4e497006c055749a2bcd148023d380, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_template_instantiation_pattern", method_pointer_f12be4b7270d5d928350b9db7e303e01, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_template_instantiation_pattern", method_pointer_64b33ee7e60951a5b646c75c5177e1bb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_any_dependent_bases", method_pointer_3b7579cc59905344aaa85ef56e560374, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_constexpr_default_constructor", method_pointer_648317af27ab5a40be0cda02ad1d34de, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_constexpr_non_copy_move_constructor", method_pointer_45f8e554419c59a899c1fc5a4ddae048, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_copy_assignment_with_const_param", method_pointer_ee67d471c8f25ca398bab697e86fc270, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_copy_constructor_with_const_param", method_pointer_51fe6c241dca5f2498a10ad718af0e14, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_default_constructor", method_pointer_15bd47b98cf7524c807d6141cd8a2708, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_definition", method_pointer_b14e02a3cf955941875310e4460ef5c6, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_friends", method_pointer_0fb9a03d8abf53aea07710c9aa03f7bd, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_in_class_initializer", method_pointer_05ad2587e30353a8b6454e9e5651bbf9, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_irrelevant_destructor", method_pointer_46f1d14efcec546e8c858b40e5c91dbf, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_move_assignment", method_pointer_b6ecd2a976e15fd89d0352fbb4bb4f2b, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_move_constructor", method_pointer_473668b2d0fe5e1dbb78d7622e263579, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_mutable_fields", method_pointer_5bb9116ba33d5701abab54c4f6634e43, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_literal_type_fields_or_bases", method_pointer_c8abeed31deb5088aeb2ea49327c96a8, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_copy_assignment", method_pointer_e6fc3f23e0425602baa2b80e5385cb61, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_copy_constructor", method_pointer_da531b0b163d5a35b7675d5a7159d791, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_default_constructor", method_pointer_8b14adf07ebc562aa0dd217f5bb118f5, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_destructor", method_pointer_3a3afe763bd35a1b9d64c7026d3213a8, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_move_assignment", method_pointer_a426e2c3b9235171bdea1a68a7c6b1ce, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_move_constructor", method_pointer_f4447ea462815ccf8074e3453d6cb107, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_simple_destructor", method_pointer_fdbccb426704571a9e0fcc27279e2cb9, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_simple_move_assignment", method_pointer_2c56069ce7f35c71a57658484f825b67, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_simple_move_constructor", method_pointer_d93af337a1ac5ebdbab719ea3d87a5f2, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_copy_assignment", method_pointer_d3c3bf73b61c5d32bcc129b233e04b46, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_copy_constructor", method_pointer_35ee549c448359c886d415e0ce08e674, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_default_constructor", method_pointer_d4839b8dcb585558975ab16fd60cd816, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_destructor", method_pointer_2459a9f199475860acbfb0e14d21654a, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_move_assignment", method_pointer_d27df357b4735bb1ac30caca56f5ab6c, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_move_constructor", method_pointer_733d3df2f4405f8386d4c68dd5534ebf, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_uninitialized_reference_member", method_pointer_9fefc9e9e1c55785a4e1e600a1a71ad0, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_constructor", method_pointer_ed358df943575542a2c1dd8ab3d7f4ba, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_copy_assignment", method_pointer_4ca7388370e55ababcf87cf8f983688c, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_copy_constructor", method_pointer_e3031489b9b7592884fbdc822dfb4d5a, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_destructor", method_pointer_e4a30ad240545eabb71e9bda6a3dcc4a, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_move_assignment", method_pointer_da28cbab180357678ffe1a7013cd96ee, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_move_constructor", method_pointer_b273decbe62c52bc8a95535d22278822, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_move_operation", method_pointer_b1cf66a74f5252248a89a9bc559dc066, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_provided_default_constructor", method_pointer_92ad1769ed2e5d35a49f6142ca76e927, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_variant_members", method_pointer_41f90cc8c964538b8e1581cc72ea0294, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("implicit_copy_assignment_has_const_param", method_pointer_dcdeaec959095eecb9cafaa26761db02, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("implicit_copy_constructor_has_const_param", method_pointer_9dc4341f6d7855ac996a58b9cbc3f23b, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_abstract", method_pointer_a3a0f67b45b857db8028d5e03639b014, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_aggregate", method_pointer_47e00487ba395da081b458b5d749638a, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_any_destructor_no_return", method_pointer_14eb0073e4ae5b588edb2a0da7865f9d, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_c_like", method_pointer_100cf4802a295311938e8010b28134b6, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_current_instantiation", method_pointer_be5fadc1906f563187625a280569abb1, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_dependent_lambda", method_pointer_91127bc65b5359949042d0da6d05028d, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_derived_from", method_pointer_e5f78f07b4065d02a2c40ca2e291ff68, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_dynamic_class", method_pointer_ff7c5f333bad5443af867cdf6b29268c, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_empty", method_pointer_b5bfa3b048185555974232c4ee4c9527, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_generic_lambda", method_pointer_ba842802993252f28415d91251cd1800, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_lambda", method_pointer_c4c441a194385cff8ec0c7e4546e2f82, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_literal", method_pointer_b86e16590194589aaa32a5461c3890f1, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_local_class", method_pointer_5337a175b8395fc0bcc372cf7d0d1c22, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_local_class", method_pointer_9bb4759b79e65031a1d9ca2c6e9f0f83, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_pod", method_pointer_d4e4c35a88da541187bca688bb0f5045, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_parsing_base_specifiers", method_pointer_a838f0014ec45cf4abaaea229621fe5f, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_polymorphic", method_pointer_5d2ac7b3cf865fbb94645cf66af1e435, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_provably_not_derived_from", method_pointer_47c5cc478b645c999a664dae61d799c1, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_standard_layout", method_pointer_c3c00f135de355ef902a5c09633bc248, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_trivial", method_pointer_9d15500a28f051f89ea58deba79e1a52, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_trivially_copyable", method_pointer_72a945b9c8c55f009fae6beb11bd086c, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_virtually_derived_from", method_pointer_04ef1c4ba6075945bea3a47cf3254c2c, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("may_be_abstract", method_pointer_8e592c2ab5f05b5e97aea05681db3ee9, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_copy_assignment", method_pointer_672ef9e6f0a9578d9eb9a632eba63418, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_copy_constructor", method_pointer_7295443df9d45bb8b92e1b47a0210925, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_default_constructor", method_pointer_490abdbb0e1254cb9897177a2f47c92b, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_destructor", method_pointer_301892cc147d5652be365f8cb541897a, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_move_assignment", method_pointer_d9af683a6bbb597d94f614ce0c4dfc5d, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_move_constructor", method_pointer_a9f23a32b36e5fc29201e70475cb36d1, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_copy_assignment", method_pointer_beb306d2d84650b0a4753306f5aac940, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_copy_constructor", method_pointer_5114a73922cb598886c79fba9474d389, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_destructor", method_pointer_7de7a384cf575fd7af2e880523b30cd6, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_move_assignment", method_pointer_bd7c3157ea035d249be8170dbc30f7f4, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_move_constructor", method_pointer_3431ddde92d75fc6969a6a22388d16fb, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("null_field_offset_is_zero", method_pointer_cb55446e37d25970afef4012d8bc4251, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("push_friend_decl", method_pointer_09620bb71bb95bc29dc370daa1fa103b, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("remove_conversion", method_pointer_3e5a55ca987e536f9966e9c31e981e04, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_described_class_template", method_pointer_c19b4c4c04d755f1a17c2bdfd66ac26f, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_implicit_move_assignment_is_deleted", method_pointer_c913fb02b31e50b680913857b99efb35, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_implicit_move_constructor_is_deleted", method_pointer_a041a23169695e1693587fb76b136cbe, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_is_parsing_base_specifiers", method_pointer_f7f60d36f9dc5f4f90f09241bf854fed, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_lambda_mangling", method_pointer_618f45c6210557dead9b80524316d083, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("view_inheritance", method_pointer_92268bb66f405c8bab482e998e6e0066, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.staticmethod("classof_kind");
    class_6d094fa53b15516db85a0d4b3b7fd665.staticmethod("merge_access");
    class_6d094fa53b15516db85a0d4b3b7fd665.staticmethod("classof");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_bases", function_group::function_c8eecfc3046a59f58ed01f85e8ca43e2, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_constructors", function_group::function_7095b5c033a057dc86048c504f3f4f47, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_virtual_bases", function_group::function_451dbe236266532aa74e9164ba528c10, "");

    if(std::is_class< autowig::HeldType< class ::clang::CXXRecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXRecordDecl >, autowig::HeldType< class ::clang::RecordDecl > >();
    }

}