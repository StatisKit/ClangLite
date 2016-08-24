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
    class ::clang::FieldDecl  * (*method_pointer_549ce57c865553bbbe19e49e2ec6b46f)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FieldDecl::CreateDeserialized;
    bool  (*method_pointer_396f86a9547752d094763e703874af5e)(class ::clang::Decl  const *) = ::clang::FieldDecl::classof;
    bool  (*method_pointer_3a4cb73221795aa58cde48157b77ba2e)(enum ::clang::Decl::Kind ) = ::clang::FieldDecl::classofKind;
    class ::clang::FieldDecl  const * (::clang::FieldDecl::*method_pointer_cca9726b34a75a2b9e154b68f38264d8)() const = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::FieldDecl  * (::clang::FieldDecl::*method_pointer_f267da10549c5fd6a8e5fdb260576b5d)() = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::VariableArrayType  const * (::clang::FieldDecl::*method_pointer_8c51a30fb7255d9facafa24bfb020db0)() const = &::clang::FieldDecl::getCapturedVLAType;
    unsigned int  (::clang::FieldDecl::*method_pointer_d9ded3f2012c565dabcff0aa47b60e38)() const = &::clang::FieldDecl::getFieldIndex;
    class ::clang::RecordDecl  const * (::clang::FieldDecl::*method_pointer_2968df9a794c5c2084e7e6e60262960c)() const = &::clang::FieldDecl::getParent;
    class ::clang::RecordDecl  * (::clang::FieldDecl::*method_pointer_5b8cada0aaee53f5a914d5ae8a3ab042)() = &::clang::FieldDecl::getParent;
    bool  (::clang::FieldDecl::*method_pointer_37867474f9c2587e87dfbea452c95078)() const = &::clang::FieldDecl::hasCapturedVLAType;
    bool  (::clang::FieldDecl::*method_pointer_a92b7540f64e5e27a69194d78c9e5bdd)() const = &::clang::FieldDecl::hasInClassInitializer;
    bool  (::clang::FieldDecl::*method_pointer_612b692b1bc75a92beeeb3ad62f85724)() const = &::clang::FieldDecl::isAnonymousStructOrUnion;
    bool  (::clang::FieldDecl::*method_pointer_7f152e4e2f7253188d7513b25a967449)() const = &::clang::FieldDecl::isBitField;
    bool  (::clang::FieldDecl::*method_pointer_00f66cd9a7ee5b2f99b19db60eddc192)() const = &::clang::FieldDecl::isMutable;
    bool  (::clang::FieldDecl::*method_pointer_527c08655b1c5c6b8ba20958790d1baa)() const = &::clang::FieldDecl::isUnnamedBitfield;
    void  (::clang::FieldDecl::*method_pointer_b9ba0883e317574fa33a670bdcc3927e)() = &::clang::FieldDecl::removeBitWidth;
    void  (::clang::FieldDecl::*method_pointer_74b8ab69ae3f516c995b736769799e1b)() = &::clang::FieldDecl::removeInClassInitializer;
    void  (::clang::FieldDecl::*method_pointer_a53e1883b37b5e1d84dd3c57074c996c)(class ::clang::VariableArrayType  const *) = &::clang::FieldDecl::setCapturedVLAType;
    boost::python::class_< class ::clang::FieldDecl, autowig::HeldType< class ::clang::FieldDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_72a947d59e2e5194bab98d04fc2841fb("FieldDecl", "", boost::python::no_init);
    class_72a947d59e2e5194bab98d04fc2841fb.def("create_deserialized", method_pointer_549ce57c865553bbbe19e49e2ec6b46f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof", method_pointer_396f86a9547752d094763e703874af5e, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof_kind", method_pointer_3a4cb73221795aa58cde48157b77ba2e, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_cca9726b34a75a2b9e154b68f38264d8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_f267da10549c5fd6a8e5fdb260576b5d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_captured_vla_type", method_pointer_8c51a30fb7255d9facafa24bfb020db0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_field_index", method_pointer_d9ded3f2012c565dabcff0aa47b60e38, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_2968df9a794c5c2084e7e6e60262960c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_5b8cada0aaee53f5a914d5ae8a3ab042, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_captured_vla_type", method_pointer_37867474f9c2587e87dfbea452c95078, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_in_class_initializer", method_pointer_a92b7540f64e5e27a69194d78c9e5bdd, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_anonymous_struct_or_union", method_pointer_612b692b1bc75a92beeeb3ad62f85724, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_bit_field", method_pointer_7f152e4e2f7253188d7513b25a967449, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_mutable", method_pointer_00f66cd9a7ee5b2f99b19db60eddc192, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_unnamed_bitfield", method_pointer_527c08655b1c5c6b8ba20958790d1baa, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_bit_width", method_pointer_b9ba0883e317574fa33a670bdcc3927e, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_in_class_initializer", method_pointer_74b8ab69ae3f516c995b736769799e1b, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("set_captured_vla_type", method_pointer_a53e1883b37b5e1d84dd3c57074c996c, "");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof_kind");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("create_deserialized");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FieldDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FieldDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}