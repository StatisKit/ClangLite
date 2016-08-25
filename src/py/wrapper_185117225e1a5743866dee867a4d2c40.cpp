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
    bool  (*method_pointer_cfba270b2f6154c59ce76504e2c2bb26)(class ::clang::Decl  const *) = ::clang::RecordDecl::classof;
    bool  (*method_pointer_cd996a45d9ad56a58295a8d23fdae9ef)(enum ::clang::Decl::Kind ) = ::clang::RecordDecl::classofKind;
    void  (::clang::RecordDecl::*method_pointer_4556f5c73e4e5425954d31b1e258d953)() = &::clang::RecordDecl::completeDefinition;
    bool  (::clang::RecordDecl::*method_pointer_3910dc3b048151429c44e7c3cfd1ed5e)() const = &::clang::RecordDecl::field_empty;
    class ::clang::FieldDecl  const * (::clang::RecordDecl::*method_pointer_7c71f01a9372574a9cbdba66cb564d62)() const = &::clang::RecordDecl::findFirstNamedDataMember;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_2e4645a783915fedb68e138a93693c81)() const = &::clang::RecordDecl::getDefinition;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_58e31e3153b65bc296661c1acde48afc)() const = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_0b81b5ecbf285db6bad562efbfeb65fd)() = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_a7ffe53ccc005615a2e79ecbdd943eb9)() const = &::clang::RecordDecl::getPreviousDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_3b87d3d522c05a04b8f631c9944ee16d)() = &::clang::RecordDecl::getPreviousDecl;
    bool  (::clang::RecordDecl::*method_pointer_001cd971211452239516da4624bd35e3)() const = &::clang::RecordDecl::hasFlexibleArrayMember;
    bool  (::clang::RecordDecl::*method_pointer_587aaf7c643356d694373e7e8362007d)() const = &::clang::RecordDecl::hasLoadedFieldsFromExternalStorage;
    bool  (::clang::RecordDecl::*method_pointer_7ddd2e223e9c59f192b491a717092f67)() const = &::clang::RecordDecl::hasObjectMember;
    bool  (::clang::RecordDecl::*method_pointer_d1656abdaa245db098821ab467c16aa4)() const = &::clang::RecordDecl::hasVolatileMember;
    bool  (::clang::RecordDecl::*method_pointer_ba5b1022eb125ba5b3a4feb9dcd9078e)() const = &::clang::RecordDecl::isAnonymousStructOrUnion;
    bool  (::clang::RecordDecl::*method_pointer_7007b6506c195cf687637fad41363aeb)() const = &::clang::RecordDecl::isCapturedRecord;
    bool  (::clang::RecordDecl::*method_pointer_b08da994f8ad5e1884cad4e36aac1198)() const = &::clang::RecordDecl::isInjectedClassName;
    bool  (::clang::RecordDecl::*method_pointer_6cfaa4f1086d5bd6ba9061d6e5a71342)() const = &::clang::RecordDecl::isLambda;
    bool  (::clang::RecordDecl::*method_pointer_c6ce320bff475e2ba7433d21af92aa69)(bool ) const = &::clang::RecordDecl::mayInsertExtraPadding;
    void  (::clang::RecordDecl::*method_pointer_2c0346ad676f5e7ea1006eba2ee6610a)(bool ) = &::clang::RecordDecl::setAnonymousStructOrUnion;
    void  (::clang::RecordDecl::*method_pointer_a11d81a66735557f90ee380a02df9feb)() = &::clang::RecordDecl::setCapturedRecord;
    void  (::clang::RecordDecl::*method_pointer_416be3674043579fa6824b3709054885)(bool ) = &::clang::RecordDecl::setHasFlexibleArrayMember;
    void  (::clang::RecordDecl::*method_pointer_0f217687349a5fda872c2d07345eb357)(bool ) = &::clang::RecordDecl::setHasLoadedFieldsFromExternalStorage;
    void  (::clang::RecordDecl::*method_pointer_6f697afbb7665ebc87a7ac429a97ed70)(bool ) = &::clang::RecordDecl::setHasObjectMember;
    void  (::clang::RecordDecl::*method_pointer_87f80ce2c5225e888c9e6346c10960f0)(bool ) = &::clang::RecordDecl::setHasVolatileMember;
    boost::python::class_< class ::clang::RecordDecl, autowig::HeldType< class ::clang::RecordDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_185117225e1a5743866dee867a4d2c40("RecordDecl", "", boost::python::no_init);
    class_185117225e1a5743866dee867a4d2c40.def("classof", method_pointer_cfba270b2f6154c59ce76504e2c2bb26, "");
    class_185117225e1a5743866dee867a4d2c40.def("classof_kind", method_pointer_cd996a45d9ad56a58295a8d23fdae9ef, "");
    class_185117225e1a5743866dee867a4d2c40.def("complete_definition", method_pointer_4556f5c73e4e5425954d31b1e258d953, "");
    class_185117225e1a5743866dee867a4d2c40.def("field_empty", method_pointer_3910dc3b048151429c44e7c3cfd1ed5e, "");
    class_185117225e1a5743866dee867a4d2c40.def("find_first_named_data_member", method_pointer_7c71f01a9372574a9cbdba66cb564d62, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_definition", method_pointer_2e4645a783915fedb68e138a93693c81, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_58e31e3153b65bc296661c1acde48afc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_0b81b5ecbf285db6bad562efbfeb65fd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_a7ffe53ccc005615a2e79ecbdd943eb9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_3b87d3d522c05a04b8f631c9944ee16d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("has_flexible_array_member", method_pointer_001cd971211452239516da4624bd35e3, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_loaded_fields_from_external_storage", method_pointer_587aaf7c643356d694373e7e8362007d, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_object_member", method_pointer_7ddd2e223e9c59f192b491a717092f67, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_volatile_member", method_pointer_d1656abdaa245db098821ab467c16aa4, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_anonymous_struct_or_union", method_pointer_ba5b1022eb125ba5b3a4feb9dcd9078e, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_captured_record", method_pointer_7007b6506c195cf687637fad41363aeb, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_injected_class_name", method_pointer_b08da994f8ad5e1884cad4e36aac1198, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_lambda", method_pointer_6cfaa4f1086d5bd6ba9061d6e5a71342, "");
    class_185117225e1a5743866dee867a4d2c40.def("may_insert_extra_padding", method_pointer_c6ce320bff475e2ba7433d21af92aa69, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_anonymous_struct_or_union", method_pointer_2c0346ad676f5e7ea1006eba2ee6610a, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_captured_record", method_pointer_a11d81a66735557f90ee380a02df9feb, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_flexible_array_member", method_pointer_416be3674043579fa6824b3709054885, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_loaded_fields_from_external_storage", method_pointer_0f217687349a5fda872c2d07345eb357, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_object_member", method_pointer_6f697afbb7665ebc87a7ac429a97ed70, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_volatile_member", method_pointer_87f80ce2c5225e888c9e6346c10960f0, "");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof_kind");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}