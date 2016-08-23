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
    bool  (*method_pointer_224ef51dc6985d0da1eb06ddd83dd1ea)(class ::clang::Decl  const *) = ::clang::RecordDecl::classof;
    bool  (*method_pointer_824fedd1f2c15f8aa9450bfdb5b235f7)(enum ::clang::Decl::Kind ) = ::clang::RecordDecl::classofKind;
    void  (::clang::RecordDecl::*method_pointer_a273b1c894455822bcd9f6f9147f2d9e)() = &::clang::RecordDecl::completeDefinition;
    bool  (::clang::RecordDecl::*method_pointer_e3992a35e6185472bc6ca009254b8543)() const = &::clang::RecordDecl::field_empty;
    class ::clang::FieldDecl  const * (::clang::RecordDecl::*method_pointer_76402610472a5579846bf7db95ec5671)() const = &::clang::RecordDecl::findFirstNamedDataMember;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_a2ef39497e74562192c1fcf6e7d8fae3)() const = &::clang::RecordDecl::getDefinition;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_61afd707b07552468db915fbdffc1737)() = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_67a132871f6a5b91b4521a037ce4d7b0)() const = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_5aa93ad16b5458368f7fcefcec7566c8)() const = &::clang::RecordDecl::getPreviousDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_6c99e8dce65e535abb2a4c52aa448c8f)() = &::clang::RecordDecl::getPreviousDecl;
    bool  (::clang::RecordDecl::*method_pointer_0d4e32d4b69a5c0b8838854674da4643)() const = &::clang::RecordDecl::hasFlexibleArrayMember;
    bool  (::clang::RecordDecl::*method_pointer_ccca5834311a5d9c999a6d6e0f6cd0ac)() const = &::clang::RecordDecl::hasLoadedFieldsFromExternalStorage;
    bool  (::clang::RecordDecl::*method_pointer_408d01e6d18050298b9fb0b89883d069)() const = &::clang::RecordDecl::hasObjectMember;
    bool  (::clang::RecordDecl::*method_pointer_8e85a9ad751b55e5a7ced904b37e48cb)() const = &::clang::RecordDecl::hasVolatileMember;
    bool  (::clang::RecordDecl::*method_pointer_c7dd59e5c95354be8c6c8f0ba33068d7)() const = &::clang::RecordDecl::isAnonymousStructOrUnion;
    bool  (::clang::RecordDecl::*method_pointer_0c3ed64c9d275c48ae398b53724bd77c)() const = &::clang::RecordDecl::isCapturedRecord;
    bool  (::clang::RecordDecl::*method_pointer_1087a75180a055c98dc899d3d56a62ad)() const = &::clang::RecordDecl::isInjectedClassName;
    bool  (::clang::RecordDecl::*method_pointer_e6509687c5d95c14bc36913a6256e03e)() const = &::clang::RecordDecl::isLambda;
    bool  (::clang::RecordDecl::*method_pointer_660e50e5a6245c71970a5f2507f954dc)(bool ) const = &::clang::RecordDecl::mayInsertExtraPadding;
    void  (::clang::RecordDecl::*method_pointer_ffa4b8cd5c4a596e98fb24217f5c4786)(bool ) = &::clang::RecordDecl::setAnonymousStructOrUnion;
    void  (::clang::RecordDecl::*method_pointer_78fb63c2be8e51f29f7d37d7345bb4e5)() = &::clang::RecordDecl::setCapturedRecord;
    void  (::clang::RecordDecl::*method_pointer_745822c0bbb75c86a12e07138e484e8a)(bool ) = &::clang::RecordDecl::setHasFlexibleArrayMember;
    void  (::clang::RecordDecl::*method_pointer_ecf62b8c192a5644b7539ec7ecf0d7b0)(bool ) = &::clang::RecordDecl::setHasLoadedFieldsFromExternalStorage;
    void  (::clang::RecordDecl::*method_pointer_1ad385155eb653c7bc791377ad2993e4)(bool ) = &::clang::RecordDecl::setHasObjectMember;
    void  (::clang::RecordDecl::*method_pointer_d04bae89ff285dccbfc1ea9777dcf6b6)(bool ) = &::clang::RecordDecl::setHasVolatileMember;
    boost::python::class_< class ::clang::RecordDecl, autowig::HeldType< class ::clang::RecordDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_185117225e1a5743866dee867a4d2c40("RecordDecl", "", boost::python::no_init);
    class_185117225e1a5743866dee867a4d2c40.def("classof", method_pointer_224ef51dc6985d0da1eb06ddd83dd1ea, "");
    class_185117225e1a5743866dee867a4d2c40.def("classof_kind", method_pointer_824fedd1f2c15f8aa9450bfdb5b235f7, "");
    class_185117225e1a5743866dee867a4d2c40.def("complete_definition", method_pointer_a273b1c894455822bcd9f6f9147f2d9e, "");
    class_185117225e1a5743866dee867a4d2c40.def("field_empty", method_pointer_e3992a35e6185472bc6ca009254b8543, "");
    class_185117225e1a5743866dee867a4d2c40.def("find_first_named_data_member", method_pointer_76402610472a5579846bf7db95ec5671, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_definition", method_pointer_a2ef39497e74562192c1fcf6e7d8fae3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_61afd707b07552468db915fbdffc1737, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_67a132871f6a5b91b4521a037ce4d7b0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_5aa93ad16b5458368f7fcefcec7566c8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_6c99e8dce65e535abb2a4c52aa448c8f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("has_flexible_array_member", method_pointer_0d4e32d4b69a5c0b8838854674da4643, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_loaded_fields_from_external_storage", method_pointer_ccca5834311a5d9c999a6d6e0f6cd0ac, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_object_member", method_pointer_408d01e6d18050298b9fb0b89883d069, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_volatile_member", method_pointer_8e85a9ad751b55e5a7ced904b37e48cb, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_anonymous_struct_or_union", method_pointer_c7dd59e5c95354be8c6c8f0ba33068d7, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_captured_record", method_pointer_0c3ed64c9d275c48ae398b53724bd77c, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_injected_class_name", method_pointer_1087a75180a055c98dc899d3d56a62ad, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_lambda", method_pointer_e6509687c5d95c14bc36913a6256e03e, "");
    class_185117225e1a5743866dee867a4d2c40.def("may_insert_extra_padding", method_pointer_660e50e5a6245c71970a5f2507f954dc, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_anonymous_struct_or_union", method_pointer_ffa4b8cd5c4a596e98fb24217f5c4786, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_captured_record", method_pointer_78fb63c2be8e51f29f7d37d7345bb4e5, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_flexible_array_member", method_pointer_745822c0bbb75c86a12e07138e484e8a, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_loaded_fields_from_external_storage", method_pointer_ecf62b8c192a5644b7539ec7ecf0d7b0, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_object_member", method_pointer_1ad385155eb653c7bc791377ad2993e4, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_volatile_member", method_pointer_d04bae89ff285dccbfc1ea9777dcf6b6, "");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof_kind");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}