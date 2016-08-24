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
    class ::clang::FieldDecl  * (*method_pointer_c987663bf5d15333a654c5745a6fb202)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FieldDecl::CreateDeserialized;
    bool  (*method_pointer_732a04fb25d75917962216046df48810)(class ::clang::Decl  const *) = ::clang::FieldDecl::classof;
    bool  (*method_pointer_6da69de278eb5a7c96413e7883311fd8)(enum ::clang::Decl::Kind ) = ::clang::FieldDecl::classofKind;
    class ::clang::FieldDecl  const * (::clang::FieldDecl::*method_pointer_4a73576c6b5d529296a446b9dab7479a)() const = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::FieldDecl  * (::clang::FieldDecl::*method_pointer_507e4753114e5be0987e242446439d93)() = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::VariableArrayType  const * (::clang::FieldDecl::*method_pointer_e4d354d248565c098d3be0dcfa9eb987)() const = &::clang::FieldDecl::getCapturedVLAType;
    unsigned int  (::clang::FieldDecl::*method_pointer_48fef5031021552b8e630d0c93d3a267)() const = &::clang::FieldDecl::getFieldIndex;
    class ::clang::RecordDecl  const * (::clang::FieldDecl::*method_pointer_cbe347a8dfa0555887729a8abbe3088d)() const = &::clang::FieldDecl::getParent;
    class ::clang::RecordDecl  * (::clang::FieldDecl::*method_pointer_59e91daadb3258cf9cab69f8d18ff2e7)() = &::clang::FieldDecl::getParent;
    bool  (::clang::FieldDecl::*method_pointer_75c95c08a00952fba622988075322018)() const = &::clang::FieldDecl::hasCapturedVLAType;
    bool  (::clang::FieldDecl::*method_pointer_9647ba335d7251fd90c42ed442272ff9)() const = &::clang::FieldDecl::hasInClassInitializer;
    bool  (::clang::FieldDecl::*method_pointer_a228537d0e1152bf90a8ab598366532b)() const = &::clang::FieldDecl::isAnonymousStructOrUnion;
    bool  (::clang::FieldDecl::*method_pointer_a233833224f45643af714350b4e3e1de)() const = &::clang::FieldDecl::isBitField;
    bool  (::clang::FieldDecl::*method_pointer_21cfb79b564f5947a43f2e8c0d952f8a)() const = &::clang::FieldDecl::isMutable;
    bool  (::clang::FieldDecl::*method_pointer_a20dfba57d4b56e484ef6b8d91c27f20)() const = &::clang::FieldDecl::isUnnamedBitfield;
    void  (::clang::FieldDecl::*method_pointer_4b6d4c3874c455ac87ca911140543d87)() = &::clang::FieldDecl::removeBitWidth;
    void  (::clang::FieldDecl::*method_pointer_3b85da4a7f1258cd836e1b3ac4ab4124)() = &::clang::FieldDecl::removeInClassInitializer;
    void  (::clang::FieldDecl::*method_pointer_67669ee9ddec51f1ba76d4e3c3e00174)(class ::clang::VariableArrayType  const *) = &::clang::FieldDecl::setCapturedVLAType;
    boost::python::class_< class ::clang::FieldDecl, autowig::HeldType< class ::clang::FieldDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_72a947d59e2e5194bab98d04fc2841fb("FieldDecl", "", boost::python::no_init);
    class_72a947d59e2e5194bab98d04fc2841fb.def("create_deserialized", method_pointer_c987663bf5d15333a654c5745a6fb202, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof", method_pointer_732a04fb25d75917962216046df48810, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof_kind", method_pointer_6da69de278eb5a7c96413e7883311fd8, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_4a73576c6b5d529296a446b9dab7479a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_507e4753114e5be0987e242446439d93, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_captured_vla_type", method_pointer_e4d354d248565c098d3be0dcfa9eb987, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_field_index", method_pointer_48fef5031021552b8e630d0c93d3a267, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_cbe347a8dfa0555887729a8abbe3088d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_59e91daadb3258cf9cab69f8d18ff2e7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_captured_vla_type", method_pointer_75c95c08a00952fba622988075322018, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_in_class_initializer", method_pointer_9647ba335d7251fd90c42ed442272ff9, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_anonymous_struct_or_union", method_pointer_a228537d0e1152bf90a8ab598366532b, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_bit_field", method_pointer_a233833224f45643af714350b4e3e1de, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_mutable", method_pointer_21cfb79b564f5947a43f2e8c0d952f8a, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_unnamed_bitfield", method_pointer_a20dfba57d4b56e484ef6b8d91c27f20, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_bit_width", method_pointer_4b6d4c3874c455ac87ca911140543d87, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_in_class_initializer", method_pointer_3b85da4a7f1258cd836e1b3ac4ab4124, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("set_captured_vla_type", method_pointer_67669ee9ddec51f1ba76d4e3c3e00174, "");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof_kind");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("create_deserialized");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FieldDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FieldDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}