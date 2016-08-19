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
    bool  (*method_pointer_6a65315ee0e1539bade19897607193a7)(class ::clang::Decl  const *) = ::clang::RecordDecl::classof;
    bool  (*method_pointer_5f841611ec285936bcbe2fbd164b9efd)(enum ::clang::Decl::Kind ) = ::clang::RecordDecl::classofKind;
    void  (::clang::RecordDecl::*method_pointer_3c4c34b4712251e0873fda26cef5bafb)() = &::clang::RecordDecl::completeDefinition;
    bool  (::clang::RecordDecl::*method_pointer_7a2b1389ed8e593d844b45cf78a9867a)() const = &::clang::RecordDecl::field_empty;
    class ::clang::FieldDecl  const * (::clang::RecordDecl::*method_pointer_d76b80f983645bf88e3599794d0224a4)() const = &::clang::RecordDecl::findFirstNamedDataMember;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_8e557f9e6656507cad6a00cb8713bc3a)() const = &::clang::RecordDecl::getDefinition;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_c540098fb09e5b3a9e67a6ef44117d04)() = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_9977c93b0cf459d5941a6e712c1d67db)() const = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_7c0c140f99095c56bda32a6ef42a03e8)() const = &::clang::RecordDecl::getPreviousDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_d741e6170ba35ba5a42bc86085916685)() = &::clang::RecordDecl::getPreviousDecl;
    bool  (::clang::RecordDecl::*method_pointer_776f836611f355639731acc1e46b4e74)() const = &::clang::RecordDecl::hasFlexibleArrayMember;
    bool  (::clang::RecordDecl::*method_pointer_ac5f4d22463753d79d60ece5d5ff87b0)() const = &::clang::RecordDecl::hasLoadedFieldsFromExternalStorage;
    bool  (::clang::RecordDecl::*method_pointer_f897ac86282d52ddb8a4f609031a590d)() const = &::clang::RecordDecl::hasObjectMember;
    bool  (::clang::RecordDecl::*method_pointer_6a05f4720a2b5ba18ae06624f80abb95)() const = &::clang::RecordDecl::hasVolatileMember;
    bool  (::clang::RecordDecl::*method_pointer_555eaca17f4a5c77a176d0ac00615bfd)() const = &::clang::RecordDecl::isAnonymousStructOrUnion;
    bool  (::clang::RecordDecl::*method_pointer_681333ae2a1756f6b7418811426f655a)() const = &::clang::RecordDecl::isCapturedRecord;
    bool  (::clang::RecordDecl::*method_pointer_b6b63fe2fab756a28e44ecd43d26ec7a)() const = &::clang::RecordDecl::isInjectedClassName;
    bool  (::clang::RecordDecl::*method_pointer_a937c21fcc575ce299b4dad066a0cbbf)() const = &::clang::RecordDecl::isLambda;
    bool  (::clang::RecordDecl::*method_pointer_edaacdd35e8d517e997a1a55c4bbaa83)(bool ) const = &::clang::RecordDecl::mayInsertExtraPadding;
    void  (::clang::RecordDecl::*method_pointer_232f069c10735fb18b866352e18bec24)(bool ) = &::clang::RecordDecl::setAnonymousStructOrUnion;
    void  (::clang::RecordDecl::*method_pointer_507b21fc3a1f5b6795c48c12282b4a4d)() = &::clang::RecordDecl::setCapturedRecord;
    void  (::clang::RecordDecl::*method_pointer_06d7fac1420a5602a2c175772695f3b1)(bool ) = &::clang::RecordDecl::setHasFlexibleArrayMember;
    void  (::clang::RecordDecl::*method_pointer_234ccdaa19c95b52b99e3c5023c3e0cd)(bool ) = &::clang::RecordDecl::setHasLoadedFieldsFromExternalStorage;
    void  (::clang::RecordDecl::*method_pointer_6547d67e59205083a82416fcf4d5434e)(bool ) = &::clang::RecordDecl::setHasObjectMember;
    void  (::clang::RecordDecl::*method_pointer_94349624f70f59c7abc4d4f8c8767b74)(bool ) = &::clang::RecordDecl::setHasVolatileMember;
    boost::python::class_< class ::clang::RecordDecl, autowig::HeldType< class ::clang::RecordDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_185117225e1a5743866dee867a4d2c40("RecordDecl", "", boost::python::no_init);
    class_185117225e1a5743866dee867a4d2c40.def("classof", method_pointer_6a65315ee0e1539bade19897607193a7, "");
    class_185117225e1a5743866dee867a4d2c40.def("classof_kind", method_pointer_5f841611ec285936bcbe2fbd164b9efd, "");
    class_185117225e1a5743866dee867a4d2c40.def("complete_definition", method_pointer_3c4c34b4712251e0873fda26cef5bafb, "");
    class_185117225e1a5743866dee867a4d2c40.def("field_empty", method_pointer_7a2b1389ed8e593d844b45cf78a9867a, "");
    class_185117225e1a5743866dee867a4d2c40.def("find_first_named_data_member", method_pointer_d76b80f983645bf88e3599794d0224a4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_definition", method_pointer_8e557f9e6656507cad6a00cb8713bc3a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_c540098fb09e5b3a9e67a6ef44117d04, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_9977c93b0cf459d5941a6e712c1d67db, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_7c0c140f99095c56bda32a6ef42a03e8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_d741e6170ba35ba5a42bc86085916685, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("has_flexible_array_member", method_pointer_776f836611f355639731acc1e46b4e74, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_loaded_fields_from_external_storage", method_pointer_ac5f4d22463753d79d60ece5d5ff87b0, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_object_member", method_pointer_f897ac86282d52ddb8a4f609031a590d, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_volatile_member", method_pointer_6a05f4720a2b5ba18ae06624f80abb95, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_anonymous_struct_or_union", method_pointer_555eaca17f4a5c77a176d0ac00615bfd, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_captured_record", method_pointer_681333ae2a1756f6b7418811426f655a, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_injected_class_name", method_pointer_b6b63fe2fab756a28e44ecd43d26ec7a, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_lambda", method_pointer_a937c21fcc575ce299b4dad066a0cbbf, "");
    class_185117225e1a5743866dee867a4d2c40.def("may_insert_extra_padding", method_pointer_edaacdd35e8d517e997a1a55c4bbaa83, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_anonymous_struct_or_union", method_pointer_232f069c10735fb18b866352e18bec24, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_captured_record", method_pointer_507b21fc3a1f5b6795c48c12282b4a4d, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_flexible_array_member", method_pointer_06d7fac1420a5602a2c175772695f3b1, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_loaded_fields_from_external_storage", method_pointer_234ccdaa19c95b52b99e3c5023c3e0cd, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_object_member", method_pointer_6547d67e59205083a82416fcf4d5434e, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_volatile_member", method_pointer_94349624f70f59c7abc4d4f8c8767b74, "");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof_kind");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}