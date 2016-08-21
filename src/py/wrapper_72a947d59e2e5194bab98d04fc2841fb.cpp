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
    class ::clang::FieldDecl  * (*method_pointer_6545cce2bd665e778cc8d58ada848b13)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FieldDecl::CreateDeserialized;
    bool  (*method_pointer_dc61e7e2925653f19c44c17ebbfa5ec8)(class ::clang::Decl  const *) = ::clang::FieldDecl::classof;
    bool  (*method_pointer_763ede5ea35b5b8b8ddb0565581372db)(enum ::clang::Decl::Kind ) = ::clang::FieldDecl::classofKind;
    class ::clang::FieldDecl  * (::clang::FieldDecl::*method_pointer_a30a4d42cd0c5052b4d1efc004b1966b)() = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::FieldDecl  const * (::clang::FieldDecl::*method_pointer_75234e36d38954698a865bd12b2b08fb)() const = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::VariableArrayType  const * (::clang::FieldDecl::*method_pointer_db48621480f9555ab8460d7fe5d1c801)() const = &::clang::FieldDecl::getCapturedVLAType;
    unsigned int  (::clang::FieldDecl::*method_pointer_21757f62dff0562c95bbe05cd7a2a2f7)() const = &::clang::FieldDecl::getFieldIndex;
    class ::clang::RecordDecl  * (::clang::FieldDecl::*method_pointer_862dc6f7f01b59599184b2eec6623bfe)() = &::clang::FieldDecl::getParent;
    class ::clang::RecordDecl  const * (::clang::FieldDecl::*method_pointer_139f89ef40375fd0895c5e22caca6062)() const = &::clang::FieldDecl::getParent;
    bool  (::clang::FieldDecl::*method_pointer_89b177b2acb55419a6a3cc42e4cbdab4)() const = &::clang::FieldDecl::hasCapturedVLAType;
    bool  (::clang::FieldDecl::*method_pointer_fc35e0d83e3d5dada9298620a1b5e4be)() const = &::clang::FieldDecl::hasInClassInitializer;
    bool  (::clang::FieldDecl::*method_pointer_c0474fc809ed5ada9c758a6c9331ce49)() const = &::clang::FieldDecl::isAnonymousStructOrUnion;
    bool  (::clang::FieldDecl::*method_pointer_acd5faed32985ca7aba2aaa041a7dbc1)() const = &::clang::FieldDecl::isBitField;
    bool  (::clang::FieldDecl::*method_pointer_0deb7b02ce0859db99ed6759e4e03002)() const = &::clang::FieldDecl::isMutable;
    bool  (::clang::FieldDecl::*method_pointer_8acd1a0e60615c479552e040ec3b48bc)() const = &::clang::FieldDecl::isUnnamedBitfield;
    void  (::clang::FieldDecl::*method_pointer_e20b20f7d9e756fd99a08d0fe6ea9c72)() = &::clang::FieldDecl::removeBitWidth;
    void  (::clang::FieldDecl::*method_pointer_4a7558f1ec73527bb1a21584f58de917)() = &::clang::FieldDecl::removeInClassInitializer;
    void  (::clang::FieldDecl::*method_pointer_15c46f7088485cad8d94e738cce8346a)(class ::clang::VariableArrayType  const *) = &::clang::FieldDecl::setCapturedVLAType;
    boost::python::class_< class ::clang::FieldDecl, autowig::HeldType< class ::clang::FieldDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_72a947d59e2e5194bab98d04fc2841fb("FieldDecl", "", boost::python::no_init);
    class_72a947d59e2e5194bab98d04fc2841fb.def("create_deserialized", method_pointer_6545cce2bd665e778cc8d58ada848b13, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof", method_pointer_dc61e7e2925653f19c44c17ebbfa5ec8, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof_kind", method_pointer_763ede5ea35b5b8b8ddb0565581372db, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_a30a4d42cd0c5052b4d1efc004b1966b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_75234e36d38954698a865bd12b2b08fb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_captured_vla_type", method_pointer_db48621480f9555ab8460d7fe5d1c801, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_field_index", method_pointer_21757f62dff0562c95bbe05cd7a2a2f7, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_862dc6f7f01b59599184b2eec6623bfe, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_139f89ef40375fd0895c5e22caca6062, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_captured_vla_type", method_pointer_89b177b2acb55419a6a3cc42e4cbdab4, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_in_class_initializer", method_pointer_fc35e0d83e3d5dada9298620a1b5e4be, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_anonymous_struct_or_union", method_pointer_c0474fc809ed5ada9c758a6c9331ce49, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_bit_field", method_pointer_acd5faed32985ca7aba2aaa041a7dbc1, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_mutable", method_pointer_0deb7b02ce0859db99ed6759e4e03002, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_unnamed_bitfield", method_pointer_8acd1a0e60615c479552e040ec3b48bc, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_bit_width", method_pointer_e20b20f7d9e756fd99a08d0fe6ea9c72, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_in_class_initializer", method_pointer_4a7558f1ec73527bb1a21584f58de917, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("set_captured_vla_type", method_pointer_15c46f7088485cad8d94e738cce8346a, "");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof_kind");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("create_deserialized");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FieldDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FieldDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}