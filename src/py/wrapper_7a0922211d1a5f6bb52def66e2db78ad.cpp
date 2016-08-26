#include "_clanglite.h"


namespace autowig
{
}


void wrapper_7a0922211d1a5f6bb52def66e2db78ad()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::CXXMethodDecl  * (*method_pointer_7194f43068ef56a68666c2c4e13c1953)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXMethodDecl::CreateDeserialized;
    void  (::clang::CXXMethodDecl::*method_pointer_a19e6242e8be51e6b652a563f9078d62)(class ::clang::CXXMethodDecl  const *) = &::clang::CXXMethodDecl::addOverriddenMethod;
    bool  (*method_pointer_84bdb386bfbb52c5849d406034f5a905)(class ::clang::Decl  const *) = ::clang::CXXMethodDecl::classof;
    bool  (*method_pointer_4f5941ab924f51faab767d8b52e4b605)(enum ::clang::Decl::Kind ) = ::clang::CXXMethodDecl::classofKind;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_fa744fe12b5d5e41a3e5f442aae84ca9)() const = &::clang::CXXMethodDecl::getCanonicalDecl;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_1ec11944bca55f8eb352fcb552bb010e)() = &::clang::CXXMethodDecl::getCanonicalDecl;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_609a7ac8979c5c0d8e14da220d2addad)(class ::clang::CXXRecordDecl  const *, bool ) const = &::clang::CXXMethodDecl::getCorrespondingMethodInClass;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_49cd89f489a85855a8614ec7a33d30d6)(class ::clang::CXXRecordDecl  const *, bool ) = &::clang::CXXMethodDecl::getCorrespondingMethodInClass;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_fc2d8e2df1e05c42989a833dab010baa)() = &::clang::CXXMethodDecl::getMostRecentDecl;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_1b3dca6e15405cab9ced49b4a99c4e92)() const = &::clang::CXXMethodDecl::getMostRecentDecl;
    class ::clang::CXXRecordDecl  const * (::clang::CXXMethodDecl::*method_pointer_cd6453329628534b98751a7bd1358efe)() const = &::clang::CXXMethodDecl::getParent;
    class ::clang::CXXRecordDecl  * (::clang::CXXMethodDecl::*method_pointer_997f75a3c8e6524dab1fed3855ea9876)() = &::clang::CXXMethodDecl::getParent;
    unsigned int  (::clang::CXXMethodDecl::*method_pointer_b35f492d527159c19fc3deb165171a48)() const = &::clang::CXXMethodDecl::getTypeQualifiers;
    bool  (::clang::CXXMethodDecl::*method_pointer_b9d2501d2eaf5bcfb188640ee7abde99)() const = &::clang::CXXMethodDecl::hasInlineBody;
    bool  (::clang::CXXMethodDecl::*method_pointer_3a798ef055e055f1ade644986a4ba49d)() const = &::clang::CXXMethodDecl::isConst;
    bool  (::clang::CXXMethodDecl::*method_pointer_967702cbedac59a083fd1352a26196b6)() const = &::clang::CXXMethodDecl::isCopyAssignmentOperator;
    bool  (::clang::CXXMethodDecl::*method_pointer_3f21a5001faf54eaa2d1b670fb8e3ee0)() const = &::clang::CXXMethodDecl::isInstance;
    bool  (::clang::CXXMethodDecl::*method_pointer_1f67ffc9801f52b2a5ff7c0082defab8)() const = &::clang::CXXMethodDecl::isLambdaStaticInvoker;
    bool  (::clang::CXXMethodDecl::*method_pointer_69be1f4eb4d35928816b36c49918e957)() const = &::clang::CXXMethodDecl::isMoveAssignmentOperator;
    bool  (::clang::CXXMethodDecl::*method_pointer_af1ea3663ae1576ca8c410bcbeebbc58)() const = &::clang::CXXMethodDecl::isStatic;
    bool  (::clang::CXXMethodDecl::*method_pointer_852036ac20d35a798082707e69bfdfbb)() const = &::clang::CXXMethodDecl::isUserProvided;
    bool  (::clang::CXXMethodDecl::*method_pointer_1184d7c6e8725b09bfe61fe2d6aa4e8c)() const = &::clang::CXXMethodDecl::isUsualDeallocationFunction;
    bool  (::clang::CXXMethodDecl::*method_pointer_0be5c34f3c81502ab3af3a11f4ecc11e)() const = &::clang::CXXMethodDecl::isVirtual;
    bool  (::clang::CXXMethodDecl::*method_pointer_0ddb8c63d4a958fda2ffb9132d944eae)() const = &::clang::CXXMethodDecl::isVolatile;
    unsigned int  (::clang::CXXMethodDecl::*method_pointer_726ebb1f9f9253ab868a50bcd302944a)() const = &::clang::CXXMethodDecl::size_overridden_methods;
    boost::python::class_< class ::clang::CXXMethodDecl, autowig::HeldType< class ::clang::CXXMethodDecl >, boost::python::bases< class ::clang::FunctionDecl >, boost::noncopyable > class_7a0922211d1a5f6bb52def66e2db78ad("CXXMethodDecl", "", boost::python::no_init);
    class_7a0922211d1a5f6bb52def66e2db78ad.def("create_deserialized", method_pointer_7194f43068ef56a68666c2c4e13c1953, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("add_overridden_method", method_pointer_a19e6242e8be51e6b652a563f9078d62, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("classof", method_pointer_84bdb386bfbb52c5849d406034f5a905, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("classof_kind", method_pointer_4f5941ab924f51faab767d8b52e4b605, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_canonical_decl", method_pointer_fa744fe12b5d5e41a3e5f442aae84ca9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_canonical_decl", method_pointer_1ec11944bca55f8eb352fcb552bb010e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_corresponding_method_in_class", method_pointer_609a7ac8979c5c0d8e14da220d2addad, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_corresponding_method_in_class", method_pointer_49cd89f489a85855a8614ec7a33d30d6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_most_recent_decl", method_pointer_fc2d8e2df1e05c42989a833dab010baa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_most_recent_decl", method_pointer_1b3dca6e15405cab9ced49b4a99c4e92, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_parent", method_pointer_cd6453329628534b98751a7bd1358efe, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_parent", method_pointer_997f75a3c8e6524dab1fed3855ea9876, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_type_qualifiers", method_pointer_b35f492d527159c19fc3deb165171a48, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("has_inline_body", method_pointer_b9d2501d2eaf5bcfb188640ee7abde99, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_const", method_pointer_3a798ef055e055f1ade644986a4ba49d, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_copy_assignment_operator", method_pointer_967702cbedac59a083fd1352a26196b6, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_instance", method_pointer_3f21a5001faf54eaa2d1b670fb8e3ee0, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_lambda_static_invoker", method_pointer_1f67ffc9801f52b2a5ff7c0082defab8, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_move_assignment_operator", method_pointer_69be1f4eb4d35928816b36c49918e957, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_static", method_pointer_af1ea3663ae1576ca8c410bcbeebbc58, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_user_provided", method_pointer_852036ac20d35a798082707e69bfdfbb, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_usual_deallocation_function", method_pointer_1184d7c6e8725b09bfe61fe2d6aa4e8c, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_virtual", method_pointer_0be5c34f3c81502ab3af3a11f4ecc11e, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_volatile", method_pointer_0ddb8c63d4a958fda2ffb9132d944eae, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("size_overridden_methods", method_pointer_726ebb1f9f9253ab868a50bcd302944a, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("classof_kind");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("create_deserialized");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXMethodDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXMethodDecl >, autowig::HeldType< class ::clang::FunctionDecl > >();
    }

}