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
    bool  (*method_pointer_c8f5df2d2d685930b950c68edd6b06ea)(class ::clang::Decl  const *) = ::clang::RecordDecl::classof;
    bool  (*method_pointer_768a5419ad245cea96c5cc75c411ae9f)(enum ::clang::Decl::Kind ) = ::clang::RecordDecl::classofKind;
    void  (::clang::RecordDecl::*method_pointer_bd9d005a5f895406822a32fd864eb53d)() = &::clang::RecordDecl::completeDefinition;
    bool  (::clang::RecordDecl::*method_pointer_a7c26f073f5557979fcd6d4625a0cce1)() const = &::clang::RecordDecl::field_empty;
    class ::clang::FieldDecl  const * (::clang::RecordDecl::*method_pointer_a0dcf022794651b08f222bde2eeb41b6)() const = &::clang::RecordDecl::findFirstNamedDataMember;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_73a610209a0157d5b4eca8f56b543b25)() const = &::clang::RecordDecl::getDefinition;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_1b2e4949dbfa5fea8ddfd453cbcc0bc5)() = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_120920a5b64650f3a008cee4701f58b0)() const = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_f4f869af914b5c06ad1079c3763c0ee9)() const = &::clang::RecordDecl::getPreviousDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_5f3a393bf11e5624af9ac694f7e0c3d4)() = &::clang::RecordDecl::getPreviousDecl;
    bool  (::clang::RecordDecl::*method_pointer_b20e3fb0f05352ebaec91b8d5a9d5275)() const = &::clang::RecordDecl::hasFlexibleArrayMember;
    bool  (::clang::RecordDecl::*method_pointer_148c4615d2aa57659bc7f2592fc4ecf1)() const = &::clang::RecordDecl::hasLoadedFieldsFromExternalStorage;
    bool  (::clang::RecordDecl::*method_pointer_753a3421cef053118d2babb3d1d581ff)() const = &::clang::RecordDecl::hasObjectMember;
    bool  (::clang::RecordDecl::*method_pointer_fbb8f5d017f65bcdb16109a0a7d51caa)() const = &::clang::RecordDecl::hasVolatileMember;
    bool  (::clang::RecordDecl::*method_pointer_b6c204e9f90051198b2153685a920ae6)() const = &::clang::RecordDecl::isAnonymousStructOrUnion;
    bool  (::clang::RecordDecl::*method_pointer_2900836d358b589f9f79de26f02debcb)() const = &::clang::RecordDecl::isCapturedRecord;
    bool  (::clang::RecordDecl::*method_pointer_97e0bda3366951dab6adbd4711394715)() const = &::clang::RecordDecl::isInjectedClassName;
    bool  (::clang::RecordDecl::*method_pointer_371fbf2b6a4d520d80c8e408211586cd)() const = &::clang::RecordDecl::isLambda;
    bool  (::clang::RecordDecl::*method_pointer_bcff6741a8f7536f846a007370a88ba1)(bool ) const = &::clang::RecordDecl::mayInsertExtraPadding;
    void  (::clang::RecordDecl::*method_pointer_8e88a32808f7509e9fe13e5f2f3f86bd)(bool ) = &::clang::RecordDecl::setAnonymousStructOrUnion;
    void  (::clang::RecordDecl::*method_pointer_f9258503b43f52bea4d15576e1c40599)() = &::clang::RecordDecl::setCapturedRecord;
    void  (::clang::RecordDecl::*method_pointer_fac6913bbb8354dda7be5fcbf4f6cc81)(bool ) = &::clang::RecordDecl::setHasFlexibleArrayMember;
    void  (::clang::RecordDecl::*method_pointer_81ed667d333650aaa4fe4639c7a8b3be)(bool ) = &::clang::RecordDecl::setHasLoadedFieldsFromExternalStorage;
    void  (::clang::RecordDecl::*method_pointer_37fab68229515ff6abd75c0a253f5fd6)(bool ) = &::clang::RecordDecl::setHasObjectMember;
    void  (::clang::RecordDecl::*method_pointer_a9065ecb20355d9f87e06745d0c8dda3)(bool ) = &::clang::RecordDecl::setHasVolatileMember;
    boost::python::class_< class ::clang::RecordDecl, autowig::HeldType< class ::clang::RecordDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_185117225e1a5743866dee867a4d2c40("RecordDecl", "", boost::python::no_init);
    class_185117225e1a5743866dee867a4d2c40.def("classof", method_pointer_c8f5df2d2d685930b950c68edd6b06ea, "");
    class_185117225e1a5743866dee867a4d2c40.def("classof_kind", method_pointer_768a5419ad245cea96c5cc75c411ae9f, "");
    class_185117225e1a5743866dee867a4d2c40.def("complete_definition", method_pointer_bd9d005a5f895406822a32fd864eb53d, "");
    class_185117225e1a5743866dee867a4d2c40.def("field_empty", method_pointer_a7c26f073f5557979fcd6d4625a0cce1, "");
    class_185117225e1a5743866dee867a4d2c40.def("find_first_named_data_member", method_pointer_a0dcf022794651b08f222bde2eeb41b6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_definition", method_pointer_73a610209a0157d5b4eca8f56b543b25, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_1b2e4949dbfa5fea8ddfd453cbcc0bc5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_120920a5b64650f3a008cee4701f58b0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_f4f869af914b5c06ad1079c3763c0ee9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_5f3a393bf11e5624af9ac694f7e0c3d4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("has_flexible_array_member", method_pointer_b20e3fb0f05352ebaec91b8d5a9d5275, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_loaded_fields_from_external_storage", method_pointer_148c4615d2aa57659bc7f2592fc4ecf1, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_object_member", method_pointer_753a3421cef053118d2babb3d1d581ff, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_volatile_member", method_pointer_fbb8f5d017f65bcdb16109a0a7d51caa, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_anonymous_struct_or_union", method_pointer_b6c204e9f90051198b2153685a920ae6, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_captured_record", method_pointer_2900836d358b589f9f79de26f02debcb, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_injected_class_name", method_pointer_97e0bda3366951dab6adbd4711394715, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_lambda", method_pointer_371fbf2b6a4d520d80c8e408211586cd, "");
    class_185117225e1a5743866dee867a4d2c40.def("may_insert_extra_padding", method_pointer_bcff6741a8f7536f846a007370a88ba1, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_anonymous_struct_or_union", method_pointer_8e88a32808f7509e9fe13e5f2f3f86bd, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_captured_record", method_pointer_f9258503b43f52bea4d15576e1c40599, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_flexible_array_member", method_pointer_fac6913bbb8354dda7be5fcbf4f6cc81, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_loaded_fields_from_external_storage", method_pointer_81ed667d333650aaa4fe4639c7a8b3be, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_object_member", method_pointer_37fab68229515ff6abd75c0a253f5fd6, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_volatile_member", method_pointer_a9065ecb20355d9f87e06745d0c8dda3, "");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof_kind");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}