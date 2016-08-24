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
    bool  (*method_pointer_8dec6cf1977d562eace0150cdc8d3556)(class ::clang::Type  const *) = ::clang::ObjCObjectType::classof;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_2903c4bac9a2597799dad4c906ede5d6)() const = &::clang::ObjCObjectType::desugar;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_29ab4c96331b5b7baa643062ea86e7c6)() const = &::clang::ObjCObjectType::getBaseType;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectType::*method_pointer_a8f144006d2453baaf4818d0b1b6b5c6)() const = &::clang::ObjCObjectType::getInterface;
    unsigned int  (::clang::ObjCObjectType::*method_pointer_bfcdfa6840df5fb99f4093fd85f86741)() const = &::clang::ObjCObjectType::getNumProtocols;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectType::*method_pointer_8b2db06102cc5224b498156573a83a7f)(unsigned int ) const = &::clang::ObjCObjectType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_1c1b76d65a185af9aba3e8dd1e84d7de)() const = &::clang::ObjCObjectType::getSuperClassType;
    bool  (::clang::ObjCObjectType::*method_pointer_5e820667081359c39976d3ba00f4738f)() const = &::clang::ObjCObjectType::isKindOfType;
    bool  (::clang::ObjCObjectType::*method_pointer_b410853056ec5132a47b649d5e091598)() const = &::clang::ObjCObjectType::isKindOfTypeAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_1bb859f6d8ec5ce0a835044c26bb2a7a)() const = &::clang::ObjCObjectType::isObjCClass;
    bool  (::clang::ObjCObjectType::*method_pointer_7792ff6115d959f782599d19f3d16c35)() const = &::clang::ObjCObjectType::isObjCId;
    bool  (::clang::ObjCObjectType::*method_pointer_3a3a1885d7d35e5889bdbb403ccdecba)() const = &::clang::ObjCObjectType::isObjCQualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_728732f196b95d8ca509b57b4fe032f3)() const = &::clang::ObjCObjectType::isObjCQualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_98e5b6d3d4685ef486a2e898d9b0201a)() const = &::clang::ObjCObjectType::isObjCUnqualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_873785d0b7a55c86a50cfec53da0dba2)() const = &::clang::ObjCObjectType::isObjCUnqualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_64f723bcf33f5106aa5ba54f864b3173)() const = &::clang::ObjCObjectType::isObjCUnqualifiedIdOrClass;
    bool  (::clang::ObjCObjectType::*method_pointer_47ab14481bb650f3a8f89a29afda5c06)() const = &::clang::ObjCObjectType::isSpecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_d01fbedeef34510ebdb54b5e7de49b47)() const = &::clang::ObjCObjectType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_e2bc72c950eb5a489dedbe7e185d2939)() const = &::clang::ObjCObjectType::isSugared;
    bool  (::clang::ObjCObjectType::*method_pointer_dccfba0f001b59f68340bd389ee73e92)() const = &::clang::ObjCObjectType::isUnspecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_6c482f25fb0758869352d28a44f4ae80)() const = &::clang::ObjCObjectType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_47543d9bde025163bfebab9775a4acd3)() const = &::clang::ObjCObjectType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectType, autowig::HeldType< class ::clang::ObjCObjectType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3980f13801db50f498b55d818463d500("ObjCObjectType", "", boost::python::no_init);
    class_3980f13801db50f498b55d818463d500.def("classof", method_pointer_8dec6cf1977d562eace0150cdc8d3556, "");
    class_3980f13801db50f498b55d818463d500.def("desugar", method_pointer_2903c4bac9a2597799dad4c906ede5d6, "");
    class_3980f13801db50f498b55d818463d500.def("get_base_type", method_pointer_29ab4c96331b5b7baa643062ea86e7c6, "");
    class_3980f13801db50f498b55d818463d500.def("get_interface", method_pointer_a8f144006d2453baaf4818d0b1b6b5c6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_num_protocols", method_pointer_bfcdfa6840df5fb99f4093fd85f86741, "");
    class_3980f13801db50f498b55d818463d500.def("get_protocol", method_pointer_8b2db06102cc5224b498156573a83a7f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_super_class_type", method_pointer_1c1b76d65a185af9aba3e8dd1e84d7de, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type", method_pointer_5e820667081359c39976d3ba00f4738f, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type_as_written", method_pointer_b410853056ec5132a47b649d5e091598, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_class", method_pointer_1bb859f6d8ec5ce0a835044c26bb2a7a, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_id", method_pointer_7792ff6115d959f782599d19f3d16c35, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_class", method_pointer_3a3a1885d7d35e5889bdbb403ccdecba, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_id", method_pointer_728732f196b95d8ca509b57b4fe032f3, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_class", method_pointer_98e5b6d3d4685ef486a2e898d9b0201a, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id", method_pointer_873785d0b7a55c86a50cfec53da0dba2, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id_or_class", method_pointer_64f723bcf33f5106aa5ba54f864b3173, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized", method_pointer_47ab14481bb650f3a8f89a29afda5c06, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized_as_written", method_pointer_d01fbedeef34510ebdb54b5e7de49b47, "");
    class_3980f13801db50f498b55d818463d500.def("is_sugared", method_pointer_e2bc72c950eb5a489dedbe7e185d2939, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized", method_pointer_dccfba0f001b59f68340bd389ee73e92, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized_as_written", method_pointer_6c482f25fb0758869352d28a44f4ae80, "");
    class_3980f13801db50f498b55d818463d500.def("qual_empty", method_pointer_47543d9bde025163bfebab9775a4acd3, "");
    class_3980f13801db50f498b55d818463d500.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectType >, autowig::HeldType< class ::clang::Type > >();
    }

}