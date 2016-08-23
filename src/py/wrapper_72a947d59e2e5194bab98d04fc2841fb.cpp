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
    class ::clang::FieldDecl  * (*method_pointer_6592bc74f78058e1acf323bacf2970f5)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FieldDecl::CreateDeserialized;
    bool  (*method_pointer_dbdb0a135d2f599898f9a9dc83461f06)(class ::clang::Decl  const *) = ::clang::FieldDecl::classof;
    bool  (*method_pointer_5e8b91cd58d7504a9432ebfa623c282a)(enum ::clang::Decl::Kind ) = ::clang::FieldDecl::classofKind;
    class ::clang::FieldDecl  const * (::clang::FieldDecl::*method_pointer_bb942d11363a540dbdc45aa1ef7096a2)() const = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::FieldDecl  * (::clang::FieldDecl::*method_pointer_38404bf17dd85a6181cea9219f1fdfaf)() = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::VariableArrayType  const * (::clang::FieldDecl::*method_pointer_e1eb451126de5d42a279cf8b200f3a20)() const = &::clang::FieldDecl::getCapturedVLAType;
    unsigned int  (::clang::FieldDecl::*method_pointer_8242839b49dc54c7b7cd4b57f13b8b58)() const = &::clang::FieldDecl::getFieldIndex;
    class ::clang::RecordDecl  * (::clang::FieldDecl::*method_pointer_d07bf0b65a775ee2950b6dd3fdd25a22)() = &::clang::FieldDecl::getParent;
    class ::clang::RecordDecl  const * (::clang::FieldDecl::*method_pointer_7a67930d39ab53ea929d6fda5eedaedb)() const = &::clang::FieldDecl::getParent;
    bool  (::clang::FieldDecl::*method_pointer_2c9913c4f3895139accfb49258c0d48a)() const = &::clang::FieldDecl::hasCapturedVLAType;
    bool  (::clang::FieldDecl::*method_pointer_ba45c8a3cb10580d99b64e515c8d95eb)() const = &::clang::FieldDecl::hasInClassInitializer;
    bool  (::clang::FieldDecl::*method_pointer_1653dc962d495c86914e5abcd5e4f837)() const = &::clang::FieldDecl::isAnonymousStructOrUnion;
    bool  (::clang::FieldDecl::*method_pointer_c1a64cc234635df6b658a6eae60937c2)() const = &::clang::FieldDecl::isBitField;
    bool  (::clang::FieldDecl::*method_pointer_b0ec959fca39598898e019c561ea43df)() const = &::clang::FieldDecl::isMutable;
    bool  (::clang::FieldDecl::*method_pointer_a67ffc0863ae5cf0b10e66fc612766d9)() const = &::clang::FieldDecl::isUnnamedBitfield;
    void  (::clang::FieldDecl::*method_pointer_844bd261f2185e22840636e31fb6357e)() = &::clang::FieldDecl::removeBitWidth;
    void  (::clang::FieldDecl::*method_pointer_8f753483fe2554da9d138800b59f8435)() = &::clang::FieldDecl::removeInClassInitializer;
    void  (::clang::FieldDecl::*method_pointer_fbb7d33f34085f04b83535d3f7f749d2)(class ::clang::VariableArrayType  const *) = &::clang::FieldDecl::setCapturedVLAType;
    boost::python::class_< class ::clang::FieldDecl, autowig::HeldType< class ::clang::FieldDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_72a947d59e2e5194bab98d04fc2841fb("FieldDecl", "", boost::python::no_init);
    class_72a947d59e2e5194bab98d04fc2841fb.def("create_deserialized", method_pointer_6592bc74f78058e1acf323bacf2970f5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof", method_pointer_dbdb0a135d2f599898f9a9dc83461f06, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof_kind", method_pointer_5e8b91cd58d7504a9432ebfa623c282a, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_bb942d11363a540dbdc45aa1ef7096a2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_38404bf17dd85a6181cea9219f1fdfaf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_captured_vla_type", method_pointer_e1eb451126de5d42a279cf8b200f3a20, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_field_index", method_pointer_8242839b49dc54c7b7cd4b57f13b8b58, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_d07bf0b65a775ee2950b6dd3fdd25a22, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_7a67930d39ab53ea929d6fda5eedaedb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_captured_vla_type", method_pointer_2c9913c4f3895139accfb49258c0d48a, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_in_class_initializer", method_pointer_ba45c8a3cb10580d99b64e515c8d95eb, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_anonymous_struct_or_union", method_pointer_1653dc962d495c86914e5abcd5e4f837, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_bit_field", method_pointer_c1a64cc234635df6b658a6eae60937c2, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_mutable", method_pointer_b0ec959fca39598898e019c561ea43df, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_unnamed_bitfield", method_pointer_a67ffc0863ae5cf0b10e66fc612766d9, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_bit_width", method_pointer_844bd261f2185e22840636e31fb6357e, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_in_class_initializer", method_pointer_8f753483fe2554da9d138800b59f8435, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("set_captured_vla_type", method_pointer_fbb7d33f34085f04b83535d3f7f749d2, "");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof_kind");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("create_deserialized");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FieldDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FieldDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}