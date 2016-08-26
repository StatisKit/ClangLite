#include "_clanglite.h"


namespace autowig
{
}


void wrapper_282d613855865c408950cce436839a1f()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_77b6c060a20253ab9119473bb1ef4660)(class ::clang::Type  const *) = ::clang::ObjCObjectPointerType::classof;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectPointerType::*method_pointer_4cf37a5f0ab65b1cb11c88550293bdaf)() const = &::clang::ObjCObjectPointerType::getInterfaceDecl;
    class ::clang::ObjCInterfaceType  const * (::clang::ObjCObjectPointerType::*method_pointer_ee447f7b07255f089c9d89bcf517ea9f)() const = &::clang::ObjCObjectPointerType::getInterfaceType;
    unsigned int  (::clang::ObjCObjectPointerType::*method_pointer_0b7d31ac54f0518e9de2b84c5102995c)() const = &::clang::ObjCObjectPointerType::getNumProtocols;
    class ::clang::ObjCObjectType  const * (::clang::ObjCObjectPointerType::*method_pointer_7aa941969fef5b8194b24d33d7e0d468)() const = &::clang::ObjCObjectPointerType::getObjectType;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectPointerType::*method_pointer_9771e35d1cc0535daa154ce1ee523b43)(unsigned int ) const = &::clang::ObjCObjectPointerType::getProtocol;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_f42b5ec68713582c8e2a5f8133850d55)() const = &::clang::ObjCObjectPointerType::isKindOfType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_c1c916d574bb5574ac4429b1fbb9bcd8)() const = &::clang::ObjCObjectPointerType::isObjCClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_e3cb6333b1c0588c86ccd0016af0b6d2)() const = &::clang::ObjCObjectPointerType::isObjCIdOrClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_db45cd4154175655a723e5d2cde80ee0)() const = &::clang::ObjCObjectPointerType::isObjCIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_bd694ad761705b8780ca7c832fe82a0e)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_1285766fe9375fe198c204ee1208bb0c)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_7ccc827ce9085889ada4bae2ef1984a7)() const = &::clang::ObjCObjectPointerType::isSpecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_ef603909cf215941b65840d5f1c82f90)() const = &::clang::ObjCObjectPointerType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_55e5ef00bed6545d8927746740706944)() const = &::clang::ObjCObjectPointerType::isSugared;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_da954c043ab651779a4143ac347569ad)() const = &::clang::ObjCObjectPointerType::isUnspecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_24f09bd1eb055543856c2af1333b8dbd)() const = &::clang::ObjCObjectPointerType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_c5d2f94472fe584abea3c56d0ac24f19)() const = &::clang::ObjCObjectPointerType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectPointerType, autowig::HeldType< class ::clang::ObjCObjectPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_282d613855865c408950cce436839a1f("ObjCObjectPointerType", "", boost::python::no_init);
    class_282d613855865c408950cce436839a1f.def("classof", method_pointer_77b6c060a20253ab9119473bb1ef4660, "");
    class_282d613855865c408950cce436839a1f.def("get_interface_decl", method_pointer_4cf37a5f0ab65b1cb11c88550293bdaf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_interface_type", method_pointer_ee447f7b07255f089c9d89bcf517ea9f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_num_protocols", method_pointer_0b7d31ac54f0518e9de2b84c5102995c, "");
    class_282d613855865c408950cce436839a1f.def("get_object_type", method_pointer_7aa941969fef5b8194b24d33d7e0d468, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_protocol", method_pointer_9771e35d1cc0535daa154ce1ee523b43, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("is_kind_of_type", method_pointer_f42b5ec68713582c8e2a5f8133850d55, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_class_type", method_pointer_c1c916d574bb5574ac4429b1fbb9bcd8, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_or_class_type", method_pointer_e3cb6333b1c0588c86ccd0016af0b6d2, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_type", method_pointer_db45cd4154175655a723e5d2cde80ee0, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_class_type", method_pointer_bd694ad761705b8780ca7c832fe82a0e, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_id_type", method_pointer_1285766fe9375fe198c204ee1208bb0c, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized", method_pointer_7ccc827ce9085889ada4bae2ef1984a7, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized_as_written", method_pointer_ef603909cf215941b65840d5f1c82f90, "");
    class_282d613855865c408950cce436839a1f.def("is_sugared", method_pointer_55e5ef00bed6545d8927746740706944, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized", method_pointer_da954c043ab651779a4143ac347569ad, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized_as_written", method_pointer_24f09bd1eb055543856c2af1333b8dbd, "");
    class_282d613855865c408950cce436839a1f.def("qual_empty", method_pointer_c5d2f94472fe584abea3c56d0ac24f19, "");
    class_282d613855865c408950cce436839a1f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}