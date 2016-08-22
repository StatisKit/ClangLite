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
    bool  (*method_pointer_451a31fb2a3f5bb199bf51ca78e6e0fb)(class ::clang::Type  const *) = ::clang::ObjCObjectPointerType::classof;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectPointerType::*method_pointer_518c698a60215af2a8b28f6463fb2007)() const = &::clang::ObjCObjectPointerType::getInterfaceDecl;
    class ::clang::ObjCInterfaceType  const * (::clang::ObjCObjectPointerType::*method_pointer_18256f3f35435228922f15446f832c2b)() const = &::clang::ObjCObjectPointerType::getInterfaceType;
    unsigned int  (::clang::ObjCObjectPointerType::*method_pointer_d75d7da8da505f0f9c9f6499085971e0)() const = &::clang::ObjCObjectPointerType::getNumProtocols;
    class ::clang::ObjCObjectType  const * (::clang::ObjCObjectPointerType::*method_pointer_2eb46fbfb112574ab243b4e871c69a3d)() const = &::clang::ObjCObjectPointerType::getObjectType;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectPointerType::*method_pointer_bb171499e12553399bbf5c849bce386d)(unsigned int ) const = &::clang::ObjCObjectPointerType::getProtocol;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_3863f53f1934551597470bc2e6eb01cb)() const = &::clang::ObjCObjectPointerType::isKindOfType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_1e5be7dba365514ebd82a37d3322cb5c)() const = &::clang::ObjCObjectPointerType::isObjCClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_8367dc379bfc587cb1158e70bfdc48cf)() const = &::clang::ObjCObjectPointerType::isObjCIdOrClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_7becb056c55c51509530718127fcdf04)() const = &::clang::ObjCObjectPointerType::isObjCIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_f3ef9576255b5a0eac67b895bedec017)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_79a30f0ea7095f9da74f6f61adbf1065)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_6bababd5f5f3553299110868d37f3b65)() const = &::clang::ObjCObjectPointerType::isSpecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_b26640b8b0b3505288545875145a9588)() const = &::clang::ObjCObjectPointerType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_ec285082820b517fa7685052fd54819c)() const = &::clang::ObjCObjectPointerType::isSugared;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_23a120d70c2e54e2befa650ca2d75323)() const = &::clang::ObjCObjectPointerType::isUnspecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_868bb3e3fc7354e58158bd63ace30bb8)() const = &::clang::ObjCObjectPointerType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_5e25d0804c6b577f953ca45ea9f9983c)() const = &::clang::ObjCObjectPointerType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectPointerType, autowig::HeldType< class ::clang::ObjCObjectPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_282d613855865c408950cce436839a1f("ObjCObjectPointerType", "", boost::python::no_init);
    class_282d613855865c408950cce436839a1f.def("classof", method_pointer_451a31fb2a3f5bb199bf51ca78e6e0fb, "");
    class_282d613855865c408950cce436839a1f.def("get_interface_decl", method_pointer_518c698a60215af2a8b28f6463fb2007, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_interface_type", method_pointer_18256f3f35435228922f15446f832c2b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_num_protocols", method_pointer_d75d7da8da505f0f9c9f6499085971e0, "");
    class_282d613855865c408950cce436839a1f.def("get_object_type", method_pointer_2eb46fbfb112574ab243b4e871c69a3d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_protocol", method_pointer_bb171499e12553399bbf5c849bce386d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("is_kind_of_type", method_pointer_3863f53f1934551597470bc2e6eb01cb, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_class_type", method_pointer_1e5be7dba365514ebd82a37d3322cb5c, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_or_class_type", method_pointer_8367dc379bfc587cb1158e70bfdc48cf, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_type", method_pointer_7becb056c55c51509530718127fcdf04, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_class_type", method_pointer_f3ef9576255b5a0eac67b895bedec017, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_id_type", method_pointer_79a30f0ea7095f9da74f6f61adbf1065, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized", method_pointer_6bababd5f5f3553299110868d37f3b65, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized_as_written", method_pointer_b26640b8b0b3505288545875145a9588, "");
    class_282d613855865c408950cce436839a1f.def("is_sugared", method_pointer_ec285082820b517fa7685052fd54819c, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized", method_pointer_23a120d70c2e54e2befa650ca2d75323, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized_as_written", method_pointer_868bb3e3fc7354e58158bd63ace30bb8, "");
    class_282d613855865c408950cce436839a1f.def("qual_empty", method_pointer_5e25d0804c6b577f953ca45ea9f9983c, "");
    class_282d613855865c408950cce436839a1f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}