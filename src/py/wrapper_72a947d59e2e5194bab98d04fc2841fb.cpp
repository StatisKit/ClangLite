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
    class ::clang::FieldDecl  * (*method_pointer_df08f4dcd87e59a1b5879e1c4cc58986)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FieldDecl::CreateDeserialized;
    bool  (*method_pointer_ca269cb5363154088a0b22ce94562064)(class ::clang::Decl  const *) = ::clang::FieldDecl::classof;
    bool  (*method_pointer_8334910bbe625f00811fcd7b0ba24dfa)(enum ::clang::Decl::Kind ) = ::clang::FieldDecl::classofKind;
    class ::clang::FieldDecl  * (::clang::FieldDecl::*method_pointer_dcf0a1ec23785694b940b3e69bd488fe)() = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::FieldDecl  const * (::clang::FieldDecl::*method_pointer_fb0c690f6c605b10b703810ddd54c828)() const = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::VariableArrayType  const * (::clang::FieldDecl::*method_pointer_ba5131795bf5560d9b8fc23938ae2793)() const = &::clang::FieldDecl::getCapturedVLAType;
    unsigned int  (::clang::FieldDecl::*method_pointer_725144124f655cc194a25f4983724983)() const = &::clang::FieldDecl::getFieldIndex;
    class ::clang::RecordDecl  * (::clang::FieldDecl::*method_pointer_6c17c1be09ac575eadfbc517165770da)() = &::clang::FieldDecl::getParent;
    class ::clang::RecordDecl  const * (::clang::FieldDecl::*method_pointer_deba4304908e56779834953f124d0435)() const = &::clang::FieldDecl::getParent;
    bool  (::clang::FieldDecl::*method_pointer_6d009e35b1fe5762b699bca2d93bf6f7)() const = &::clang::FieldDecl::hasCapturedVLAType;
    bool  (::clang::FieldDecl::*method_pointer_93c8febfa93c55d3a291049a57efcb2f)() const = &::clang::FieldDecl::hasInClassInitializer;
    bool  (::clang::FieldDecl::*method_pointer_e905d5871f9056538d180364cbb73662)() const = &::clang::FieldDecl::isAnonymousStructOrUnion;
    bool  (::clang::FieldDecl::*method_pointer_f069d18dd37651da80015c23f22c9c9a)() const = &::clang::FieldDecl::isBitField;
    bool  (::clang::FieldDecl::*method_pointer_52a3baaacc9b5630993134e61d2829f4)() const = &::clang::FieldDecl::isMutable;
    bool  (::clang::FieldDecl::*method_pointer_4ccf334cb12b50a9b6cded884bb72182)() const = &::clang::FieldDecl::isUnnamedBitfield;
    void  (::clang::FieldDecl::*method_pointer_155b90d1b8aa5f8084e9b309bfa6398a)() = &::clang::FieldDecl::removeBitWidth;
    void  (::clang::FieldDecl::*method_pointer_b3995ef0f41c585a82e61ff8dc7f40af)() = &::clang::FieldDecl::removeInClassInitializer;
    void  (::clang::FieldDecl::*method_pointer_25f463e633fd59ad83e28f58de82a15e)(class ::clang::VariableArrayType  const *) = &::clang::FieldDecl::setCapturedVLAType;
    boost::python::class_< class ::clang::FieldDecl, autowig::HeldType< class ::clang::FieldDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_72a947d59e2e5194bab98d04fc2841fb("FieldDecl", "", boost::python::no_init);
    class_72a947d59e2e5194bab98d04fc2841fb.def("create_deserialized", method_pointer_df08f4dcd87e59a1b5879e1c4cc58986, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof", method_pointer_ca269cb5363154088a0b22ce94562064, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof_kind", method_pointer_8334910bbe625f00811fcd7b0ba24dfa, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_dcf0a1ec23785694b940b3e69bd488fe, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_fb0c690f6c605b10b703810ddd54c828, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_captured_vla_type", method_pointer_ba5131795bf5560d9b8fc23938ae2793, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_field_index", method_pointer_725144124f655cc194a25f4983724983, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_6c17c1be09ac575eadfbc517165770da, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_deba4304908e56779834953f124d0435, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_captured_vla_type", method_pointer_6d009e35b1fe5762b699bca2d93bf6f7, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_in_class_initializer", method_pointer_93c8febfa93c55d3a291049a57efcb2f, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_anonymous_struct_or_union", method_pointer_e905d5871f9056538d180364cbb73662, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_bit_field", method_pointer_f069d18dd37651da80015c23f22c9c9a, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_mutable", method_pointer_52a3baaacc9b5630993134e61d2829f4, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_unnamed_bitfield", method_pointer_4ccf334cb12b50a9b6cded884bb72182, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_bit_width", method_pointer_155b90d1b8aa5f8084e9b309bfa6398a, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_in_class_initializer", method_pointer_b3995ef0f41c585a82e61ff8dc7f40af, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("set_captured_vla_type", method_pointer_25f463e633fd59ad83e28f58de82a15e, "");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof_kind");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("create_deserialized");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FieldDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FieldDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}