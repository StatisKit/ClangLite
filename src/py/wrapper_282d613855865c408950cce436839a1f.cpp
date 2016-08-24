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
    bool  (*method_pointer_f40c62a72ad053479efeeb82ab6c5d4e)(class ::clang::Type  const *) = ::clang::ObjCObjectPointerType::classof;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_de13b47964555ccaa7ee907fe035f368)() const = &::clang::ObjCObjectPointerType::desugar;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectPointerType::*method_pointer_d77e6e737da85795be8810f0ea6c7d85)() const = &::clang::ObjCObjectPointerType::getInterfaceDecl;
    class ::clang::ObjCInterfaceType  const * (::clang::ObjCObjectPointerType::*method_pointer_a9149771eb9b5f9d83c9c48cf48834ae)() const = &::clang::ObjCObjectPointerType::getInterfaceType;
    unsigned int  (::clang::ObjCObjectPointerType::*method_pointer_5db807a11560529088cfbeb9eccda481)() const = &::clang::ObjCObjectPointerType::getNumProtocols;
    class ::clang::ObjCObjectType  const * (::clang::ObjCObjectPointerType::*method_pointer_413b40caca8354b9a85cefdf087cef04)() const = &::clang::ObjCObjectPointerType::getObjectType;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_3b55dc3242ef595b999a7988f2b4066d)() const = &::clang::ObjCObjectPointerType::getPointeeType;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectPointerType::*method_pointer_f8133c2c79f35cea8ff6fc8fb228302f)(unsigned int ) const = &::clang::ObjCObjectPointerType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_60a1eb069ccc58eb946e47b7c36e84f1)() const = &::clang::ObjCObjectPointerType::getSuperClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_84600523f6e3513da2835ca6c5c65237)() const = &::clang::ObjCObjectPointerType::isKindOfType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_c5f9515479a25c06a8f9ad976c306012)() const = &::clang::ObjCObjectPointerType::isObjCClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_a7dbdfb44adc594ca836ee4e2d577fea)() const = &::clang::ObjCObjectPointerType::isObjCIdOrClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_d686d3c9e99553e6bf40a2cc75f25240)() const = &::clang::ObjCObjectPointerType::isObjCIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_5ec62dae13e05b94ae0a1861afa70205)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_0623bdcb3f1750f7a84c7ecc0bcafe73)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_27bd9b72edb65a3292d1959f4244ef4b)() const = &::clang::ObjCObjectPointerType::isSpecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_66cdcb916ebc5bdc84f75d8a1c865b79)() const = &::clang::ObjCObjectPointerType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_f616c749ed8a50bb9009ded4ef9fddb7)() const = &::clang::ObjCObjectPointerType::isSugared;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_5d792187e6ba541d8a6fc37ffb9c0678)() const = &::clang::ObjCObjectPointerType::isUnspecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_6e773c88133855618c16dba1764989a0)() const = &::clang::ObjCObjectPointerType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_ba1d0eec4519523994c6b17c2687e2c2)() const = &::clang::ObjCObjectPointerType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectPointerType, autowig::HeldType< class ::clang::ObjCObjectPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_282d613855865c408950cce436839a1f("ObjCObjectPointerType", "", boost::python::no_init);
    class_282d613855865c408950cce436839a1f.def("classof", method_pointer_f40c62a72ad053479efeeb82ab6c5d4e, "");
    class_282d613855865c408950cce436839a1f.def("desugar", method_pointer_de13b47964555ccaa7ee907fe035f368, "");
    class_282d613855865c408950cce436839a1f.def("get_interface_decl", method_pointer_d77e6e737da85795be8810f0ea6c7d85, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_interface_type", method_pointer_a9149771eb9b5f9d83c9c48cf48834ae, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_num_protocols", method_pointer_5db807a11560529088cfbeb9eccda481, "");
    class_282d613855865c408950cce436839a1f.def("get_object_type", method_pointer_413b40caca8354b9a85cefdf087cef04, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_pointee_type", method_pointer_3b55dc3242ef595b999a7988f2b4066d, "");
    class_282d613855865c408950cce436839a1f.def("get_protocol", method_pointer_f8133c2c79f35cea8ff6fc8fb228302f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_super_class_type", method_pointer_60a1eb069ccc58eb946e47b7c36e84f1, "");
    class_282d613855865c408950cce436839a1f.def("is_kind_of_type", method_pointer_84600523f6e3513da2835ca6c5c65237, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_class_type", method_pointer_c5f9515479a25c06a8f9ad976c306012, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_or_class_type", method_pointer_a7dbdfb44adc594ca836ee4e2d577fea, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_type", method_pointer_d686d3c9e99553e6bf40a2cc75f25240, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_class_type", method_pointer_5ec62dae13e05b94ae0a1861afa70205, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_id_type", method_pointer_0623bdcb3f1750f7a84c7ecc0bcafe73, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized", method_pointer_27bd9b72edb65a3292d1959f4244ef4b, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized_as_written", method_pointer_66cdcb916ebc5bdc84f75d8a1c865b79, "");
    class_282d613855865c408950cce436839a1f.def("is_sugared", method_pointer_f616c749ed8a50bb9009ded4ef9fddb7, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized", method_pointer_5d792187e6ba541d8a6fc37ffb9c0678, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized_as_written", method_pointer_6e773c88133855618c16dba1764989a0, "");
    class_282d613855865c408950cce436839a1f.def("qual_empty", method_pointer_ba1d0eec4519523994c6b17c2687e2c2, "");
    class_282d613855865c408950cce436839a1f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}