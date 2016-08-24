#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_7a0922211d1a5f6bb52def66e2db78ad()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::CXXMethodDecl  * (*method_pointer_7601e22a25e75f0db196a06087259a27)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXMethodDecl::CreateDeserialized;
    void  (::clang::CXXMethodDecl::*method_pointer_27e0d7214b295ed28ed3d2681059c8ec)(class ::clang::CXXMethodDecl  const *) = &::clang::CXXMethodDecl::addOverriddenMethod;
    bool  (*method_pointer_d9956ba160dd554780c072e704db2c87)(class ::clang::Decl  const *) = ::clang::CXXMethodDecl::classof;
    bool  (*method_pointer_85d830ec8bd8515498ed626b87dfe3bb)(enum ::clang::Decl::Kind ) = ::clang::CXXMethodDecl::classofKind;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_e3c9261b04af547196fa93c38bb38361)() = &::clang::CXXMethodDecl::getCanonicalDecl;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_ee566b2f32be559194371892a6b19ec3)() const = &::clang::CXXMethodDecl::getCanonicalDecl;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_2a688c57308a54a0adc271a118e1027b)(class ::clang::CXXRecordDecl  const *, bool ) const = &::clang::CXXMethodDecl::getCorrespondingMethodInClass;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_f1ab75a9399659868fc222d9a3bf1205)(class ::clang::CXXRecordDecl  const *, bool ) = &::clang::CXXMethodDecl::getCorrespondingMethodInClass;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_786ea515349952998b070866641d838d)() const = &::clang::CXXMethodDecl::getMostRecentDecl;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_0296358672775399afc47f02336c2257)() = &::clang::CXXMethodDecl::getMostRecentDecl;
    class ::clang::CXXRecordDecl  * (::clang::CXXMethodDecl::*method_pointer_ef0eac6ff73153cea7fdbf012da40f0d)() = &::clang::CXXMethodDecl::getParent;
    class ::clang::CXXRecordDecl  const * (::clang::CXXMethodDecl::*method_pointer_bf8b68efd48a5a3fbf3f5d1a6aa12718)() const = &::clang::CXXMethodDecl::getParent;
    class ::clang::QualType  (::clang::CXXMethodDecl::*method_pointer_9133f4f197a45b938693373064118ae1)(class ::clang::ASTContext  &) const = &::clang::CXXMethodDecl::getThisType;
    unsigned int  (::clang::CXXMethodDecl::*method_pointer_e78ce1e2eeb95986a3cd97bfc04ca942)() const = &::clang::CXXMethodDecl::getTypeQualifiers;
    bool  (::clang::CXXMethodDecl::*method_pointer_6bf99841e2dd53298b35fd4c3edcf52a)() const = &::clang::CXXMethodDecl::hasInlineBody;
    bool  (::clang::CXXMethodDecl::*method_pointer_e8bffc63ad795abfa0b3cd0417bff094)() const = &::clang::CXXMethodDecl::isConst;
    bool  (::clang::CXXMethodDecl::*method_pointer_b6f8583ebb8a57bc9fc6cda49c3f4ccd)() const = &::clang::CXXMethodDecl::isCopyAssignmentOperator;
    bool  (::clang::CXXMethodDecl::*method_pointer_8b188fbe35885866b2ed6963d62fcac8)() const = &::clang::CXXMethodDecl::isInstance;
    bool  (::clang::CXXMethodDecl::*method_pointer_e3c9de6d6c40535081fd1d6c285f4cd4)() const = &::clang::CXXMethodDecl::isLambdaStaticInvoker;
    bool  (::clang::CXXMethodDecl::*method_pointer_f1073c5fb29459eaa69143d3609e3ab3)() const = &::clang::CXXMethodDecl::isMoveAssignmentOperator;
    bool  (::clang::CXXMethodDecl::*method_pointer_1c3fcf582b7a51f48487440a3b5e14f9)() const = &::clang::CXXMethodDecl::isStatic;
    bool  (::clang::CXXMethodDecl::*method_pointer_49db7578339f5133b19a9792649c92f4)() const = &::clang::CXXMethodDecl::isUserProvided;
    bool  (::clang::CXXMethodDecl::*method_pointer_2255fa69857b5b2ab278fea7db24d4e8)() const = &::clang::CXXMethodDecl::isUsualDeallocationFunction;
    bool  (::clang::CXXMethodDecl::*method_pointer_3b866ae2b75e55778529ab7f7a444b64)() const = &::clang::CXXMethodDecl::isVirtual;
    bool  (::clang::CXXMethodDecl::*method_pointer_cb02901839b25e6c94f6653fbde81aff)() const = &::clang::CXXMethodDecl::isVolatile;
    unsigned int  (::clang::CXXMethodDecl::*method_pointer_e5b1ee53741a58cea366f127862ef2dd)() const = &::clang::CXXMethodDecl::size_overridden_methods;
    boost::python::class_< class ::clang::CXXMethodDecl, autowig::HeldType< class ::clang::CXXMethodDecl >, boost::python::bases< class ::clang::FunctionDecl >, boost::noncopyable > class_7a0922211d1a5f6bb52def66e2db78ad("CXXMethodDecl", "", boost::python::no_init);
    class_7a0922211d1a5f6bb52def66e2db78ad.def("create_deserialized", method_pointer_7601e22a25e75f0db196a06087259a27, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("add_overridden_method", method_pointer_27e0d7214b295ed28ed3d2681059c8ec, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("classof", method_pointer_d9956ba160dd554780c072e704db2c87, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("classof_kind", method_pointer_85d830ec8bd8515498ed626b87dfe3bb, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_canonical_decl", method_pointer_e3c9261b04af547196fa93c38bb38361, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_canonical_decl", method_pointer_ee566b2f32be559194371892a6b19ec3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_corresponding_method_in_class", method_pointer_2a688c57308a54a0adc271a118e1027b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_corresponding_method_in_class", method_pointer_f1ab75a9399659868fc222d9a3bf1205, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_most_recent_decl", method_pointer_786ea515349952998b070866641d838d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_most_recent_decl", method_pointer_0296358672775399afc47f02336c2257, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_parent", method_pointer_ef0eac6ff73153cea7fdbf012da40f0d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_parent", method_pointer_bf8b68efd48a5a3fbf3f5d1a6aa12718, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_this_type", method_pointer_9133f4f197a45b938693373064118ae1, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_type_qualifiers", method_pointer_e78ce1e2eeb95986a3cd97bfc04ca942, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("has_inline_body", method_pointer_6bf99841e2dd53298b35fd4c3edcf52a, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_const", method_pointer_e8bffc63ad795abfa0b3cd0417bff094, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_copy_assignment_operator", method_pointer_b6f8583ebb8a57bc9fc6cda49c3f4ccd, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_instance", method_pointer_8b188fbe35885866b2ed6963d62fcac8, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_lambda_static_invoker", method_pointer_e3c9de6d6c40535081fd1d6c285f4cd4, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_move_assignment_operator", method_pointer_f1073c5fb29459eaa69143d3609e3ab3, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_static", method_pointer_1c3fcf582b7a51f48487440a3b5e14f9, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_user_provided", method_pointer_49db7578339f5133b19a9792649c92f4, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_usual_deallocation_function", method_pointer_2255fa69857b5b2ab278fea7db24d4e8, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_virtual", method_pointer_3b866ae2b75e55778529ab7f7a444b64, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_volatile", method_pointer_cb02901839b25e6c94f6653fbde81aff, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("size_overridden_methods", method_pointer_e5b1ee53741a58cea366f127862ef2dd, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("classof_kind");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("create_deserialized");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXMethodDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXMethodDecl >, autowig::HeldType< class ::clang::FunctionDecl > >();
    }

}