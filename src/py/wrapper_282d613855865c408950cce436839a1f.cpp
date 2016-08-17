#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_282d613855865c408950cce436839a1f()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_b7909b082910575a99fc4722450a62ae)() const = &::clang::ObjCObjectPointerType::isObjCIdOrClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_d6c9b10da7ef506f97ad07f12ecb4158)() const = &::clang::ObjCObjectPointerType::isSpecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_b7e86f64f80a5e37a683c99bd4d51a49)() const = &::clang::ObjCObjectPointerType::isSugared;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_460c2ba9b6d65cb39c9296ccadd45e17)() const = &::clang::ObjCObjectPointerType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_b86f40a1f0c65676a54caedf2a7ab3e9)() const = &::clang::ObjCObjectPointerType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_d6816737e0395043bc3913d554d6a49f)() const = &::clang::ObjCObjectPointerType::isUnspecialized;
    unsigned int  (::clang::ObjCObjectPointerType::*method_pointer_b139f8e5b46f537087f5376c760a6557)() const = &::clang::ObjCObjectPointerType::getNumProtocols;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_dd79f885f4ff53a9a77924e3ab4f3fa3)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedIdType;
    bool  (*method_pointer_d77ef998672a5f3b80b5e44fedeaa3a5)(class ::clang::Type  const *) = ::clang::ObjCObjectPointerType::classof;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectPointerType::*method_pointer_9a77bf9994135f7eaed269b12544983f)() const = &::clang::ObjCObjectPointerType::getInterfaceDecl;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_abaf26d1c12056e2a806afe728bea6a0)() const = &::clang::ObjCObjectPointerType::isObjCIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_22334e6f797f5e5aad4bdeeb17ae82c6)() const = &::clang::ObjCObjectPointerType::qual_empty;
    class ::clang::ObjCInterfaceType  const * (::clang::ObjCObjectPointerType::*method_pointer_a49c079d03ac5b30afc7801ec617f274)() const = &::clang::ObjCObjectPointerType::getInterfaceType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_f09a154452a75d058d49398d39da2c79)() const = &::clang::ObjCObjectPointerType::isObjCClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_58a8766325d65f81babac3759b04f2e8)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedClassType;
    class ::clang::ObjCObjectType  const * (::clang::ObjCObjectPointerType::*method_pointer_6410069b778b504aaed1c5937ae78727)() const = &::clang::ObjCObjectPointerType::getObjectType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_f7b54b424aec5181ac7aee611a36dc67)() const = &::clang::ObjCObjectPointerType::isKindOfType;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectPointerType::*method_pointer_ce78ec7dd1845a89a11eddcc6cc4f107)(unsigned int ) const = &::clang::ObjCObjectPointerType::getProtocol;
    boost::python::class_< class ::clang::ObjCObjectPointerType, autowig::HeldType< class ::clang::ObjCObjectPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_282d613855865c408950cce436839a1f("ObjCObjectPointerType", "", boost::python::no_init);
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_or_class_type", method_pointer_b7909b082910575a99fc4722450a62ae, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized", method_pointer_d6c9b10da7ef506f97ad07f12ecb4158, "");
    class_282d613855865c408950cce436839a1f.def("is_sugared", method_pointer_b7e86f64f80a5e37a683c99bd4d51a49, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized_as_written", method_pointer_460c2ba9b6d65cb39c9296ccadd45e17, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized_as_written", method_pointer_b86f40a1f0c65676a54caedf2a7ab3e9, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized", method_pointer_d6816737e0395043bc3913d554d6a49f, "");
    class_282d613855865c408950cce436839a1f.def("get_num_protocols", method_pointer_b139f8e5b46f537087f5376c760a6557, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_id_type", method_pointer_dd79f885f4ff53a9a77924e3ab4f3fa3, "");
    class_282d613855865c408950cce436839a1f.def("classof", method_pointer_d77ef998672a5f3b80b5e44fedeaa3a5, "");
    class_282d613855865c408950cce436839a1f.def("get_interface_decl", method_pointer_9a77bf9994135f7eaed269b12544983f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_type", method_pointer_abaf26d1c12056e2a806afe728bea6a0, "");
    class_282d613855865c408950cce436839a1f.def("qual_empty", method_pointer_22334e6f797f5e5aad4bdeeb17ae82c6, "");
    class_282d613855865c408950cce436839a1f.def("get_interface_type", method_pointer_a49c079d03ac5b30afc7801ec617f274, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_class_type", method_pointer_f09a154452a75d058d49398d39da2c79, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_class_type", method_pointer_58a8766325d65f81babac3759b04f2e8, "");
    class_282d613855865c408950cce436839a1f.def("get_object_type", method_pointer_6410069b778b504aaed1c5937ae78727, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("is_kind_of_type", method_pointer_f7b54b424aec5181ac7aee611a36dc67, "");
    class_282d613855865c408950cce436839a1f.def("get_protocol", method_pointer_ce78ec7dd1845a89a11eddcc6cc4f107, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}