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
    class ::clang::FieldDecl  * (*method_pointer_b68a69b519ed5498a431909c811a2a7f)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FieldDecl::CreateDeserialized;
    bool  (*method_pointer_104410f588f35e60add661d155ed0d6c)(class ::clang::Decl  const *) = ::clang::FieldDecl::classof;
    bool  (*method_pointer_8bd73fd49cbb5c38898be586d632ac49)(enum ::clang::Decl::Kind ) = ::clang::FieldDecl::classofKind;
    class ::clang::FieldDecl  * (::clang::FieldDecl::*method_pointer_16397b90b41b5db3a06e6c86cb802c79)() = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::FieldDecl  const * (::clang::FieldDecl::*method_pointer_c7b17237417d56de86ed1c70c1772998)() const = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::VariableArrayType  const * (::clang::FieldDecl::*method_pointer_84a13d5aa7d65282a1459405cc8704c5)() const = &::clang::FieldDecl::getCapturedVLAType;
    unsigned int  (::clang::FieldDecl::*method_pointer_3e7ad3315fe651ba81d50241bfd0acdb)() const = &::clang::FieldDecl::getFieldIndex;
    class ::clang::RecordDecl  * (::clang::FieldDecl::*method_pointer_c684bba36e285783989480a5bb0e62fe)() = &::clang::FieldDecl::getParent;
    class ::clang::RecordDecl  const * (::clang::FieldDecl::*method_pointer_7862e49758f451f1a45d4fc44d4e2f56)() const = &::clang::FieldDecl::getParent;
    bool  (::clang::FieldDecl::*method_pointer_74f4b9e09c415c5cbb00fdaf288ef6db)() const = &::clang::FieldDecl::hasCapturedVLAType;
    bool  (::clang::FieldDecl::*method_pointer_b2d1c9756f0b529bbf54a0603ca6cfd0)() const = &::clang::FieldDecl::hasInClassInitializer;
    bool  (::clang::FieldDecl::*method_pointer_57d5847e01dd558a865f8d083abc62b9)() const = &::clang::FieldDecl::isAnonymousStructOrUnion;
    bool  (::clang::FieldDecl::*method_pointer_a9fea5e5cffc5a6fba54f26e9173df07)() const = &::clang::FieldDecl::isBitField;
    bool  (::clang::FieldDecl::*method_pointer_8dce65e338205b138f0c54711df1ab36)() const = &::clang::FieldDecl::isMutable;
    bool  (::clang::FieldDecl::*method_pointer_d0f38485dfce583f8d073675926e13df)() const = &::clang::FieldDecl::isUnnamedBitfield;
    void  (::clang::FieldDecl::*method_pointer_686008d2cc235e0ba75e10786dfab033)() = &::clang::FieldDecl::removeBitWidth;
    void  (::clang::FieldDecl::*method_pointer_a82cc0bf0b1a5431b7a96bdb5fb8c6c8)() = &::clang::FieldDecl::removeInClassInitializer;
    void  (::clang::FieldDecl::*method_pointer_f524dbea3f825b3bb11e2884d2a898f0)(class ::clang::VariableArrayType  const *) = &::clang::FieldDecl::setCapturedVLAType;
    boost::python::class_< class ::clang::FieldDecl, autowig::HeldType< class ::clang::FieldDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_72a947d59e2e5194bab98d04fc2841fb("FieldDecl", "", boost::python::no_init);
    class_72a947d59e2e5194bab98d04fc2841fb.def("create_deserialized", method_pointer_b68a69b519ed5498a431909c811a2a7f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof", method_pointer_104410f588f35e60add661d155ed0d6c, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof_kind", method_pointer_8bd73fd49cbb5c38898be586d632ac49, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_16397b90b41b5db3a06e6c86cb802c79, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_c7b17237417d56de86ed1c70c1772998, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_captured_vla_type", method_pointer_84a13d5aa7d65282a1459405cc8704c5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_field_index", method_pointer_3e7ad3315fe651ba81d50241bfd0acdb, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_c684bba36e285783989480a5bb0e62fe, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_7862e49758f451f1a45d4fc44d4e2f56, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_captured_vla_type", method_pointer_74f4b9e09c415c5cbb00fdaf288ef6db, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_in_class_initializer", method_pointer_b2d1c9756f0b529bbf54a0603ca6cfd0, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_anonymous_struct_or_union", method_pointer_57d5847e01dd558a865f8d083abc62b9, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_bit_field", method_pointer_a9fea5e5cffc5a6fba54f26e9173df07, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_mutable", method_pointer_8dce65e338205b138f0c54711df1ab36, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_unnamed_bitfield", method_pointer_d0f38485dfce583f8d073675926e13df, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_bit_width", method_pointer_686008d2cc235e0ba75e10786dfab033, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_in_class_initializer", method_pointer_a82cc0bf0b1a5431b7a96bdb5fb8c6c8, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("set_captured_vla_type", method_pointer_f524dbea3f825b3bb11e2884d2a898f0, "");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof_kind");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("create_deserialized");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FieldDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FieldDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}