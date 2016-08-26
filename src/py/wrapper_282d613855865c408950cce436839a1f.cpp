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
    bool  (*method_pointer_cc3467518e3055ef97068f2f22186a38)(class ::clang::Type  const *) = ::clang::ObjCObjectPointerType::classof;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectPointerType::*method_pointer_51acb58cd8c65d8b80ae90a1d365b684)() const = &::clang::ObjCObjectPointerType::getInterfaceDecl;
    class ::clang::ObjCInterfaceType  const * (::clang::ObjCObjectPointerType::*method_pointer_739fe7ddbef05247a992bc0a79480601)() const = &::clang::ObjCObjectPointerType::getInterfaceType;
    unsigned int  (::clang::ObjCObjectPointerType::*method_pointer_cd1e82b1dd2951d48da6b4238303fed5)() const = &::clang::ObjCObjectPointerType::getNumProtocols;
    class ::clang::ObjCObjectType  const * (::clang::ObjCObjectPointerType::*method_pointer_140ebfec88e85dff8b90358ff2d22dd9)() const = &::clang::ObjCObjectPointerType::getObjectType;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectPointerType::*method_pointer_1e28006e9ac654439f2979e92461e1e7)(unsigned int ) const = &::clang::ObjCObjectPointerType::getProtocol;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_3e7561704bbf5ac098deebf7d3765255)() const = &::clang::ObjCObjectPointerType::isKindOfType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_e7e1444ba3e7584a828e32b4a50fdadc)() const = &::clang::ObjCObjectPointerType::isObjCClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_e95fb34c7f835360883907abb6151952)() const = &::clang::ObjCObjectPointerType::isObjCIdOrClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_6bb66f3bd7c75a21a9cffaba084d7634)() const = &::clang::ObjCObjectPointerType::isObjCIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_5cb5c249b5f251aba1d2e4a3e97a0e50)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_8b0ce2c4276d5a8aa9a9d55db2b3e005)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_d1fef2aa6df95350a7f68d6fe952434c)() const = &::clang::ObjCObjectPointerType::isSpecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_85814ab53a965b279d6a0a647bf74e8e)() const = &::clang::ObjCObjectPointerType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_97fafa39653654c48076ab6ea4242706)() const = &::clang::ObjCObjectPointerType::isSugared;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_898a7e53403751a1a1a0d92bffa277c2)() const = &::clang::ObjCObjectPointerType::isUnspecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_1544509b42ab5d6c8857e5a9d9c46878)() const = &::clang::ObjCObjectPointerType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_e67edf1a59d25f3db8372e9783eddc97)() const = &::clang::ObjCObjectPointerType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectPointerType, autowig::HeldType< class ::clang::ObjCObjectPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_282d613855865c408950cce436839a1f("ObjCObjectPointerType", "", boost::python::no_init);
    class_282d613855865c408950cce436839a1f.def("classof", method_pointer_cc3467518e3055ef97068f2f22186a38, "");
    class_282d613855865c408950cce436839a1f.def("get_interface_decl", method_pointer_51acb58cd8c65d8b80ae90a1d365b684, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_interface_type", method_pointer_739fe7ddbef05247a992bc0a79480601, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_num_protocols", method_pointer_cd1e82b1dd2951d48da6b4238303fed5, "");
    class_282d613855865c408950cce436839a1f.def("get_object_type", method_pointer_140ebfec88e85dff8b90358ff2d22dd9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_protocol", method_pointer_1e28006e9ac654439f2979e92461e1e7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("is_kind_of_type", method_pointer_3e7561704bbf5ac098deebf7d3765255, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_class_type", method_pointer_e7e1444ba3e7584a828e32b4a50fdadc, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_or_class_type", method_pointer_e95fb34c7f835360883907abb6151952, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_type", method_pointer_6bb66f3bd7c75a21a9cffaba084d7634, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_class_type", method_pointer_5cb5c249b5f251aba1d2e4a3e97a0e50, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_id_type", method_pointer_8b0ce2c4276d5a8aa9a9d55db2b3e005, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized", method_pointer_d1fef2aa6df95350a7f68d6fe952434c, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized_as_written", method_pointer_85814ab53a965b279d6a0a647bf74e8e, "");
    class_282d613855865c408950cce436839a1f.def("is_sugared", method_pointer_97fafa39653654c48076ab6ea4242706, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized", method_pointer_898a7e53403751a1a1a0d92bffa277c2, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized_as_written", method_pointer_1544509b42ab5d6c8857e5a9d9c46878, "");
    class_282d613855865c408950cce436839a1f.def("qual_empty", method_pointer_e67edf1a59d25f3db8372e9783eddc97, "");
    class_282d613855865c408950cce436839a1f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}