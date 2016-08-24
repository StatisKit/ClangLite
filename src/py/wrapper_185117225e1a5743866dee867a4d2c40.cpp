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
    bool  (*method_pointer_b27132651bc15d6db89e6d4cebf18f3f)(class ::clang::Decl  const *) = ::clang::RecordDecl::classof;
    bool  (*method_pointer_132ea445d82e5f9e8f7ceae14d78cd85)(enum ::clang::Decl::Kind ) = ::clang::RecordDecl::classofKind;
    void  (::clang::RecordDecl::*method_pointer_093f62b322785f1c891710aaeb40e9e6)() = &::clang::RecordDecl::completeDefinition;
    bool  (::clang::RecordDecl::*method_pointer_da7dd12f46fe5841b103a6d9ca1e1f36)() const = &::clang::RecordDecl::field_empty;
    class ::clang::FieldDecl  const * (::clang::RecordDecl::*method_pointer_43d20b51db665cfd84a66124a39cdc58)() const = &::clang::RecordDecl::findFirstNamedDataMember;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_b307ef92dd5451018cf8967847d96e2b)() const = &::clang::RecordDecl::getDefinition;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_062cd8ae21335e438142940f77578b5c)() = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_e9a266d7229c571a840c751afb88fde0)() const = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_1296ed2eb18a5fd2bf16bd51be249d51)() const = &::clang::RecordDecl::getPreviousDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_de08da71fe1458c0834cc2fc6e39688a)() = &::clang::RecordDecl::getPreviousDecl;
    bool  (::clang::RecordDecl::*method_pointer_48d881a9fb885448b31ef5459f86b1e5)() const = &::clang::RecordDecl::hasFlexibleArrayMember;
    bool  (::clang::RecordDecl::*method_pointer_267ecc8f02bd5aab98cad73871be9346)() const = &::clang::RecordDecl::hasLoadedFieldsFromExternalStorage;
    bool  (::clang::RecordDecl::*method_pointer_42de7f9fbc17502688a2a84c1276ed75)() const = &::clang::RecordDecl::hasObjectMember;
    bool  (::clang::RecordDecl::*method_pointer_4cb6d06ab0b55b438e30584945517581)() const = &::clang::RecordDecl::hasVolatileMember;
    bool  (::clang::RecordDecl::*method_pointer_77cdf0ca121c5935bd375a3d316341bd)() const = &::clang::RecordDecl::isAnonymousStructOrUnion;
    bool  (::clang::RecordDecl::*method_pointer_13c6c7f594b15b0b80b895196bf63ebe)() const = &::clang::RecordDecl::isCapturedRecord;
    bool  (::clang::RecordDecl::*method_pointer_056060d34144506cb6c3985d284493d9)() const = &::clang::RecordDecl::isInjectedClassName;
    bool  (::clang::RecordDecl::*method_pointer_3d3c1e59f2ec5df5a3769a4669c5a609)() const = &::clang::RecordDecl::isLambda;
    bool  (::clang::RecordDecl::*method_pointer_e3077d6d8c7a5675876f6ef92f3c4eb4)(bool ) const = &::clang::RecordDecl::mayInsertExtraPadding;
    void  (::clang::RecordDecl::*method_pointer_074ad46b96bc53c281d74b6233eda29c)(bool ) = &::clang::RecordDecl::setAnonymousStructOrUnion;
    void  (::clang::RecordDecl::*method_pointer_6dfcc721382f5dc9b8488ac46c222369)() = &::clang::RecordDecl::setCapturedRecord;
    void  (::clang::RecordDecl::*method_pointer_eace9924bd005dc1943be06d62b4eb86)(bool ) = &::clang::RecordDecl::setHasFlexibleArrayMember;
    void  (::clang::RecordDecl::*method_pointer_a24dd7b76273558d8fd4a44ba6ca89bd)(bool ) = &::clang::RecordDecl::setHasLoadedFieldsFromExternalStorage;
    void  (::clang::RecordDecl::*method_pointer_ba630557237a5fc7afe066f442067f2c)(bool ) = &::clang::RecordDecl::setHasObjectMember;
    void  (::clang::RecordDecl::*method_pointer_e267233688425c40aef4026544282781)(bool ) = &::clang::RecordDecl::setHasVolatileMember;
    boost::python::class_< class ::clang::RecordDecl, autowig::HeldType< class ::clang::RecordDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_185117225e1a5743866dee867a4d2c40("RecordDecl", "", boost::python::no_init);
    class_185117225e1a5743866dee867a4d2c40.def("classof", method_pointer_b27132651bc15d6db89e6d4cebf18f3f, "");
    class_185117225e1a5743866dee867a4d2c40.def("classof_kind", method_pointer_132ea445d82e5f9e8f7ceae14d78cd85, "");
    class_185117225e1a5743866dee867a4d2c40.def("complete_definition", method_pointer_093f62b322785f1c891710aaeb40e9e6, "");
    class_185117225e1a5743866dee867a4d2c40.def("field_empty", method_pointer_da7dd12f46fe5841b103a6d9ca1e1f36, "");
    class_185117225e1a5743866dee867a4d2c40.def("find_first_named_data_member", method_pointer_43d20b51db665cfd84a66124a39cdc58, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_definition", method_pointer_b307ef92dd5451018cf8967847d96e2b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_062cd8ae21335e438142940f77578b5c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_e9a266d7229c571a840c751afb88fde0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_1296ed2eb18a5fd2bf16bd51be249d51, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_de08da71fe1458c0834cc2fc6e39688a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("has_flexible_array_member", method_pointer_48d881a9fb885448b31ef5459f86b1e5, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_loaded_fields_from_external_storage", method_pointer_267ecc8f02bd5aab98cad73871be9346, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_object_member", method_pointer_42de7f9fbc17502688a2a84c1276ed75, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_volatile_member", method_pointer_4cb6d06ab0b55b438e30584945517581, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_anonymous_struct_or_union", method_pointer_77cdf0ca121c5935bd375a3d316341bd, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_captured_record", method_pointer_13c6c7f594b15b0b80b895196bf63ebe, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_injected_class_name", method_pointer_056060d34144506cb6c3985d284493d9, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_lambda", method_pointer_3d3c1e59f2ec5df5a3769a4669c5a609, "");
    class_185117225e1a5743866dee867a4d2c40.def("may_insert_extra_padding", method_pointer_e3077d6d8c7a5675876f6ef92f3c4eb4, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_anonymous_struct_or_union", method_pointer_074ad46b96bc53c281d74b6233eda29c, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_captured_record", method_pointer_6dfcc721382f5dc9b8488ac46c222369, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_flexible_array_member", method_pointer_eace9924bd005dc1943be06d62b4eb86, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_loaded_fields_from_external_storage", method_pointer_a24dd7b76273558d8fd4a44ba6ca89bd, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_object_member", method_pointer_ba630557237a5fc7afe066f442067f2c, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_volatile_member", method_pointer_e267233688425c40aef4026544282781, "");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof_kind");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}