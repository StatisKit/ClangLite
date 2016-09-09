/**********************************************************************************/
/*                                                                                */
/* PyClangLite: Python bindings for Clang                                         */
/*                                                                                */
/* Homepage: http://pyclanglite.readthedocs.io/                                   */
/*                                                                                */
/* Copyright (c) 2016 Pierre Fernique                                             */
/*                                                                                */
/* This software is distributed under the CeCILL-C license. You should have       */
/* received a copy of the legalcode along with this work. If not, see             */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/* File authors: Pierre Fernique <pfernique@gmail.com> (36)                       */
/*                                                                                */
/**********************************************************************************/

#include "_clanglite.h"


namespace autowig
{
}


void wrapper_185117225e1a5743866dee867a4d2c40()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_b3f60bd83d0a5eb19ed20aca6a0ed31c)(class ::clang::Decl  const *) = ::clang::RecordDecl::classof;
    bool  (*method_pointer_b115c8c9b0c95309a56d935a91e8af25)(enum ::clang::Decl::Kind ) = ::clang::RecordDecl::classofKind;
    void  (::clang::RecordDecl::*method_pointer_ed03872dd6a35734928f6b2623a6096d)() = &::clang::RecordDecl::completeDefinition;
    bool  (::clang::RecordDecl::*method_pointer_b0647bbe87bd5e729598b4f07724e337)() const = &::clang::RecordDecl::field_empty;
    class ::clang::FieldDecl  const * (::clang::RecordDecl::*method_pointer_1ccf96350ea759eb896af8718ba94a25)() const = &::clang::RecordDecl::findFirstNamedDataMember;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_0e17454d97dd5bb79008027537d13dfe)() const = &::clang::RecordDecl::getDefinition;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_91f99f9cb6305449b1a87da6dfd5017a)() = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_2c8a3759c8c655d29ac95ed6feece222)() const = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_f5d29304eb9159879e52512f0f5cfb68)() = &::clang::RecordDecl::getPreviousDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_87513ffaee2e5f41924f7569e89b9c04)() const = &::clang::RecordDecl::getPreviousDecl;
    bool  (::clang::RecordDecl::*method_pointer_b526252746425d2281510fbda3873571)() const = &::clang::RecordDecl::hasFlexibleArrayMember;
    bool  (::clang::RecordDecl::*method_pointer_ef5d060f399c5ab69a9f357973ff9e9b)() const = &::clang::RecordDecl::hasLoadedFieldsFromExternalStorage;
    bool  (::clang::RecordDecl::*method_pointer_927fbc1b468a56088aed1aed31953ff1)() const = &::clang::RecordDecl::hasObjectMember;
    bool  (::clang::RecordDecl::*method_pointer_ceb3a142006a5b8a904f171b1dcf082e)() const = &::clang::RecordDecl::hasVolatileMember;
    bool  (::clang::RecordDecl::*method_pointer_091ac69abcfd56cfbd8859696bfec960)() const = &::clang::RecordDecl::isAnonymousStructOrUnion;
    bool  (::clang::RecordDecl::*method_pointer_79fd989743a85da9878aa89f039ac775)() const = &::clang::RecordDecl::isCapturedRecord;
    bool  (::clang::RecordDecl::*method_pointer_1774b47bc49b5993b03bbcc2771d8e9b)() const = &::clang::RecordDecl::isInjectedClassName;
    bool  (::clang::RecordDecl::*method_pointer_dd47c3c0c6f05aabbfd890f2291be5f0)() const = &::clang::RecordDecl::isLambda;
    bool  (::clang::RecordDecl::*method_pointer_68308dba4bd9585c96c5c33ce9faf09c)(bool ) const = &::clang::RecordDecl::mayInsertExtraPadding;
    void  (::clang::RecordDecl::*method_pointer_66de2d4992e6598ebe5558bbdc5190bd)(bool ) = &::clang::RecordDecl::setAnonymousStructOrUnion;
    void  (::clang::RecordDecl::*method_pointer_653be253780a5bdc83ffd9910125ef71)() = &::clang::RecordDecl::setCapturedRecord;
    void  (::clang::RecordDecl::*method_pointer_dd83d61e2ed55deea20842578b2ddb7e)(bool ) = &::clang::RecordDecl::setHasFlexibleArrayMember;
    void  (::clang::RecordDecl::*method_pointer_b6715ddde9f7550b8f70c3acf8e514c7)(bool ) = &::clang::RecordDecl::setHasLoadedFieldsFromExternalStorage;
    void  (::clang::RecordDecl::*method_pointer_4e60779dbee95776b941d532e9b08033)(bool ) = &::clang::RecordDecl::setHasObjectMember;
    void  (::clang::RecordDecl::*method_pointer_f78305a68df454deb93f9dffa9514617)(bool ) = &::clang::RecordDecl::setHasVolatileMember;
    boost::python::class_< class ::clang::RecordDecl, autowig::HeldType< class ::clang::RecordDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_185117225e1a5743866dee867a4d2c40("RecordDecl", "", boost::python::no_init);
    class_185117225e1a5743866dee867a4d2c40.def("classof", method_pointer_b3f60bd83d0a5eb19ed20aca6a0ed31c, "");
    class_185117225e1a5743866dee867a4d2c40.def("classof_kind", method_pointer_b115c8c9b0c95309a56d935a91e8af25, "");
    class_185117225e1a5743866dee867a4d2c40.def("complete_definition", method_pointer_ed03872dd6a35734928f6b2623a6096d, "");
    class_185117225e1a5743866dee867a4d2c40.def("field_empty", method_pointer_b0647bbe87bd5e729598b4f07724e337, "");
    class_185117225e1a5743866dee867a4d2c40.def("find_first_named_data_member", method_pointer_1ccf96350ea759eb896af8718ba94a25, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_definition", method_pointer_0e17454d97dd5bb79008027537d13dfe, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_91f99f9cb6305449b1a87da6dfd5017a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_2c8a3759c8c655d29ac95ed6feece222, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_f5d29304eb9159879e52512f0f5cfb68, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_87513ffaee2e5f41924f7569e89b9c04, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("has_flexible_array_member", method_pointer_b526252746425d2281510fbda3873571, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_loaded_fields_from_external_storage", method_pointer_ef5d060f399c5ab69a9f357973ff9e9b, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_object_member", method_pointer_927fbc1b468a56088aed1aed31953ff1, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_volatile_member", method_pointer_ceb3a142006a5b8a904f171b1dcf082e, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_anonymous_struct_or_union", method_pointer_091ac69abcfd56cfbd8859696bfec960, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_captured_record", method_pointer_79fd989743a85da9878aa89f039ac775, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_injected_class_name", method_pointer_1774b47bc49b5993b03bbcc2771d8e9b, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_lambda", method_pointer_dd47c3c0c6f05aabbfd890f2291be5f0, "");
    class_185117225e1a5743866dee867a4d2c40.def("may_insert_extra_padding", method_pointer_68308dba4bd9585c96c5c33ce9faf09c, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_anonymous_struct_or_union", method_pointer_66de2d4992e6598ebe5558bbdc5190bd, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_captured_record", method_pointer_653be253780a5bdc83ffd9910125ef71, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_flexible_array_member", method_pointer_dd83d61e2ed55deea20842578b2ddb7e, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_loaded_fields_from_external_storage", method_pointer_b6715ddde9f7550b8f70c3acf8e514c7, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_object_member", method_pointer_4e60779dbee95776b941d532e9b08033, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_volatile_member", method_pointer_f78305a68df454deb93f9dffa9514617, "");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof_kind");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}