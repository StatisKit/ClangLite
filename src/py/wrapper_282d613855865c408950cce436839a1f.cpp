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
    bool  (*method_pointer_b12c6f20a4795285aa7d31c71865b9b3)(class ::clang::Type  const *) = ::clang::ObjCObjectPointerType::classof;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectPointerType::*method_pointer_a8e6295f85a9538f8fe267a553be9ad1)() const = &::clang::ObjCObjectPointerType::getInterfaceDecl;
    class ::clang::ObjCInterfaceType  const * (::clang::ObjCObjectPointerType::*method_pointer_439fe88053af55f591cf91b44223e050)() const = &::clang::ObjCObjectPointerType::getInterfaceType;
    unsigned int  (::clang::ObjCObjectPointerType::*method_pointer_7192528630b85d87a52f1120b3378d9e)() const = &::clang::ObjCObjectPointerType::getNumProtocols;
    class ::clang::ObjCObjectType  const * (::clang::ObjCObjectPointerType::*method_pointer_6eee15f4e71559668b25ee89044b2c15)() const = &::clang::ObjCObjectPointerType::getObjectType;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectPointerType::*method_pointer_0fd86592dc5c58859228b1e46f2cef47)(unsigned int ) const = &::clang::ObjCObjectPointerType::getProtocol;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_24488d8e07e4597cb75a38e0473321c2)() const = &::clang::ObjCObjectPointerType::isKindOfType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_fffa508d86b25cc49126ed138d315945)() const = &::clang::ObjCObjectPointerType::isObjCClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_36f26ab63dd05845b1d37d693ac9c744)() const = &::clang::ObjCObjectPointerType::isObjCIdOrClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_46113864d255563ba7e4cb638ea1bbe9)() const = &::clang::ObjCObjectPointerType::isObjCIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_8c28db4c6c0d5898818c7b8075a00ad9)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_0d4d1c2ec95c5e7e9a8757ae77454add)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_471e242cc21f52cd9e751d6ba8be94d0)() const = &::clang::ObjCObjectPointerType::isSpecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_bbd1eb56a7f655dfa943303cc7e07617)() const = &::clang::ObjCObjectPointerType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_0b2c0b18986b52088ac48513dde45091)() const = &::clang::ObjCObjectPointerType::isSugared;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_90c21b6c65215d0784b5d00cc4e15121)() const = &::clang::ObjCObjectPointerType::isUnspecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_0638e5df8f615d0ea34868e15aa005a5)() const = &::clang::ObjCObjectPointerType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_5a22c0fde102569d818b94ce4cd0143d)() const = &::clang::ObjCObjectPointerType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectPointerType, autowig::HeldType< class ::clang::ObjCObjectPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_282d613855865c408950cce436839a1f("ObjCObjectPointerType", "", boost::python::no_init);
    class_282d613855865c408950cce436839a1f.def("classof", method_pointer_b12c6f20a4795285aa7d31c71865b9b3, "");
    class_282d613855865c408950cce436839a1f.def("get_interface_decl", method_pointer_a8e6295f85a9538f8fe267a553be9ad1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_interface_type", method_pointer_439fe88053af55f591cf91b44223e050, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_num_protocols", method_pointer_7192528630b85d87a52f1120b3378d9e, "");
    class_282d613855865c408950cce436839a1f.def("get_object_type", method_pointer_6eee15f4e71559668b25ee89044b2c15, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_protocol", method_pointer_0fd86592dc5c58859228b1e46f2cef47, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("is_kind_of_type", method_pointer_24488d8e07e4597cb75a38e0473321c2, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_class_type", method_pointer_fffa508d86b25cc49126ed138d315945, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_or_class_type", method_pointer_36f26ab63dd05845b1d37d693ac9c744, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_type", method_pointer_46113864d255563ba7e4cb638ea1bbe9, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_class_type", method_pointer_8c28db4c6c0d5898818c7b8075a00ad9, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_id_type", method_pointer_0d4d1c2ec95c5e7e9a8757ae77454add, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized", method_pointer_471e242cc21f52cd9e751d6ba8be94d0, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized_as_written", method_pointer_bbd1eb56a7f655dfa943303cc7e07617, "");
    class_282d613855865c408950cce436839a1f.def("is_sugared", method_pointer_0b2c0b18986b52088ac48513dde45091, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized", method_pointer_90c21b6c65215d0784b5d00cc4e15121, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized_as_written", method_pointer_0638e5df8f615d0ea34868e15aa005a5, "");
    class_282d613855865c408950cce436839a1f.def("qual_empty", method_pointer_5a22c0fde102569d818b94ce4cd0143d, "");
    class_282d613855865c408950cce436839a1f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}