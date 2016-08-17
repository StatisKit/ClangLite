#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_185117225e1a5743866dee867a4d2c40()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::RecordDecl::*method_pointer_34c822e0e9555030bd3b721d2aa05a2b)() const = &::clang::RecordDecl::isInjectedClassName;
    bool  (::clang::RecordDecl::*method_pointer_b016edbc2bb65e6e8bd4ea62c8e9a7bb)() const = &::clang::RecordDecl::hasFlexibleArrayMember;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_3dea67e2d20c5b23ba1eeb580b9ad842)() const = &::clang::RecordDecl::getMostRecentDecl;
    void  (::clang::RecordDecl::*method_pointer_bb3d950c02d958a3afaac6cdda0f6a39)() = &::clang::RecordDecl::setCapturedRecord;
    bool  (*method_pointer_97d957634c81524e8597ef1e55b07eab)(enum ::clang::Decl::Kind ) = ::clang::RecordDecl::classofKind;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_583af709446e5f92b1b37841ba9793fc)() = &::clang::RecordDecl::getPreviousDecl;
    bool  (::clang::RecordDecl::*method_pointer_44a322abaf00552f9d2170f2248bad01)() const = &::clang::RecordDecl::hasObjectMember;
    class ::clang::FieldDecl  const * (::clang::RecordDecl::*method_pointer_329943c5cc065995a1b628a52cf3cbea)() const = &::clang::RecordDecl::findFirstNamedDataMember;
    void  (::clang::RecordDecl::*method_pointer_8820b972c7935fb791862c92fb83e5f8)(bool ) = &::clang::RecordDecl::setAnonymousStructOrUnion;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_296298277c86591c951b0411114181fa)() const = &::clang::RecordDecl::getPreviousDecl;
    void  (::clang::RecordDecl::*method_pointer_3ed14a0a8cb45adea88be96e5fb44dd5)() = &::clang::RecordDecl::completeDefinition;
    bool  (::clang::RecordDecl::*method_pointer_0a0c6c9dac0054fb8c5a76ed2d2aa0b0)() const = &::clang::RecordDecl::field_empty;
    bool  (::clang::RecordDecl::*method_pointer_7b466c5b20705e269694ec496e61fdb7)() const = &::clang::RecordDecl::isLambda;
    void  (::clang::RecordDecl::*method_pointer_b7088a6b0af95faa8424c3950b5c3510)(bool ) = &::clang::RecordDecl::setHasVolatileMember;
    bool  (::clang::RecordDecl::*method_pointer_107b09b4ef0e5860ad94e0f734385c85)(bool ) const = &::clang::RecordDecl::mayInsertExtraPadding;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_f828418162755e578f1b72e070b650e2)() = &::clang::RecordDecl::getMostRecentDecl;
    bool  (::clang::RecordDecl::*method_pointer_adeece6194255881b6d55ee2dcd57137)() const = &::clang::RecordDecl::hasVolatileMember;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_91f82adb26a759c8b3c1eb6af9eac1a4)() const = &::clang::RecordDecl::getDefinition;
    bool  (::clang::RecordDecl::*method_pointer_88c6b26333385b199d942c7c5ff6fd0c)() const = &::clang::RecordDecl::isCapturedRecord;
    bool  (::clang::RecordDecl::*method_pointer_8d577c07e51b54db8f9c6781071c0b21)() const = &::clang::RecordDecl::isAnonymousStructOrUnion;
    bool  (::clang::RecordDecl::*method_pointer_09b81da55970518096639e658fdfa732)() const = &::clang::RecordDecl::hasLoadedFieldsFromExternalStorage;
    void  (::clang::RecordDecl::*method_pointer_971006494fa1563b8dfa415f1b54e625)(bool ) = &::clang::RecordDecl::setHasLoadedFieldsFromExternalStorage;
    void  (::clang::RecordDecl::*method_pointer_63168c87ae4c5c7e8ee9c03c5eadd0c6)(bool ) = &::clang::RecordDecl::setHasObjectMember;
    bool  (*method_pointer_6cf4763467535627bee79fc72a473eb9)(class ::clang::Decl  const *) = ::clang::RecordDecl::classof;
    void  (::clang::RecordDecl::*method_pointer_e8274862a5e05fd7938eeef5ac5dba39)(bool ) = &::clang::RecordDecl::setHasFlexibleArrayMember;
    boost::python::class_< class ::clang::RecordDecl, autowig::HeldType< class ::clang::RecordDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_185117225e1a5743866dee867a4d2c40("RecordDecl", "", boost::python::no_init);
    class_185117225e1a5743866dee867a4d2c40.def("is_injected_class_name", method_pointer_34c822e0e9555030bd3b721d2aa05a2b, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_flexible_array_member", method_pointer_b016edbc2bb65e6e8bd4ea62c8e9a7bb, "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_3dea67e2d20c5b23ba1eeb580b9ad842, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("set_captured_record", method_pointer_bb3d950c02d958a3afaac6cdda0f6a39, "");
    class_185117225e1a5743866dee867a4d2c40.def("classof_kind", method_pointer_97d957634c81524e8597ef1e55b07eab, "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_583af709446e5f92b1b37841ba9793fc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("has_object_member", method_pointer_44a322abaf00552f9d2170f2248bad01, "");
    class_185117225e1a5743866dee867a4d2c40.def("find_first_named_data_member", method_pointer_329943c5cc065995a1b628a52cf3cbea, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("set_anonymous_struct_or_union", method_pointer_8820b972c7935fb791862c92fb83e5f8, "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_296298277c86591c951b0411114181fa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("complete_definition", method_pointer_3ed14a0a8cb45adea88be96e5fb44dd5, "");
    class_185117225e1a5743866dee867a4d2c40.def("field_empty", method_pointer_0a0c6c9dac0054fb8c5a76ed2d2aa0b0, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_lambda", method_pointer_7b466c5b20705e269694ec496e61fdb7, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_volatile_member", method_pointer_b7088a6b0af95faa8424c3950b5c3510, "");
    class_185117225e1a5743866dee867a4d2c40.def("may_insert_extra_padding", method_pointer_107b09b4ef0e5860ad94e0f734385c85, "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_f828418162755e578f1b72e070b650e2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("has_volatile_member", method_pointer_adeece6194255881b6d55ee2dcd57137, "");
    class_185117225e1a5743866dee867a4d2c40.def("get_definition", method_pointer_91f82adb26a759c8b3c1eb6af9eac1a4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("is_captured_record", method_pointer_88c6b26333385b199d942c7c5ff6fd0c, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_anonymous_struct_or_union", method_pointer_8d577c07e51b54db8f9c6781071c0b21, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_loaded_fields_from_external_storage", method_pointer_09b81da55970518096639e658fdfa732, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_loaded_fields_from_external_storage", method_pointer_971006494fa1563b8dfa415f1b54e625, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_object_member", method_pointer_63168c87ae4c5c7e8ee9c03c5eadd0c6, "");
    class_185117225e1a5743866dee867a4d2c40.def("classof", method_pointer_6cf4763467535627bee79fc72a473eb9, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_flexible_array_member", method_pointer_e8274862a5e05fd7938eeef5ac5dba39, "");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof_kind");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}