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
    class ::clang::FieldDecl  * (*method_pointer_22c4d02922955cccbc86e9b71e5a684c)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FieldDecl::CreateDeserialized;
    bool  (*method_pointer_c9b7fe3e7245593596c46e2e137e8033)(class ::clang::Decl  const *) = ::clang::FieldDecl::classof;
    bool  (*method_pointer_f5063fd6b6f85d00a6ae756e9caaf75a)(enum ::clang::Decl::Kind ) = ::clang::FieldDecl::classofKind;
    class ::clang::FieldDecl  const * (::clang::FieldDecl::*method_pointer_8e3a7b6d97ed586f9e46acc5fb0b9e58)() const = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::FieldDecl  * (::clang::FieldDecl::*method_pointer_07db6b588f6f58f8aca35bd091bfb300)() = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::VariableArrayType  const * (::clang::FieldDecl::*method_pointer_bd0eb61c0e04561ca04a735102debd0f)() const = &::clang::FieldDecl::getCapturedVLAType;
    unsigned int  (::clang::FieldDecl::*method_pointer_2730d649725d5ef8b34f50e621bff4ec)() const = &::clang::FieldDecl::getFieldIndex;
    class ::clang::RecordDecl  const * (::clang::FieldDecl::*method_pointer_4f2c0bca4c91577792895b1463db6b2b)() const = &::clang::FieldDecl::getParent;
    class ::clang::RecordDecl  * (::clang::FieldDecl::*method_pointer_bea2fe7747c651c885ceb10acde7b0a3)() = &::clang::FieldDecl::getParent;
    bool  (::clang::FieldDecl::*method_pointer_0003e2c731f9570baa87c323f7538609)() const = &::clang::FieldDecl::hasCapturedVLAType;
    bool  (::clang::FieldDecl::*method_pointer_8779edc85f2a57e4b3b1cf0ac803f2fc)() const = &::clang::FieldDecl::hasInClassInitializer;
    bool  (::clang::FieldDecl::*method_pointer_619550708cda56248dee7b00dd28703a)() const = &::clang::FieldDecl::isAnonymousStructOrUnion;
    bool  (::clang::FieldDecl::*method_pointer_060062b6746e5deb8131a83b4805510b)() const = &::clang::FieldDecl::isBitField;
    bool  (::clang::FieldDecl::*method_pointer_ec1137931cbf53508880911dc58e3fe4)() const = &::clang::FieldDecl::isMutable;
    bool  (::clang::FieldDecl::*method_pointer_7491157c148356fd8af028d143c7cdd6)() const = &::clang::FieldDecl::isUnnamedBitfield;
    void  (::clang::FieldDecl::*method_pointer_a97bfac4f1ce5d0bbb0fa09fac88506c)() = &::clang::FieldDecl::removeBitWidth;
    void  (::clang::FieldDecl::*method_pointer_ef2a5accdbbb582fa440b99fcd8361e4)() = &::clang::FieldDecl::removeInClassInitializer;
    void  (::clang::FieldDecl::*method_pointer_ff3b7bba038959ad83217b8e8cec32db)(class ::clang::VariableArrayType  const *) = &::clang::FieldDecl::setCapturedVLAType;
    boost::python::class_< class ::clang::FieldDecl, autowig::HeldType< class ::clang::FieldDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_72a947d59e2e5194bab98d04fc2841fb("FieldDecl", "", boost::python::no_init);
    class_72a947d59e2e5194bab98d04fc2841fb.def("create_deserialized", method_pointer_22c4d02922955cccbc86e9b71e5a684c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof", method_pointer_c9b7fe3e7245593596c46e2e137e8033, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof_kind", method_pointer_f5063fd6b6f85d00a6ae756e9caaf75a, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_8e3a7b6d97ed586f9e46acc5fb0b9e58, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_07db6b588f6f58f8aca35bd091bfb300, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_captured_vla_type", method_pointer_bd0eb61c0e04561ca04a735102debd0f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_field_index", method_pointer_2730d649725d5ef8b34f50e621bff4ec, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_4f2c0bca4c91577792895b1463db6b2b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_bea2fe7747c651c885ceb10acde7b0a3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_captured_vla_type", method_pointer_0003e2c731f9570baa87c323f7538609, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_in_class_initializer", method_pointer_8779edc85f2a57e4b3b1cf0ac803f2fc, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_anonymous_struct_or_union", method_pointer_619550708cda56248dee7b00dd28703a, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_bit_field", method_pointer_060062b6746e5deb8131a83b4805510b, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_mutable", method_pointer_ec1137931cbf53508880911dc58e3fe4, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_unnamed_bitfield", method_pointer_7491157c148356fd8af028d143c7cdd6, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_bit_width", method_pointer_a97bfac4f1ce5d0bbb0fa09fac88506c, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_in_class_initializer", method_pointer_ef2a5accdbbb582fa440b99fcd8361e4, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("set_captured_vla_type", method_pointer_ff3b7bba038959ad83217b8e8cec32db, "");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof_kind");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("create_deserialized");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FieldDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FieldDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}