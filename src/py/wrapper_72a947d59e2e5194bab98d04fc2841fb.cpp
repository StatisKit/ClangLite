#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_72a947d59e2e5194bab98d04fc2841fb()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    void  (::clang::FieldDecl::*method_pointer_6074205bcbc15b0aad9f5d0f3843fb01)(class ::clang::VariableArrayType  const *) = &::clang::FieldDecl::setCapturedVLAType;
    bool  (::clang::FieldDecl::*method_pointer_bc09db827d3a55c3ae297fc3d28cbbca)() const = &::clang::FieldDecl::isAnonymousStructOrUnion;
    bool  (*method_pointer_23d3af9e0dc757b78fc10d2241c787d0)(class ::clang::Decl  const *) = ::clang::FieldDecl::classof;
    class ::clang::FieldDecl  const * (::clang::FieldDecl::*method_pointer_b077a34a4b6d547c9b9255860ff1a6df)() const = &::clang::FieldDecl::getCanonicalDecl;
    void  (::clang::FieldDecl::*method_pointer_fe8b6dbd0bc351e4bf2ae5df5ab6a9f5)() = &::clang::FieldDecl::removeBitWidth;
    bool  (::clang::FieldDecl::*method_pointer_6420b03b6c4f54e19e7f70db6f2c7c51)() const = &::clang::FieldDecl::isUnnamedBitfield;
    class ::clang::FieldDecl  * (*method_pointer_619dc95e19e659c99c344eb4bbf9b7e8)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FieldDecl::CreateDeserialized;
    bool  (::clang::FieldDecl::*method_pointer_380b6f7eddc65e2888444ba2abe51158)() const = &::clang::FieldDecl::isBitField;
    class ::clang::RecordDecl  const * (::clang::FieldDecl::*method_pointer_64755fe55a5a5261a96440bafead4e13)() const = &::clang::FieldDecl::getParent;
    bool  (::clang::FieldDecl::*method_pointer_80e5944ce4a15db8a3b8305cc1a4bdd8)() const = &::clang::FieldDecl::hasInClassInitializer;
    bool  (::clang::FieldDecl::*method_pointer_87e10a2c8f535112bae2d8963b7b59a8)() const = &::clang::FieldDecl::hasCapturedVLAType;
    bool  (*method_pointer_3362bf65135851e096bf767c4fe190f9)(enum ::clang::Decl::Kind ) = ::clang::FieldDecl::classofKind;
    class ::clang::RecordDecl  * (::clang::FieldDecl::*method_pointer_f312a5a74c7f54d3a70b9bde6592dde7)() = &::clang::FieldDecl::getParent;
    unsigned int  (::clang::FieldDecl::*method_pointer_55c59a78a47256478adb42ddd287b98d)() const = &::clang::FieldDecl::getFieldIndex;
    class ::clang::FieldDecl  * (::clang::FieldDecl::*method_pointer_a9402a01fd5a551bb366934f9b926cc5)() = &::clang::FieldDecl::getCanonicalDecl;
    void  (::clang::FieldDecl::*method_pointer_4b927f412dbb5f36a59d47a172fa1aa9)() = &::clang::FieldDecl::removeInClassInitializer;
    class ::clang::VariableArrayType  const * (::clang::FieldDecl::*method_pointer_795119fb590253828c0f6ab58a1bc940)() const = &::clang::FieldDecl::getCapturedVLAType;
    bool  (::clang::FieldDecl::*method_pointer_52b3c9c418c45f899d08af5f67290988)() const = &::clang::FieldDecl::isMutable;
    boost::python::class_< class ::clang::FieldDecl, autowig::HeldType< class ::clang::FieldDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_72a947d59e2e5194bab98d04fc2841fb("FieldDecl", "", boost::python::no_init);
    class_72a947d59e2e5194bab98d04fc2841fb.def("set_captured_vla_type", method_pointer_6074205bcbc15b0aad9f5d0f3843fb01, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_anonymous_struct_or_union", method_pointer_bc09db827d3a55c3ae297fc3d28cbbca, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof", method_pointer_23d3af9e0dc757b78fc10d2241c787d0, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_b077a34a4b6d547c9b9255860ff1a6df, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_bit_width", method_pointer_fe8b6dbd0bc351e4bf2ae5df5ab6a9f5, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_unnamed_bitfield", method_pointer_6420b03b6c4f54e19e7f70db6f2c7c51, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("create_deserialized", method_pointer_619dc95e19e659c99c344eb4bbf9b7e8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_bit_field", method_pointer_380b6f7eddc65e2888444ba2abe51158, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_64755fe55a5a5261a96440bafead4e13, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_in_class_initializer", method_pointer_80e5944ce4a15db8a3b8305cc1a4bdd8, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_captured_vla_type", method_pointer_87e10a2c8f535112bae2d8963b7b59a8, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof_kind", method_pointer_3362bf65135851e096bf767c4fe190f9, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_f312a5a74c7f54d3a70b9bde6592dde7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_field_index", method_pointer_55c59a78a47256478adb42ddd287b98d, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_a9402a01fd5a551bb366934f9b926cc5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_in_class_initializer", method_pointer_4b927f412dbb5f36a59d47a172fa1aa9, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_captured_vla_type", method_pointer_795119fb590253828c0f6ab58a1bc940, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_mutable", method_pointer_52b3c9c418c45f899d08af5f67290988, "");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof_kind");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("create_deserialized");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FieldDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FieldDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}