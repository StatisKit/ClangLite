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
    class ::clang::FieldDecl  * (*method_pointer_9f8bdc95d54f543696a8db048f8e1940)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FieldDecl::CreateDeserialized;
    bool  (*method_pointer_526081594e725f7cbeac9b59b7fb4a78)(class ::clang::Decl  const *) = ::clang::FieldDecl::classof;
    bool  (*method_pointer_88872656507a559ca99d1dd9b2389af2)(enum ::clang::Decl::Kind ) = ::clang::FieldDecl::classofKind;
    class ::clang::FieldDecl  const * (::clang::FieldDecl::*method_pointer_cd24db0549af5992bf4f11dd64288915)() const = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::FieldDecl  * (::clang::FieldDecl::*method_pointer_a7d0b01345b550d5a6dceb9aac0454f4)() = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::VariableArrayType  const * (::clang::FieldDecl::*method_pointer_628307b998a25bf8a0eb6dc8f453c234)() const = &::clang::FieldDecl::getCapturedVLAType;
    unsigned int  (::clang::FieldDecl::*method_pointer_6b38686c3f525c8b8314f2260339ded5)() const = &::clang::FieldDecl::getFieldIndex;
    class ::clang::RecordDecl  const * (::clang::FieldDecl::*method_pointer_d852cc591ae55083947ea80f9ca54efa)() const = &::clang::FieldDecl::getParent;
    class ::clang::RecordDecl  * (::clang::FieldDecl::*method_pointer_c3884c20c66f55ce946678026245be7a)() = &::clang::FieldDecl::getParent;
    bool  (::clang::FieldDecl::*method_pointer_87fff750288c55329047c05b8864e4e5)() const = &::clang::FieldDecl::hasCapturedVLAType;
    bool  (::clang::FieldDecl::*method_pointer_24af57db9589588e92dcc4ef913187e4)() const = &::clang::FieldDecl::hasInClassInitializer;
    bool  (::clang::FieldDecl::*method_pointer_fd16b78e6ff35ae1842cd951bba2ca25)() const = &::clang::FieldDecl::isAnonymousStructOrUnion;
    bool  (::clang::FieldDecl::*method_pointer_12e412c580a55d1e884e4d0b52d6b8f9)() const = &::clang::FieldDecl::isBitField;
    bool  (::clang::FieldDecl::*method_pointer_c49e2b9c0778519da5a022e5df03b32e)() const = &::clang::FieldDecl::isMutable;
    bool  (::clang::FieldDecl::*method_pointer_67a8a14579eb5c3d9556f9a9d5a2b648)() const = &::clang::FieldDecl::isUnnamedBitfield;
    void  (::clang::FieldDecl::*method_pointer_31a2e1dfdf6e5d86966c5b2165eaa5d0)() = &::clang::FieldDecl::removeBitWidth;
    void  (::clang::FieldDecl::*method_pointer_5316efa42b25588d9c4ebf28a273dd8c)() = &::clang::FieldDecl::removeInClassInitializer;
    void  (::clang::FieldDecl::*method_pointer_87d27273018f5017b9d1d7f441e83df5)(class ::clang::VariableArrayType  const *) = &::clang::FieldDecl::setCapturedVLAType;
    boost::python::class_< class ::clang::FieldDecl, autowig::HeldType< class ::clang::FieldDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_72a947d59e2e5194bab98d04fc2841fb("FieldDecl", "", boost::python::no_init);
    class_72a947d59e2e5194bab98d04fc2841fb.def("create_deserialized", method_pointer_9f8bdc95d54f543696a8db048f8e1940, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof", method_pointer_526081594e725f7cbeac9b59b7fb4a78, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof_kind", method_pointer_88872656507a559ca99d1dd9b2389af2, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_cd24db0549af5992bf4f11dd64288915, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_a7d0b01345b550d5a6dceb9aac0454f4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_captured_vla_type", method_pointer_628307b998a25bf8a0eb6dc8f453c234, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_field_index", method_pointer_6b38686c3f525c8b8314f2260339ded5, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_d852cc591ae55083947ea80f9ca54efa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_c3884c20c66f55ce946678026245be7a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_captured_vla_type", method_pointer_87fff750288c55329047c05b8864e4e5, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_in_class_initializer", method_pointer_24af57db9589588e92dcc4ef913187e4, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_anonymous_struct_or_union", method_pointer_fd16b78e6ff35ae1842cd951bba2ca25, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_bit_field", method_pointer_12e412c580a55d1e884e4d0b52d6b8f9, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_mutable", method_pointer_c49e2b9c0778519da5a022e5df03b32e, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_unnamed_bitfield", method_pointer_67a8a14579eb5c3d9556f9a9d5a2b648, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_bit_width", method_pointer_31a2e1dfdf6e5d86966c5b2165eaa5d0, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_in_class_initializer", method_pointer_5316efa42b25588d9c4ebf28a273dd8c, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("set_captured_vla_type", method_pointer_87d27273018f5017b9d1d7f441e83df5, "");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof_kind");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("create_deserialized");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FieldDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FieldDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}