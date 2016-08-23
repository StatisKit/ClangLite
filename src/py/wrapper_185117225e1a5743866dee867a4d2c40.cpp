#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_185117225e1a5743866dee867a4d2c40()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_3641d76bda3d534d9dca9302dd316175)(class ::clang::Decl  const *) = ::clang::RecordDecl::classof;
    bool  (*method_pointer_602e316fed41540c8581b42f1a9f803a)(enum ::clang::Decl::Kind ) = ::clang::RecordDecl::classofKind;
    void  (::clang::RecordDecl::*method_pointer_5eadf601565451ffb804cab95e3b0ee2)() = &::clang::RecordDecl::completeDefinition;
    bool  (::clang::RecordDecl::*method_pointer_ffbb25229f7358bc965fb2f4db081f56)() const = &::clang::RecordDecl::field_empty;
    class ::clang::FieldDecl  const * (::clang::RecordDecl::*method_pointer_01f5a89715e25670800a9ea84dc74485)() const = &::clang::RecordDecl::findFirstNamedDataMember;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_9bc52687849b56729bb04289ff7ab639)() const = &::clang::RecordDecl::getDefinition;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_9799fc1aa9be5ee29016d09f2c740235)() = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_d94d71c07f9f5830b5c3971d9a9a8f8c)() const = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_7ef5ea928cd459118bff06a70c906eb6)() const = &::clang::RecordDecl::getPreviousDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_b003e8a11de954898bf799fab8bbeb5c)() = &::clang::RecordDecl::getPreviousDecl;
    bool  (::clang::RecordDecl::*method_pointer_dd0db37196f85d44842351a10c63e7a5)() const = &::clang::RecordDecl::hasFlexibleArrayMember;
    bool  (::clang::RecordDecl::*method_pointer_382b77c4f88b56d2884f842d69c06783)() const = &::clang::RecordDecl::hasLoadedFieldsFromExternalStorage;
    bool  (::clang::RecordDecl::*method_pointer_96b5b258c7065198b120e20f2ffec7f7)() const = &::clang::RecordDecl::hasObjectMember;
    bool  (::clang::RecordDecl::*method_pointer_e77bc2f085ba5017bd5c22748a027cf8)() const = &::clang::RecordDecl::hasVolatileMember;
    bool  (::clang::RecordDecl::*method_pointer_b34576d28f2855d8a7c425b78f377819)() const = &::clang::RecordDecl::isAnonymousStructOrUnion;
    bool  (::clang::RecordDecl::*method_pointer_5ed0f61d005950acaa6456010e60ad48)() const = &::clang::RecordDecl::isCapturedRecord;
    bool  (::clang::RecordDecl::*method_pointer_92bfcad1abd65d638507032c9f1e8bc1)() const = &::clang::RecordDecl::isInjectedClassName;
    bool  (::clang::RecordDecl::*method_pointer_cf1cab52f52256a2ae254d8107c180a8)() const = &::clang::RecordDecl::isLambda;
    bool  (::clang::RecordDecl::*method_pointer_ca6ef10000885970b736b55740fb85ce)(bool ) const = &::clang::RecordDecl::mayInsertExtraPadding;
    void  (::clang::RecordDecl::*method_pointer_0161db808e9d580bb48fb2f4f35caee3)(bool ) = &::clang::RecordDecl::setAnonymousStructOrUnion;
    void  (::clang::RecordDecl::*method_pointer_e2b97f9197c0539998c5e9ae6110ba60)() = &::clang::RecordDecl::setCapturedRecord;
    void  (::clang::RecordDecl::*method_pointer_ace4ac341a9353f4ac2358e6afa7888d)(bool ) = &::clang::RecordDecl::setHasFlexibleArrayMember;
    void  (::clang::RecordDecl::*method_pointer_46983ea9d57151cbad2ab0cdec97f79b)(bool ) = &::clang::RecordDecl::setHasLoadedFieldsFromExternalStorage;
    void  (::clang::RecordDecl::*method_pointer_e9db4dd3c90455e69de2471562004bfc)(bool ) = &::clang::RecordDecl::setHasObjectMember;
    void  (::clang::RecordDecl::*method_pointer_ea780a812e005a81a04a609c01396a9e)(bool ) = &::clang::RecordDecl::setHasVolatileMember;
    boost::python::class_< class ::clang::RecordDecl, autowig::HeldType< class ::clang::RecordDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_185117225e1a5743866dee867a4d2c40("RecordDecl", "", boost::python::no_init);
    class_185117225e1a5743866dee867a4d2c40.def("classof", method_pointer_3641d76bda3d534d9dca9302dd316175, "");
    class_185117225e1a5743866dee867a4d2c40.def("classof_kind", method_pointer_602e316fed41540c8581b42f1a9f803a, "");
    class_185117225e1a5743866dee867a4d2c40.def("complete_definition", method_pointer_5eadf601565451ffb804cab95e3b0ee2, "");
    class_185117225e1a5743866dee867a4d2c40.def("field_empty", method_pointer_ffbb25229f7358bc965fb2f4db081f56, "");
    class_185117225e1a5743866dee867a4d2c40.def("find_first_named_data_member", method_pointer_01f5a89715e25670800a9ea84dc74485, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_definition", method_pointer_9bc52687849b56729bb04289ff7ab639, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_9799fc1aa9be5ee29016d09f2c740235, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_d94d71c07f9f5830b5c3971d9a9a8f8c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_7ef5ea928cd459118bff06a70c906eb6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_b003e8a11de954898bf799fab8bbeb5c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("has_flexible_array_member", method_pointer_dd0db37196f85d44842351a10c63e7a5, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_loaded_fields_from_external_storage", method_pointer_382b77c4f88b56d2884f842d69c06783, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_object_member", method_pointer_96b5b258c7065198b120e20f2ffec7f7, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_volatile_member", method_pointer_e77bc2f085ba5017bd5c22748a027cf8, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_anonymous_struct_or_union", method_pointer_b34576d28f2855d8a7c425b78f377819, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_captured_record", method_pointer_5ed0f61d005950acaa6456010e60ad48, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_injected_class_name", method_pointer_92bfcad1abd65d638507032c9f1e8bc1, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_lambda", method_pointer_cf1cab52f52256a2ae254d8107c180a8, "");
    class_185117225e1a5743866dee867a4d2c40.def("may_insert_extra_padding", method_pointer_ca6ef10000885970b736b55740fb85ce, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_anonymous_struct_or_union", method_pointer_0161db808e9d580bb48fb2f4f35caee3, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_captured_record", method_pointer_e2b97f9197c0539998c5e9ae6110ba60, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_flexible_array_member", method_pointer_ace4ac341a9353f4ac2358e6afa7888d, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_loaded_fields_from_external_storage", method_pointer_46983ea9d57151cbad2ab0cdec97f79b, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_object_member", method_pointer_e9db4dd3c90455e69de2471562004bfc, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_volatile_member", method_pointer_ea780a812e005a81a04a609c01396a9e, "");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof_kind");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}