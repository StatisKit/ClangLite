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
    class ::clang::FieldDecl  * (*method_pointer_42c2f190d625555788465be265704781)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FieldDecl::CreateDeserialized;
    bool  (*method_pointer_07db889adf2852b29fac2a168f48fb7a)(class ::clang::Decl  const *) = ::clang::FieldDecl::classof;
    bool  (*method_pointer_7f8263ac140a57e09e0a71d33e5e6804)(enum ::clang::Decl::Kind ) = ::clang::FieldDecl::classofKind;
    class ::clang::FieldDecl  * (::clang::FieldDecl::*method_pointer_322e4015d9025f06a85bca4753252d4e)() = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::FieldDecl  const * (::clang::FieldDecl::*method_pointer_88327b52f56b5df3959b24a554760cba)() const = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::VariableArrayType  const * (::clang::FieldDecl::*method_pointer_81b9ac5503d95d2c98dc0c84ce8ff6fb)() const = &::clang::FieldDecl::getCapturedVLAType;
    unsigned int  (::clang::FieldDecl::*method_pointer_f54c874331a4596cb5b589d02073e3d7)() const = &::clang::FieldDecl::getFieldIndex;
    class ::clang::RecordDecl  const * (::clang::FieldDecl::*method_pointer_692872992a3f50048de6670852577805)() const = &::clang::FieldDecl::getParent;
    class ::clang::RecordDecl  * (::clang::FieldDecl::*method_pointer_856a926b97cf52cb9ed270b3da79a2b0)() = &::clang::FieldDecl::getParent;
    bool  (::clang::FieldDecl::*method_pointer_99ae026ba8455b89b1c29b772ad5f80c)() const = &::clang::FieldDecl::hasCapturedVLAType;
    bool  (::clang::FieldDecl::*method_pointer_1544c01cf7c05426ba5d0b5eedb09f57)() const = &::clang::FieldDecl::hasInClassInitializer;
    bool  (::clang::FieldDecl::*method_pointer_e4ba5191c7085549a4dd7b81c42e80a3)() const = &::clang::FieldDecl::isAnonymousStructOrUnion;
    bool  (::clang::FieldDecl::*method_pointer_74e08b1d5f785ca9a33393ce4564331f)() const = &::clang::FieldDecl::isBitField;
    bool  (::clang::FieldDecl::*method_pointer_a0406c685f7658b09336825d392b5d28)() const = &::clang::FieldDecl::isMutable;
    bool  (::clang::FieldDecl::*method_pointer_12f191d70a7e5e11900b8cdc6cf4ac7c)() const = &::clang::FieldDecl::isUnnamedBitfield;
    void  (::clang::FieldDecl::*method_pointer_1a526915159b53348dbaee318153db56)() = &::clang::FieldDecl::removeBitWidth;
    void  (::clang::FieldDecl::*method_pointer_d6492b7a734a582e99aecf6b560c5f25)() = &::clang::FieldDecl::removeInClassInitializer;
    void  (::clang::FieldDecl::*method_pointer_763b620703c853b593ab8eadb3e9585f)(class ::clang::VariableArrayType  const *) = &::clang::FieldDecl::setCapturedVLAType;
    boost::python::class_< class ::clang::FieldDecl, autowig::HeldType< class ::clang::FieldDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_72a947d59e2e5194bab98d04fc2841fb("FieldDecl", "", boost::python::no_init);
    class_72a947d59e2e5194bab98d04fc2841fb.def("create_deserialized", method_pointer_42c2f190d625555788465be265704781, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof", method_pointer_07db889adf2852b29fac2a168f48fb7a, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof_kind", method_pointer_7f8263ac140a57e09e0a71d33e5e6804, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_322e4015d9025f06a85bca4753252d4e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_88327b52f56b5df3959b24a554760cba, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_captured_vla_type", method_pointer_81b9ac5503d95d2c98dc0c84ce8ff6fb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_field_index", method_pointer_f54c874331a4596cb5b589d02073e3d7, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_692872992a3f50048de6670852577805, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_856a926b97cf52cb9ed270b3da79a2b0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_captured_vla_type", method_pointer_99ae026ba8455b89b1c29b772ad5f80c, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_in_class_initializer", method_pointer_1544c01cf7c05426ba5d0b5eedb09f57, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_anonymous_struct_or_union", method_pointer_e4ba5191c7085549a4dd7b81c42e80a3, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_bit_field", method_pointer_74e08b1d5f785ca9a33393ce4564331f, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_mutable", method_pointer_a0406c685f7658b09336825d392b5d28, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_unnamed_bitfield", method_pointer_12f191d70a7e5e11900b8cdc6cf4ac7c, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_bit_width", method_pointer_1a526915159b53348dbaee318153db56, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_in_class_initializer", method_pointer_d6492b7a734a582e99aecf6b560c5f25, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("set_captured_vla_type", method_pointer_763b620703c853b593ab8eadb3e9585f, "");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof_kind");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("create_deserialized");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FieldDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FieldDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}