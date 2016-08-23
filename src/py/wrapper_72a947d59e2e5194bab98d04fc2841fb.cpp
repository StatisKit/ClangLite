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
    class ::clang::FieldDecl  * (*method_pointer_aa82463b7e2a5b85ad53276376e7d413)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FieldDecl::CreateDeserialized;
    bool  (*method_pointer_da30f7b5e83f51b0ab35c98da64150a9)(class ::clang::Decl  const *) = ::clang::FieldDecl::classof;
    bool  (*method_pointer_0df3875e9efa56bbaef433aa0dacab6a)(enum ::clang::Decl::Kind ) = ::clang::FieldDecl::classofKind;
    class ::clang::FieldDecl  * (::clang::FieldDecl::*method_pointer_1efed879427b5c8b80d82e324a3a6943)() = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::FieldDecl  const * (::clang::FieldDecl::*method_pointer_acb03aacbb4252ccb20174b72a846772)() const = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::VariableArrayType  const * (::clang::FieldDecl::*method_pointer_9a4d10d2ed3355d0a360f3a8f54eb38d)() const = &::clang::FieldDecl::getCapturedVLAType;
    unsigned int  (::clang::FieldDecl::*method_pointer_33dc73d1d597572aa69d0a1ce18c0ad1)() const = &::clang::FieldDecl::getFieldIndex;
    class ::clang::RecordDecl  const * (::clang::FieldDecl::*method_pointer_5797c3fbd5ea5092ae75c5872dfd3809)() const = &::clang::FieldDecl::getParent;
    class ::clang::RecordDecl  * (::clang::FieldDecl::*method_pointer_5478ad6f9ef655fd9a80b787db0cae7f)() = &::clang::FieldDecl::getParent;
    bool  (::clang::FieldDecl::*method_pointer_a1aa854c006f50838e0eec1f36f7d516)() const = &::clang::FieldDecl::hasCapturedVLAType;
    bool  (::clang::FieldDecl::*method_pointer_00efc144f80e52daafa04c0560c3cf4d)() const = &::clang::FieldDecl::hasInClassInitializer;
    bool  (::clang::FieldDecl::*method_pointer_0f4e4770168a53f391ad1c31dc773e2f)() const = &::clang::FieldDecl::isAnonymousStructOrUnion;
    bool  (::clang::FieldDecl::*method_pointer_c35121136dc05fd3ae83dea5475eaf16)() const = &::clang::FieldDecl::isBitField;
    bool  (::clang::FieldDecl::*method_pointer_411e1777349b563e8f69769ec784ce85)() const = &::clang::FieldDecl::isMutable;
    bool  (::clang::FieldDecl::*method_pointer_b41d46ae90ef59a4be2186ad004f7b87)() const = &::clang::FieldDecl::isUnnamedBitfield;
    void  (::clang::FieldDecl::*method_pointer_295c30cf18305a75bda0d85e19ec96b6)() = &::clang::FieldDecl::removeBitWidth;
    void  (::clang::FieldDecl::*method_pointer_59474dca9a0857be89ef3b6369841e48)() = &::clang::FieldDecl::removeInClassInitializer;
    void  (::clang::FieldDecl::*method_pointer_942838b8de3c559f80889956c616677b)(class ::clang::VariableArrayType  const *) = &::clang::FieldDecl::setCapturedVLAType;
    boost::python::class_< class ::clang::FieldDecl, autowig::HeldType< class ::clang::FieldDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_72a947d59e2e5194bab98d04fc2841fb("FieldDecl", "", boost::python::no_init);
    class_72a947d59e2e5194bab98d04fc2841fb.def("create_deserialized", method_pointer_aa82463b7e2a5b85ad53276376e7d413, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof", method_pointer_da30f7b5e83f51b0ab35c98da64150a9, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof_kind", method_pointer_0df3875e9efa56bbaef433aa0dacab6a, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_1efed879427b5c8b80d82e324a3a6943, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_acb03aacbb4252ccb20174b72a846772, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_captured_vla_type", method_pointer_9a4d10d2ed3355d0a360f3a8f54eb38d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_field_index", method_pointer_33dc73d1d597572aa69d0a1ce18c0ad1, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_5797c3fbd5ea5092ae75c5872dfd3809, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_5478ad6f9ef655fd9a80b787db0cae7f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_captured_vla_type", method_pointer_a1aa854c006f50838e0eec1f36f7d516, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_in_class_initializer", method_pointer_00efc144f80e52daafa04c0560c3cf4d, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_anonymous_struct_or_union", method_pointer_0f4e4770168a53f391ad1c31dc773e2f, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_bit_field", method_pointer_c35121136dc05fd3ae83dea5475eaf16, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_mutable", method_pointer_411e1777349b563e8f69769ec784ce85, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_unnamed_bitfield", method_pointer_b41d46ae90ef59a4be2186ad004f7b87, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_bit_width", method_pointer_295c30cf18305a75bda0d85e19ec96b6, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_in_class_initializer", method_pointer_59474dca9a0857be89ef3b6369841e48, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("set_captured_vla_type", method_pointer_942838b8de3c559f80889956c616677b, "");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof_kind");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("create_deserialized");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FieldDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FieldDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}