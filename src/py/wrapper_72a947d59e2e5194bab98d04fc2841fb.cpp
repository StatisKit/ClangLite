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
    class ::clang::FieldDecl  * (*method_pointer_8b0ab5ddef6457e5b9818c9b2ee5e9d3)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FieldDecl::CreateDeserialized;
    bool  (*method_pointer_24c933c9f10a5d589168e71afb64d364)(class ::clang::Decl  const *) = ::clang::FieldDecl::classof;
    bool  (*method_pointer_557356c446fd5e668275ffa6337d3802)(enum ::clang::Decl::Kind ) = ::clang::FieldDecl::classofKind;
    class ::clang::FieldDecl  const * (::clang::FieldDecl::*method_pointer_b48a3e2d795c5383aadecfbe591d4495)() const = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::FieldDecl  * (::clang::FieldDecl::*method_pointer_c10ae9a9af1e50278edf7ffa9eb3de0c)() = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::VariableArrayType  const * (::clang::FieldDecl::*method_pointer_df72cede32e55fd693c9a6f1f5304716)() const = &::clang::FieldDecl::getCapturedVLAType;
    unsigned int  (::clang::FieldDecl::*method_pointer_66934669eb4e5976930ad97a8212ebaf)() const = &::clang::FieldDecl::getFieldIndex;
    class ::clang::RecordDecl  const * (::clang::FieldDecl::*method_pointer_c9d6ec041f2a5e16813dafbff2525ab0)() const = &::clang::FieldDecl::getParent;
    class ::clang::RecordDecl  * (::clang::FieldDecl::*method_pointer_28948771aa76507ca0cfe20597c22628)() = &::clang::FieldDecl::getParent;
    bool  (::clang::FieldDecl::*method_pointer_c1354a8173a05eff9f9c470e14abe4e1)() const = &::clang::FieldDecl::hasCapturedVLAType;
    bool  (::clang::FieldDecl::*method_pointer_aeee5f0d1715564ea29023ca25c05f90)() const = &::clang::FieldDecl::hasInClassInitializer;
    bool  (::clang::FieldDecl::*method_pointer_be08e521e67858ceaf7f5de34c8e456d)() const = &::clang::FieldDecl::isAnonymousStructOrUnion;
    bool  (::clang::FieldDecl::*method_pointer_25b3c038452255aead62fb8eee6de5eb)() const = &::clang::FieldDecl::isBitField;
    bool  (::clang::FieldDecl::*method_pointer_7db586e9710955f69b142e6dfb3511ff)() const = &::clang::FieldDecl::isMutable;
    bool  (::clang::FieldDecl::*method_pointer_c1f82504163f54188007b9c46a7c557c)() const = &::clang::FieldDecl::isUnnamedBitfield;
    void  (::clang::FieldDecl::*method_pointer_a7811fc686615ce0a30e3fdef0cbc787)() = &::clang::FieldDecl::removeBitWidth;
    void  (::clang::FieldDecl::*method_pointer_fcff28694d2c5e5b85ff364c9e66beff)() = &::clang::FieldDecl::removeInClassInitializer;
    void  (::clang::FieldDecl::*method_pointer_fbe9333375db5c9f8768ddaa86e856f5)(class ::clang::VariableArrayType  const *) = &::clang::FieldDecl::setCapturedVLAType;
    boost::python::class_< class ::clang::FieldDecl, autowig::HeldType< class ::clang::FieldDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_72a947d59e2e5194bab98d04fc2841fb("FieldDecl", "", boost::python::no_init);
    class_72a947d59e2e5194bab98d04fc2841fb.def("create_deserialized", method_pointer_8b0ab5ddef6457e5b9818c9b2ee5e9d3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof", method_pointer_24c933c9f10a5d589168e71afb64d364, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof_kind", method_pointer_557356c446fd5e668275ffa6337d3802, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_b48a3e2d795c5383aadecfbe591d4495, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_c10ae9a9af1e50278edf7ffa9eb3de0c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_captured_vla_type", method_pointer_df72cede32e55fd693c9a6f1f5304716, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_field_index", method_pointer_66934669eb4e5976930ad97a8212ebaf, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_c9d6ec041f2a5e16813dafbff2525ab0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_28948771aa76507ca0cfe20597c22628, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_captured_vla_type", method_pointer_c1354a8173a05eff9f9c470e14abe4e1, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_in_class_initializer", method_pointer_aeee5f0d1715564ea29023ca25c05f90, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_anonymous_struct_or_union", method_pointer_be08e521e67858ceaf7f5de34c8e456d, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_bit_field", method_pointer_25b3c038452255aead62fb8eee6de5eb, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_mutable", method_pointer_7db586e9710955f69b142e6dfb3511ff, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_unnamed_bitfield", method_pointer_c1f82504163f54188007b9c46a7c557c, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_bit_width", method_pointer_a7811fc686615ce0a30e3fdef0cbc787, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_in_class_initializer", method_pointer_fcff28694d2c5e5b85ff364c9e66beff, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("set_captured_vla_type", method_pointer_fbe9333375db5c9f8768ddaa86e856f5, "");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof_kind");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("create_deserialized");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FieldDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FieldDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}