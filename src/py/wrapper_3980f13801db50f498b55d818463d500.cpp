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
/* File authors: Pierre Fernique <pfernique@gmail.com> (37)                       */
/*                                                                                */
/**********************************************************************************/

#include "_clanglite.h"


namespace autowig
{
}


void wrapper_3980f13801db50f498b55d818463d500()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_75c06e5ec44350da800a52a8742f8cc0)(class ::clang::Type  const *) = ::clang::ObjCObjectType::classof;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_9b5f23277e4e5689b0f28f9952cd42c5)() const = &::clang::ObjCObjectType::desugar;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_651cc20900535b30973a0c1cfc881ede)() const = &::clang::ObjCObjectType::getBaseType;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectType::*method_pointer_3ef56afd450151829be0958e51981920)() const = &::clang::ObjCObjectType::getInterface;
    unsigned int  (::clang::ObjCObjectType::*method_pointer_c1dd5bd8887357a399fa121e2b4ec2fe)() const = &::clang::ObjCObjectType::getNumProtocols;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectType::*method_pointer_11a57a2b30c55b198ee976b0a1e6d3ed)(unsigned int ) const = &::clang::ObjCObjectType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_97f709a471cd59888f6743d19bebca6b)() const = &::clang::ObjCObjectType::getSuperClassType;
    bool  (::clang::ObjCObjectType::*method_pointer_0bd933e79edd56dfb3bc4a5b12627d3b)() const = &::clang::ObjCObjectType::isKindOfType;
    bool  (::clang::ObjCObjectType::*method_pointer_e0da89070d3e56ba9a2e4df8ca268c25)() const = &::clang::ObjCObjectType::isKindOfTypeAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_8b49bfe3605b5d18bfcd2233e015ff29)() const = &::clang::ObjCObjectType::isObjCClass;
    bool  (::clang::ObjCObjectType::*method_pointer_408ae23c4d975b438ea78e381f2d345b)() const = &::clang::ObjCObjectType::isObjCId;
    bool  (::clang::ObjCObjectType::*method_pointer_7df79d7fe8965cf7b94e55dde98331cd)() const = &::clang::ObjCObjectType::isObjCQualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_cb132b8013d8598e83f23add5f7ab69b)() const = &::clang::ObjCObjectType::isObjCQualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_194a09f28ec0539886b3e75627385804)() const = &::clang::ObjCObjectType::isObjCUnqualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_d0218a4c0ddd59b1b894fe77c1de66f8)() const = &::clang::ObjCObjectType::isObjCUnqualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_a9584fa9c8c5522c8ee712a1fff658af)() const = &::clang::ObjCObjectType::isObjCUnqualifiedIdOrClass;
    bool  (::clang::ObjCObjectType::*method_pointer_d35f8a1617715eaea944b8a4ec053125)() const = &::clang::ObjCObjectType::isSpecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_3aec6d03e93851629a3330c233b66db4)() const = &::clang::ObjCObjectType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_2c148beade3d57adacbcab1efdd2287e)() const = &::clang::ObjCObjectType::isSugared;
    bool  (::clang::ObjCObjectType::*method_pointer_66d77abecc8858e690739ce14784964e)() const = &::clang::ObjCObjectType::isUnspecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_64ecf765849059e29ac39cd8a7cf6a6d)() const = &::clang::ObjCObjectType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_5ec318e6dd995b9e9a47ae7cc83057bf)() const = &::clang::ObjCObjectType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectType, autowig::HeldType< class ::clang::ObjCObjectType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3980f13801db50f498b55d818463d500("ObjCObjectType", "", boost::python::no_init);
    class_3980f13801db50f498b55d818463d500.def("classof", method_pointer_75c06e5ec44350da800a52a8742f8cc0, "");
    class_3980f13801db50f498b55d818463d500.def("desugar", method_pointer_9b5f23277e4e5689b0f28f9952cd42c5, "");
    class_3980f13801db50f498b55d818463d500.def("get_base_type", method_pointer_651cc20900535b30973a0c1cfc881ede, "");
    class_3980f13801db50f498b55d818463d500.def("get_interface", method_pointer_3ef56afd450151829be0958e51981920, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_num_protocols", method_pointer_c1dd5bd8887357a399fa121e2b4ec2fe, "");
    class_3980f13801db50f498b55d818463d500.def("get_protocol", method_pointer_11a57a2b30c55b198ee976b0a1e6d3ed, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_super_class_type", method_pointer_97f709a471cd59888f6743d19bebca6b, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type", method_pointer_0bd933e79edd56dfb3bc4a5b12627d3b, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type_as_written", method_pointer_e0da89070d3e56ba9a2e4df8ca268c25, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_class", method_pointer_8b49bfe3605b5d18bfcd2233e015ff29, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_id", method_pointer_408ae23c4d975b438ea78e381f2d345b, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_class", method_pointer_7df79d7fe8965cf7b94e55dde98331cd, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_id", method_pointer_cb132b8013d8598e83f23add5f7ab69b, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_class", method_pointer_194a09f28ec0539886b3e75627385804, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id", method_pointer_d0218a4c0ddd59b1b894fe77c1de66f8, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id_or_class", method_pointer_a9584fa9c8c5522c8ee712a1fff658af, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized", method_pointer_d35f8a1617715eaea944b8a4ec053125, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized_as_written", method_pointer_3aec6d03e93851629a3330c233b66db4, "");
    class_3980f13801db50f498b55d818463d500.def("is_sugared", method_pointer_2c148beade3d57adacbcab1efdd2287e, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized", method_pointer_66d77abecc8858e690739ce14784964e, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized_as_written", method_pointer_64ecf765849059e29ac39cd8a7cf6a6d, "");
    class_3980f13801db50f498b55d818463d500.def("qual_empty", method_pointer_5ec318e6dd995b9e9a47ae7cc83057bf, "");
    class_3980f13801db50f498b55d818463d500.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectType >, autowig::HeldType< class ::clang::Type > >();
    }

}