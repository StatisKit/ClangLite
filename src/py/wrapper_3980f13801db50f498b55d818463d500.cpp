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
    bool  (*method_pointer_4024341475f1509fa1075bd9dd24e713)(class ::clang::Type  const *) = ::clang::ObjCObjectType::classof;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_7258bd7cd21551e5b06ec6d0a08abd30)() const = &::clang::ObjCObjectType::desugar;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_64a1619697d65559a063370463164850)() const = &::clang::ObjCObjectType::getBaseType;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectType::*method_pointer_4d9e4d73e53f512ab5fbd878b8fec2d8)() const = &::clang::ObjCObjectType::getInterface;
    unsigned int  (::clang::ObjCObjectType::*method_pointer_4c3a2c39581054fe8f5e771074f42de9)() const = &::clang::ObjCObjectType::getNumProtocols;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectType::*method_pointer_d6da6a36fcbe5a01aa01e827cf1b9fa9)(unsigned int ) const = &::clang::ObjCObjectType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_c0454b316dad548783803b985ea26ad1)() const = &::clang::ObjCObjectType::getSuperClassType;
    bool  (::clang::ObjCObjectType::*method_pointer_6db38d6cff3c510dbf5207093f390199)() const = &::clang::ObjCObjectType::isKindOfType;
    bool  (::clang::ObjCObjectType::*method_pointer_2642dc9f9df95ea4a9343dc9cfd201e9)() const = &::clang::ObjCObjectType::isKindOfTypeAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_668eb79eea45514c873624d085647c42)() const = &::clang::ObjCObjectType::isObjCClass;
    bool  (::clang::ObjCObjectType::*method_pointer_6564152913bb5b41937fb4abd58e2813)() const = &::clang::ObjCObjectType::isObjCId;
    bool  (::clang::ObjCObjectType::*method_pointer_049b092c555653a0881ef28c6ecec4f9)() const = &::clang::ObjCObjectType::isObjCQualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_920f546453df5340860cfdfd56b13758)() const = &::clang::ObjCObjectType::isObjCQualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_fb30f5a8b71259c29894d18ac2f9d821)() const = &::clang::ObjCObjectType::isObjCUnqualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_124a137ecb5e51aea684c4799c4f2389)() const = &::clang::ObjCObjectType::isObjCUnqualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_8bfc5614774c5215be9a9f7088b64416)() const = &::clang::ObjCObjectType::isObjCUnqualifiedIdOrClass;
    bool  (::clang::ObjCObjectType::*method_pointer_2eca24bf3e405f669ef2a283c8ba9da7)() const = &::clang::ObjCObjectType::isSpecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_f78d31dc5353540086a329241a1f28c9)() const = &::clang::ObjCObjectType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_e226e60c99cb5b43b2021605cc98aca2)() const = &::clang::ObjCObjectType::isSugared;
    bool  (::clang::ObjCObjectType::*method_pointer_1525b0978b8d58bca4f3efc9fc4a7578)() const = &::clang::ObjCObjectType::isUnspecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_2f5bf424392b50b7a02d86af7e76cb2b)() const = &::clang::ObjCObjectType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_e67562e2ed05523783d9deea8fe5ac5a)() const = &::clang::ObjCObjectType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectType, autowig::HeldType< class ::clang::ObjCObjectType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3980f13801db50f498b55d818463d500("ObjCObjectType", "", boost::python::no_init);
    class_3980f13801db50f498b55d818463d500.def("classof", method_pointer_4024341475f1509fa1075bd9dd24e713, "");
    class_3980f13801db50f498b55d818463d500.def("desugar", method_pointer_7258bd7cd21551e5b06ec6d0a08abd30, "");
    class_3980f13801db50f498b55d818463d500.def("get_base_type", method_pointer_64a1619697d65559a063370463164850, "");
    class_3980f13801db50f498b55d818463d500.def("get_interface", method_pointer_4d9e4d73e53f512ab5fbd878b8fec2d8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_num_protocols", method_pointer_4c3a2c39581054fe8f5e771074f42de9, "");
    class_3980f13801db50f498b55d818463d500.def("get_protocol", method_pointer_d6da6a36fcbe5a01aa01e827cf1b9fa9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_super_class_type", method_pointer_c0454b316dad548783803b985ea26ad1, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type", method_pointer_6db38d6cff3c510dbf5207093f390199, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type_as_written", method_pointer_2642dc9f9df95ea4a9343dc9cfd201e9, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_class", method_pointer_668eb79eea45514c873624d085647c42, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_id", method_pointer_6564152913bb5b41937fb4abd58e2813, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_class", method_pointer_049b092c555653a0881ef28c6ecec4f9, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_id", method_pointer_920f546453df5340860cfdfd56b13758, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_class", method_pointer_fb30f5a8b71259c29894d18ac2f9d821, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id", method_pointer_124a137ecb5e51aea684c4799c4f2389, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id_or_class", method_pointer_8bfc5614774c5215be9a9f7088b64416, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized", method_pointer_2eca24bf3e405f669ef2a283c8ba9da7, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized_as_written", method_pointer_f78d31dc5353540086a329241a1f28c9, "");
    class_3980f13801db50f498b55d818463d500.def("is_sugared", method_pointer_e226e60c99cb5b43b2021605cc98aca2, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized", method_pointer_1525b0978b8d58bca4f3efc9fc4a7578, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized_as_written", method_pointer_2f5bf424392b50b7a02d86af7e76cb2b, "");
    class_3980f13801db50f498b55d818463d500.def("qual_empty", method_pointer_e67562e2ed05523783d9deea8fe5ac5a, "");
    class_3980f13801db50f498b55d818463d500.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectType >, autowig::HeldType< class ::clang::Type > >();
    }

}