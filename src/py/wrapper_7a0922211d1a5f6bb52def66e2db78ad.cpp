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
    class ::clang::CXXMethodDecl  * (*method_pointer_7e47f9d037a55ea3bf2284df456219b5)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXMethodDecl::CreateDeserialized;
    void  (::clang::CXXMethodDecl::*method_pointer_68cca1a888e05623997d321bbd891d7f)(class ::clang::CXXMethodDecl  const *) = &::clang::CXXMethodDecl::addOverriddenMethod;
    bool  (*method_pointer_62c54bd870d3570bae0313e29f39a2c4)(class ::clang::Decl  const *) = ::clang::CXXMethodDecl::classof;
    bool  (*method_pointer_5a71a55765565512b9974b35cf09bbc0)(enum ::clang::Decl::Kind ) = ::clang::CXXMethodDecl::classofKind;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_ecce851cc3c55d28bc98702a2ec264c7)() const = &::clang::CXXMethodDecl::getCanonicalDecl;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_e757ed0a8bfd50b39a50a7550948d284)() = &::clang::CXXMethodDecl::getCanonicalDecl;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_fdc45e008fb95182ae00148cbe0e31a9)(class ::clang::CXXRecordDecl  const *, bool ) const = &::clang::CXXMethodDecl::getCorrespondingMethodInClass;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_4ec12e7652ca5959a74ba56b8970941b)(class ::clang::CXXRecordDecl  const *, bool ) = &::clang::CXXMethodDecl::getCorrespondingMethodInClass;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_d30bc37d44ea5a09b9ad784e0bd94482)() = &::clang::CXXMethodDecl::getMostRecentDecl;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_79b0aa6775025681b81ebcf31d0f76d7)() const = &::clang::CXXMethodDecl::getMostRecentDecl;
    class ::clang::CXXRecordDecl  const * (::clang::CXXMethodDecl::*method_pointer_1767b2a6d11e5557bd9b7251dcd63f3f)() const = &::clang::CXXMethodDecl::getParent;
    class ::clang::CXXRecordDecl  * (::clang::CXXMethodDecl::*method_pointer_aaa6fc41d73254b298cd03514250c5f1)() = &::clang::CXXMethodDecl::getParent;
    class ::clang::QualType  (::clang::CXXMethodDecl::*method_pointer_858b611a2c1152ce9144489577a1df29)(class ::clang::ASTContext  &) const = &::clang::CXXMethodDecl::getThisType;
    unsigned int  (::clang::CXXMethodDecl::*method_pointer_5b997d59fcd7587db325d9f83054c761)() const = &::clang::CXXMethodDecl::getTypeQualifiers;
    bool  (::clang::CXXMethodDecl::*method_pointer_0a2c572254105c3c902f01f363693ea0)() const = &::clang::CXXMethodDecl::hasInlineBody;
    bool  (::clang::CXXMethodDecl::*method_pointer_daeedbd7aa275f24971c225cea9d23a9)() const = &::clang::CXXMethodDecl::isConst;
    bool  (::clang::CXXMethodDecl::*method_pointer_504be8b43d54519f9868471042ebf3c4)() const = &::clang::CXXMethodDecl::isCopyAssignmentOperator;
    bool  (::clang::CXXMethodDecl::*method_pointer_4b95ceca26905f1babdf86261472bd08)() const = &::clang::CXXMethodDecl::isInstance;
    bool  (::clang::CXXMethodDecl::*method_pointer_cefa898c75b65ef5984edfb22bfb08f6)() const = &::clang::CXXMethodDecl::isLambdaStaticInvoker;
    bool  (::clang::CXXMethodDecl::*method_pointer_f977ea2ba9435309abdb00da717e3e0c)() const = &::clang::CXXMethodDecl::isMoveAssignmentOperator;
    bool  (::clang::CXXMethodDecl::*method_pointer_cac1403421a859e994552e7dd8b9b69e)() const = &::clang::CXXMethodDecl::isStatic;
    bool  (::clang::CXXMethodDecl::*method_pointer_11aa456940ae5dfaa184bc63caf1ca88)() const = &::clang::CXXMethodDecl::isUserProvided;
    bool  (::clang::CXXMethodDecl::*method_pointer_e0dc282069be5ca193bff849d202e065)() const = &::clang::CXXMethodDecl::isUsualDeallocationFunction;
    bool  (::clang::CXXMethodDecl::*method_pointer_148e7531f37155b5a46738d70237c915)() const = &::clang::CXXMethodDecl::isVirtual;
    bool  (::clang::CXXMethodDecl::*method_pointer_b7702ffd82ca5bfd885855534ac6d738)() const = &::clang::CXXMethodDecl::isVolatile;
    unsigned int  (::clang::CXXMethodDecl::*method_pointer_3275cde2f8765f3d8006f11b1a9d5cb6)() const = &::clang::CXXMethodDecl::size_overridden_methods;
    boost::python::class_< class ::clang::CXXMethodDecl, autowig::HeldType< class ::clang::CXXMethodDecl >, boost::python::bases< class ::clang::FunctionDecl >, boost::noncopyable > class_7a0922211d1a5f6bb52def66e2db78ad("CXXMethodDecl", "", boost::python::no_init);
    class_7a0922211d1a5f6bb52def66e2db78ad.def("create_deserialized", method_pointer_7e47f9d037a55ea3bf2284df456219b5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("add_overridden_method", method_pointer_68cca1a888e05623997d321bbd891d7f, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("classof", method_pointer_62c54bd870d3570bae0313e29f39a2c4, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("classof_kind", method_pointer_5a71a55765565512b9974b35cf09bbc0, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_canonical_decl", method_pointer_ecce851cc3c55d28bc98702a2ec264c7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_canonical_decl", method_pointer_e757ed0a8bfd50b39a50a7550948d284, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_corresponding_method_in_class", method_pointer_fdc45e008fb95182ae00148cbe0e31a9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_corresponding_method_in_class", method_pointer_4ec12e7652ca5959a74ba56b8970941b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_most_recent_decl", method_pointer_d30bc37d44ea5a09b9ad784e0bd94482, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_most_recent_decl", method_pointer_79b0aa6775025681b81ebcf31d0f76d7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_parent", method_pointer_1767b2a6d11e5557bd9b7251dcd63f3f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_parent", method_pointer_aaa6fc41d73254b298cd03514250c5f1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_this_type", method_pointer_858b611a2c1152ce9144489577a1df29, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_type_qualifiers", method_pointer_5b997d59fcd7587db325d9f83054c761, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("has_inline_body", method_pointer_0a2c572254105c3c902f01f363693ea0, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_const", method_pointer_daeedbd7aa275f24971c225cea9d23a9, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_copy_assignment_operator", method_pointer_504be8b43d54519f9868471042ebf3c4, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_instance", method_pointer_4b95ceca26905f1babdf86261472bd08, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_lambda_static_invoker", method_pointer_cefa898c75b65ef5984edfb22bfb08f6, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_move_assignment_operator", method_pointer_f977ea2ba9435309abdb00da717e3e0c, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_static", method_pointer_cac1403421a859e994552e7dd8b9b69e, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_user_provided", method_pointer_11aa456940ae5dfaa184bc63caf1ca88, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_usual_deallocation_function", method_pointer_e0dc282069be5ca193bff849d202e065, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_virtual", method_pointer_148e7531f37155b5a46738d70237c915, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_volatile", method_pointer_b7702ffd82ca5bfd885855534ac6d738, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("size_overridden_methods", method_pointer_3275cde2f8765f3d8006f11b1a9d5cb6, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("classof_kind");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("create_deserialized");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXMethodDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXMethodDecl >, autowig::HeldType< class ::clang::FunctionDecl > >();
    }

}