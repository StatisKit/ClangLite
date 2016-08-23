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
    bool  (*method_pointer_ec32f27766775fd3b739522a98b5e932)(class ::clang::Type  const *) = ::clang::ObjCObjectType::classof;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_a8c0754b6412574f8781f2e4f851b1b4)() const = &::clang::ObjCObjectType::desugar;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_8cf6b6e637b3504f85760256ffcc6b49)() const = &::clang::ObjCObjectType::getBaseType;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectType::*method_pointer_ad01ec0c4d6c59888866863f124313bb)() const = &::clang::ObjCObjectType::getInterface;
    unsigned int  (::clang::ObjCObjectType::*method_pointer_1c4d07081d7251fc9d7ec3e59c887ba2)() const = &::clang::ObjCObjectType::getNumProtocols;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectType::*method_pointer_70c080b3fd3f55058c7fca2ec9be43e9)(unsigned int ) const = &::clang::ObjCObjectType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_1c0acd0480875b758d3955ec743c7728)() const = &::clang::ObjCObjectType::getSuperClassType;
    bool  (::clang::ObjCObjectType::*method_pointer_ff5dbd56490e5340b994200f25aa8f08)() const = &::clang::ObjCObjectType::isKindOfType;
    bool  (::clang::ObjCObjectType::*method_pointer_2fa0e267d8945e469c232f3d75a4df92)() const = &::clang::ObjCObjectType::isKindOfTypeAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_f0cdbd237b1c569ba7a997625cdf1ed2)() const = &::clang::ObjCObjectType::isObjCClass;
    bool  (::clang::ObjCObjectType::*method_pointer_a7222173082450029b4068d1c80a41a0)() const = &::clang::ObjCObjectType::isObjCId;
    bool  (::clang::ObjCObjectType::*method_pointer_fccb07d6e73c5f0cb13eb118aa3507d7)() const = &::clang::ObjCObjectType::isObjCQualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_cfad2e0f76db5f2f8dfd375184719332)() const = &::clang::ObjCObjectType::isObjCQualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_2109ce571e775123896cdc07417b4a9d)() const = &::clang::ObjCObjectType::isObjCUnqualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_54e820a8037e5ef3bb1b463082793bed)() const = &::clang::ObjCObjectType::isObjCUnqualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_a0a7acf51f345b79a2afd7ac38a95d49)() const = &::clang::ObjCObjectType::isObjCUnqualifiedIdOrClass;
    bool  (::clang::ObjCObjectType::*method_pointer_40a63674da9c5f8c81852a0c30fe147b)() const = &::clang::ObjCObjectType::isSpecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_d1eb0852354d59d6ba5c4aefac306f37)() const = &::clang::ObjCObjectType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_f89afc9e200e51a880b323871d8024c7)() const = &::clang::ObjCObjectType::isSugared;
    bool  (::clang::ObjCObjectType::*method_pointer_c07bbf3e91795fd291291db520df3729)() const = &::clang::ObjCObjectType::isUnspecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_47c304b92fed52819d4ae7f97b226014)() const = &::clang::ObjCObjectType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_b10cc19d33335ff6b4333ef3b27e161e)() const = &::clang::ObjCObjectType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectType, autowig::HeldType< class ::clang::ObjCObjectType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3980f13801db50f498b55d818463d500("ObjCObjectType", "", boost::python::no_init);
    class_3980f13801db50f498b55d818463d500.def("classof", method_pointer_ec32f27766775fd3b739522a98b5e932, "");
    class_3980f13801db50f498b55d818463d500.def("desugar", method_pointer_a8c0754b6412574f8781f2e4f851b1b4, "");
    class_3980f13801db50f498b55d818463d500.def("get_base_type", method_pointer_8cf6b6e637b3504f85760256ffcc6b49, "");
    class_3980f13801db50f498b55d818463d500.def("get_interface", method_pointer_ad01ec0c4d6c59888866863f124313bb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_num_protocols", method_pointer_1c4d07081d7251fc9d7ec3e59c887ba2, "");
    class_3980f13801db50f498b55d818463d500.def("get_protocol", method_pointer_70c080b3fd3f55058c7fca2ec9be43e9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_super_class_type", method_pointer_1c0acd0480875b758d3955ec743c7728, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type", method_pointer_ff5dbd56490e5340b994200f25aa8f08, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type_as_written", method_pointer_2fa0e267d8945e469c232f3d75a4df92, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_class", method_pointer_f0cdbd237b1c569ba7a997625cdf1ed2, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_id", method_pointer_a7222173082450029b4068d1c80a41a0, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_class", method_pointer_fccb07d6e73c5f0cb13eb118aa3507d7, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_id", method_pointer_cfad2e0f76db5f2f8dfd375184719332, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_class", method_pointer_2109ce571e775123896cdc07417b4a9d, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id", method_pointer_54e820a8037e5ef3bb1b463082793bed, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id_or_class", method_pointer_a0a7acf51f345b79a2afd7ac38a95d49, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized", method_pointer_40a63674da9c5f8c81852a0c30fe147b, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized_as_written", method_pointer_d1eb0852354d59d6ba5c4aefac306f37, "");
    class_3980f13801db50f498b55d818463d500.def("is_sugared", method_pointer_f89afc9e200e51a880b323871d8024c7, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized", method_pointer_c07bbf3e91795fd291291db520df3729, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized_as_written", method_pointer_47c304b92fed52819d4ae7f97b226014, "");
    class_3980f13801db50f498b55d818463d500.def("qual_empty", method_pointer_b10cc19d33335ff6b4333ef3b27e161e, "");
    class_3980f13801db50f498b55d818463d500.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectType >, autowig::HeldType< class ::clang::Type > >();
    }

}