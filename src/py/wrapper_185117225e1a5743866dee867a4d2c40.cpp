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
    bool  (*method_pointer_aa5f61845c655f5da7a0eb51e288d84e)(class ::clang::Decl  const *) = ::clang::RecordDecl::classof;
    bool  (*method_pointer_2936a4461a1c55eeaf537554835558c1)(enum ::clang::Decl::Kind ) = ::clang::RecordDecl::classofKind;
    void  (::clang::RecordDecl::*method_pointer_49323306d7c65152aca0acf43d7679fa)() = &::clang::RecordDecl::completeDefinition;
    bool  (::clang::RecordDecl::*method_pointer_03d6c1b15e3758ffad5af4ecfb70e993)() const = &::clang::RecordDecl::field_empty;
    class ::clang::FieldDecl  const * (::clang::RecordDecl::*method_pointer_74c6906d407d5d11aa785d3ac11182a0)() const = &::clang::RecordDecl::findFirstNamedDataMember;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_e29addc3550c5ec994798c24e90b685b)() const = &::clang::RecordDecl::getDefinition;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_3035c6231ccb55a48d18da14c966b1fa)() = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_14bfd0f958e358fe9e9e4f8ac2a09f66)() const = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_991ba5eb41b359ab9c7780ffe80c9afc)() const = &::clang::RecordDecl::getPreviousDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_2f5315f30b155496b7dfeae94b7bce86)() = &::clang::RecordDecl::getPreviousDecl;
    bool  (::clang::RecordDecl::*method_pointer_e3ca2146a2cc5883a933ec6c8b6261ad)() const = &::clang::RecordDecl::hasFlexibleArrayMember;
    bool  (::clang::RecordDecl::*method_pointer_6a7d0e51e7fc53f8a4d22312ddceb214)() const = &::clang::RecordDecl::hasLoadedFieldsFromExternalStorage;
    bool  (::clang::RecordDecl::*method_pointer_1afa6d6773f65d82ae1b8f05d54dd5a4)() const = &::clang::RecordDecl::hasObjectMember;
    bool  (::clang::RecordDecl::*method_pointer_79b7cadbeebb55629ee6db908716cb00)() const = &::clang::RecordDecl::hasVolatileMember;
    bool  (::clang::RecordDecl::*method_pointer_2575654f4db25e69a262b9d2800a8e43)() const = &::clang::RecordDecl::isAnonymousStructOrUnion;
    bool  (::clang::RecordDecl::*method_pointer_2d7d6330496d59429ecdd442a8571d2d)() const = &::clang::RecordDecl::isCapturedRecord;
    bool  (::clang::RecordDecl::*method_pointer_8e74daa844f65787a9cc3cc516d77b6c)() const = &::clang::RecordDecl::isInjectedClassName;
    bool  (::clang::RecordDecl::*method_pointer_4e8def2672b6510eb52ae154acd8aea3)() const = &::clang::RecordDecl::isLambda;
    bool  (::clang::RecordDecl::*method_pointer_0dc7917f6e6757e6a7df317ac8e108e8)(bool ) const = &::clang::RecordDecl::mayInsertExtraPadding;
    void  (::clang::RecordDecl::*method_pointer_ee1f779fbe075c09bfc9001bd6d1c481)(bool ) = &::clang::RecordDecl::setAnonymousStructOrUnion;
    void  (::clang::RecordDecl::*method_pointer_113ebb41f0345247a6c4acb4de9ecfe6)() = &::clang::RecordDecl::setCapturedRecord;
    void  (::clang::RecordDecl::*method_pointer_69c69509282354ef9d2891f242b7b7dc)(bool ) = &::clang::RecordDecl::setHasFlexibleArrayMember;
    void  (::clang::RecordDecl::*method_pointer_9930146484b757c195c03d3c454aca23)(bool ) = &::clang::RecordDecl::setHasLoadedFieldsFromExternalStorage;
    void  (::clang::RecordDecl::*method_pointer_881a54886ef351a78e7585f25db2ddff)(bool ) = &::clang::RecordDecl::setHasObjectMember;
    void  (::clang::RecordDecl::*method_pointer_49db895333715d6e87bdd4fe9aa67697)(bool ) = &::clang::RecordDecl::setHasVolatileMember;
    boost::python::class_< class ::clang::RecordDecl, autowig::HeldType< class ::clang::RecordDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_185117225e1a5743866dee867a4d2c40("RecordDecl", "", boost::python::no_init);
    class_185117225e1a5743866dee867a4d2c40.def("classof", method_pointer_aa5f61845c655f5da7a0eb51e288d84e, "");
    class_185117225e1a5743866dee867a4d2c40.def("classof_kind", method_pointer_2936a4461a1c55eeaf537554835558c1, "");
    class_185117225e1a5743866dee867a4d2c40.def("complete_definition", method_pointer_49323306d7c65152aca0acf43d7679fa, "");
    class_185117225e1a5743866dee867a4d2c40.def("field_empty", method_pointer_03d6c1b15e3758ffad5af4ecfb70e993, "");
    class_185117225e1a5743866dee867a4d2c40.def("find_first_named_data_member", method_pointer_74c6906d407d5d11aa785d3ac11182a0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_definition", method_pointer_e29addc3550c5ec994798c24e90b685b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_3035c6231ccb55a48d18da14c966b1fa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_14bfd0f958e358fe9e9e4f8ac2a09f66, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_991ba5eb41b359ab9c7780ffe80c9afc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_2f5315f30b155496b7dfeae94b7bce86, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("has_flexible_array_member", method_pointer_e3ca2146a2cc5883a933ec6c8b6261ad, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_loaded_fields_from_external_storage", method_pointer_6a7d0e51e7fc53f8a4d22312ddceb214, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_object_member", method_pointer_1afa6d6773f65d82ae1b8f05d54dd5a4, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_volatile_member", method_pointer_79b7cadbeebb55629ee6db908716cb00, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_anonymous_struct_or_union", method_pointer_2575654f4db25e69a262b9d2800a8e43, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_captured_record", method_pointer_2d7d6330496d59429ecdd442a8571d2d, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_injected_class_name", method_pointer_8e74daa844f65787a9cc3cc516d77b6c, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_lambda", method_pointer_4e8def2672b6510eb52ae154acd8aea3, "");
    class_185117225e1a5743866dee867a4d2c40.def("may_insert_extra_padding", method_pointer_0dc7917f6e6757e6a7df317ac8e108e8, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_anonymous_struct_or_union", method_pointer_ee1f779fbe075c09bfc9001bd6d1c481, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_captured_record", method_pointer_113ebb41f0345247a6c4acb4de9ecfe6, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_flexible_array_member", method_pointer_69c69509282354ef9d2891f242b7b7dc, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_loaded_fields_from_external_storage", method_pointer_9930146484b757c195c03d3c454aca23, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_object_member", method_pointer_881a54886ef351a78e7585f25db2ddff, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_volatile_member", method_pointer_49db895333715d6e87bdd4fe9aa67697, "");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof_kind");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}