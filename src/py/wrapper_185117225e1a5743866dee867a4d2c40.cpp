#include "_clanglite.h"


namespace autowig
{
}


void wrapper_185117225e1a5743866dee867a4d2c40()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_6018e05f60b05f09b7f120bbd2db9b57)(class ::clang::Decl  const *) = ::clang::RecordDecl::classof;
    bool  (*method_pointer_7854575037995f11a1cb16dc65b54d00)(enum ::clang::Decl::Kind ) = ::clang::RecordDecl::classofKind;
    void  (::clang::RecordDecl::*method_pointer_e8f1a9802bdb5c45942d80b84c8d3f6a)() = &::clang::RecordDecl::completeDefinition;
    bool  (::clang::RecordDecl::*method_pointer_9a06b611584954338744298faed5fd75)() const = &::clang::RecordDecl::field_empty;
    class ::clang::FieldDecl  const * (::clang::RecordDecl::*method_pointer_f7d62b62028b539d8d4f7a25c9196058)() const = &::clang::RecordDecl::findFirstNamedDataMember;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_28c2800762a7556ab98e0ee0a53ce10a)() const = &::clang::RecordDecl::getDefinition;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_2bb9606afe055fe0b84d0857f13167a2)() const = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_47ea3a64e0e1561c8cabd5c31de8524e)() = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_8f9886dc83c0514d91397c5f54876371)() = &::clang::RecordDecl::getPreviousDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_568262fbcbbb5a95a3e290310cba9d94)() const = &::clang::RecordDecl::getPreviousDecl;
    bool  (::clang::RecordDecl::*method_pointer_a436dab8c318540794158683a50e9371)() const = &::clang::RecordDecl::hasFlexibleArrayMember;
    bool  (::clang::RecordDecl::*method_pointer_9e1dabcaa91650ed87cd4a0cece46fcc)() const = &::clang::RecordDecl::hasLoadedFieldsFromExternalStorage;
    bool  (::clang::RecordDecl::*method_pointer_0e70862daa8b501e92defdb5b8ca56d5)() const = &::clang::RecordDecl::hasObjectMember;
    bool  (::clang::RecordDecl::*method_pointer_b85e51b08b075f87abca792b0efc37bb)() const = &::clang::RecordDecl::hasVolatileMember;
    bool  (::clang::RecordDecl::*method_pointer_cfb2b858cfa659ad9387deaf59329c92)() const = &::clang::RecordDecl::isAnonymousStructOrUnion;
    bool  (::clang::RecordDecl::*method_pointer_731e117b1dd05e49a81839edc7e5169f)() const = &::clang::RecordDecl::isCapturedRecord;
    bool  (::clang::RecordDecl::*method_pointer_00b04db4204f5d80a3bc6712362c40be)() const = &::clang::RecordDecl::isInjectedClassName;
    bool  (::clang::RecordDecl::*method_pointer_51badd3fb8185f5f876f0e1008619c43)() const = &::clang::RecordDecl::isLambda;
    bool  (::clang::RecordDecl::*method_pointer_95d21c8a1f755727b6a81c7b51bafe30)(bool ) const = &::clang::RecordDecl::mayInsertExtraPadding;
    void  (::clang::RecordDecl::*method_pointer_08f804f44ec55f6596d6fad2c56881f4)(bool ) = &::clang::RecordDecl::setAnonymousStructOrUnion;
    void  (::clang::RecordDecl::*method_pointer_63bc9970101051ee93698838bf10a9a3)() = &::clang::RecordDecl::setCapturedRecord;
    void  (::clang::RecordDecl::*method_pointer_297b9db792d95bbd8476df8682506354)(bool ) = &::clang::RecordDecl::setHasFlexibleArrayMember;
    void  (::clang::RecordDecl::*method_pointer_4ae8fc0ead6d5749970b463ee4024895)(bool ) = &::clang::RecordDecl::setHasLoadedFieldsFromExternalStorage;
    void  (::clang::RecordDecl::*method_pointer_91644d9821475fb8ac66ea03014019c1)(bool ) = &::clang::RecordDecl::setHasObjectMember;
    void  (::clang::RecordDecl::*method_pointer_c6b1f06eb5415643856055118470bc74)(bool ) = &::clang::RecordDecl::setHasVolatileMember;
    boost::python::class_< class ::clang::RecordDecl, autowig::HeldType< class ::clang::RecordDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_185117225e1a5743866dee867a4d2c40("RecordDecl", "", boost::python::no_init);
    class_185117225e1a5743866dee867a4d2c40.def("classof", method_pointer_6018e05f60b05f09b7f120bbd2db9b57, "");
    class_185117225e1a5743866dee867a4d2c40.def("classof_kind", method_pointer_7854575037995f11a1cb16dc65b54d00, "");
    class_185117225e1a5743866dee867a4d2c40.def("complete_definition", method_pointer_e8f1a9802bdb5c45942d80b84c8d3f6a, "");
    class_185117225e1a5743866dee867a4d2c40.def("field_empty", method_pointer_9a06b611584954338744298faed5fd75, "");
    class_185117225e1a5743866dee867a4d2c40.def("find_first_named_data_member", method_pointer_f7d62b62028b539d8d4f7a25c9196058, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_definition", method_pointer_28c2800762a7556ab98e0ee0a53ce10a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_2bb9606afe055fe0b84d0857f13167a2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_47ea3a64e0e1561c8cabd5c31de8524e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_8f9886dc83c0514d91397c5f54876371, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_568262fbcbbb5a95a3e290310cba9d94, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("has_flexible_array_member", method_pointer_a436dab8c318540794158683a50e9371, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_loaded_fields_from_external_storage", method_pointer_9e1dabcaa91650ed87cd4a0cece46fcc, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_object_member", method_pointer_0e70862daa8b501e92defdb5b8ca56d5, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_volatile_member", method_pointer_b85e51b08b075f87abca792b0efc37bb, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_anonymous_struct_or_union", method_pointer_cfb2b858cfa659ad9387deaf59329c92, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_captured_record", method_pointer_731e117b1dd05e49a81839edc7e5169f, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_injected_class_name", method_pointer_00b04db4204f5d80a3bc6712362c40be, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_lambda", method_pointer_51badd3fb8185f5f876f0e1008619c43, "");
    class_185117225e1a5743866dee867a4d2c40.def("may_insert_extra_padding", method_pointer_95d21c8a1f755727b6a81c7b51bafe30, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_anonymous_struct_or_union", method_pointer_08f804f44ec55f6596d6fad2c56881f4, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_captured_record", method_pointer_63bc9970101051ee93698838bf10a9a3, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_flexible_array_member", method_pointer_297b9db792d95bbd8476df8682506354, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_loaded_fields_from_external_storage", method_pointer_4ae8fc0ead6d5749970b463ee4024895, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_object_member", method_pointer_91644d9821475fb8ac66ea03014019c1, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_volatile_member", method_pointer_c6b1f06eb5415643856055118470bc74, "");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof_kind");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}