#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_72a947d59e2e5194bab98d04fc2841fb()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::FieldDecl  * (*method_pointer_621fe34a7e6a5fea9d9f011dc995a7ff)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FieldDecl::CreateDeserialized;
    bool  (*method_pointer_c580671281d656bfaea7452c75929945)(class ::clang::Decl  const *) = ::clang::FieldDecl::classof;
    bool  (*method_pointer_f3582e50b7b45a739e4cbbb46dc6e398)(enum ::clang::Decl::Kind ) = ::clang::FieldDecl::classofKind;
    class ::clang::FieldDecl  * (::clang::FieldDecl::*method_pointer_9d9c3f43dd475506b713bd45703e5b57)() = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::FieldDecl  const * (::clang::FieldDecl::*method_pointer_8c24b888993f5875a816b75b93ab2bc7)() const = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::VariableArrayType  const * (::clang::FieldDecl::*method_pointer_5c77a9812be35f1c90ae730facd232ac)() const = &::clang::FieldDecl::getCapturedVLAType;
    unsigned int  (::clang::FieldDecl::*method_pointer_aef289b5b25a56d69b224805daab632e)() const = &::clang::FieldDecl::getFieldIndex;
    class ::clang::RecordDecl  * (::clang::FieldDecl::*method_pointer_4d16417f7d7151f9a38fb7a633c76048)() = &::clang::FieldDecl::getParent;
    class ::clang::RecordDecl  const * (::clang::FieldDecl::*method_pointer_b9609cde7871559db0285c3b6ae43724)() const = &::clang::FieldDecl::getParent;
    bool  (::clang::FieldDecl::*method_pointer_90f7cbe3cdb955cea454b6488436a69d)() const = &::clang::FieldDecl::hasCapturedVLAType;
    bool  (::clang::FieldDecl::*method_pointer_43f6a25ba7e15351a61fd17e94182013)() const = &::clang::FieldDecl::hasInClassInitializer;
    bool  (::clang::FieldDecl::*method_pointer_0c722be6c4265b0da3c6f4d34f5e5ce3)() const = &::clang::FieldDecl::isAnonymousStructOrUnion;
    bool  (::clang::FieldDecl::*method_pointer_4d2858d552c053a7a0eb36677519044f)() const = &::clang::FieldDecl::isBitField;
    bool  (::clang::FieldDecl::*method_pointer_f1ea480298e153dfb1bcbfe8cee0e9b4)() const = &::clang::FieldDecl::isMutable;
    bool  (::clang::FieldDecl::*method_pointer_394cb0b78f6857949e17222d5818dc77)() const = &::clang::FieldDecl::isUnnamedBitfield;
    void  (::clang::FieldDecl::*method_pointer_52c77dfbe44053b4a5ebc999d7d56458)() = &::clang::FieldDecl::removeBitWidth;
    void  (::clang::FieldDecl::*method_pointer_119f7c9a7c2a5ebd9c7d3d3af7c18bdd)() = &::clang::FieldDecl::removeInClassInitializer;
    void  (::clang::FieldDecl::*method_pointer_30eb8af32ad45f1ea0dd550b1c3aa36b)(class ::clang::VariableArrayType  const *) = &::clang::FieldDecl::setCapturedVLAType;
    boost::python::class_< class ::clang::FieldDecl, autowig::HeldType< class ::clang::FieldDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_72a947d59e2e5194bab98d04fc2841fb("FieldDecl", "", boost::python::no_init);
    class_72a947d59e2e5194bab98d04fc2841fb.def("create_deserialized", method_pointer_621fe34a7e6a5fea9d9f011dc995a7ff, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof", method_pointer_c580671281d656bfaea7452c75929945, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof_kind", method_pointer_f3582e50b7b45a739e4cbbb46dc6e398, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_9d9c3f43dd475506b713bd45703e5b57, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_8c24b888993f5875a816b75b93ab2bc7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_captured_vla_type", method_pointer_5c77a9812be35f1c90ae730facd232ac, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_field_index", method_pointer_aef289b5b25a56d69b224805daab632e, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_4d16417f7d7151f9a38fb7a633c76048, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_b9609cde7871559db0285c3b6ae43724, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_captured_vla_type", method_pointer_90f7cbe3cdb955cea454b6488436a69d, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_in_class_initializer", method_pointer_43f6a25ba7e15351a61fd17e94182013, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_anonymous_struct_or_union", method_pointer_0c722be6c4265b0da3c6f4d34f5e5ce3, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_bit_field", method_pointer_4d2858d552c053a7a0eb36677519044f, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_mutable", method_pointer_f1ea480298e153dfb1bcbfe8cee0e9b4, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_unnamed_bitfield", method_pointer_394cb0b78f6857949e17222d5818dc77, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_bit_width", method_pointer_52c77dfbe44053b4a5ebc999d7d56458, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_in_class_initializer", method_pointer_119f7c9a7c2a5ebd9c7d3d3af7c18bdd, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("set_captured_vla_type", method_pointer_30eb8af32ad45f1ea0dd550b1c3aa36b, "");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof_kind");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("create_deserialized");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FieldDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FieldDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}