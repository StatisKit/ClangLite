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
    bool  (*method_pointer_28f3b5b6a7005aa2a72d3286c23c097e)(class ::clang::Decl  const *) = ::clang::RecordDecl::classof;
    bool  (*method_pointer_ed89ba39a9c357ffb863459a797bad96)(enum ::clang::Decl::Kind ) = ::clang::RecordDecl::classofKind;
    void  (::clang::RecordDecl::*method_pointer_9c0b1f5296ab5f1cb8f85f961e5e2e4b)() = &::clang::RecordDecl::completeDefinition;
    bool  (::clang::RecordDecl::*method_pointer_a5096b039a515e58b30ef3b33601dfc8)() const = &::clang::RecordDecl::field_empty;
    class ::clang::FieldDecl  const * (::clang::RecordDecl::*method_pointer_3cf8e620e45253b19b9e9814448e9bbb)() const = &::clang::RecordDecl::findFirstNamedDataMember;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_25ec010233ce525bbbd006447b812fa6)() const = &::clang::RecordDecl::getDefinition;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_f9c2903d5dff5c35a176fc563a64cdbf)() const = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_b3c65f446a8f572eaaa315ad892134d0)() = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_45c2ecad5cc6563dbe369f17b8d5b408)() const = &::clang::RecordDecl::getPreviousDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_3ab9bc7ce46a512391333fed9f4ec863)() = &::clang::RecordDecl::getPreviousDecl;
    bool  (::clang::RecordDecl::*method_pointer_30b4ee9d85615f03b4bee83481db17b7)() const = &::clang::RecordDecl::hasFlexibleArrayMember;
    bool  (::clang::RecordDecl::*method_pointer_ce914090d7a55019adf9d80c071c1ca4)() const = &::clang::RecordDecl::hasLoadedFieldsFromExternalStorage;
    bool  (::clang::RecordDecl::*method_pointer_04e7c81442fe56dd8b9c02c8618fed9c)() const = &::clang::RecordDecl::hasObjectMember;
    bool  (::clang::RecordDecl::*method_pointer_9329cab0bdb659c3a148b5e9863ddbb9)() const = &::clang::RecordDecl::hasVolatileMember;
    bool  (::clang::RecordDecl::*method_pointer_797310eefd6e5c1e8bb6c3484da39c50)() const = &::clang::RecordDecl::isAnonymousStructOrUnion;
    bool  (::clang::RecordDecl::*method_pointer_c65cd0b25d955fdba3c05f780d6736cf)() const = &::clang::RecordDecl::isCapturedRecord;
    bool  (::clang::RecordDecl::*method_pointer_2fba5773dca45915b42e2baa47010c3f)() const = &::clang::RecordDecl::isInjectedClassName;
    bool  (::clang::RecordDecl::*method_pointer_f6c9c56236615498827179fd684b0606)() const = &::clang::RecordDecl::isLambda;
    bool  (::clang::RecordDecl::*method_pointer_b0aa3eb6e9ba5bc691c7644a5181c74d)(bool ) const = &::clang::RecordDecl::mayInsertExtraPadding;
    void  (::clang::RecordDecl::*method_pointer_169000ef25ba5cc5a6e6c62890fb9e2d)(bool ) = &::clang::RecordDecl::setAnonymousStructOrUnion;
    void  (::clang::RecordDecl::*method_pointer_d18e7d8cf3a4559fb36379357fc80275)() = &::clang::RecordDecl::setCapturedRecord;
    void  (::clang::RecordDecl::*method_pointer_9757c0c6a034537a86bdfa30c5008f02)(bool ) = &::clang::RecordDecl::setHasFlexibleArrayMember;
    void  (::clang::RecordDecl::*method_pointer_e83bd322f6ae52bcb73f60790107f418)(bool ) = &::clang::RecordDecl::setHasLoadedFieldsFromExternalStorage;
    void  (::clang::RecordDecl::*method_pointer_cf414ee67b355554b2867e91412eaa59)(bool ) = &::clang::RecordDecl::setHasObjectMember;
    void  (::clang::RecordDecl::*method_pointer_f2da4051a8275ece91bd02b25e66fafe)(bool ) = &::clang::RecordDecl::setHasVolatileMember;
    boost::python::class_< class ::clang::RecordDecl, autowig::HeldType< class ::clang::RecordDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_185117225e1a5743866dee867a4d2c40("RecordDecl", "", boost::python::no_init);
    class_185117225e1a5743866dee867a4d2c40.def("classof", method_pointer_28f3b5b6a7005aa2a72d3286c23c097e, "");
    class_185117225e1a5743866dee867a4d2c40.def("classof_kind", method_pointer_ed89ba39a9c357ffb863459a797bad96, "");
    class_185117225e1a5743866dee867a4d2c40.def("complete_definition", method_pointer_9c0b1f5296ab5f1cb8f85f961e5e2e4b, "");
    class_185117225e1a5743866dee867a4d2c40.def("field_empty", method_pointer_a5096b039a515e58b30ef3b33601dfc8, "");
    class_185117225e1a5743866dee867a4d2c40.def("find_first_named_data_member", method_pointer_3cf8e620e45253b19b9e9814448e9bbb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_definition", method_pointer_25ec010233ce525bbbd006447b812fa6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_f9c2903d5dff5c35a176fc563a64cdbf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_b3c65f446a8f572eaaa315ad892134d0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_45c2ecad5cc6563dbe369f17b8d5b408, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_3ab9bc7ce46a512391333fed9f4ec863, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("has_flexible_array_member", method_pointer_30b4ee9d85615f03b4bee83481db17b7, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_loaded_fields_from_external_storage", method_pointer_ce914090d7a55019adf9d80c071c1ca4, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_object_member", method_pointer_04e7c81442fe56dd8b9c02c8618fed9c, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_volatile_member", method_pointer_9329cab0bdb659c3a148b5e9863ddbb9, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_anonymous_struct_or_union", method_pointer_797310eefd6e5c1e8bb6c3484da39c50, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_captured_record", method_pointer_c65cd0b25d955fdba3c05f780d6736cf, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_injected_class_name", method_pointer_2fba5773dca45915b42e2baa47010c3f, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_lambda", method_pointer_f6c9c56236615498827179fd684b0606, "");
    class_185117225e1a5743866dee867a4d2c40.def("may_insert_extra_padding", method_pointer_b0aa3eb6e9ba5bc691c7644a5181c74d, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_anonymous_struct_or_union", method_pointer_169000ef25ba5cc5a6e6c62890fb9e2d, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_captured_record", method_pointer_d18e7d8cf3a4559fb36379357fc80275, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_flexible_array_member", method_pointer_9757c0c6a034537a86bdfa30c5008f02, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_loaded_fields_from_external_storage", method_pointer_e83bd322f6ae52bcb73f60790107f418, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_object_member", method_pointer_cf414ee67b355554b2867e91412eaa59, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_volatile_member", method_pointer_f2da4051a8275ece91bd02b25e66fafe, "");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof_kind");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}