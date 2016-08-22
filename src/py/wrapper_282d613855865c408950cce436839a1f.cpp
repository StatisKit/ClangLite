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
    bool  (*method_pointer_cc31a05cdcaf50f78f1476475211b879)(class ::clang::Type  const *) = ::clang::ObjCObjectPointerType::classof;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectPointerType::*method_pointer_55f9a7920c2b5d398247edbc0c996357)() const = &::clang::ObjCObjectPointerType::getInterfaceDecl;
    class ::clang::ObjCInterfaceType  const * (::clang::ObjCObjectPointerType::*method_pointer_6b4460b7c8d05a5b8be571c2a6d7294d)() const = &::clang::ObjCObjectPointerType::getInterfaceType;
    unsigned int  (::clang::ObjCObjectPointerType::*method_pointer_e6ecedfba58356a48868ae778896adb9)() const = &::clang::ObjCObjectPointerType::getNumProtocols;
    class ::clang::ObjCObjectType  const * (::clang::ObjCObjectPointerType::*method_pointer_c3e7c76f61e8549ea3863f04c4379442)() const = &::clang::ObjCObjectPointerType::getObjectType;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectPointerType::*method_pointer_03dcafcb8d535505b953fcf6a0ba348a)(unsigned int ) const = &::clang::ObjCObjectPointerType::getProtocol;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_556daf7b5b105d008230a7446f948e10)() const = &::clang::ObjCObjectPointerType::isKindOfType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_5b868106105651cbb7799b98af808306)() const = &::clang::ObjCObjectPointerType::isObjCClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_a98861e30ad258919dcd11e8b9f60e60)() const = &::clang::ObjCObjectPointerType::isObjCIdOrClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_90c812acb12158a8b9addd5d7f694846)() const = &::clang::ObjCObjectPointerType::isObjCIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_e9a1e216c9b05f958e2518d75ffc1c50)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_5c2093f5301754aaaf1dde2b0562a6d9)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_f36313954b765a3e81d27bdffbeb5a87)() const = &::clang::ObjCObjectPointerType::isSpecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_b67bd8889a165ccd8cf852a6c4585e32)() const = &::clang::ObjCObjectPointerType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_0e745310cf4e52a094534d7fc2371fe9)() const = &::clang::ObjCObjectPointerType::isSugared;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_4b39bfcccdcd51798ce3078a9f85fab9)() const = &::clang::ObjCObjectPointerType::isUnspecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_1c722c771bec5b68917e4b8969024f75)() const = &::clang::ObjCObjectPointerType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_9875dfd2ea02519484af3bca16cde961)() const = &::clang::ObjCObjectPointerType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectPointerType, autowig::HeldType< class ::clang::ObjCObjectPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_282d613855865c408950cce436839a1f("ObjCObjectPointerType", "", boost::python::no_init);
    class_282d613855865c408950cce436839a1f.def("classof", method_pointer_cc31a05cdcaf50f78f1476475211b879, "");
    class_282d613855865c408950cce436839a1f.def("get_interface_decl", method_pointer_55f9a7920c2b5d398247edbc0c996357, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_interface_type", method_pointer_6b4460b7c8d05a5b8be571c2a6d7294d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_num_protocols", method_pointer_e6ecedfba58356a48868ae778896adb9, "");
    class_282d613855865c408950cce436839a1f.def("get_object_type", method_pointer_c3e7c76f61e8549ea3863f04c4379442, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_protocol", method_pointer_03dcafcb8d535505b953fcf6a0ba348a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("is_kind_of_type", method_pointer_556daf7b5b105d008230a7446f948e10, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_class_type", method_pointer_5b868106105651cbb7799b98af808306, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_or_class_type", method_pointer_a98861e30ad258919dcd11e8b9f60e60, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_type", method_pointer_90c812acb12158a8b9addd5d7f694846, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_class_type", method_pointer_e9a1e216c9b05f958e2518d75ffc1c50, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_id_type", method_pointer_5c2093f5301754aaaf1dde2b0562a6d9, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized", method_pointer_f36313954b765a3e81d27bdffbeb5a87, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized_as_written", method_pointer_b67bd8889a165ccd8cf852a6c4585e32, "");
    class_282d613855865c408950cce436839a1f.def("is_sugared", method_pointer_0e745310cf4e52a094534d7fc2371fe9, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized", method_pointer_4b39bfcccdcd51798ce3078a9f85fab9, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized_as_written", method_pointer_1c722c771bec5b68917e4b8969024f75, "");
    class_282d613855865c408950cce436839a1f.def("qual_empty", method_pointer_9875dfd2ea02519484af3bca16cde961, "");
    class_282d613855865c408950cce436839a1f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}