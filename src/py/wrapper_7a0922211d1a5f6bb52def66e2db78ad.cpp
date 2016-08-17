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
    bool  (::clang::CXXMethodDecl::*method_pointer_945314bbf0d65e4f95b2d6c02c7c4fee)() const = &::clang::CXXMethodDecl::isInstance;
    bool  (::clang::CXXMethodDecl::*method_pointer_a057a0647e8a5286a992040c620c3d3f)() const = &::clang::CXXMethodDecl::isUserProvided;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_e0972142078652eeb4109f0f5a16b9c4)(class ::clang::CXXRecordDecl  const *, bool ) const = &::clang::CXXMethodDecl::getCorrespondingMethodInClass;
    bool  (::clang::CXXMethodDecl::*method_pointer_f1e00aebca1459f680a86a03dc4150b4)() const = &::clang::CXXMethodDecl::isConst;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_9d3c141eebfc509eb7cf39089a96d0f7)() const = &::clang::CXXMethodDecl::getCanonicalDecl;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_8a0e751d041a5d61be41f62e12ed3804)() const = &::clang::CXXMethodDecl::getMostRecentDecl;
    bool  (::clang::CXXMethodDecl::*method_pointer_72aae68f22da5020943e4e11bdc89fad)() const = &::clang::CXXMethodDecl::hasInlineBody;
    class ::clang::CXXRecordDecl  const * (::clang::CXXMethodDecl::*method_pointer_a54c9ba377325ec984922bcc09c39a3e)() const = &::clang::CXXMethodDecl::getParent;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_2c7802161a385c7f8ae35c80ede4df3e)() = &::clang::CXXMethodDecl::getMostRecentDecl;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_2781bc2278275ac3a2050710cd98323d)(class ::clang::CXXRecordDecl  const *, bool ) = &::clang::CXXMethodDecl::getCorrespondingMethodInClass;
    bool  (::clang::CXXMethodDecl::*method_pointer_f63ed75518fe503e942703404784399b)() const = &::clang::CXXMethodDecl::isStatic;
    bool  (::clang::CXXMethodDecl::*method_pointer_b4d911662a365de0b98e807d8d9f6f95)() const = &::clang::CXXMethodDecl::isVolatile;
    bool  (::clang::CXXMethodDecl::*method_pointer_fd54784d7ea355bd82e3b7ac8bc4a94d)() const = &::clang::CXXMethodDecl::isLambdaStaticInvoker;
    bool  (*method_pointer_ae02a791cad45b0dbac0965ceff85468)(class ::clang::Decl  const *) = ::clang::CXXMethodDecl::classof;
    bool  (::clang::CXXMethodDecl::*method_pointer_e367dea809a2505196745cee747d991d)() const = &::clang::CXXMethodDecl::isVirtual;
    unsigned int  (::clang::CXXMethodDecl::*method_pointer_5065d4d4578e5ee1a24fbf9565817264)() const = &::clang::CXXMethodDecl::getTypeQualifiers;
    bool  (::clang::CXXMethodDecl::*method_pointer_44cdd8a65e905021b44a3ad14890ea06)() const = &::clang::CXXMethodDecl::isCopyAssignmentOperator;
    bool  (*method_pointer_45234c1ec7c35efaaa0ded56b0852a50)(enum ::clang::Decl::Kind ) = ::clang::CXXMethodDecl::classofKind;
    void  (::clang::CXXMethodDecl::*method_pointer_6d2b0dd8799d527c9cd97df78566dd5f)(class ::clang::CXXMethodDecl  const *) = &::clang::CXXMethodDecl::addOverriddenMethod;
    bool  (::clang::CXXMethodDecl::*method_pointer_8994a60ce2e453e5b5b0bf22dddea44a)() const = &::clang::CXXMethodDecl::isMoveAssignmentOperator;
    bool  (::clang::CXXMethodDecl::*method_pointer_3b439a92565d511aa21e258990ea0877)() const = &::clang::CXXMethodDecl::isUsualDeallocationFunction;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_fd57bf79c83f548c938128807ef31713)() = &::clang::CXXMethodDecl::getCanonicalDecl;
    class ::clang::CXXMethodDecl  * (*method_pointer_7324e0c486455922ae8f9902faa8683e)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXMethodDecl::CreateDeserialized;
    class ::clang::CXXRecordDecl  * (::clang::CXXMethodDecl::*method_pointer_4b9d455d6eb85694aa8d909ed8da974f)() = &::clang::CXXMethodDecl::getParent;
    unsigned int  (::clang::CXXMethodDecl::*method_pointer_d7852dcb27ea5a9494067483ad0922dd)() const = &::clang::CXXMethodDecl::size_overridden_methods;
    boost::python::class_< class ::clang::CXXMethodDecl, autowig::HeldType< class ::clang::CXXMethodDecl >, boost::python::bases< class ::clang::FunctionDecl >, boost::noncopyable > class_7a0922211d1a5f6bb52def66e2db78ad("CXXMethodDecl", "", boost::python::no_init);
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_instance", method_pointer_945314bbf0d65e4f95b2d6c02c7c4fee, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_user_provided", method_pointer_a057a0647e8a5286a992040c620c3d3f, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_corresponding_method_in_class", method_pointer_e0972142078652eeb4109f0f5a16b9c4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_const", method_pointer_f1e00aebca1459f680a86a03dc4150b4, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_canonical_decl", method_pointer_9d3c141eebfc509eb7cf39089a96d0f7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_most_recent_decl", method_pointer_8a0e751d041a5d61be41f62e12ed3804, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("has_inline_body", method_pointer_72aae68f22da5020943e4e11bdc89fad, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_parent", method_pointer_a54c9ba377325ec984922bcc09c39a3e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_most_recent_decl", method_pointer_2c7802161a385c7f8ae35c80ede4df3e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_corresponding_method_in_class", method_pointer_2781bc2278275ac3a2050710cd98323d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_static", method_pointer_f63ed75518fe503e942703404784399b, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_volatile", method_pointer_b4d911662a365de0b98e807d8d9f6f95, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_lambda_static_invoker", method_pointer_fd54784d7ea355bd82e3b7ac8bc4a94d, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("classof", method_pointer_ae02a791cad45b0dbac0965ceff85468, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_virtual", method_pointer_e367dea809a2505196745cee747d991d, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_type_qualifiers", method_pointer_5065d4d4578e5ee1a24fbf9565817264, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_copy_assignment_operator", method_pointer_44cdd8a65e905021b44a3ad14890ea06, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("classof_kind", method_pointer_45234c1ec7c35efaaa0ded56b0852a50, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("add_overridden_method", method_pointer_6d2b0dd8799d527c9cd97df78566dd5f, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_move_assignment_operator", method_pointer_8994a60ce2e453e5b5b0bf22dddea44a, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_usual_deallocation_function", method_pointer_3b439a92565d511aa21e258990ea0877, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_canonical_decl", method_pointer_fd57bf79c83f548c938128807ef31713, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("create_deserialized", method_pointer_7324e0c486455922ae8f9902faa8683e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_parent", method_pointer_4b9d455d6eb85694aa8d909ed8da974f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("size_overridden_methods", method_pointer_d7852dcb27ea5a9494067483ad0922dd, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("classof_kind");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("create_deserialized");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXMethodDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXMethodDecl >, autowig::HeldType< class ::clang::FunctionDecl > >();
    }

}