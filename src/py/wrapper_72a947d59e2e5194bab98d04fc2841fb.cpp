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
    class ::clang::FieldDecl  * (*method_pointer_b58b11d3dad555f3bfec806984c0825e)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FieldDecl::CreateDeserialized;
    bool  (*method_pointer_2bff8d9fe64a5a208ff707d83d586cbd)(class ::clang::Decl  const *) = ::clang::FieldDecl::classof;
    bool  (*method_pointer_4c048dda12d758be9cdec20f3b0ccddd)(enum ::clang::Decl::Kind ) = ::clang::FieldDecl::classofKind;
    class ::clang::FieldDecl  const * (::clang::FieldDecl::*method_pointer_40fc1a7573715c0f81fbc18c7d20745d)() const = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::FieldDecl  * (::clang::FieldDecl::*method_pointer_e1ae5f7092c055f8a122e4c5a093ea8a)() = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::VariableArrayType  const * (::clang::FieldDecl::*method_pointer_e19dbbc023b05b3b867c70a9e7ecbe07)() const = &::clang::FieldDecl::getCapturedVLAType;
    unsigned int  (::clang::FieldDecl::*method_pointer_890cbb2e04455da8b74d67026967da69)() const = &::clang::FieldDecl::getFieldIndex;
    class ::clang::RecordDecl  const * (::clang::FieldDecl::*method_pointer_c75bb09390ba528b9b8f76a84a05f371)() const = &::clang::FieldDecl::getParent;
    class ::clang::RecordDecl  * (::clang::FieldDecl::*method_pointer_bb08c55c3f275c99b6ff94a4444b4645)() = &::clang::FieldDecl::getParent;
    bool  (::clang::FieldDecl::*method_pointer_68de52a396db5cedab3a48454c797a49)() const = &::clang::FieldDecl::hasCapturedVLAType;
    bool  (::clang::FieldDecl::*method_pointer_a31ca6ac2446523fa7eddeba500c56a7)() const = &::clang::FieldDecl::hasInClassInitializer;
    bool  (::clang::FieldDecl::*method_pointer_009c9074b8b75d94a2754dea797048ca)() const = &::clang::FieldDecl::isAnonymousStructOrUnion;
    bool  (::clang::FieldDecl::*method_pointer_c623d93f7acb502baf46742777f4d746)() const = &::clang::FieldDecl::isBitField;
    bool  (::clang::FieldDecl::*method_pointer_c370ecddfac4588ebe2a7c315bd84443)() const = &::clang::FieldDecl::isMutable;
    bool  (::clang::FieldDecl::*method_pointer_19451e407a425a819219ed61eb3c0ba3)() const = &::clang::FieldDecl::isUnnamedBitfield;
    void  (::clang::FieldDecl::*method_pointer_53baca82c715562d8d6af8ffb5a1fca6)() = &::clang::FieldDecl::removeBitWidth;
    void  (::clang::FieldDecl::*method_pointer_c55e4208382f5604995d165fb31edd49)() = &::clang::FieldDecl::removeInClassInitializer;
    void  (::clang::FieldDecl::*method_pointer_5b33572fc76d551bbee9cdb17360bc95)(class ::clang::VariableArrayType  const *) = &::clang::FieldDecl::setCapturedVLAType;
    boost::python::class_< class ::clang::FieldDecl, autowig::HeldType< class ::clang::FieldDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_72a947d59e2e5194bab98d04fc2841fb("FieldDecl", "", boost::python::no_init);
    class_72a947d59e2e5194bab98d04fc2841fb.def("create_deserialized", method_pointer_b58b11d3dad555f3bfec806984c0825e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof", method_pointer_2bff8d9fe64a5a208ff707d83d586cbd, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof_kind", method_pointer_4c048dda12d758be9cdec20f3b0ccddd, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_40fc1a7573715c0f81fbc18c7d20745d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_e1ae5f7092c055f8a122e4c5a093ea8a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_captured_vla_type", method_pointer_e19dbbc023b05b3b867c70a9e7ecbe07, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_field_index", method_pointer_890cbb2e04455da8b74d67026967da69, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_c75bb09390ba528b9b8f76a84a05f371, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_bb08c55c3f275c99b6ff94a4444b4645, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_captured_vla_type", method_pointer_68de52a396db5cedab3a48454c797a49, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_in_class_initializer", method_pointer_a31ca6ac2446523fa7eddeba500c56a7, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_anonymous_struct_or_union", method_pointer_009c9074b8b75d94a2754dea797048ca, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_bit_field", method_pointer_c623d93f7acb502baf46742777f4d746, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_mutable", method_pointer_c370ecddfac4588ebe2a7c315bd84443, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_unnamed_bitfield", method_pointer_19451e407a425a819219ed61eb3c0ba3, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_bit_width", method_pointer_53baca82c715562d8d6af8ffb5a1fca6, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_in_class_initializer", method_pointer_c55e4208382f5604995d165fb31edd49, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("set_captured_vla_type", method_pointer_5b33572fc76d551bbee9cdb17360bc95, "");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof_kind");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("create_deserialized");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FieldDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FieldDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}