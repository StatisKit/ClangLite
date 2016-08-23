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
    class ::clang::CXXMethodDecl  * (*method_pointer_526abe6c9798556989bfbae94b114cbf)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXMethodDecl::CreateDeserialized;
    void  (::clang::CXXMethodDecl::*method_pointer_091288a034e15398b6a8e68d306f21ce)(class ::clang::CXXMethodDecl  const *) = &::clang::CXXMethodDecl::addOverriddenMethod;
    bool  (*method_pointer_7a9a4c0ee8285a83a32d014cc3f0a91a)(class ::clang::Decl  const *) = ::clang::CXXMethodDecl::classof;
    bool  (*method_pointer_4b25505d2b4756de9c6b86ed3229caeb)(enum ::clang::Decl::Kind ) = ::clang::CXXMethodDecl::classofKind;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_87ea0743f37254aa9b9121993bdb7d59)() const = &::clang::CXXMethodDecl::getCanonicalDecl;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_3c76ed42fd2f5a838c95c518f5e94285)() = &::clang::CXXMethodDecl::getCanonicalDecl;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_861c10645c8b51548e806930048fbf07)(class ::clang::CXXRecordDecl  const *, bool ) const = &::clang::CXXMethodDecl::getCorrespondingMethodInClass;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_c8336415629556a8b7c2f7a4c250a925)(class ::clang::CXXRecordDecl  const *, bool ) = &::clang::CXXMethodDecl::getCorrespondingMethodInClass;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_4dfa3c15665154839181f66635aeacc8)() const = &::clang::CXXMethodDecl::getMostRecentDecl;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_1d88cb5e1ba55759b0761ff3c43111ec)() = &::clang::CXXMethodDecl::getMostRecentDecl;
    class ::clang::CXXRecordDecl  * (::clang::CXXMethodDecl::*method_pointer_df0e93c31e3e530c89f24b38410abcd4)() = &::clang::CXXMethodDecl::getParent;
    class ::clang::CXXRecordDecl  const * (::clang::CXXMethodDecl::*method_pointer_4696325fab855711aef34e21f98e373a)() const = &::clang::CXXMethodDecl::getParent;
    class ::clang::QualType  (::clang::CXXMethodDecl::*method_pointer_177cc5e8d6f05069be4e9c18824177e6)(class ::clang::ASTContext  &) const = &::clang::CXXMethodDecl::getThisType;
    unsigned int  (::clang::CXXMethodDecl::*method_pointer_1ebc9392b1cd5f64bda8b791e604ba1f)() const = &::clang::CXXMethodDecl::getTypeQualifiers;
    bool  (::clang::CXXMethodDecl::*method_pointer_8f620ea66e6b528abfa2e1ca4011cb7d)() const = &::clang::CXXMethodDecl::hasInlineBody;
    bool  (::clang::CXXMethodDecl::*method_pointer_93b2559d3f815e91b4220666f028ae4f)() const = &::clang::CXXMethodDecl::isConst;
    bool  (::clang::CXXMethodDecl::*method_pointer_5f611d05659c5f129076c60d8a9b82f6)() const = &::clang::CXXMethodDecl::isCopyAssignmentOperator;
    bool  (::clang::CXXMethodDecl::*method_pointer_0ef1a056348157d89215e3ff1bcb0c04)() const = &::clang::CXXMethodDecl::isInstance;
    bool  (::clang::CXXMethodDecl::*method_pointer_fabf1dbc159755dbbd2cd7ba6d8b3ce5)() const = &::clang::CXXMethodDecl::isLambdaStaticInvoker;
    bool  (::clang::CXXMethodDecl::*method_pointer_6853b63464315f2eb5e87b2b60cd9d1f)() const = &::clang::CXXMethodDecl::isMoveAssignmentOperator;
    bool  (::clang::CXXMethodDecl::*method_pointer_867f84c36223574eaa907cd024f4d7ad)() const = &::clang::CXXMethodDecl::isStatic;
    bool  (::clang::CXXMethodDecl::*method_pointer_55fe88a305515ec293bd45a9fa4c5e13)() const = &::clang::CXXMethodDecl::isUserProvided;
    bool  (::clang::CXXMethodDecl::*method_pointer_65dbfa30f1fa58478f602d19d959e628)() const = &::clang::CXXMethodDecl::isUsualDeallocationFunction;
    bool  (::clang::CXXMethodDecl::*method_pointer_900608d386c15cc88afbd84705248feb)() const = &::clang::CXXMethodDecl::isVirtual;
    bool  (::clang::CXXMethodDecl::*method_pointer_c2f81bc5ff0156d38e7fca6d9fb50451)() const = &::clang::CXXMethodDecl::isVolatile;
    unsigned int  (::clang::CXXMethodDecl::*method_pointer_949856c9998a5119ad13559bfb462bd4)() const = &::clang::CXXMethodDecl::size_overridden_methods;
    boost::python::class_< class ::clang::CXXMethodDecl, autowig::HeldType< class ::clang::CXXMethodDecl >, boost::python::bases< class ::clang::FunctionDecl >, boost::noncopyable > class_7a0922211d1a5f6bb52def66e2db78ad("CXXMethodDecl", "", boost::python::no_init);
    class_7a0922211d1a5f6bb52def66e2db78ad.def("create_deserialized", method_pointer_526abe6c9798556989bfbae94b114cbf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("add_overridden_method", method_pointer_091288a034e15398b6a8e68d306f21ce, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("classof", method_pointer_7a9a4c0ee8285a83a32d014cc3f0a91a, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("classof_kind", method_pointer_4b25505d2b4756de9c6b86ed3229caeb, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_canonical_decl", method_pointer_87ea0743f37254aa9b9121993bdb7d59, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_canonical_decl", method_pointer_3c76ed42fd2f5a838c95c518f5e94285, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_corresponding_method_in_class", method_pointer_861c10645c8b51548e806930048fbf07, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_corresponding_method_in_class", method_pointer_c8336415629556a8b7c2f7a4c250a925, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_most_recent_decl", method_pointer_4dfa3c15665154839181f66635aeacc8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_most_recent_decl", method_pointer_1d88cb5e1ba55759b0761ff3c43111ec, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_parent", method_pointer_df0e93c31e3e530c89f24b38410abcd4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_parent", method_pointer_4696325fab855711aef34e21f98e373a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_this_type", method_pointer_177cc5e8d6f05069be4e9c18824177e6, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_type_qualifiers", method_pointer_1ebc9392b1cd5f64bda8b791e604ba1f, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("has_inline_body", method_pointer_8f620ea66e6b528abfa2e1ca4011cb7d, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_const", method_pointer_93b2559d3f815e91b4220666f028ae4f, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_copy_assignment_operator", method_pointer_5f611d05659c5f129076c60d8a9b82f6, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_instance", method_pointer_0ef1a056348157d89215e3ff1bcb0c04, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_lambda_static_invoker", method_pointer_fabf1dbc159755dbbd2cd7ba6d8b3ce5, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_move_assignment_operator", method_pointer_6853b63464315f2eb5e87b2b60cd9d1f, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_static", method_pointer_867f84c36223574eaa907cd024f4d7ad, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_user_provided", method_pointer_55fe88a305515ec293bd45a9fa4c5e13, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_usual_deallocation_function", method_pointer_65dbfa30f1fa58478f602d19d959e628, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_virtual", method_pointer_900608d386c15cc88afbd84705248feb, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_volatile", method_pointer_c2f81bc5ff0156d38e7fca6d9fb50451, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("size_overridden_methods", method_pointer_949856c9998a5119ad13559bfb462bd4, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("classof_kind");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("create_deserialized");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXMethodDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXMethodDecl >, autowig::HeldType< class ::clang::FunctionDecl > >();
    }

}