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
    class ::clang::FieldDecl  * (*method_pointer_170a9da5da72550b8159ff3643cea9d9)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FieldDecl::CreateDeserialized;
    bool  (*method_pointer_0133588fb0f5553a8e637c4d2e7c1ca0)(class ::clang::Decl  const *) = ::clang::FieldDecl::classof;
    bool  (*method_pointer_6b166f4028ec5a25b11e2e8d9c940374)(enum ::clang::Decl::Kind ) = ::clang::FieldDecl::classofKind;
    class ::clang::FieldDecl  const * (::clang::FieldDecl::*method_pointer_ce4a450ddab3578bb8a2d8631df1bfbd)() const = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::FieldDecl  * (::clang::FieldDecl::*method_pointer_b4ed22d4e5c150b4bdcaab857b72d9e9)() = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::VariableArrayType  const * (::clang::FieldDecl::*method_pointer_a7ffa30713e15000a3af1d2e14b1570f)() const = &::clang::FieldDecl::getCapturedVLAType;
    unsigned int  (::clang::FieldDecl::*method_pointer_47835eb4637d5475b80e38a9185d9c99)() const = &::clang::FieldDecl::getFieldIndex;
    class ::clang::RecordDecl  const * (::clang::FieldDecl::*method_pointer_96f9f75e56765ac694a2cfc87094a38a)() const = &::clang::FieldDecl::getParent;
    class ::clang::RecordDecl  * (::clang::FieldDecl::*method_pointer_320ca2ac88ac57a4b782ca9f56e610a8)() = &::clang::FieldDecl::getParent;
    bool  (::clang::FieldDecl::*method_pointer_91a75865a4095ebdada9c0e598ef7e36)() const = &::clang::FieldDecl::hasCapturedVLAType;
    bool  (::clang::FieldDecl::*method_pointer_97ee087f29975551bf2b6651ad10d4cc)() const = &::clang::FieldDecl::hasInClassInitializer;
    bool  (::clang::FieldDecl::*method_pointer_e00c0e069fb750e6a07da93d07a51583)() const = &::clang::FieldDecl::isAnonymousStructOrUnion;
    bool  (::clang::FieldDecl::*method_pointer_b49e9b5057db58e291175008a5c8bcb7)() const = &::clang::FieldDecl::isBitField;
    bool  (::clang::FieldDecl::*method_pointer_fb1f8f20a3a25b30b572115d8b836551)() const = &::clang::FieldDecl::isMutable;
    bool  (::clang::FieldDecl::*method_pointer_0d58f339c6f25693ac75a4601fef7a95)() const = &::clang::FieldDecl::isUnnamedBitfield;
    void  (::clang::FieldDecl::*method_pointer_017b0198486f5b1a81080973ff39a7ef)() = &::clang::FieldDecl::removeBitWidth;
    void  (::clang::FieldDecl::*method_pointer_e093bd5c77cc5083b93cca382b7b3611)() = &::clang::FieldDecl::removeInClassInitializer;
    void  (::clang::FieldDecl::*method_pointer_c0655ebdc9c550d9a40e7986e63d9ba4)(class ::clang::VariableArrayType  const *) = &::clang::FieldDecl::setCapturedVLAType;
    boost::python::class_< class ::clang::FieldDecl, autowig::HeldType< class ::clang::FieldDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_72a947d59e2e5194bab98d04fc2841fb("FieldDecl", "", boost::python::no_init);
    class_72a947d59e2e5194bab98d04fc2841fb.def("create_deserialized", method_pointer_170a9da5da72550b8159ff3643cea9d9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof", method_pointer_0133588fb0f5553a8e637c4d2e7c1ca0, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof_kind", method_pointer_6b166f4028ec5a25b11e2e8d9c940374, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_ce4a450ddab3578bb8a2d8631df1bfbd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_b4ed22d4e5c150b4bdcaab857b72d9e9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_captured_vla_type", method_pointer_a7ffa30713e15000a3af1d2e14b1570f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_field_index", method_pointer_47835eb4637d5475b80e38a9185d9c99, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_96f9f75e56765ac694a2cfc87094a38a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_320ca2ac88ac57a4b782ca9f56e610a8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_captured_vla_type", method_pointer_91a75865a4095ebdada9c0e598ef7e36, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_in_class_initializer", method_pointer_97ee087f29975551bf2b6651ad10d4cc, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_anonymous_struct_or_union", method_pointer_e00c0e069fb750e6a07da93d07a51583, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_bit_field", method_pointer_b49e9b5057db58e291175008a5c8bcb7, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_mutable", method_pointer_fb1f8f20a3a25b30b572115d8b836551, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_unnamed_bitfield", method_pointer_0d58f339c6f25693ac75a4601fef7a95, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_bit_width", method_pointer_017b0198486f5b1a81080973ff39a7ef, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_in_class_initializer", method_pointer_e093bd5c77cc5083b93cca382b7b3611, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("set_captured_vla_type", method_pointer_c0655ebdc9c550d9a40e7986e63d9ba4, "");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof_kind");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("create_deserialized");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FieldDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FieldDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}