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
    bool  (::clang::CXXMethodDecl::*method_pointer_42f06184c6755508a068b1855318422b)() const = &::clang::CXXMethodDecl::isStatic;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_183dfbf24d0d56ac8c7dac52ed1a2bc5)() const = &::clang::CXXMethodDecl::getCanonicalDecl;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_3404868e5f445c88b1651a29930e6d87)(class ::clang::CXXRecordDecl  const *, bool ) = &::clang::CXXMethodDecl::getCorrespondingMethodInClass;
    bool  (::clang::CXXMethodDecl::*method_pointer_faab593908885e05b71cfa3d7e197dc2)() const = &::clang::CXXMethodDecl::isVirtual;
    bool  (::clang::CXXMethodDecl::*method_pointer_699e7ef1451f56119c13329e8cd13c8f)() const = &::clang::CXXMethodDecl::isMoveAssignmentOperator;
    bool  (::clang::CXXMethodDecl::*method_pointer_08dcb54a4e5750de9d0071b43edbfa11)() const = &::clang::CXXMethodDecl::isInstance;
    bool  (::clang::CXXMethodDecl::*method_pointer_c037c515d46f55d79291a32287836f3b)() const = &::clang::CXXMethodDecl::isUserProvided;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_8bac90e4affd56d7b343bfe8f449159f)() const = &::clang::CXXMethodDecl::getMostRecentDecl;
    class ::clang::CXXMethodDecl  * (*method_pointer_81cd74df7580534aa90873d5fe6e5513)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXMethodDecl::CreateDeserialized;
    bool  (::clang::CXXMethodDecl::*method_pointer_ac058805db1d521db4161ef66a81f617)() const = &::clang::CXXMethodDecl::isCopyAssignmentOperator;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_7061c146d76d5492a3064df06e1479d3)(class ::clang::CXXRecordDecl  const *, bool ) const = &::clang::CXXMethodDecl::getCorrespondingMethodInClass;
    unsigned int  (::clang::CXXMethodDecl::*method_pointer_ff138d2453665c13b8a6ec412101994e)() const = &::clang::CXXMethodDecl::size_overridden_methods;
    unsigned int  (::clang::CXXMethodDecl::*method_pointer_df7846d5148c55d8ba136961e4db21d1)() const = &::clang::CXXMethodDecl::getTypeQualifiers;
    void  (::clang::CXXMethodDecl::*method_pointer_956911fe9970510293865c40bc6f36dd)(class ::clang::CXXMethodDecl  const *) = &::clang::CXXMethodDecl::addOverriddenMethod;
    class ::clang::CXXRecordDecl  * (::clang::CXXMethodDecl::*method_pointer_655afaca7f625ec0b02decfa23436b32)() = &::clang::CXXMethodDecl::getParent;
    bool  (::clang::CXXMethodDecl::*method_pointer_53b295cb12ba5b29abc3822044b8e22c)() const = &::clang::CXXMethodDecl::isConst;
    bool  (::clang::CXXMethodDecl::*method_pointer_245ed3a911a15499b599321a832416ba)() const = &::clang::CXXMethodDecl::isVolatile;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_615e6d7e95e45ff2973c91a0b4740166)() = &::clang::CXXMethodDecl::getCanonicalDecl;
    class ::clang::CXXRecordDecl  const * (::clang::CXXMethodDecl::*method_pointer_117a7aea206c5f6c88d21182f9c8c994)() const = &::clang::CXXMethodDecl::getParent;
    bool  (::clang::CXXMethodDecl::*method_pointer_0ee8a734f0ef5a6d96f880c7668c7070)() const = &::clang::CXXMethodDecl::isUsualDeallocationFunction;
    bool  (::clang::CXXMethodDecl::*method_pointer_0ea3313b63b355b79d3308032a728ef4)() const = &::clang::CXXMethodDecl::hasInlineBody;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_52ff47e81bf85fcc857322b2de5fe3c9)() = &::clang::CXXMethodDecl::getMostRecentDecl;
    bool  (::clang::CXXMethodDecl::*method_pointer_1e3854fb22ee5ff09144096d813877d0)() const = &::clang::CXXMethodDecl::isLambdaStaticInvoker;
    bool  (*method_pointer_4390a0c14e375d748194d409961808cc)(class ::clang::Decl  const *) = ::clang::CXXMethodDecl::classof;
    bool  (*method_pointer_1fc1235b51e9547ebaa54aca221f0e30)(enum ::clang::Decl::Kind ) = ::clang::CXXMethodDecl::classofKind;
    boost::python::class_< class ::clang::CXXMethodDecl, autowig::HeldType< class ::clang::CXXMethodDecl >, boost::python::bases< class ::clang::FunctionDecl >, boost::noncopyable > class_7a0922211d1a5f6bb52def66e2db78ad("CXXMethodDecl", "", boost::python::no_init);
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_static", method_pointer_42f06184c6755508a068b1855318422b, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_canonical_decl", method_pointer_183dfbf24d0d56ac8c7dac52ed1a2bc5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_corresponding_method_in_class", method_pointer_3404868e5f445c88b1651a29930e6d87, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_virtual", method_pointer_faab593908885e05b71cfa3d7e197dc2, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_move_assignment_operator", method_pointer_699e7ef1451f56119c13329e8cd13c8f, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_instance", method_pointer_08dcb54a4e5750de9d0071b43edbfa11, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_user_provided", method_pointer_c037c515d46f55d79291a32287836f3b, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_most_recent_decl", method_pointer_8bac90e4affd56d7b343bfe8f449159f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("create_deserialized", method_pointer_81cd74df7580534aa90873d5fe6e5513, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_copy_assignment_operator", method_pointer_ac058805db1d521db4161ef66a81f617, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_corresponding_method_in_class", method_pointer_7061c146d76d5492a3064df06e1479d3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("size_overridden_methods", method_pointer_ff138d2453665c13b8a6ec412101994e, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_type_qualifiers", method_pointer_df7846d5148c55d8ba136961e4db21d1, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("add_overridden_method", method_pointer_956911fe9970510293865c40bc6f36dd, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_parent", method_pointer_655afaca7f625ec0b02decfa23436b32, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_const", method_pointer_53b295cb12ba5b29abc3822044b8e22c, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_volatile", method_pointer_245ed3a911a15499b599321a832416ba, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_canonical_decl", method_pointer_615e6d7e95e45ff2973c91a0b4740166, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_parent", method_pointer_117a7aea206c5f6c88d21182f9c8c994, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_usual_deallocation_function", method_pointer_0ee8a734f0ef5a6d96f880c7668c7070, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("has_inline_body", method_pointer_0ea3313b63b355b79d3308032a728ef4, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_most_recent_decl", method_pointer_52ff47e81bf85fcc857322b2de5fe3c9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_lambda_static_invoker", method_pointer_1e3854fb22ee5ff09144096d813877d0, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("classof", method_pointer_4390a0c14e375d748194d409961808cc, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("classof_kind", method_pointer_1fc1235b51e9547ebaa54aca221f0e30, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("classof_kind");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("create_deserialized");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXMethodDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXMethodDecl >, autowig::HeldType< class ::clang::FunctionDecl > >();
    }

}