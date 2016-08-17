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
    void  (::clang::FieldDecl::*method_pointer_c38a163347be5a8ab81a088604e7f54a)() = &::clang::FieldDecl::removeInClassInitializer;
    class ::clang::FieldDecl  const * (::clang::FieldDecl::*method_pointer_71e9215fcd485eb9b5f66320604cafcb)() const = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::VariableArrayType  const * (::clang::FieldDecl::*method_pointer_e979c4fc60595875a601e32b79c152bf)() const = &::clang::FieldDecl::getCapturedVLAType;
    void  (::clang::FieldDecl::*method_pointer_f74e2f20e59055c5be271094cbe7f9ec)() = &::clang::FieldDecl::removeBitWidth;
    bool  (::clang::FieldDecl::*method_pointer_1c6d04e32da85b689999cb568aa1f44b)() const = &::clang::FieldDecl::isBitField;
    bool  (::clang::FieldDecl::*method_pointer_95fd935fe5165aa5af63e29dc4ece752)() const = &::clang::FieldDecl::hasInClassInitializer;
    bool  (*method_pointer_c6ac0826ebc2589d96242e05aa7aac3b)(class ::clang::Decl  const *) = ::clang::FieldDecl::classof;
    bool  (::clang::FieldDecl::*method_pointer_688ba2986ae959139b7ab116a72bc769)() const = &::clang::FieldDecl::isMutable;
    class ::clang::RecordDecl  const * (::clang::FieldDecl::*method_pointer_9ab5df4b2ebb5fad9362abab5aa98a30)() const = &::clang::FieldDecl::getParent;
    bool  (::clang::FieldDecl::*method_pointer_862ae7daf71d5988b40138d08261cb1c)() const = &::clang::FieldDecl::isAnonymousStructOrUnion;
    bool  (::clang::FieldDecl::*method_pointer_7ba930ae8da2580bb5cc6cd224e0a20a)() const = &::clang::FieldDecl::isUnnamedBitfield;
    class ::clang::RecordDecl  * (::clang::FieldDecl::*method_pointer_98e300b06adc510c92392ea1d8423e13)() = &::clang::FieldDecl::getParent;
    void  (::clang::FieldDecl::*method_pointer_789888d159725c5cb46787d3c9685ef4)(class ::clang::VariableArrayType  const *) = &::clang::FieldDecl::setCapturedVLAType;
    class ::clang::FieldDecl  * (::clang::FieldDecl::*method_pointer_69b367c58152578a8acf89bfb4cda476)() = &::clang::FieldDecl::getCanonicalDecl;
    bool  (*method_pointer_30beabd7d11f5ffe99b138bdad23110c)(enum ::clang::Decl::Kind ) = ::clang::FieldDecl::classofKind;
    bool  (::clang::FieldDecl::*method_pointer_32f4dea0b392586d90c9f4a33c561559)() const = &::clang::FieldDecl::hasCapturedVLAType;
    unsigned int  (::clang::FieldDecl::*method_pointer_58c579c464c55cfea506f87c415e66cc)() const = &::clang::FieldDecl::getFieldIndex;
    class ::clang::FieldDecl  * (*method_pointer_90c585c66a885ca1a64983041f6a7ca7)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FieldDecl::CreateDeserialized;
    boost::python::class_< class ::clang::FieldDecl, autowig::HeldType< class ::clang::FieldDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_72a947d59e2e5194bab98d04fc2841fb("FieldDecl", "", boost::python::no_init);
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_in_class_initializer", method_pointer_c38a163347be5a8ab81a088604e7f54a, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_71e9215fcd485eb9b5f66320604cafcb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_captured_vla_type", method_pointer_e979c4fc60595875a601e32b79c152bf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_bit_width", method_pointer_f74e2f20e59055c5be271094cbe7f9ec, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_bit_field", method_pointer_1c6d04e32da85b689999cb568aa1f44b, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_in_class_initializer", method_pointer_95fd935fe5165aa5af63e29dc4ece752, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof", method_pointer_c6ac0826ebc2589d96242e05aa7aac3b, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_mutable", method_pointer_688ba2986ae959139b7ab116a72bc769, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_9ab5df4b2ebb5fad9362abab5aa98a30, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_anonymous_struct_or_union", method_pointer_862ae7daf71d5988b40138d08261cb1c, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_unnamed_bitfield", method_pointer_7ba930ae8da2580bb5cc6cd224e0a20a, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_98e300b06adc510c92392ea1d8423e13, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("set_captured_vla_type", method_pointer_789888d159725c5cb46787d3c9685ef4, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_69b367c58152578a8acf89bfb4cda476, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof_kind", method_pointer_30beabd7d11f5ffe99b138bdad23110c, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_captured_vla_type", method_pointer_32f4dea0b392586d90c9f4a33c561559, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_field_index", method_pointer_58c579c464c55cfea506f87c415e66cc, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("create_deserialized", method_pointer_90c585c66a885ca1a64983041f6a7ca7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof_kind");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("create_deserialized");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FieldDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FieldDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}