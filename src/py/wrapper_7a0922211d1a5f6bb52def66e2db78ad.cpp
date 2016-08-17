#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_7a0922211d1a5f6bb52def66e2db78ad()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::CXXMethodDecl::*method_pointer_a679e3b618315237be9b0ad1a0c36465)() const = &::clang::CXXMethodDecl::hasInlineBody;
    unsigned int  (::clang::CXXMethodDecl::*method_pointer_e71e10f17b405051b323c076bf54ad9e)() const = &::clang::CXXMethodDecl::getTypeQualifiers;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_ec322062fc5258df9ac44e1afcecdcb7)(class ::clang::CXXRecordDecl  const *, bool ) = &::clang::CXXMethodDecl::getCorrespondingMethodInClass;
    bool  (::clang::CXXMethodDecl::*method_pointer_571db4a41c5a518ba5a925bd3660f93a)() const = &::clang::CXXMethodDecl::isInstance;
    bool  (::clang::CXXMethodDecl::*method_pointer_ff7d3ad5ed465ef4a06c50ae5cc0cd04)() const = &::clang::CXXMethodDecl::isStatic;
    bool  (::clang::CXXMethodDecl::*method_pointer_e304864c23575ebf9e25b2534a8be012)() const = &::clang::CXXMethodDecl::isVolatile;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_982b982c4e5153a2a58dfd2b8a4aa194)(class ::clang::CXXRecordDecl  const *, bool ) const = &::clang::CXXMethodDecl::getCorrespondingMethodInClass;
    bool  (::clang::CXXMethodDecl::*method_pointer_452f12822565516eae09dc23a5445960)() const = &::clang::CXXMethodDecl::isUsualDeallocationFunction;
    bool  (::clang::CXXMethodDecl::*method_pointer_99d99a476978531085f502e8eaa58eb7)() const = &::clang::CXXMethodDecl::isLambdaStaticInvoker;
    bool  (::clang::CXXMethodDecl::*method_pointer_6c0d4fa822885cca834ff981acedc556)() const = &::clang::CXXMethodDecl::isCopyAssignmentOperator;
    unsigned int  (::clang::CXXMethodDecl::*method_pointer_3f4ea90e1bc855f99dfc440c377f38d2)() const = &::clang::CXXMethodDecl::size_overridden_methods;
    bool  (*method_pointer_604210fe733d50548a40c70ed28b10f5)(class ::clang::Decl  const *) = ::clang::CXXMethodDecl::classof;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_44d6dd6343b55e1085f45127c938b661)() const = &::clang::CXXMethodDecl::getMostRecentDecl;
    bool  (*method_pointer_d19014ee4df358748edcf902ea0a7f3a)(enum ::clang::Decl::Kind ) = ::clang::CXXMethodDecl::classofKind;
    bool  (::clang::CXXMethodDecl::*method_pointer_d3c40fdd205a5eabbca4e4d0143f3ed6)() const = &::clang::CXXMethodDecl::isVirtual;
    class ::clang::CXXMethodDecl  * (*method_pointer_af95c2a21bae5b42b884edb2ffa5d1cb)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXMethodDecl::CreateDeserialized;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_5b429ee93dbb56cc96c8e408bb366845)() const = &::clang::CXXMethodDecl::getCanonicalDecl;
    bool  (::clang::CXXMethodDecl::*method_pointer_701e58ffa035596cad5fe25706f6ed44)() const = &::clang::CXXMethodDecl::isConst;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_42eb45f25f0d5231a3f90a99cf302fa1)() = &::clang::CXXMethodDecl::getMostRecentDecl;
    void  (::clang::CXXMethodDecl::*method_pointer_f00d7118dc575cd1937df2be6949af4e)(class ::clang::CXXMethodDecl  const *) = &::clang::CXXMethodDecl::addOverriddenMethod;
    bool  (::clang::CXXMethodDecl::*method_pointer_973d7f6e873b5f6589953922b1f86fce)() const = &::clang::CXXMethodDecl::isUserProvided;
    bool  (::clang::CXXMethodDecl::*method_pointer_3dddba385880558e94e9a165a73de40f)() const = &::clang::CXXMethodDecl::isMoveAssignmentOperator;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_93f388f985d05479bbbd8fc5a3ab61e7)() = &::clang::CXXMethodDecl::getCanonicalDecl;
    class ::clang::CXXRecordDecl  * (::clang::CXXMethodDecl::*method_pointer_9be90da57e9e54a2a2b632871d188fa0)() = &::clang::CXXMethodDecl::getParent;
    class ::clang::CXXRecordDecl  const * (::clang::CXXMethodDecl::*method_pointer_6828ab71608e52fc8d2222d6827c7366)() const = &::clang::CXXMethodDecl::getParent;
    boost::python::class_< class ::clang::CXXMethodDecl, autowig::HeldType< class ::clang::CXXMethodDecl >, boost::python::bases< class ::clang::FunctionDecl >, boost::noncopyable > class_7a0922211d1a5f6bb52def66e2db78ad("CXXMethodDecl", "", boost::python::no_init);
    class_7a0922211d1a5f6bb52def66e2db78ad.def("has_inline_body", method_pointer_a679e3b618315237be9b0ad1a0c36465, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_type_qualifiers", method_pointer_e71e10f17b405051b323c076bf54ad9e, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_corresponding_method_in_class", method_pointer_ec322062fc5258df9ac44e1afcecdcb7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_instance", method_pointer_571db4a41c5a518ba5a925bd3660f93a, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_static", method_pointer_ff7d3ad5ed465ef4a06c50ae5cc0cd04, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_volatile", method_pointer_e304864c23575ebf9e25b2534a8be012, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_corresponding_method_in_class", method_pointer_982b982c4e5153a2a58dfd2b8a4aa194, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_usual_deallocation_function", method_pointer_452f12822565516eae09dc23a5445960, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_lambda_static_invoker", method_pointer_99d99a476978531085f502e8eaa58eb7, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_copy_assignment_operator", method_pointer_6c0d4fa822885cca834ff981acedc556, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("size_overridden_methods", method_pointer_3f4ea90e1bc855f99dfc440c377f38d2, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("classof", method_pointer_604210fe733d50548a40c70ed28b10f5, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_most_recent_decl", method_pointer_44d6dd6343b55e1085f45127c938b661, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("classof_kind", method_pointer_d19014ee4df358748edcf902ea0a7f3a, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_virtual", method_pointer_d3c40fdd205a5eabbca4e4d0143f3ed6, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("create_deserialized", method_pointer_af95c2a21bae5b42b884edb2ffa5d1cb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_canonical_decl", method_pointer_5b429ee93dbb56cc96c8e408bb366845, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_const", method_pointer_701e58ffa035596cad5fe25706f6ed44, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_most_recent_decl", method_pointer_42eb45f25f0d5231a3f90a99cf302fa1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("add_overridden_method", method_pointer_f00d7118dc575cd1937df2be6949af4e, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_user_provided", method_pointer_973d7f6e873b5f6589953922b1f86fce, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_move_assignment_operator", method_pointer_3dddba385880558e94e9a165a73de40f, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_canonical_decl", method_pointer_93f388f985d05479bbbd8fc5a3ab61e7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_parent", method_pointer_9be90da57e9e54a2a2b632871d188fa0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_parent", method_pointer_6828ab71608e52fc8d2222d6827c7366, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("classof_kind");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("create_deserialized");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXMethodDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXMethodDecl >, autowig::HeldType< class ::clang::FunctionDecl > >();
    }

}