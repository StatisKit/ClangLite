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
    class ::clang::FieldDecl  * (*method_pointer_6f0e6e325ea15ad7b6051b7e52e66cbb)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FieldDecl::CreateDeserialized;
    bool  (*method_pointer_bc5d47dc20095cab9ee775be5890b94f)(class ::clang::Decl  const *) = ::clang::FieldDecl::classof;
    bool  (*method_pointer_307f3617d237547d9476d407698f92f3)(enum ::clang::Decl::Kind ) = ::clang::FieldDecl::classofKind;
    class ::clang::FieldDecl  const * (::clang::FieldDecl::*method_pointer_72d8beea18b054948dae51a1a78cb09c)() const = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::FieldDecl  * (::clang::FieldDecl::*method_pointer_17c090cd37e4513284922e652e7675e0)() = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::VariableArrayType  const * (::clang::FieldDecl::*method_pointer_cf665f1426fd571087ac1b03f078f3ff)() const = &::clang::FieldDecl::getCapturedVLAType;
    unsigned int  (::clang::FieldDecl::*method_pointer_8963e846bac7516cb652d53aac646ddc)() const = &::clang::FieldDecl::getFieldIndex;
    class ::clang::RecordDecl  * (::clang::FieldDecl::*method_pointer_11c0fd94f59b58b3a0f7f72b16425035)() = &::clang::FieldDecl::getParent;
    class ::clang::RecordDecl  const * (::clang::FieldDecl::*method_pointer_cb2e59b7f4825feab5a88e9cc27a0b63)() const = &::clang::FieldDecl::getParent;
    bool  (::clang::FieldDecl::*method_pointer_35ed4106f8cc57a0a4ea7f413367b796)() const = &::clang::FieldDecl::hasCapturedVLAType;
    bool  (::clang::FieldDecl::*method_pointer_08dc34152eeb5515805b51fa26683d49)() const = &::clang::FieldDecl::hasInClassInitializer;
    bool  (::clang::FieldDecl::*method_pointer_0487216694975ecda8a2b9caa155047f)() const = &::clang::FieldDecl::isAnonymousStructOrUnion;
    bool  (::clang::FieldDecl::*method_pointer_c568e481994f5b748faa59db6e054edf)() const = &::clang::FieldDecl::isBitField;
    bool  (::clang::FieldDecl::*method_pointer_e8d1998cd6535a14ba79a354f354c345)() const = &::clang::FieldDecl::isMutable;
    bool  (::clang::FieldDecl::*method_pointer_dabae9dcf19755268c27b41b0806c1bb)() const = &::clang::FieldDecl::isUnnamedBitfield;
    void  (::clang::FieldDecl::*method_pointer_e3ff6eb6232b54ecb9f51e2fe0744294)() = &::clang::FieldDecl::removeBitWidth;
    void  (::clang::FieldDecl::*method_pointer_e95a1092d6e15efc864d49e3472fcd1f)() = &::clang::FieldDecl::removeInClassInitializer;
    void  (::clang::FieldDecl::*method_pointer_b53133c5b6e352dda54746f9bd92e2ad)(class ::clang::VariableArrayType  const *) = &::clang::FieldDecl::setCapturedVLAType;
    boost::python::class_< class ::clang::FieldDecl, autowig::HeldType< class ::clang::FieldDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_72a947d59e2e5194bab98d04fc2841fb("FieldDecl", "", boost::python::no_init);
    class_72a947d59e2e5194bab98d04fc2841fb.def("create_deserialized", method_pointer_6f0e6e325ea15ad7b6051b7e52e66cbb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof", method_pointer_bc5d47dc20095cab9ee775be5890b94f, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof_kind", method_pointer_307f3617d237547d9476d407698f92f3, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_72d8beea18b054948dae51a1a78cb09c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_17c090cd37e4513284922e652e7675e0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_captured_vla_type", method_pointer_cf665f1426fd571087ac1b03f078f3ff, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_field_index", method_pointer_8963e846bac7516cb652d53aac646ddc, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_11c0fd94f59b58b3a0f7f72b16425035, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_cb2e59b7f4825feab5a88e9cc27a0b63, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_captured_vla_type", method_pointer_35ed4106f8cc57a0a4ea7f413367b796, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_in_class_initializer", method_pointer_08dc34152eeb5515805b51fa26683d49, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_anonymous_struct_or_union", method_pointer_0487216694975ecda8a2b9caa155047f, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_bit_field", method_pointer_c568e481994f5b748faa59db6e054edf, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_mutable", method_pointer_e8d1998cd6535a14ba79a354f354c345, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_unnamed_bitfield", method_pointer_dabae9dcf19755268c27b41b0806c1bb, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_bit_width", method_pointer_e3ff6eb6232b54ecb9f51e2fe0744294, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_in_class_initializer", method_pointer_e95a1092d6e15efc864d49e3472fcd1f, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("set_captured_vla_type", method_pointer_b53133c5b6e352dda54746f9bd92e2ad, "");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof_kind");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("create_deserialized");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FieldDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FieldDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}