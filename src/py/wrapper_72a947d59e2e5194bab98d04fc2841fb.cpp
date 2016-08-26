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
    class ::clang::FieldDecl  * (*method_pointer_22b29bba885059308a6dff8827d793ce)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FieldDecl::CreateDeserialized;
    bool  (*method_pointer_98e81d8a553e5326bb107bb5481ef22a)(class ::clang::Decl  const *) = ::clang::FieldDecl::classof;
    bool  (*method_pointer_e3a7ba9d00075094952414319f3867d9)(enum ::clang::Decl::Kind ) = ::clang::FieldDecl::classofKind;
    class ::clang::FieldDecl  * (::clang::FieldDecl::*method_pointer_a494cee76c6350e881e1652ad2ddc1ce)() = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::FieldDecl  const * (::clang::FieldDecl::*method_pointer_730ad27f59d85e39a02362814b7e1f15)() const = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::VariableArrayType  const * (::clang::FieldDecl::*method_pointer_1683e18f67d95da29f409313b9c7b6dd)() const = &::clang::FieldDecl::getCapturedVLAType;
    unsigned int  (::clang::FieldDecl::*method_pointer_91fc3b7a85ad5aaea3a06ded79de5e86)() const = &::clang::FieldDecl::getFieldIndex;
    class ::clang::RecordDecl  * (::clang::FieldDecl::*method_pointer_1cf876891b4258d899a4fbd369b0804b)() = &::clang::FieldDecl::getParent;
    class ::clang::RecordDecl  const * (::clang::FieldDecl::*method_pointer_efbe648ff1b85ca7b35e6e256598ec5b)() const = &::clang::FieldDecl::getParent;
    bool  (::clang::FieldDecl::*method_pointer_eadf0aceb95657048afe469aac2e788a)() const = &::clang::FieldDecl::hasCapturedVLAType;
    bool  (::clang::FieldDecl::*method_pointer_d9bc7180b23c59cfa8eb8f2b85e0530c)() const = &::clang::FieldDecl::hasInClassInitializer;
    bool  (::clang::FieldDecl::*method_pointer_cc3182717f01522786628e7ceb7a1fcb)() const = &::clang::FieldDecl::isAnonymousStructOrUnion;
    bool  (::clang::FieldDecl::*method_pointer_958b44bb38aa591bb6ce84de1e77d04e)() const = &::clang::FieldDecl::isBitField;
    bool  (::clang::FieldDecl::*method_pointer_64a1986ad0f55e2f8a1addd37af55f79)() const = &::clang::FieldDecl::isMutable;
    bool  (::clang::FieldDecl::*method_pointer_6d71db997dc55e5d80f2c336d62e855f)() const = &::clang::FieldDecl::isUnnamedBitfield;
    void  (::clang::FieldDecl::*method_pointer_a2aed3345d8954cebf8c8921ac3ca2b6)() = &::clang::FieldDecl::removeBitWidth;
    void  (::clang::FieldDecl::*method_pointer_c62dd1ae978f5a44bc7f2f0b68c19978)() = &::clang::FieldDecl::removeInClassInitializer;
    void  (::clang::FieldDecl::*method_pointer_2125b53a14e05cce874860f5cfcb414f)(class ::clang::VariableArrayType  const *) = &::clang::FieldDecl::setCapturedVLAType;
    boost::python::class_< class ::clang::FieldDecl, autowig::HeldType< class ::clang::FieldDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_72a947d59e2e5194bab98d04fc2841fb("FieldDecl", "", boost::python::no_init);
    class_72a947d59e2e5194bab98d04fc2841fb.def("create_deserialized", method_pointer_22b29bba885059308a6dff8827d793ce, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof", method_pointer_98e81d8a553e5326bb107bb5481ef22a, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof_kind", method_pointer_e3a7ba9d00075094952414319f3867d9, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_a494cee76c6350e881e1652ad2ddc1ce, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_730ad27f59d85e39a02362814b7e1f15, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_captured_vla_type", method_pointer_1683e18f67d95da29f409313b9c7b6dd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_field_index", method_pointer_91fc3b7a85ad5aaea3a06ded79de5e86, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_1cf876891b4258d899a4fbd369b0804b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_efbe648ff1b85ca7b35e6e256598ec5b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_captured_vla_type", method_pointer_eadf0aceb95657048afe469aac2e788a, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_in_class_initializer", method_pointer_d9bc7180b23c59cfa8eb8f2b85e0530c, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_anonymous_struct_or_union", method_pointer_cc3182717f01522786628e7ceb7a1fcb, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_bit_field", method_pointer_958b44bb38aa591bb6ce84de1e77d04e, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_mutable", method_pointer_64a1986ad0f55e2f8a1addd37af55f79, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_unnamed_bitfield", method_pointer_6d71db997dc55e5d80f2c336d62e855f, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_bit_width", method_pointer_a2aed3345d8954cebf8c8921ac3ca2b6, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_in_class_initializer", method_pointer_c62dd1ae978f5a44bc7f2f0b68c19978, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("set_captured_vla_type", method_pointer_2125b53a14e05cce874860f5cfcb414f, "");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof_kind");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("create_deserialized");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FieldDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FieldDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}