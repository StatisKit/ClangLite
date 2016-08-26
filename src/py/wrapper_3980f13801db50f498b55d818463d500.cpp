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
    bool  (*method_pointer_9ee3a67b06ef57768aa8d76f00786b4b)(class ::clang::Type  const *) = ::clang::ObjCObjectType::classof;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectType::*method_pointer_9d29be88f7f15f15a55474edd8fb9023)() const = &::clang::ObjCObjectType::getInterface;
    unsigned int  (::clang::ObjCObjectType::*method_pointer_be99e7b1d5a85010917551de2c38ef05)() const = &::clang::ObjCObjectType::getNumProtocols;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectType::*method_pointer_9b50406b98565bf687330eb76d6330ae)(unsigned int ) const = &::clang::ObjCObjectType::getProtocol;
    bool  (::clang::ObjCObjectType::*method_pointer_0a351b83d6415ad28bf17f759839528e)() const = &::clang::ObjCObjectType::isKindOfType;
    bool  (::clang::ObjCObjectType::*method_pointer_935b36fa506851329173642513915cb1)() const = &::clang::ObjCObjectType::isKindOfTypeAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_5b12bd9b369955789314259dfca1be8e)() const = &::clang::ObjCObjectType::isObjCClass;
    bool  (::clang::ObjCObjectType::*method_pointer_70679ace9f1a520da9bd09b9b7581ee1)() const = &::clang::ObjCObjectType::isObjCId;
    bool  (::clang::ObjCObjectType::*method_pointer_2d6e91d3a13352f685cf14613c14721f)() const = &::clang::ObjCObjectType::isObjCQualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_7b262c1a7c71546fb8855f8027bdb521)() const = &::clang::ObjCObjectType::isObjCQualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_46d7106d756c59f4a92463d582317830)() const = &::clang::ObjCObjectType::isObjCUnqualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_c78e0dec053e5f6a801032f969e97b62)() const = &::clang::ObjCObjectType::isObjCUnqualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_5e93fad432855b54a953adb93b88976c)() const = &::clang::ObjCObjectType::isObjCUnqualifiedIdOrClass;
    bool  (::clang::ObjCObjectType::*method_pointer_5514e55af5e456e08436fae940d42b87)() const = &::clang::ObjCObjectType::isSpecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_01a783aed815506f9412b3026822d72d)() const = &::clang::ObjCObjectType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_ec070646828959cfa6ccb3bce74e33ba)() const = &::clang::ObjCObjectType::isSugared;
    bool  (::clang::ObjCObjectType::*method_pointer_30161bf6f9495142abd34d7d547d8103)() const = &::clang::ObjCObjectType::isUnspecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_c083da3a2d3f571c9ec081335bf863df)() const = &::clang::ObjCObjectType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_84fe6daf6d955e63b2f8d8f87f57f4ea)() const = &::clang::ObjCObjectType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectType, autowig::HeldType< class ::clang::ObjCObjectType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3980f13801db50f498b55d818463d500("ObjCObjectType", "", boost::python::no_init);
    class_3980f13801db50f498b55d818463d500.def("classof", method_pointer_9ee3a67b06ef57768aa8d76f00786b4b, "");
    class_3980f13801db50f498b55d818463d500.def("get_interface", method_pointer_9d29be88f7f15f15a55474edd8fb9023, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_num_protocols", method_pointer_be99e7b1d5a85010917551de2c38ef05, "");
    class_3980f13801db50f498b55d818463d500.def("get_protocol", method_pointer_9b50406b98565bf687330eb76d6330ae, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type", method_pointer_0a351b83d6415ad28bf17f759839528e, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type_as_written", method_pointer_935b36fa506851329173642513915cb1, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_class", method_pointer_5b12bd9b369955789314259dfca1be8e, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_id", method_pointer_70679ace9f1a520da9bd09b9b7581ee1, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_class", method_pointer_2d6e91d3a13352f685cf14613c14721f, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_id", method_pointer_7b262c1a7c71546fb8855f8027bdb521, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_class", method_pointer_46d7106d756c59f4a92463d582317830, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id", method_pointer_c78e0dec053e5f6a801032f969e97b62, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id_or_class", method_pointer_5e93fad432855b54a953adb93b88976c, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized", method_pointer_5514e55af5e456e08436fae940d42b87, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized_as_written", method_pointer_01a783aed815506f9412b3026822d72d, "");
    class_3980f13801db50f498b55d818463d500.def("is_sugared", method_pointer_ec070646828959cfa6ccb3bce74e33ba, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized", method_pointer_30161bf6f9495142abd34d7d547d8103, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized_as_written", method_pointer_c083da3a2d3f571c9ec081335bf863df, "");
    class_3980f13801db50f498b55d818463d500.def("qual_empty", method_pointer_84fe6daf6d955e63b2f8d8f87f57f4ea, "");
    class_3980f13801db50f498b55d818463d500.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectType >, autowig::HeldType< class ::clang::Type > >();
    }

}