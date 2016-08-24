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
    class ::clang::FieldDecl  * (*method_pointer_177667177cc750b487110f50b7f7b3f1)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FieldDecl::CreateDeserialized;
    bool  (*method_pointer_e88f7c2769395d99bfbb458f0390fc7b)(class ::clang::Decl  const *) = ::clang::FieldDecl::classof;
    bool  (*method_pointer_ea680cd5fa8c539eaf794051513dd0b1)(enum ::clang::Decl::Kind ) = ::clang::FieldDecl::classofKind;
    class ::clang::FieldDecl  * (::clang::FieldDecl::*method_pointer_a45b14ae5a995b08b6da19931141b0ba)() = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::FieldDecl  const * (::clang::FieldDecl::*method_pointer_d10b13223cfd5a92bb759ad99898ef9c)() const = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::VariableArrayType  const * (::clang::FieldDecl::*method_pointer_6e47c4f9338c5c38ac7677ce888b2231)() const = &::clang::FieldDecl::getCapturedVLAType;
    unsigned int  (::clang::FieldDecl::*method_pointer_776c49337f8154978559b5944bcfd2d8)() const = &::clang::FieldDecl::getFieldIndex;
    class ::clang::RecordDecl  const * (::clang::FieldDecl::*method_pointer_a8d4bff5c3575648880e1cad3f792bd3)() const = &::clang::FieldDecl::getParent;
    class ::clang::RecordDecl  * (::clang::FieldDecl::*method_pointer_a71c1d6cd83d56a782e9a7586e8979e1)() = &::clang::FieldDecl::getParent;
    bool  (::clang::FieldDecl::*method_pointer_99740a829e4055dc9f4d127c6a1176a5)() const = &::clang::FieldDecl::hasCapturedVLAType;
    bool  (::clang::FieldDecl::*method_pointer_ebd3a537eb015fdba07356a1896f4f43)() const = &::clang::FieldDecl::hasInClassInitializer;
    bool  (::clang::FieldDecl::*method_pointer_bb0a3851e2765a849415102b3124d909)() const = &::clang::FieldDecl::isAnonymousStructOrUnion;
    bool  (::clang::FieldDecl::*method_pointer_17eee1df6f935ca08d4018694d958fc1)() const = &::clang::FieldDecl::isBitField;
    bool  (::clang::FieldDecl::*method_pointer_f7ad162edde556769c3d72127322a153)() const = &::clang::FieldDecl::isMutable;
    bool  (::clang::FieldDecl::*method_pointer_ca8a67c45fd95d6f8188e3689b64064e)() const = &::clang::FieldDecl::isUnnamedBitfield;
    void  (::clang::FieldDecl::*method_pointer_66188d2dd8ab525f927187955bdd7119)() = &::clang::FieldDecl::removeBitWidth;
    void  (::clang::FieldDecl::*method_pointer_4e9d86f9b17955f78a8b8a98d7fc2712)() = &::clang::FieldDecl::removeInClassInitializer;
    void  (::clang::FieldDecl::*method_pointer_f70feb712ddd5081816b355f5d265664)(class ::clang::VariableArrayType  const *) = &::clang::FieldDecl::setCapturedVLAType;
    boost::python::class_< class ::clang::FieldDecl, autowig::HeldType< class ::clang::FieldDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_72a947d59e2e5194bab98d04fc2841fb("FieldDecl", "", boost::python::no_init);
    class_72a947d59e2e5194bab98d04fc2841fb.def("create_deserialized", method_pointer_177667177cc750b487110f50b7f7b3f1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof", method_pointer_e88f7c2769395d99bfbb458f0390fc7b, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof_kind", method_pointer_ea680cd5fa8c539eaf794051513dd0b1, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_a45b14ae5a995b08b6da19931141b0ba, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_d10b13223cfd5a92bb759ad99898ef9c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_captured_vla_type", method_pointer_6e47c4f9338c5c38ac7677ce888b2231, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_field_index", method_pointer_776c49337f8154978559b5944bcfd2d8, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_a8d4bff5c3575648880e1cad3f792bd3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_a71c1d6cd83d56a782e9a7586e8979e1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_captured_vla_type", method_pointer_99740a829e4055dc9f4d127c6a1176a5, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_in_class_initializer", method_pointer_ebd3a537eb015fdba07356a1896f4f43, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_anonymous_struct_or_union", method_pointer_bb0a3851e2765a849415102b3124d909, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_bit_field", method_pointer_17eee1df6f935ca08d4018694d958fc1, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_mutable", method_pointer_f7ad162edde556769c3d72127322a153, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_unnamed_bitfield", method_pointer_ca8a67c45fd95d6f8188e3689b64064e, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_bit_width", method_pointer_66188d2dd8ab525f927187955bdd7119, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_in_class_initializer", method_pointer_4e9d86f9b17955f78a8b8a98d7fc2712, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("set_captured_vla_type", method_pointer_f70feb712ddd5081816b355f5d265664, "");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof_kind");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("create_deserialized");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FieldDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FieldDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}