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
    class ::clang::FieldDecl  * (*method_pointer_4b76fa14813d52c7a0afabb385f4f97b)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FieldDecl::CreateDeserialized;
    bool  (*method_pointer_1955e959c0af57afb0da82afd0cee781)(class ::clang::Decl  const *) = ::clang::FieldDecl::classof;
    bool  (*method_pointer_a2d39a00294b55519b42933c12d3c472)(enum ::clang::Decl::Kind ) = ::clang::FieldDecl::classofKind;
    class ::clang::FieldDecl  * (::clang::FieldDecl::*method_pointer_b10012013d4f56dcb2130be2c5c5eec9)() = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::FieldDecl  const * (::clang::FieldDecl::*method_pointer_d12b2b6e30ef5f6dbb17fae7b0e2f5cc)() const = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::VariableArrayType  const * (::clang::FieldDecl::*method_pointer_4580373fb38e52ff944898d4be7115f2)() const = &::clang::FieldDecl::getCapturedVLAType;
    unsigned int  (::clang::FieldDecl::*method_pointer_9124b9f8ffc35e71906ce932d4a28de6)() const = &::clang::FieldDecl::getFieldIndex;
    class ::clang::RecordDecl  const * (::clang::FieldDecl::*method_pointer_5f61f4a45f5a530d9b37898d03608a7d)() const = &::clang::FieldDecl::getParent;
    class ::clang::RecordDecl  * (::clang::FieldDecl::*method_pointer_f68818ac9c535dc48fde67832470dd56)() = &::clang::FieldDecl::getParent;
    bool  (::clang::FieldDecl::*method_pointer_d26abde396d85359b07b262558e73ab8)() const = &::clang::FieldDecl::hasCapturedVLAType;
    bool  (::clang::FieldDecl::*method_pointer_6dc26481bb0b5d88a4bb9cac5bded6d1)() const = &::clang::FieldDecl::hasInClassInitializer;
    bool  (::clang::FieldDecl::*method_pointer_875aadde67d258449d71f72b3372c8f2)() const = &::clang::FieldDecl::isAnonymousStructOrUnion;
    bool  (::clang::FieldDecl::*method_pointer_4f1ccd30792c5109b84f6eb0d514f0f1)() const = &::clang::FieldDecl::isBitField;
    bool  (::clang::FieldDecl::*method_pointer_f038b45d259756e89725916b3279fbab)() const = &::clang::FieldDecl::isMutable;
    bool  (::clang::FieldDecl::*method_pointer_7ec9344cfb155cbc98f70e93d5211fcc)() const = &::clang::FieldDecl::isUnnamedBitfield;
    void  (::clang::FieldDecl::*method_pointer_f3994bbc29745be0b333ad8cbd93928b)() = &::clang::FieldDecl::removeBitWidth;
    void  (::clang::FieldDecl::*method_pointer_b42b77bef8e95d95ba7d838c792501d6)() = &::clang::FieldDecl::removeInClassInitializer;
    void  (::clang::FieldDecl::*method_pointer_0e05744f477d50ed95c82d580c3e6c74)(class ::clang::VariableArrayType  const *) = &::clang::FieldDecl::setCapturedVLAType;
    boost::python::class_< class ::clang::FieldDecl, autowig::HeldType< class ::clang::FieldDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_72a947d59e2e5194bab98d04fc2841fb("FieldDecl", "", boost::python::no_init);
    class_72a947d59e2e5194bab98d04fc2841fb.def("create_deserialized", method_pointer_4b76fa14813d52c7a0afabb385f4f97b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof", method_pointer_1955e959c0af57afb0da82afd0cee781, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof_kind", method_pointer_a2d39a00294b55519b42933c12d3c472, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_b10012013d4f56dcb2130be2c5c5eec9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_d12b2b6e30ef5f6dbb17fae7b0e2f5cc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_captured_vla_type", method_pointer_4580373fb38e52ff944898d4be7115f2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_field_index", method_pointer_9124b9f8ffc35e71906ce932d4a28de6, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_5f61f4a45f5a530d9b37898d03608a7d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_f68818ac9c535dc48fde67832470dd56, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_captured_vla_type", method_pointer_d26abde396d85359b07b262558e73ab8, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_in_class_initializer", method_pointer_6dc26481bb0b5d88a4bb9cac5bded6d1, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_anonymous_struct_or_union", method_pointer_875aadde67d258449d71f72b3372c8f2, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_bit_field", method_pointer_4f1ccd30792c5109b84f6eb0d514f0f1, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_mutable", method_pointer_f038b45d259756e89725916b3279fbab, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_unnamed_bitfield", method_pointer_7ec9344cfb155cbc98f70e93d5211fcc, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_bit_width", method_pointer_f3994bbc29745be0b333ad8cbd93928b, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_in_class_initializer", method_pointer_b42b77bef8e95d95ba7d838c792501d6, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("set_captured_vla_type", method_pointer_0e05744f477d50ed95c82d580c3e6c74, "");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof_kind");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("create_deserialized");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FieldDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FieldDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}