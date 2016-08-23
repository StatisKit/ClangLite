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
    bool  (*method_pointer_d2c57d6e02a35f5ebe87ce6a2ee87a5b)(class ::clang::Decl  const *) = ::clang::RecordDecl::classof;
    bool  (*method_pointer_f949c35ba0cc5d5ca29b21bb53df7459)(enum ::clang::Decl::Kind ) = ::clang::RecordDecl::classofKind;
    void  (::clang::RecordDecl::*method_pointer_0ed67ab177a55ac99e97fda35a41dbd1)() = &::clang::RecordDecl::completeDefinition;
    bool  (::clang::RecordDecl::*method_pointer_ecb99dddea9e5532b0be74a662b98a75)() const = &::clang::RecordDecl::field_empty;
    class ::clang::FieldDecl  const * (::clang::RecordDecl::*method_pointer_4f2c6552c17f578ba256901231fb130c)() const = &::clang::RecordDecl::findFirstNamedDataMember;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_0382e14a12bd5c919dab7b8ba5d7497f)() const = &::clang::RecordDecl::getDefinition;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_03b85d5e154a5292aa48c9d60b3beb80)() const = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_aa491a3112705eb39aef142cbf0090ee)() = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_dafa420257e25adb93709925cabc3769)() const = &::clang::RecordDecl::getPreviousDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_e52cca55c2f1540494beedb8fcb227ec)() = &::clang::RecordDecl::getPreviousDecl;
    bool  (::clang::RecordDecl::*method_pointer_d1232c417c50576fb5e96aed93cb4f9a)() const = &::clang::RecordDecl::hasFlexibleArrayMember;
    bool  (::clang::RecordDecl::*method_pointer_31ef11100f3e5e93a09395172fa6bd24)() const = &::clang::RecordDecl::hasLoadedFieldsFromExternalStorage;
    bool  (::clang::RecordDecl::*method_pointer_97d085067d51572b854ed401fa81c469)() const = &::clang::RecordDecl::hasObjectMember;
    bool  (::clang::RecordDecl::*method_pointer_2da38dbabd3554b9b00e76a5675a4e9d)() const = &::clang::RecordDecl::hasVolatileMember;
    bool  (::clang::RecordDecl::*method_pointer_a5bfea9b11795b6299efb9aab04a64fe)() const = &::clang::RecordDecl::isAnonymousStructOrUnion;
    bool  (::clang::RecordDecl::*method_pointer_0cda0d50bec35dd5abd3ddd37e9872e1)() const = &::clang::RecordDecl::isCapturedRecord;
    bool  (::clang::RecordDecl::*method_pointer_17f48236e21b556288fac36c11a9bac2)() const = &::clang::RecordDecl::isInjectedClassName;
    bool  (::clang::RecordDecl::*method_pointer_9713fd0864d653c2854063dd16450ade)() const = &::clang::RecordDecl::isLambda;
    bool  (::clang::RecordDecl::*method_pointer_37611ebc35565a54997853bd4002e645)(bool ) const = &::clang::RecordDecl::mayInsertExtraPadding;
    void  (::clang::RecordDecl::*method_pointer_795928e87f5a5a53a430f4e82e430f40)(bool ) = &::clang::RecordDecl::setAnonymousStructOrUnion;
    void  (::clang::RecordDecl::*method_pointer_bb9814bf27655dc59a77df0c18a928a7)() = &::clang::RecordDecl::setCapturedRecord;
    void  (::clang::RecordDecl::*method_pointer_b910800da4b858d5a3d1b3c40303d638)(bool ) = &::clang::RecordDecl::setHasFlexibleArrayMember;
    void  (::clang::RecordDecl::*method_pointer_8469bf7347b65756af60cba512903c58)(bool ) = &::clang::RecordDecl::setHasLoadedFieldsFromExternalStorage;
    void  (::clang::RecordDecl::*method_pointer_5d35e2380e255620908c54070034f093)(bool ) = &::clang::RecordDecl::setHasObjectMember;
    void  (::clang::RecordDecl::*method_pointer_4105c9a67ef75d0db59ab0ad02ab9608)(bool ) = &::clang::RecordDecl::setHasVolatileMember;
    boost::python::class_< class ::clang::RecordDecl, autowig::HeldType< class ::clang::RecordDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_185117225e1a5743866dee867a4d2c40("RecordDecl", "", boost::python::no_init);
    class_185117225e1a5743866dee867a4d2c40.def("classof", method_pointer_d2c57d6e02a35f5ebe87ce6a2ee87a5b, "");
    class_185117225e1a5743866dee867a4d2c40.def("classof_kind", method_pointer_f949c35ba0cc5d5ca29b21bb53df7459, "");
    class_185117225e1a5743866dee867a4d2c40.def("complete_definition", method_pointer_0ed67ab177a55ac99e97fda35a41dbd1, "");
    class_185117225e1a5743866dee867a4d2c40.def("field_empty", method_pointer_ecb99dddea9e5532b0be74a662b98a75, "");
    class_185117225e1a5743866dee867a4d2c40.def("find_first_named_data_member", method_pointer_4f2c6552c17f578ba256901231fb130c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_definition", method_pointer_0382e14a12bd5c919dab7b8ba5d7497f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_03b85d5e154a5292aa48c9d60b3beb80, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_aa491a3112705eb39aef142cbf0090ee, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_dafa420257e25adb93709925cabc3769, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_e52cca55c2f1540494beedb8fcb227ec, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("has_flexible_array_member", method_pointer_d1232c417c50576fb5e96aed93cb4f9a, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_loaded_fields_from_external_storage", method_pointer_31ef11100f3e5e93a09395172fa6bd24, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_object_member", method_pointer_97d085067d51572b854ed401fa81c469, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_volatile_member", method_pointer_2da38dbabd3554b9b00e76a5675a4e9d, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_anonymous_struct_or_union", method_pointer_a5bfea9b11795b6299efb9aab04a64fe, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_captured_record", method_pointer_0cda0d50bec35dd5abd3ddd37e9872e1, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_injected_class_name", method_pointer_17f48236e21b556288fac36c11a9bac2, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_lambda", method_pointer_9713fd0864d653c2854063dd16450ade, "");
    class_185117225e1a5743866dee867a4d2c40.def("may_insert_extra_padding", method_pointer_37611ebc35565a54997853bd4002e645, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_anonymous_struct_or_union", method_pointer_795928e87f5a5a53a430f4e82e430f40, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_captured_record", method_pointer_bb9814bf27655dc59a77df0c18a928a7, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_flexible_array_member", method_pointer_b910800da4b858d5a3d1b3c40303d638, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_loaded_fields_from_external_storage", method_pointer_8469bf7347b65756af60cba512903c58, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_object_member", method_pointer_5d35e2380e255620908c54070034f093, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_volatile_member", method_pointer_4105c9a67ef75d0db59ab0ad02ab9608, "");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof_kind");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}