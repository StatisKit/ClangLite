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
    bool  (*method_pointer_8ec31651c5155a039dbaa6f17821a3c4)(class ::clang::Decl  const *) = ::clang::RecordDecl::classof;
    bool  (*method_pointer_de03838c6e1952359351f7c78ae90451)(enum ::clang::Decl::Kind ) = ::clang::RecordDecl::classofKind;
    void  (::clang::RecordDecl::*method_pointer_c40eb1cc43915e9fad149152a30b585d)() = &::clang::RecordDecl::completeDefinition;
    bool  (::clang::RecordDecl::*method_pointer_c23ce45d29e15882b1068b5e63e8025d)() const = &::clang::RecordDecl::field_empty;
    class ::clang::FieldDecl  const * (::clang::RecordDecl::*method_pointer_6e0e473dc3c550d2b0658843aaf725c8)() const = &::clang::RecordDecl::findFirstNamedDataMember;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_ef7df433d0e25fcebee9864c084b8d14)() const = &::clang::RecordDecl::getDefinition;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_becd6f3bbafa52a98d5a57a56840d365)() = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_f6c6b7a14e06589896f5289bf3385fc3)() const = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_f4769294f4c75b80830667dd868187d4)() const = &::clang::RecordDecl::getPreviousDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_d58d6f2a807b538bb102c63fe6acce81)() = &::clang::RecordDecl::getPreviousDecl;
    bool  (::clang::RecordDecl::*method_pointer_ccf746095feb588d99762deb74ca7b90)() const = &::clang::RecordDecl::hasFlexibleArrayMember;
    bool  (::clang::RecordDecl::*method_pointer_a84830cd18cf55788cf91b7e678cd569)() const = &::clang::RecordDecl::hasLoadedFieldsFromExternalStorage;
    bool  (::clang::RecordDecl::*method_pointer_bc4a4f2ad48258fbac9bb469abdc0961)() const = &::clang::RecordDecl::hasObjectMember;
    bool  (::clang::RecordDecl::*method_pointer_5dd33b0192ce5964b9d5be74f7bc59b6)() const = &::clang::RecordDecl::hasVolatileMember;
    bool  (::clang::RecordDecl::*method_pointer_6b3edb30a227589ba576f6e4d70a0a75)() const = &::clang::RecordDecl::isAnonymousStructOrUnion;
    bool  (::clang::RecordDecl::*method_pointer_267209a7fe2057b980fe2c27644b6ab0)() const = &::clang::RecordDecl::isCapturedRecord;
    bool  (::clang::RecordDecl::*method_pointer_83ded60dbaaa599099b74f6d6d11812c)() const = &::clang::RecordDecl::isInjectedClassName;
    bool  (::clang::RecordDecl::*method_pointer_6ca4fe9c3bb35482b208b80470a077ee)() const = &::clang::RecordDecl::isLambda;
    bool  (::clang::RecordDecl::*method_pointer_183810e343fb5e10966f3b54fc42a536)(bool ) const = &::clang::RecordDecl::mayInsertExtraPadding;
    void  (::clang::RecordDecl::*method_pointer_9463abba0c6a59318469a47b837c6174)(bool ) = &::clang::RecordDecl::setAnonymousStructOrUnion;
    void  (::clang::RecordDecl::*method_pointer_da87ef3029b05cfe99a32b656dde7ec5)() = &::clang::RecordDecl::setCapturedRecord;
    void  (::clang::RecordDecl::*method_pointer_ae6ead1d42315393847e06993d72e9cf)(bool ) = &::clang::RecordDecl::setHasFlexibleArrayMember;
    void  (::clang::RecordDecl::*method_pointer_1bc7fc0965e85af8887b92fb085d196e)(bool ) = &::clang::RecordDecl::setHasLoadedFieldsFromExternalStorage;
    void  (::clang::RecordDecl::*method_pointer_395a7703c7a3569a836df2ee90d11956)(bool ) = &::clang::RecordDecl::setHasObjectMember;
    void  (::clang::RecordDecl::*method_pointer_e8f7f7d3b8fd5dbca34cbd3f78502d82)(bool ) = &::clang::RecordDecl::setHasVolatileMember;
    boost::python::class_< class ::clang::RecordDecl, autowig::HeldType< class ::clang::RecordDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_185117225e1a5743866dee867a4d2c40("RecordDecl", "", boost::python::no_init);
    class_185117225e1a5743866dee867a4d2c40.def("classof", method_pointer_8ec31651c5155a039dbaa6f17821a3c4, "");
    class_185117225e1a5743866dee867a4d2c40.def("classof_kind", method_pointer_de03838c6e1952359351f7c78ae90451, "");
    class_185117225e1a5743866dee867a4d2c40.def("complete_definition", method_pointer_c40eb1cc43915e9fad149152a30b585d, "");
    class_185117225e1a5743866dee867a4d2c40.def("field_empty", method_pointer_c23ce45d29e15882b1068b5e63e8025d, "");
    class_185117225e1a5743866dee867a4d2c40.def("find_first_named_data_member", method_pointer_6e0e473dc3c550d2b0658843aaf725c8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_definition", method_pointer_ef7df433d0e25fcebee9864c084b8d14, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_becd6f3bbafa52a98d5a57a56840d365, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_f6c6b7a14e06589896f5289bf3385fc3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_f4769294f4c75b80830667dd868187d4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_d58d6f2a807b538bb102c63fe6acce81, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("has_flexible_array_member", method_pointer_ccf746095feb588d99762deb74ca7b90, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_loaded_fields_from_external_storage", method_pointer_a84830cd18cf55788cf91b7e678cd569, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_object_member", method_pointer_bc4a4f2ad48258fbac9bb469abdc0961, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_volatile_member", method_pointer_5dd33b0192ce5964b9d5be74f7bc59b6, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_anonymous_struct_or_union", method_pointer_6b3edb30a227589ba576f6e4d70a0a75, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_captured_record", method_pointer_267209a7fe2057b980fe2c27644b6ab0, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_injected_class_name", method_pointer_83ded60dbaaa599099b74f6d6d11812c, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_lambda", method_pointer_6ca4fe9c3bb35482b208b80470a077ee, "");
    class_185117225e1a5743866dee867a4d2c40.def("may_insert_extra_padding", method_pointer_183810e343fb5e10966f3b54fc42a536, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_anonymous_struct_or_union", method_pointer_9463abba0c6a59318469a47b837c6174, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_captured_record", method_pointer_da87ef3029b05cfe99a32b656dde7ec5, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_flexible_array_member", method_pointer_ae6ead1d42315393847e06993d72e9cf, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_loaded_fields_from_external_storage", method_pointer_1bc7fc0965e85af8887b92fb085d196e, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_object_member", method_pointer_395a7703c7a3569a836df2ee90d11956, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_volatile_member", method_pointer_e8f7f7d3b8fd5dbca34cbd3f78502d82, "");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof_kind");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}