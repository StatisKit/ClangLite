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
    bool  (*method_pointer_bd7ca3510c155f5c8e77a497cbf8cb1a)(class ::clang::Type  const *) = ::clang::ObjCObjectPointerType::classof;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_2651a7559f9e5f88beeb51d1ca5169e4)() const = &::clang::ObjCObjectPointerType::desugar;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectPointerType::*method_pointer_7ad47bbec8565480a69344a30ab850fa)() const = &::clang::ObjCObjectPointerType::getInterfaceDecl;
    class ::clang::ObjCInterfaceType  const * (::clang::ObjCObjectPointerType::*method_pointer_e2dbef99761850f99f6bbd38e883ab7a)() const = &::clang::ObjCObjectPointerType::getInterfaceType;
    unsigned int  (::clang::ObjCObjectPointerType::*method_pointer_b004458791cc5cf2b9cc40f70f2d2044)() const = &::clang::ObjCObjectPointerType::getNumProtocols;
    class ::clang::ObjCObjectType  const * (::clang::ObjCObjectPointerType::*method_pointer_8cc74725abb55848963396edd6972406)() const = &::clang::ObjCObjectPointerType::getObjectType;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_0771343d292d5c5dba31b24bfbe433d8)() const = &::clang::ObjCObjectPointerType::getPointeeType;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectPointerType::*method_pointer_12269b3a9b945484980e9730938bfc05)(unsigned int ) const = &::clang::ObjCObjectPointerType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_29e6d34338db57f2a27aaf018c164baf)() const = &::clang::ObjCObjectPointerType::getSuperClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_d9766d01696d56bfb1887f86e3608820)() const = &::clang::ObjCObjectPointerType::isKindOfType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_3dacbf467914505f9a251d54fcb08c35)() const = &::clang::ObjCObjectPointerType::isObjCClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_4edbcf3556245cf5b19ee0538ae3bf40)() const = &::clang::ObjCObjectPointerType::isObjCIdOrClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_972facc847295979b484dd733b11b1ac)() const = &::clang::ObjCObjectPointerType::isObjCIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_4c005776bace5408a8f44a9ccc9a346f)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_886a529073f358fe9dd77e2f0d008247)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_752f48eaaba6596294e2821e25ac9405)() const = &::clang::ObjCObjectPointerType::isSpecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_fc73363afa145205898e09ae5f5f4cb9)() const = &::clang::ObjCObjectPointerType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_b788d6aede805699953b15f50715a146)() const = &::clang::ObjCObjectPointerType::isSugared;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_ac1f1fdaf54c515cb6768ae5662c4a1d)() const = &::clang::ObjCObjectPointerType::isUnspecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_532967fa2dbf5be0893f4a42a03aa9ff)() const = &::clang::ObjCObjectPointerType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_207cd330f63a56d2bb54fe8ec4e7b8b4)() const = &::clang::ObjCObjectPointerType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectPointerType, autowig::HeldType< class ::clang::ObjCObjectPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_282d613855865c408950cce436839a1f("ObjCObjectPointerType", "", boost::python::no_init);
    class_282d613855865c408950cce436839a1f.def("classof", method_pointer_bd7ca3510c155f5c8e77a497cbf8cb1a, "");
    class_282d613855865c408950cce436839a1f.def("desugar", method_pointer_2651a7559f9e5f88beeb51d1ca5169e4, "");
    class_282d613855865c408950cce436839a1f.def("get_interface_decl", method_pointer_7ad47bbec8565480a69344a30ab850fa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_interface_type", method_pointer_e2dbef99761850f99f6bbd38e883ab7a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_num_protocols", method_pointer_b004458791cc5cf2b9cc40f70f2d2044, "");
    class_282d613855865c408950cce436839a1f.def("get_object_type", method_pointer_8cc74725abb55848963396edd6972406, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_pointee_type", method_pointer_0771343d292d5c5dba31b24bfbe433d8, "");
    class_282d613855865c408950cce436839a1f.def("get_protocol", method_pointer_12269b3a9b945484980e9730938bfc05, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_super_class_type", method_pointer_29e6d34338db57f2a27aaf018c164baf, "");
    class_282d613855865c408950cce436839a1f.def("is_kind_of_type", method_pointer_d9766d01696d56bfb1887f86e3608820, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_class_type", method_pointer_3dacbf467914505f9a251d54fcb08c35, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_or_class_type", method_pointer_4edbcf3556245cf5b19ee0538ae3bf40, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_type", method_pointer_972facc847295979b484dd733b11b1ac, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_class_type", method_pointer_4c005776bace5408a8f44a9ccc9a346f, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_id_type", method_pointer_886a529073f358fe9dd77e2f0d008247, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized", method_pointer_752f48eaaba6596294e2821e25ac9405, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized_as_written", method_pointer_fc73363afa145205898e09ae5f5f4cb9, "");
    class_282d613855865c408950cce436839a1f.def("is_sugared", method_pointer_b788d6aede805699953b15f50715a146, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized", method_pointer_ac1f1fdaf54c515cb6768ae5662c4a1d, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized_as_written", method_pointer_532967fa2dbf5be0893f4a42a03aa9ff, "");
    class_282d613855865c408950cce436839a1f.def("qual_empty", method_pointer_207cd330f63a56d2bb54fe8ec4e7b8b4, "");
    class_282d613855865c408950cce436839a1f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}