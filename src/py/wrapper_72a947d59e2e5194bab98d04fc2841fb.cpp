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
    class ::clang::FieldDecl  * (*method_pointer_3c11e810f4b258f6a3d02433a0ce1399)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FieldDecl::CreateDeserialized;
    bool  (*method_pointer_5ea7c7a987b554f7a05770cf6c2b311c)(class ::clang::Decl  const *) = ::clang::FieldDecl::classof;
    bool  (*method_pointer_55f2cf9c6f3c507dacf0558668584d99)(enum ::clang::Decl::Kind ) = ::clang::FieldDecl::classofKind;
    class ::clang::FieldDecl  const * (::clang::FieldDecl::*method_pointer_fa8a946cf8895b53af011c7ebc365d2e)() const = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::FieldDecl  * (::clang::FieldDecl::*method_pointer_8a5393c6a21055339b1a99a5b005bc3c)() = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::VariableArrayType  const * (::clang::FieldDecl::*method_pointer_ee18d4d3f82151219b625f0252dd3dba)() const = &::clang::FieldDecl::getCapturedVLAType;
    unsigned int  (::clang::FieldDecl::*method_pointer_1c87d5dd7bcb5a80b7f38259f4453b62)() const = &::clang::FieldDecl::getFieldIndex;
    class ::clang::RecordDecl  * (::clang::FieldDecl::*method_pointer_8623050dd9475a79ac06784ded279db4)() = &::clang::FieldDecl::getParent;
    class ::clang::RecordDecl  const * (::clang::FieldDecl::*method_pointer_1643dcd48b885b8aa32aef3bcb94b0f6)() const = &::clang::FieldDecl::getParent;
    bool  (::clang::FieldDecl::*method_pointer_d635b434d59b553f852da42450d85e9f)() const = &::clang::FieldDecl::hasCapturedVLAType;
    bool  (::clang::FieldDecl::*method_pointer_5c9786de69765402adf7bba343b43f95)() const = &::clang::FieldDecl::hasInClassInitializer;
    bool  (::clang::FieldDecl::*method_pointer_db58592525a05821b9e1bf204f9f25de)() const = &::clang::FieldDecl::isAnonymousStructOrUnion;
    bool  (::clang::FieldDecl::*method_pointer_c970d6087a77581ab060b8e33e56c9c6)() const = &::clang::FieldDecl::isBitField;
    bool  (::clang::FieldDecl::*method_pointer_fe589ef3289f581396bab2aba86f621b)() const = &::clang::FieldDecl::isMutable;
    bool  (::clang::FieldDecl::*method_pointer_c3ccda175f835a4c85952d782ac9e7e9)() const = &::clang::FieldDecl::isUnnamedBitfield;
    void  (::clang::FieldDecl::*method_pointer_18861276e41657279d8e22187f1ab9f3)() = &::clang::FieldDecl::removeBitWidth;
    void  (::clang::FieldDecl::*method_pointer_8586a32c55a35c189ef5c657ac1d5c1e)() = &::clang::FieldDecl::removeInClassInitializer;
    void  (::clang::FieldDecl::*method_pointer_6e96ece29f5d5f319bf134a5545206aa)(class ::clang::VariableArrayType  const *) = &::clang::FieldDecl::setCapturedVLAType;
    boost::python::class_< class ::clang::FieldDecl, autowig::HeldType< class ::clang::FieldDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_72a947d59e2e5194bab98d04fc2841fb("FieldDecl", "", boost::python::no_init);
    class_72a947d59e2e5194bab98d04fc2841fb.def("create_deserialized", method_pointer_3c11e810f4b258f6a3d02433a0ce1399, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof", method_pointer_5ea7c7a987b554f7a05770cf6c2b311c, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof_kind", method_pointer_55f2cf9c6f3c507dacf0558668584d99, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_fa8a946cf8895b53af011c7ebc365d2e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_8a5393c6a21055339b1a99a5b005bc3c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_captured_vla_type", method_pointer_ee18d4d3f82151219b625f0252dd3dba, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_field_index", method_pointer_1c87d5dd7bcb5a80b7f38259f4453b62, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_8623050dd9475a79ac06784ded279db4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_1643dcd48b885b8aa32aef3bcb94b0f6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_captured_vla_type", method_pointer_d635b434d59b553f852da42450d85e9f, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_in_class_initializer", method_pointer_5c9786de69765402adf7bba343b43f95, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_anonymous_struct_or_union", method_pointer_db58592525a05821b9e1bf204f9f25de, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_bit_field", method_pointer_c970d6087a77581ab060b8e33e56c9c6, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_mutable", method_pointer_fe589ef3289f581396bab2aba86f621b, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_unnamed_bitfield", method_pointer_c3ccda175f835a4c85952d782ac9e7e9, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_bit_width", method_pointer_18861276e41657279d8e22187f1ab9f3, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_in_class_initializer", method_pointer_8586a32c55a35c189ef5c657ac1d5c1e, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("set_captured_vla_type", method_pointer_6e96ece29f5d5f319bf134a5545206aa, "");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof_kind");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("create_deserialized");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FieldDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FieldDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}