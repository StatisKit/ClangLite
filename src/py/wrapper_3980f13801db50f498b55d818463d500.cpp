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
    bool  (*method_pointer_508b14197c4b50cbbef492ba5e445188)(class ::clang::Type  const *) = ::clang::ObjCObjectType::classof;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_004ef866fe7252bea78a0d238a78eac0)() const = &::clang::ObjCObjectType::desugar;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_174974bff5cd51118e8e81ccf7b39c29)() const = &::clang::ObjCObjectType::getBaseType;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectType::*method_pointer_34930f9c2c8551379d6bc0fb233692cf)() const = &::clang::ObjCObjectType::getInterface;
    unsigned int  (::clang::ObjCObjectType::*method_pointer_c28db43609ab5bf0b89bb12dc15e58fa)() const = &::clang::ObjCObjectType::getNumProtocols;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectType::*method_pointer_7213758c253d56468b1ee261715f7331)(unsigned int ) const = &::clang::ObjCObjectType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_b099bd36d2b553bc9803fa528bcb6a3e)() const = &::clang::ObjCObjectType::getSuperClassType;
    bool  (::clang::ObjCObjectType::*method_pointer_2c0ce731cc815893b9556ef74d2cac38)() const = &::clang::ObjCObjectType::isKindOfType;
    bool  (::clang::ObjCObjectType::*method_pointer_5f97e6c6471150239e71d4b8ed8159b0)() const = &::clang::ObjCObjectType::isKindOfTypeAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_1f243f617ebd54899448eb5b901b3d20)() const = &::clang::ObjCObjectType::isObjCClass;
    bool  (::clang::ObjCObjectType::*method_pointer_3843495c86a354e68bd7ea343830ce85)() const = &::clang::ObjCObjectType::isObjCId;
    bool  (::clang::ObjCObjectType::*method_pointer_0d41ba6c69095d48b015a3b4cee6c23b)() const = &::clang::ObjCObjectType::isObjCQualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_c2a1840a2a345cba992f917bcb1ab19a)() const = &::clang::ObjCObjectType::isObjCQualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_2130e7b5cba4586c9722ca9d34a60aea)() const = &::clang::ObjCObjectType::isObjCUnqualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_0517291053525609adb37918cc228d41)() const = &::clang::ObjCObjectType::isObjCUnqualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_fdb8d62f78a851529f6cac880ef7b805)() const = &::clang::ObjCObjectType::isObjCUnqualifiedIdOrClass;
    bool  (::clang::ObjCObjectType::*method_pointer_f121b600bbe151c09cfb034b9bf04bc1)() const = &::clang::ObjCObjectType::isSpecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_84b014f64ac15a60b412f9c522025f7d)() const = &::clang::ObjCObjectType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_3c2707448b5d5f8a83eee3fe8e386089)() const = &::clang::ObjCObjectType::isSugared;
    bool  (::clang::ObjCObjectType::*method_pointer_bf4f151bfcea5be8a56baa7cd5aad6fa)() const = &::clang::ObjCObjectType::isUnspecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_dc05aaea0b7c564e9ee4148150c496ca)() const = &::clang::ObjCObjectType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_f21c251e5c6754bdafe758227e1a8347)() const = &::clang::ObjCObjectType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectType, autowig::HeldType< class ::clang::ObjCObjectType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3980f13801db50f498b55d818463d500("ObjCObjectType", "", boost::python::no_init);
    class_3980f13801db50f498b55d818463d500.def("classof", method_pointer_508b14197c4b50cbbef492ba5e445188, "");
    class_3980f13801db50f498b55d818463d500.def("desugar", method_pointer_004ef866fe7252bea78a0d238a78eac0, "");
    class_3980f13801db50f498b55d818463d500.def("get_base_type", method_pointer_174974bff5cd51118e8e81ccf7b39c29, "");
    class_3980f13801db50f498b55d818463d500.def("get_interface", method_pointer_34930f9c2c8551379d6bc0fb233692cf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_num_protocols", method_pointer_c28db43609ab5bf0b89bb12dc15e58fa, "");
    class_3980f13801db50f498b55d818463d500.def("get_protocol", method_pointer_7213758c253d56468b1ee261715f7331, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_super_class_type", method_pointer_b099bd36d2b553bc9803fa528bcb6a3e, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type", method_pointer_2c0ce731cc815893b9556ef74d2cac38, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type_as_written", method_pointer_5f97e6c6471150239e71d4b8ed8159b0, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_class", method_pointer_1f243f617ebd54899448eb5b901b3d20, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_id", method_pointer_3843495c86a354e68bd7ea343830ce85, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_class", method_pointer_0d41ba6c69095d48b015a3b4cee6c23b, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_id", method_pointer_c2a1840a2a345cba992f917bcb1ab19a, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_class", method_pointer_2130e7b5cba4586c9722ca9d34a60aea, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id", method_pointer_0517291053525609adb37918cc228d41, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id_or_class", method_pointer_fdb8d62f78a851529f6cac880ef7b805, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized", method_pointer_f121b600bbe151c09cfb034b9bf04bc1, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized_as_written", method_pointer_84b014f64ac15a60b412f9c522025f7d, "");
    class_3980f13801db50f498b55d818463d500.def("is_sugared", method_pointer_3c2707448b5d5f8a83eee3fe8e386089, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized", method_pointer_bf4f151bfcea5be8a56baa7cd5aad6fa, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized_as_written", method_pointer_dc05aaea0b7c564e9ee4148150c496ca, "");
    class_3980f13801db50f498b55d818463d500.def("qual_empty", method_pointer_f21c251e5c6754bdafe758227e1a8347, "");
    class_3980f13801db50f498b55d818463d500.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectType >, autowig::HeldType< class ::clang::Type > >();
    }

}