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
    bool  (*method_pointer_4e660bf6a9c85a87ab5b16bf73e6147d)(class ::clang::Decl  const *) = ::clang::RecordDecl::classof;
    bool  (*method_pointer_b37f8d56e3525091b19dbea892d28ea4)(enum ::clang::Decl::Kind ) = ::clang::RecordDecl::classofKind;
    void  (::clang::RecordDecl::*method_pointer_604b4bbeab3c5925bae6669fc2703fad)() = &::clang::RecordDecl::completeDefinition;
    bool  (::clang::RecordDecl::*method_pointer_b8d33feeb7ea5110892ce48942127b08)() const = &::clang::RecordDecl::field_empty;
    class ::clang::FieldDecl  const * (::clang::RecordDecl::*method_pointer_34888d1ca2d650b4a64a4a8970a47228)() const = &::clang::RecordDecl::findFirstNamedDataMember;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_94430fd2b6cf51aa8b9e8e42c6b345bb)() const = &::clang::RecordDecl::getDefinition;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_03ff3d54a8f2579aa6fef1b366b105e5)() const = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_7e71cd2c8f1256f7ba75596e4cf51a46)() = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_a4eda007cc3851c7aaaf989940e74744)() const = &::clang::RecordDecl::getPreviousDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_d300a7525c5f5c32b82ec0f8e38085b1)() = &::clang::RecordDecl::getPreviousDecl;
    bool  (::clang::RecordDecl::*method_pointer_1a362dca022a5071a87d8644e1f9c097)() const = &::clang::RecordDecl::hasFlexibleArrayMember;
    bool  (::clang::RecordDecl::*method_pointer_6833d80e3e9f5f3490c14f19018935a8)() const = &::clang::RecordDecl::hasLoadedFieldsFromExternalStorage;
    bool  (::clang::RecordDecl::*method_pointer_9ce17a0d68dc513f8b6d4f05c92e3d33)() const = &::clang::RecordDecl::hasObjectMember;
    bool  (::clang::RecordDecl::*method_pointer_9231926c815e59cb9eb725e4205002ba)() const = &::clang::RecordDecl::hasVolatileMember;
    bool  (::clang::RecordDecl::*method_pointer_89635a327cbf53529790657f0b23eb0a)() const = &::clang::RecordDecl::isAnonymousStructOrUnion;
    bool  (::clang::RecordDecl::*method_pointer_baea115a1486564cb913cb9277c799c6)() const = &::clang::RecordDecl::isCapturedRecord;
    bool  (::clang::RecordDecl::*method_pointer_c8e01fb8c5ed57738b67855d1f207fef)() const = &::clang::RecordDecl::isInjectedClassName;
    bool  (::clang::RecordDecl::*method_pointer_065015867a405a9fbbca0a5aa28af53c)() const = &::clang::RecordDecl::isLambda;
    bool  (::clang::RecordDecl::*method_pointer_2a65da70c5bd5af4854691f41cde817a)(bool ) const = &::clang::RecordDecl::mayInsertExtraPadding;
    void  (::clang::RecordDecl::*method_pointer_1016ee5092e25898b198ea8a2087c0fd)(bool ) = &::clang::RecordDecl::setAnonymousStructOrUnion;
    void  (::clang::RecordDecl::*method_pointer_c2b08cdc047b5e088bba5da09be5dfa1)() = &::clang::RecordDecl::setCapturedRecord;
    void  (::clang::RecordDecl::*method_pointer_df39c044de9556dbbc6af708181698df)(bool ) = &::clang::RecordDecl::setHasFlexibleArrayMember;
    void  (::clang::RecordDecl::*method_pointer_bdc18a2661fb5380bc9698e6943f3a82)(bool ) = &::clang::RecordDecl::setHasLoadedFieldsFromExternalStorage;
    void  (::clang::RecordDecl::*method_pointer_32ed93bcde055983aca49f66e5f9152d)(bool ) = &::clang::RecordDecl::setHasObjectMember;
    void  (::clang::RecordDecl::*method_pointer_d3fefba97f8e5608855b2a6ca124466f)(bool ) = &::clang::RecordDecl::setHasVolatileMember;
    boost::python::class_< class ::clang::RecordDecl, autowig::HeldType< class ::clang::RecordDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_185117225e1a5743866dee867a4d2c40("RecordDecl", "", boost::python::no_init);
    class_185117225e1a5743866dee867a4d2c40.def("classof", method_pointer_4e660bf6a9c85a87ab5b16bf73e6147d, "");
    class_185117225e1a5743866dee867a4d2c40.def("classof_kind", method_pointer_b37f8d56e3525091b19dbea892d28ea4, "");
    class_185117225e1a5743866dee867a4d2c40.def("complete_definition", method_pointer_604b4bbeab3c5925bae6669fc2703fad, "");
    class_185117225e1a5743866dee867a4d2c40.def("field_empty", method_pointer_b8d33feeb7ea5110892ce48942127b08, "");
    class_185117225e1a5743866dee867a4d2c40.def("find_first_named_data_member", method_pointer_34888d1ca2d650b4a64a4a8970a47228, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_definition", method_pointer_94430fd2b6cf51aa8b9e8e42c6b345bb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_03ff3d54a8f2579aa6fef1b366b105e5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_7e71cd2c8f1256f7ba75596e4cf51a46, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_a4eda007cc3851c7aaaf989940e74744, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_d300a7525c5f5c32b82ec0f8e38085b1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("has_flexible_array_member", method_pointer_1a362dca022a5071a87d8644e1f9c097, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_loaded_fields_from_external_storage", method_pointer_6833d80e3e9f5f3490c14f19018935a8, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_object_member", method_pointer_9ce17a0d68dc513f8b6d4f05c92e3d33, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_volatile_member", method_pointer_9231926c815e59cb9eb725e4205002ba, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_anonymous_struct_or_union", method_pointer_89635a327cbf53529790657f0b23eb0a, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_captured_record", method_pointer_baea115a1486564cb913cb9277c799c6, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_injected_class_name", method_pointer_c8e01fb8c5ed57738b67855d1f207fef, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_lambda", method_pointer_065015867a405a9fbbca0a5aa28af53c, "");
    class_185117225e1a5743866dee867a4d2c40.def("may_insert_extra_padding", method_pointer_2a65da70c5bd5af4854691f41cde817a, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_anonymous_struct_or_union", method_pointer_1016ee5092e25898b198ea8a2087c0fd, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_captured_record", method_pointer_c2b08cdc047b5e088bba5da09be5dfa1, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_flexible_array_member", method_pointer_df39c044de9556dbbc6af708181698df, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_loaded_fields_from_external_storage", method_pointer_bdc18a2661fb5380bc9698e6943f3a82, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_object_member", method_pointer_32ed93bcde055983aca49f66e5f9152d, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_volatile_member", method_pointer_d3fefba97f8e5608855b2a6ca124466f, "");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof_kind");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}