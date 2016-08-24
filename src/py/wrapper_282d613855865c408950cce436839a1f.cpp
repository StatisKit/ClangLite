#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_282d613855865c408950cce436839a1f()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_fc70d31fa2c55159b18ccccf8758b755)(class ::clang::Type  const *) = ::clang::ObjCObjectPointerType::classof;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_ef9d0417bd5d5e9a830a70bc58086b7c)() const = &::clang::ObjCObjectPointerType::desugar;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectPointerType::*method_pointer_7e750b9771bd5cc1bcfc6f53c1ab5861)() const = &::clang::ObjCObjectPointerType::getInterfaceDecl;
    class ::clang::ObjCInterfaceType  const * (::clang::ObjCObjectPointerType::*method_pointer_b0bd2b82c93a577fa35c53d3c90dadcf)() const = &::clang::ObjCObjectPointerType::getInterfaceType;
    unsigned int  (::clang::ObjCObjectPointerType::*method_pointer_f71157249c1a5fc9b92f0a0d2f78cdcc)() const = &::clang::ObjCObjectPointerType::getNumProtocols;
    class ::clang::ObjCObjectType  const * (::clang::ObjCObjectPointerType::*method_pointer_9fafc0c5a147593a8b36e859b4803a12)() const = &::clang::ObjCObjectPointerType::getObjectType;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_c77df8d9534f55c49d2524264e085137)() const = &::clang::ObjCObjectPointerType::getPointeeType;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectPointerType::*method_pointer_68e01350107456f4b61f7211c7703e33)(unsigned int ) const = &::clang::ObjCObjectPointerType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_b35b5cf4b3b05c15a6aee63929090885)() const = &::clang::ObjCObjectPointerType::getSuperClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_2a567d784f5154c59d3c68fb4c5272ae)() const = &::clang::ObjCObjectPointerType::isKindOfType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_b39be3c6f6c05977a80b01c5277c65cb)() const = &::clang::ObjCObjectPointerType::isObjCClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_8c0edeab775a5bafa103b83a8293eb3d)() const = &::clang::ObjCObjectPointerType::isObjCIdOrClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_29b8ef7080a152b08867e69894720a3a)() const = &::clang::ObjCObjectPointerType::isObjCIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_a0123505df045d56a275e9046fb21291)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_e1c8e2f9296a59adba44c8d0aceaae43)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_14364ae0926657549c03a2e9aac36b09)() const = &::clang::ObjCObjectPointerType::isSpecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_8dc329fd7e7357149f000de93e7c5797)() const = &::clang::ObjCObjectPointerType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_2077446058bf5e8480b28d6773c8742c)() const = &::clang::ObjCObjectPointerType::isSugared;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_e6629730f58e594dbbd19505bbbcef9f)() const = &::clang::ObjCObjectPointerType::isUnspecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_6700e65d48ac546d94e5160ddb5abb0b)() const = &::clang::ObjCObjectPointerType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_1e161b00ba11547389aafc89a5245ced)() const = &::clang::ObjCObjectPointerType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectPointerType, autowig::HeldType< class ::clang::ObjCObjectPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_282d613855865c408950cce436839a1f("ObjCObjectPointerType", "", boost::python::no_init);
    class_282d613855865c408950cce436839a1f.def("classof", method_pointer_fc70d31fa2c55159b18ccccf8758b755, "");
    class_282d613855865c408950cce436839a1f.def("desugar", method_pointer_ef9d0417bd5d5e9a830a70bc58086b7c, "");
    class_282d613855865c408950cce436839a1f.def("get_interface_decl", method_pointer_7e750b9771bd5cc1bcfc6f53c1ab5861, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_interface_type", method_pointer_b0bd2b82c93a577fa35c53d3c90dadcf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_num_protocols", method_pointer_f71157249c1a5fc9b92f0a0d2f78cdcc, "");
    class_282d613855865c408950cce436839a1f.def("get_object_type", method_pointer_9fafc0c5a147593a8b36e859b4803a12, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_pointee_type", method_pointer_c77df8d9534f55c49d2524264e085137, "");
    class_282d613855865c408950cce436839a1f.def("get_protocol", method_pointer_68e01350107456f4b61f7211c7703e33, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_super_class_type", method_pointer_b35b5cf4b3b05c15a6aee63929090885, "");
    class_282d613855865c408950cce436839a1f.def("is_kind_of_type", method_pointer_2a567d784f5154c59d3c68fb4c5272ae, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_class_type", method_pointer_b39be3c6f6c05977a80b01c5277c65cb, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_or_class_type", method_pointer_8c0edeab775a5bafa103b83a8293eb3d, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_type", method_pointer_29b8ef7080a152b08867e69894720a3a, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_class_type", method_pointer_a0123505df045d56a275e9046fb21291, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_id_type", method_pointer_e1c8e2f9296a59adba44c8d0aceaae43, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized", method_pointer_14364ae0926657549c03a2e9aac36b09, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized_as_written", method_pointer_8dc329fd7e7357149f000de93e7c5797, "");
    class_282d613855865c408950cce436839a1f.def("is_sugared", method_pointer_2077446058bf5e8480b28d6773c8742c, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized", method_pointer_e6629730f58e594dbbd19505bbbcef9f, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized_as_written", method_pointer_6700e65d48ac546d94e5160ddb5abb0b, "");
    class_282d613855865c408950cce436839a1f.def("qual_empty", method_pointer_1e161b00ba11547389aafc89a5245ced, "");
    class_282d613855865c408950cce436839a1f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}