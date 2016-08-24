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
    bool  (*method_pointer_4485406f73ec55edaca93cc1fc8cfad5)(class ::clang::Decl  const *) = ::clang::RecordDecl::classof;
    bool  (*method_pointer_ad0a6f4219c853b79c6d336bc13322bd)(enum ::clang::Decl::Kind ) = ::clang::RecordDecl::classofKind;
    void  (::clang::RecordDecl::*method_pointer_01eb403375f05908b638588cab446116)() = &::clang::RecordDecl::completeDefinition;
    bool  (::clang::RecordDecl::*method_pointer_35e1de0fecfa5cb68c27879a13ab8699)() const = &::clang::RecordDecl::field_empty;
    class ::clang::FieldDecl  const * (::clang::RecordDecl::*method_pointer_0d4c3f04eee155f0b046e1af23e6b263)() const = &::clang::RecordDecl::findFirstNamedDataMember;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_19c6cd0fc40855a8afcc8f47edff483d)() const = &::clang::RecordDecl::getDefinition;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_ed7c1b71270653da8c1d3fa4d76acde3)() const = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_eb85dee11e3851e8a9d76f7888488d4f)() = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_dddc4d764c61578e9f1d57bfd1fb1c20)() = &::clang::RecordDecl::getPreviousDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_4017a1c8061b5215ab8b37e48936a6aa)() const = &::clang::RecordDecl::getPreviousDecl;
    bool  (::clang::RecordDecl::*method_pointer_af973a0ac4a55506a28aff465348776d)() const = &::clang::RecordDecl::hasFlexibleArrayMember;
    bool  (::clang::RecordDecl::*method_pointer_da0e215a8b4a5f3eba70b9980ac15bb9)() const = &::clang::RecordDecl::hasLoadedFieldsFromExternalStorage;
    bool  (::clang::RecordDecl::*method_pointer_99564d092d865da988d3ca02ac1a8c13)() const = &::clang::RecordDecl::hasObjectMember;
    bool  (::clang::RecordDecl::*method_pointer_9b8846c20c735e419c63a56a143fe5b9)() const = &::clang::RecordDecl::hasVolatileMember;
    bool  (::clang::RecordDecl::*method_pointer_47d76a56a2685958bc923e4cf1bfda15)() const = &::clang::RecordDecl::isAnonymousStructOrUnion;
    bool  (::clang::RecordDecl::*method_pointer_dd74ed35c77c50c4ad37b7201a4fe893)() const = &::clang::RecordDecl::isCapturedRecord;
    bool  (::clang::RecordDecl::*method_pointer_c1665e24ddff54f39d3abcf7f824747c)() const = &::clang::RecordDecl::isInjectedClassName;
    bool  (::clang::RecordDecl::*method_pointer_80c06e19b02151058a8f870bf9b4ade1)() const = &::clang::RecordDecl::isLambda;
    bool  (::clang::RecordDecl::*method_pointer_166a18884b125c78b2b782c627c9d576)(bool ) const = &::clang::RecordDecl::mayInsertExtraPadding;
    void  (::clang::RecordDecl::*method_pointer_09b96882f8565b41a23764126580e187)(bool ) = &::clang::RecordDecl::setAnonymousStructOrUnion;
    void  (::clang::RecordDecl::*method_pointer_06a5d12713db5b1cbbedbf1d402ce666)() = &::clang::RecordDecl::setCapturedRecord;
    void  (::clang::RecordDecl::*method_pointer_01e1fc006d7951dc8afb7bda9d938f46)(bool ) = &::clang::RecordDecl::setHasFlexibleArrayMember;
    void  (::clang::RecordDecl::*method_pointer_2f0d7436f4b45d6e9bd214790d04d634)(bool ) = &::clang::RecordDecl::setHasLoadedFieldsFromExternalStorage;
    void  (::clang::RecordDecl::*method_pointer_6328abb4b41658be805a480cd350b20a)(bool ) = &::clang::RecordDecl::setHasObjectMember;
    void  (::clang::RecordDecl::*method_pointer_2c1fed29760c54c8a3ca999463ecc809)(bool ) = &::clang::RecordDecl::setHasVolatileMember;
    boost::python::class_< class ::clang::RecordDecl, autowig::HeldType< class ::clang::RecordDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_185117225e1a5743866dee867a4d2c40("RecordDecl", "", boost::python::no_init);
    class_185117225e1a5743866dee867a4d2c40.def("classof", method_pointer_4485406f73ec55edaca93cc1fc8cfad5, "");
    class_185117225e1a5743866dee867a4d2c40.def("classof_kind", method_pointer_ad0a6f4219c853b79c6d336bc13322bd, "");
    class_185117225e1a5743866dee867a4d2c40.def("complete_definition", method_pointer_01eb403375f05908b638588cab446116, "");
    class_185117225e1a5743866dee867a4d2c40.def("field_empty", method_pointer_35e1de0fecfa5cb68c27879a13ab8699, "");
    class_185117225e1a5743866dee867a4d2c40.def("find_first_named_data_member", method_pointer_0d4c3f04eee155f0b046e1af23e6b263, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_definition", method_pointer_19c6cd0fc40855a8afcc8f47edff483d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_ed7c1b71270653da8c1d3fa4d76acde3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_eb85dee11e3851e8a9d76f7888488d4f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_dddc4d764c61578e9f1d57bfd1fb1c20, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_4017a1c8061b5215ab8b37e48936a6aa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("has_flexible_array_member", method_pointer_af973a0ac4a55506a28aff465348776d, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_loaded_fields_from_external_storage", method_pointer_da0e215a8b4a5f3eba70b9980ac15bb9, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_object_member", method_pointer_99564d092d865da988d3ca02ac1a8c13, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_volatile_member", method_pointer_9b8846c20c735e419c63a56a143fe5b9, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_anonymous_struct_or_union", method_pointer_47d76a56a2685958bc923e4cf1bfda15, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_captured_record", method_pointer_dd74ed35c77c50c4ad37b7201a4fe893, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_injected_class_name", method_pointer_c1665e24ddff54f39d3abcf7f824747c, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_lambda", method_pointer_80c06e19b02151058a8f870bf9b4ade1, "");
    class_185117225e1a5743866dee867a4d2c40.def("may_insert_extra_padding", method_pointer_166a18884b125c78b2b782c627c9d576, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_anonymous_struct_or_union", method_pointer_09b96882f8565b41a23764126580e187, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_captured_record", method_pointer_06a5d12713db5b1cbbedbf1d402ce666, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_flexible_array_member", method_pointer_01e1fc006d7951dc8afb7bda9d938f46, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_loaded_fields_from_external_storage", method_pointer_2f0d7436f4b45d6e9bd214790d04d634, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_object_member", method_pointer_6328abb4b41658be805a480cd350b20a, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_volatile_member", method_pointer_2c1fed29760c54c8a3ca999463ecc809, "");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof_kind");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}