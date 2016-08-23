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
    bool  (*method_pointer_3a8a9a40c089512490252b660ac47d38)(class ::clang::Type  const *) = ::clang::ObjCObjectPointerType::classof;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_92327d4d5cfb50419e7349791ff6e3ff)() const = &::clang::ObjCObjectPointerType::desugar;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectPointerType::*method_pointer_0b29c162c8d1571d8bd7ae0cced408a9)() const = &::clang::ObjCObjectPointerType::getInterfaceDecl;
    class ::clang::ObjCInterfaceType  const * (::clang::ObjCObjectPointerType::*method_pointer_521d2f7a70355465b2f919095b8238ca)() const = &::clang::ObjCObjectPointerType::getInterfaceType;
    unsigned int  (::clang::ObjCObjectPointerType::*method_pointer_12f1c008531b558db1f3085da2fb390f)() const = &::clang::ObjCObjectPointerType::getNumProtocols;
    class ::clang::ObjCObjectType  const * (::clang::ObjCObjectPointerType::*method_pointer_a27baa48d31e5a09a9146f4451b17a36)() const = &::clang::ObjCObjectPointerType::getObjectType;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_86fefc261765586cbf03967b30b9742d)() const = &::clang::ObjCObjectPointerType::getPointeeType;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectPointerType::*method_pointer_ca3cc981373e5f4eb2fb14d9e5baca5a)(unsigned int ) const = &::clang::ObjCObjectPointerType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_7324fdaf95935517ae4134e4d0ce6c07)() const = &::clang::ObjCObjectPointerType::getSuperClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_0f0c23b27f435408908e52b9cebbf35b)() const = &::clang::ObjCObjectPointerType::isKindOfType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_d8951d96ea06536f9cc31f5d454d0dc7)() const = &::clang::ObjCObjectPointerType::isObjCClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_6bc34b9fd953597186e28d256919f800)() const = &::clang::ObjCObjectPointerType::isObjCIdOrClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_96d012623a75502981d08ed45a8d83d6)() const = &::clang::ObjCObjectPointerType::isObjCIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_2d95ed7d85c853d4aea5c2b1192aff3b)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_2be655a1178b5ef0bc00a866197a41e5)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_37a4c0b60b615a109cc31a97d90f46c0)() const = &::clang::ObjCObjectPointerType::isSpecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_0160b141a61254f3bf3e245af4f42b47)() const = &::clang::ObjCObjectPointerType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_23f5ee41b48d5b71b29956887f5cd052)() const = &::clang::ObjCObjectPointerType::isSugared;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_006612d55b5251529eea1affa201b977)() const = &::clang::ObjCObjectPointerType::isUnspecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_56bd6b5cde4d50189666480f456bc469)() const = &::clang::ObjCObjectPointerType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_9b19918a7d995840b4bf0b4ebe6ff509)() const = &::clang::ObjCObjectPointerType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectPointerType, autowig::HeldType< class ::clang::ObjCObjectPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_282d613855865c408950cce436839a1f("ObjCObjectPointerType", "", boost::python::no_init);
    class_282d613855865c408950cce436839a1f.def("classof", method_pointer_3a8a9a40c089512490252b660ac47d38, "");
    class_282d613855865c408950cce436839a1f.def("desugar", method_pointer_92327d4d5cfb50419e7349791ff6e3ff, "");
    class_282d613855865c408950cce436839a1f.def("get_interface_decl", method_pointer_0b29c162c8d1571d8bd7ae0cced408a9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_interface_type", method_pointer_521d2f7a70355465b2f919095b8238ca, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_num_protocols", method_pointer_12f1c008531b558db1f3085da2fb390f, "");
    class_282d613855865c408950cce436839a1f.def("get_object_type", method_pointer_a27baa48d31e5a09a9146f4451b17a36, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_pointee_type", method_pointer_86fefc261765586cbf03967b30b9742d, "");
    class_282d613855865c408950cce436839a1f.def("get_protocol", method_pointer_ca3cc981373e5f4eb2fb14d9e5baca5a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_super_class_type", method_pointer_7324fdaf95935517ae4134e4d0ce6c07, "");
    class_282d613855865c408950cce436839a1f.def("is_kind_of_type", method_pointer_0f0c23b27f435408908e52b9cebbf35b, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_class_type", method_pointer_d8951d96ea06536f9cc31f5d454d0dc7, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_or_class_type", method_pointer_6bc34b9fd953597186e28d256919f800, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_type", method_pointer_96d012623a75502981d08ed45a8d83d6, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_class_type", method_pointer_2d95ed7d85c853d4aea5c2b1192aff3b, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_id_type", method_pointer_2be655a1178b5ef0bc00a866197a41e5, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized", method_pointer_37a4c0b60b615a109cc31a97d90f46c0, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized_as_written", method_pointer_0160b141a61254f3bf3e245af4f42b47, "");
    class_282d613855865c408950cce436839a1f.def("is_sugared", method_pointer_23f5ee41b48d5b71b29956887f5cd052, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized", method_pointer_006612d55b5251529eea1affa201b977, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized_as_written", method_pointer_56bd6b5cde4d50189666480f456bc469, "");
    class_282d613855865c408950cce436839a1f.def("qual_empty", method_pointer_9b19918a7d995840b4bf0b4ebe6ff509, "");
    class_282d613855865c408950cce436839a1f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}