#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_3980f13801db50f498b55d818463d500()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_fa2a26bf192d5b3da54964ccd6381b48)(class ::clang::Type  const *) = ::clang::ObjCObjectType::classof;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectType::*method_pointer_eb203439c1205dd5acb60069611807a6)() const = &::clang::ObjCObjectType::getInterface;
    unsigned int  (::clang::ObjCObjectType::*method_pointer_f6509451ccf7563593342716f4837285)() const = &::clang::ObjCObjectType::getNumProtocols;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectType::*method_pointer_a6c1614d9bf4595e91c9a31eca5193fb)(unsigned int ) const = &::clang::ObjCObjectType::getProtocol;
    bool  (::clang::ObjCObjectType::*method_pointer_8f7d3b32a4005ea18ee6ce0dd15085cd)() const = &::clang::ObjCObjectType::isKindOfType;
    bool  (::clang::ObjCObjectType::*method_pointer_aca57ad9e00859a3a3d795bc1217c106)() const = &::clang::ObjCObjectType::isKindOfTypeAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_d9068747cdf758f3acae35f07f35786d)() const = &::clang::ObjCObjectType::isObjCClass;
    bool  (::clang::ObjCObjectType::*method_pointer_8fd06a77ac1a5f02aa1fd4279aa13c4d)() const = &::clang::ObjCObjectType::isObjCId;
    bool  (::clang::ObjCObjectType::*method_pointer_faf464662997502786479ac11acbed92)() const = &::clang::ObjCObjectType::isObjCQualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_f0be30857d62506dbdb165354263dc40)() const = &::clang::ObjCObjectType::isObjCQualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_e8fd43815fb6505bb8c2f5f0d900115b)() const = &::clang::ObjCObjectType::isObjCUnqualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_eb82b03acefc5293b9d7af554c12a82d)() const = &::clang::ObjCObjectType::isObjCUnqualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_358a002b70a8539cb6f1bce3ba484d12)() const = &::clang::ObjCObjectType::isObjCUnqualifiedIdOrClass;
    bool  (::clang::ObjCObjectType::*method_pointer_d9b3983ae47d5f9da7a2ff6351f6ae58)() const = &::clang::ObjCObjectType::isSpecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_3b5fe6e23746501fb388cdb4fcf01e73)() const = &::clang::ObjCObjectType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_ae71fd20dd5f5ca4b1733c569c7a9372)() const = &::clang::ObjCObjectType::isSugared;
    bool  (::clang::ObjCObjectType::*method_pointer_1a2449eecdaa5cee9e791f9d9ad67c16)() const = &::clang::ObjCObjectType::isUnspecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_48dc78aa99795e3b8a035c3adcbac49f)() const = &::clang::ObjCObjectType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_945892ba284054d89d4929e3871fbb82)() const = &::clang::ObjCObjectType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectType, autowig::HeldType< class ::clang::ObjCObjectType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3980f13801db50f498b55d818463d500("ObjCObjectType", "", boost::python::no_init);
    class_3980f13801db50f498b55d818463d500.def("classof", method_pointer_fa2a26bf192d5b3da54964ccd6381b48, "");
    class_3980f13801db50f498b55d818463d500.def("get_interface", method_pointer_eb203439c1205dd5acb60069611807a6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_num_protocols", method_pointer_f6509451ccf7563593342716f4837285, "");
    class_3980f13801db50f498b55d818463d500.def("get_protocol", method_pointer_a6c1614d9bf4595e91c9a31eca5193fb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type", method_pointer_8f7d3b32a4005ea18ee6ce0dd15085cd, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type_as_written", method_pointer_aca57ad9e00859a3a3d795bc1217c106, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_class", method_pointer_d9068747cdf758f3acae35f07f35786d, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_id", method_pointer_8fd06a77ac1a5f02aa1fd4279aa13c4d, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_class", method_pointer_faf464662997502786479ac11acbed92, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_id", method_pointer_f0be30857d62506dbdb165354263dc40, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_class", method_pointer_e8fd43815fb6505bb8c2f5f0d900115b, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id", method_pointer_eb82b03acefc5293b9d7af554c12a82d, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id_or_class", method_pointer_358a002b70a8539cb6f1bce3ba484d12, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized", method_pointer_d9b3983ae47d5f9da7a2ff6351f6ae58, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized_as_written", method_pointer_3b5fe6e23746501fb388cdb4fcf01e73, "");
    class_3980f13801db50f498b55d818463d500.def("is_sugared", method_pointer_ae71fd20dd5f5ca4b1733c569c7a9372, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized", method_pointer_1a2449eecdaa5cee9e791f9d9ad67c16, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized_as_written", method_pointer_48dc78aa99795e3b8a035c3adcbac49f, "");
    class_3980f13801db50f498b55d818463d500.def("qual_empty", method_pointer_945892ba284054d89d4929e3871fbb82, "");
    class_3980f13801db50f498b55d818463d500.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectType >, autowig::HeldType< class ::clang::Type > >();
    }

}