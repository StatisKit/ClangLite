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
    class ::clang::FieldDecl  * (::clang::FieldDecl::*method_pointer_8d96298fbb7c5b3a8dea09bbfabb685f)() = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::FieldDecl  const * (::clang::FieldDecl::*method_pointer_f4b5af5b207951c381d80b2e69e6d703)() const = &::clang::FieldDecl::getCanonicalDecl;
    bool  (::clang::FieldDecl::*method_pointer_6db3c8c124f15431a050b981d2a324a8)() const = &::clang::FieldDecl::isMutable;
    bool  (::clang::FieldDecl::*method_pointer_50f2b21b3fe559f9941f60040f818dc3)() const = &::clang::FieldDecl::isUnnamedBitfield;
    bool  (*method_pointer_cfc64398cd985fcc848174d570bfb360)(class ::clang::Decl  const *) = ::clang::FieldDecl::classof;
    bool  (::clang::FieldDecl::*method_pointer_3dafe92819eb5e5cacf04c144fef11af)() const = &::clang::FieldDecl::isAnonymousStructOrUnion;
    class ::clang::FieldDecl  * (*method_pointer_477b3bbfa1d952ddba50042591e6111d)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FieldDecl::CreateDeserialized;
    bool  (::clang::FieldDecl::*method_pointer_110f5926fb5e559891d3f00998f9deaa)() const = &::clang::FieldDecl::hasCapturedVLAType;
    class ::clang::RecordDecl  const * (::clang::FieldDecl::*method_pointer_05afda832a685cebb013394dd2162fa9)() const = &::clang::FieldDecl::getParent;
    class ::clang::RecordDecl  * (::clang::FieldDecl::*method_pointer_02523e94931e5f7ba0cc79d56173538a)() = &::clang::FieldDecl::getParent;
    void  (::clang::FieldDecl::*method_pointer_33ef6d98e2d050949928cf9b9d0c86f1)() = &::clang::FieldDecl::removeBitWidth;
    bool  (*method_pointer_ad495544773454048712066903e563e7)(enum ::clang::Decl::Kind ) = ::clang::FieldDecl::classofKind;
    void  (::clang::FieldDecl::*method_pointer_efb8aaf1aefa5bf38133944e639477da)() = &::clang::FieldDecl::removeInClassInitializer;
    class ::clang::VariableArrayType  const * (::clang::FieldDecl::*method_pointer_74a2f01e40705d228355d7379f968de0)() const = &::clang::FieldDecl::getCapturedVLAType;
    unsigned int  (::clang::FieldDecl::*method_pointer_6f6104496bf853008aa8d8fc2045fcd1)() const = &::clang::FieldDecl::getFieldIndex;
    bool  (::clang::FieldDecl::*method_pointer_a64c08da33955a8186dd98be985cf843)() const = &::clang::FieldDecl::isBitField;
    void  (::clang::FieldDecl::*method_pointer_5eca32233bd254c78e7824b30cfa1a3b)(class ::clang::VariableArrayType  const *) = &::clang::FieldDecl::setCapturedVLAType;
    bool  (::clang::FieldDecl::*method_pointer_7e63dbb576795ab2b3d4b734f9b7bae1)() const = &::clang::FieldDecl::hasInClassInitializer;
    boost::python::class_< class ::clang::FieldDecl, autowig::HeldType< class ::clang::FieldDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_72a947d59e2e5194bab98d04fc2841fb("FieldDecl", "", boost::python::no_init);
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_8d96298fbb7c5b3a8dea09bbfabb685f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_f4b5af5b207951c381d80b2e69e6d703, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_mutable", method_pointer_6db3c8c124f15431a050b981d2a324a8, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_unnamed_bitfield", method_pointer_50f2b21b3fe559f9941f60040f818dc3, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof", method_pointer_cfc64398cd985fcc848174d570bfb360, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_anonymous_struct_or_union", method_pointer_3dafe92819eb5e5cacf04c144fef11af, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("create_deserialized", method_pointer_477b3bbfa1d952ddba50042591e6111d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_captured_vla_type", method_pointer_110f5926fb5e559891d3f00998f9deaa, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_05afda832a685cebb013394dd2162fa9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_02523e94931e5f7ba0cc79d56173538a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_bit_width", method_pointer_33ef6d98e2d050949928cf9b9d0c86f1, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof_kind", method_pointer_ad495544773454048712066903e563e7, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_in_class_initializer", method_pointer_efb8aaf1aefa5bf38133944e639477da, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_captured_vla_type", method_pointer_74a2f01e40705d228355d7379f968de0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_field_index", method_pointer_6f6104496bf853008aa8d8fc2045fcd1, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_bit_field", method_pointer_a64c08da33955a8186dd98be985cf843, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("set_captured_vla_type", method_pointer_5eca32233bd254c78e7824b30cfa1a3b, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_in_class_initializer", method_pointer_7e63dbb576795ab2b3d4b734f9b7bae1, "");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof_kind");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("create_deserialized");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FieldDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FieldDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}