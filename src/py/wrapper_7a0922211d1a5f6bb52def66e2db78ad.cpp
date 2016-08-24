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
    class ::clang::CXXMethodDecl  * (*method_pointer_5cf00b61f9ca55ac9823a993bb2f49be)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXMethodDecl::CreateDeserialized;
    void  (::clang::CXXMethodDecl::*method_pointer_5fabe0ab06a650999cdf0c710e49e10e)(class ::clang::CXXMethodDecl  const *) = &::clang::CXXMethodDecl::addOverriddenMethod;
    bool  (*method_pointer_ba751b8ed0db50aa8e385e040b01a9f7)(class ::clang::Decl  const *) = ::clang::CXXMethodDecl::classof;
    bool  (*method_pointer_e8e14f0e40205d4aa36e08c01436b1f0)(enum ::clang::Decl::Kind ) = ::clang::CXXMethodDecl::classofKind;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_5002ab3bdda657d0b024f7b05af13ad1)() = &::clang::CXXMethodDecl::getCanonicalDecl;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_3c8e2152ead359e59310a7a9f6b5a5d1)() const = &::clang::CXXMethodDecl::getCanonicalDecl;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_1799dae5752b5292923fab6dde5c980e)(class ::clang::CXXRecordDecl  const *, bool ) = &::clang::CXXMethodDecl::getCorrespondingMethodInClass;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_524b87c3853a50e88079184e62babe85)(class ::clang::CXXRecordDecl  const *, bool ) const = &::clang::CXXMethodDecl::getCorrespondingMethodInClass;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_3647f44094185d808e866ca53fa245f2)() = &::clang::CXXMethodDecl::getMostRecentDecl;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_b2f500cee3b958debe6f812bbc0ea4e4)() const = &::clang::CXXMethodDecl::getMostRecentDecl;
    class ::clang::CXXRecordDecl  const * (::clang::CXXMethodDecl::*method_pointer_012829c5a5e3576e9f7cddb1e4946521)() const = &::clang::CXXMethodDecl::getParent;
    class ::clang::CXXRecordDecl  * (::clang::CXXMethodDecl::*method_pointer_1b3993ce091053479daf9d22ff65fa04)() = &::clang::CXXMethodDecl::getParent;
    class ::clang::QualType  (::clang::CXXMethodDecl::*method_pointer_09b97795aeb5529dae00ad4f967ee71c)(class ::clang::ASTContext  &) const = &::clang::CXXMethodDecl::getThisType;
    unsigned int  (::clang::CXXMethodDecl::*method_pointer_9d7d7f4caf7c55368d1488dd958226fd)() const = &::clang::CXXMethodDecl::getTypeQualifiers;
    bool  (::clang::CXXMethodDecl::*method_pointer_512a3a4b80f05b489a7e7f9d64e254cc)() const = &::clang::CXXMethodDecl::hasInlineBody;
    bool  (::clang::CXXMethodDecl::*method_pointer_202cf834bc6a5b0583db3440e4daf5c3)() const = &::clang::CXXMethodDecl::isConst;
    bool  (::clang::CXXMethodDecl::*method_pointer_59f40afdce89586594f1952ffc655f35)() const = &::clang::CXXMethodDecl::isCopyAssignmentOperator;
    bool  (::clang::CXXMethodDecl::*method_pointer_787fab0a6eef58ffb922ee0abffd83e8)() const = &::clang::CXXMethodDecl::isInstance;
    bool  (::clang::CXXMethodDecl::*method_pointer_cb4a8ed69cfd59679ea56e499a56228d)() const = &::clang::CXXMethodDecl::isLambdaStaticInvoker;
    bool  (::clang::CXXMethodDecl::*method_pointer_dc845c5deb24565e96b013f38b0298c0)() const = &::clang::CXXMethodDecl::isMoveAssignmentOperator;
    bool  (::clang::CXXMethodDecl::*method_pointer_1a22d41a24da5ceb9915ea2eda1e6524)() const = &::clang::CXXMethodDecl::isStatic;
    bool  (::clang::CXXMethodDecl::*method_pointer_c887992242645aa78e3c57b48202e6f4)() const = &::clang::CXXMethodDecl::isUserProvided;
    bool  (::clang::CXXMethodDecl::*method_pointer_7e5f609b835e550fb81216c2c6c99b50)() const = &::clang::CXXMethodDecl::isUsualDeallocationFunction;
    bool  (::clang::CXXMethodDecl::*method_pointer_ebdaa14801865c7bb436f6d5567b04fa)() const = &::clang::CXXMethodDecl::isVirtual;
    bool  (::clang::CXXMethodDecl::*method_pointer_9f8c701d0c9155599102b11de3f23900)() const = &::clang::CXXMethodDecl::isVolatile;
    unsigned int  (::clang::CXXMethodDecl::*method_pointer_2edd282d28c35739a4e199b9fb492dea)() const = &::clang::CXXMethodDecl::size_overridden_methods;
    boost::python::class_< class ::clang::CXXMethodDecl, autowig::HeldType< class ::clang::CXXMethodDecl >, boost::python::bases< class ::clang::FunctionDecl >, boost::noncopyable > class_7a0922211d1a5f6bb52def66e2db78ad("CXXMethodDecl", "", boost::python::no_init);
    class_7a0922211d1a5f6bb52def66e2db78ad.def("create_deserialized", method_pointer_5cf00b61f9ca55ac9823a993bb2f49be, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("add_overridden_method", method_pointer_5fabe0ab06a650999cdf0c710e49e10e, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("classof", method_pointer_ba751b8ed0db50aa8e385e040b01a9f7, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("classof_kind", method_pointer_e8e14f0e40205d4aa36e08c01436b1f0, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_canonical_decl", method_pointer_5002ab3bdda657d0b024f7b05af13ad1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_canonical_decl", method_pointer_3c8e2152ead359e59310a7a9f6b5a5d1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_corresponding_method_in_class", method_pointer_1799dae5752b5292923fab6dde5c980e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_corresponding_method_in_class", method_pointer_524b87c3853a50e88079184e62babe85, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_most_recent_decl", method_pointer_3647f44094185d808e866ca53fa245f2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_most_recent_decl", method_pointer_b2f500cee3b958debe6f812bbc0ea4e4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_parent", method_pointer_012829c5a5e3576e9f7cddb1e4946521, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_parent", method_pointer_1b3993ce091053479daf9d22ff65fa04, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_this_type", method_pointer_09b97795aeb5529dae00ad4f967ee71c, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_type_qualifiers", method_pointer_9d7d7f4caf7c55368d1488dd958226fd, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("has_inline_body", method_pointer_512a3a4b80f05b489a7e7f9d64e254cc, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_const", method_pointer_202cf834bc6a5b0583db3440e4daf5c3, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_copy_assignment_operator", method_pointer_59f40afdce89586594f1952ffc655f35, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_instance", method_pointer_787fab0a6eef58ffb922ee0abffd83e8, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_lambda_static_invoker", method_pointer_cb4a8ed69cfd59679ea56e499a56228d, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_move_assignment_operator", method_pointer_dc845c5deb24565e96b013f38b0298c0, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_static", method_pointer_1a22d41a24da5ceb9915ea2eda1e6524, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_user_provided", method_pointer_c887992242645aa78e3c57b48202e6f4, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_usual_deallocation_function", method_pointer_7e5f609b835e550fb81216c2c6c99b50, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_virtual", method_pointer_ebdaa14801865c7bb436f6d5567b04fa, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_volatile", method_pointer_9f8c701d0c9155599102b11de3f23900, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("size_overridden_methods", method_pointer_2edd282d28c35739a4e199b9fb492dea, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("classof_kind");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("create_deserialized");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXMethodDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXMethodDecl >, autowig::HeldType< class ::clang::FunctionDecl > >();
    }

}