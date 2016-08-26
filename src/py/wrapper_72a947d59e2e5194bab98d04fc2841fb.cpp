#include "_clanglite.h"


namespace autowig
{
}


void wrapper_72a947d59e2e5194bab98d04fc2841fb()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::FieldDecl  * (*method_pointer_9f27bce4249052d5a242d80dcae771d5)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FieldDecl::CreateDeserialized;
    bool  (*method_pointer_556a2c240afd5e12a7d96b75ce2e6e7a)(class ::clang::Decl  const *) = ::clang::FieldDecl::classof;
    bool  (*method_pointer_057fc19d628e55de836edecbbce56daa)(enum ::clang::Decl::Kind ) = ::clang::FieldDecl::classofKind;
    class ::clang::FieldDecl  const * (::clang::FieldDecl::*method_pointer_ea88f4addf7a5835a273a4ff7b0e69f3)() const = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::FieldDecl  * (::clang::FieldDecl::*method_pointer_238f7b066e685dd8868a7978e0a7283c)() = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::VariableArrayType  const * (::clang::FieldDecl::*method_pointer_a2da3586d5145b4ab951f10463c547c0)() const = &::clang::FieldDecl::getCapturedVLAType;
    unsigned int  (::clang::FieldDecl::*method_pointer_2e81c22aee145bd0a1227a05791ed913)() const = &::clang::FieldDecl::getFieldIndex;
    class ::clang::RecordDecl  * (::clang::FieldDecl::*method_pointer_0b87ee04c9d0573c823f72161df3d603)() = &::clang::FieldDecl::getParent;
    class ::clang::RecordDecl  const * (::clang::FieldDecl::*method_pointer_2a0450370a7e562ba05e9e73252fe7c8)() const = &::clang::FieldDecl::getParent;
    bool  (::clang::FieldDecl::*method_pointer_fbf9939c918d5ef083520f0667c0fcbe)() const = &::clang::FieldDecl::hasCapturedVLAType;
    bool  (::clang::FieldDecl::*method_pointer_705b73001a465114a3e59611761a7444)() const = &::clang::FieldDecl::hasInClassInitializer;
    bool  (::clang::FieldDecl::*method_pointer_41ae5babc57257f29b67b6e79ffe0b99)() const = &::clang::FieldDecl::isAnonymousStructOrUnion;
    bool  (::clang::FieldDecl::*method_pointer_d1386516f3015434b385fe7ece3b955e)() const = &::clang::FieldDecl::isBitField;
    bool  (::clang::FieldDecl::*method_pointer_b1d2624f36cd5394b93eb64933922172)() const = &::clang::FieldDecl::isMutable;
    bool  (::clang::FieldDecl::*method_pointer_7390b61500ee5e498b19e18affbf260c)() const = &::clang::FieldDecl::isUnnamedBitfield;
    void  (::clang::FieldDecl::*method_pointer_3d82e27c576f5210b43e4b8504bd9521)() = &::clang::FieldDecl::removeBitWidth;
    void  (::clang::FieldDecl::*method_pointer_897435d0867e5041aa3592f7ca2875aa)() = &::clang::FieldDecl::removeInClassInitializer;
    void  (::clang::FieldDecl::*method_pointer_2cb55258b16056cb91a83e52f760a3d8)(class ::clang::VariableArrayType  const *) = &::clang::FieldDecl::setCapturedVLAType;
    boost::python::class_< class ::clang::FieldDecl, autowig::HeldType< class ::clang::FieldDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_72a947d59e2e5194bab98d04fc2841fb("FieldDecl", "", boost::python::no_init);
    class_72a947d59e2e5194bab98d04fc2841fb.def("create_deserialized", method_pointer_9f27bce4249052d5a242d80dcae771d5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof", method_pointer_556a2c240afd5e12a7d96b75ce2e6e7a, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof_kind", method_pointer_057fc19d628e55de836edecbbce56daa, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_ea88f4addf7a5835a273a4ff7b0e69f3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_238f7b066e685dd8868a7978e0a7283c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_captured_vla_type", method_pointer_a2da3586d5145b4ab951f10463c547c0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_field_index", method_pointer_2e81c22aee145bd0a1227a05791ed913, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_0b87ee04c9d0573c823f72161df3d603, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_2a0450370a7e562ba05e9e73252fe7c8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_captured_vla_type", method_pointer_fbf9939c918d5ef083520f0667c0fcbe, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_in_class_initializer", method_pointer_705b73001a465114a3e59611761a7444, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_anonymous_struct_or_union", method_pointer_41ae5babc57257f29b67b6e79ffe0b99, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_bit_field", method_pointer_d1386516f3015434b385fe7ece3b955e, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_mutable", method_pointer_b1d2624f36cd5394b93eb64933922172, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_unnamed_bitfield", method_pointer_7390b61500ee5e498b19e18affbf260c, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_bit_width", method_pointer_3d82e27c576f5210b43e4b8504bd9521, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_in_class_initializer", method_pointer_897435d0867e5041aa3592f7ca2875aa, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("set_captured_vla_type", method_pointer_2cb55258b16056cb91a83e52f760a3d8, "");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof_kind");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("create_deserialized");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FieldDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FieldDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}