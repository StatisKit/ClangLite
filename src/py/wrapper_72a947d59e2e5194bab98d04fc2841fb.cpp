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
    class ::clang::FieldDecl  * (*method_pointer_15376f0c38e250479f511cf29fddf51f)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FieldDecl::CreateDeserialized;
    bool  (*method_pointer_3b535b0c84ce55cead0cf7e975baf8bd)(class ::clang::Decl  const *) = ::clang::FieldDecl::classof;
    bool  (*method_pointer_595eb04f36cc50b4a8223b9c56813a5b)(enum ::clang::Decl::Kind ) = ::clang::FieldDecl::classofKind;
    class ::clang::FieldDecl  * (::clang::FieldDecl::*method_pointer_42e161073cd15641b34eabe28ecd6a9e)() = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::FieldDecl  const * (::clang::FieldDecl::*method_pointer_167b10be17cc5d38a4f88e0697967679)() const = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::VariableArrayType  const * (::clang::FieldDecl::*method_pointer_ded966414ef759e8b967ecd4093ff33c)() const = &::clang::FieldDecl::getCapturedVLAType;
    unsigned int  (::clang::FieldDecl::*method_pointer_0d02a29b4de45588900996fa8c3e1a60)() const = &::clang::FieldDecl::getFieldIndex;
    class ::clang::RecordDecl  * (::clang::FieldDecl::*method_pointer_3b8daf5d789854b98953e70c4e499eca)() = &::clang::FieldDecl::getParent;
    class ::clang::RecordDecl  const * (::clang::FieldDecl::*method_pointer_54f3100e0a1f525ebc395b4e85029923)() const = &::clang::FieldDecl::getParent;
    bool  (::clang::FieldDecl::*method_pointer_7c010474858855af8f5f8f9e22f60de5)() const = &::clang::FieldDecl::hasCapturedVLAType;
    bool  (::clang::FieldDecl::*method_pointer_6ad9a437ff0a5b0fb7ed7a88b4d0e9ed)() const = &::clang::FieldDecl::hasInClassInitializer;
    bool  (::clang::FieldDecl::*method_pointer_88c8eef96b3d5fb6852cfcd6df9ff315)() const = &::clang::FieldDecl::isAnonymousStructOrUnion;
    bool  (::clang::FieldDecl::*method_pointer_67651f0ba2205c719d278db86bbab939)() const = &::clang::FieldDecl::isBitField;
    bool  (::clang::FieldDecl::*method_pointer_cbb48eec4dd05dac94f0eacd90cac52b)() const = &::clang::FieldDecl::isMutable;
    bool  (::clang::FieldDecl::*method_pointer_84127b67f5b8502397eb683b73c41d3e)() const = &::clang::FieldDecl::isUnnamedBitfield;
    void  (::clang::FieldDecl::*method_pointer_ea77fee8a8c2504a9a170851b1f6666d)() = &::clang::FieldDecl::removeBitWidth;
    void  (::clang::FieldDecl::*method_pointer_40fad41d91a05f02b739b120a93e2415)() = &::clang::FieldDecl::removeInClassInitializer;
    void  (::clang::FieldDecl::*method_pointer_33ef9aa1050255e28fcf28f296c6dde4)(class ::clang::VariableArrayType  const *) = &::clang::FieldDecl::setCapturedVLAType;
    boost::python::class_< class ::clang::FieldDecl, autowig::HeldType< class ::clang::FieldDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_72a947d59e2e5194bab98d04fc2841fb("FieldDecl", "", boost::python::no_init);
    class_72a947d59e2e5194bab98d04fc2841fb.def("create_deserialized", method_pointer_15376f0c38e250479f511cf29fddf51f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof", method_pointer_3b535b0c84ce55cead0cf7e975baf8bd, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof_kind", method_pointer_595eb04f36cc50b4a8223b9c56813a5b, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_42e161073cd15641b34eabe28ecd6a9e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_167b10be17cc5d38a4f88e0697967679, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_captured_vla_type", method_pointer_ded966414ef759e8b967ecd4093ff33c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_field_index", method_pointer_0d02a29b4de45588900996fa8c3e1a60, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_3b8daf5d789854b98953e70c4e499eca, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_54f3100e0a1f525ebc395b4e85029923, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_captured_vla_type", method_pointer_7c010474858855af8f5f8f9e22f60de5, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_in_class_initializer", method_pointer_6ad9a437ff0a5b0fb7ed7a88b4d0e9ed, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_anonymous_struct_or_union", method_pointer_88c8eef96b3d5fb6852cfcd6df9ff315, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_bit_field", method_pointer_67651f0ba2205c719d278db86bbab939, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_mutable", method_pointer_cbb48eec4dd05dac94f0eacd90cac52b, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_unnamed_bitfield", method_pointer_84127b67f5b8502397eb683b73c41d3e, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_bit_width", method_pointer_ea77fee8a8c2504a9a170851b1f6666d, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_in_class_initializer", method_pointer_40fad41d91a05f02b739b120a93e2415, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("set_captured_vla_type", method_pointer_33ef9aa1050255e28fcf28f296c6dde4, "");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof_kind");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("create_deserialized");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FieldDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FieldDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}