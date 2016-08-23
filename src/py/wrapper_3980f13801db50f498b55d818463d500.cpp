#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_3980f13801db50f498b55d818463d500()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_94f8f61a02d45f949f247d08b88c4815)(class ::clang::Type  const *) = ::clang::ObjCObjectType::classof;
    unsigned int  (::clang::ObjCObjectType::*method_pointer_0b72f5192037592db657966adfa4bd19)() const = &::clang::ObjCObjectType::getNumProtocols;
    bool  (::clang::ObjCObjectType::*method_pointer_8be71f3727005f9a89419ce586af04db)() const = &::clang::ObjCObjectType::isKindOfType;
    bool  (::clang::ObjCObjectType::*method_pointer_4aeaa06dc6c45dc390ca647677c5a303)() const = &::clang::ObjCObjectType::isKindOfTypeAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_4f19717f240556468b84dbe72172a519)() const = &::clang::ObjCObjectType::isObjCClass;
    bool  (::clang::ObjCObjectType::*method_pointer_b42bfd9762ce5c36ac3cac998fed13e8)() const = &::clang::ObjCObjectType::isObjCId;
    bool  (::clang::ObjCObjectType::*method_pointer_85ab29ebdc2c5edfbdd15f8a55bda077)() const = &::clang::ObjCObjectType::isObjCQualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_3e332399dcfa5fcf9e220a2cbc5b4bfc)() const = &::clang::ObjCObjectType::isObjCQualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_cdcb4ec671215d45969df5ca98610731)() const = &::clang::ObjCObjectType::isObjCUnqualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_aee59e0d273651b1b5c56857ca9a2d27)() const = &::clang::ObjCObjectType::isObjCUnqualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_0246fb7d9bb45a1986a482f5d676eea1)() const = &::clang::ObjCObjectType::isObjCUnqualifiedIdOrClass;
    bool  (::clang::ObjCObjectType::*method_pointer_b952de7873f25628984b7594c3af754d)() const = &::clang::ObjCObjectType::isSpecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_205c6a2732f055588e7c1d12bb8212a0)() const = &::clang::ObjCObjectType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_383178442f51576396c98a805ea8ef57)() const = &::clang::ObjCObjectType::isSugared;
    bool  (::clang::ObjCObjectType::*method_pointer_84c48e43ebd457708b1a386d36ba04b3)() const = &::clang::ObjCObjectType::isUnspecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_4791b4bb1bdb5c2c8d5d65337875a2d2)() const = &::clang::ObjCObjectType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_e0f04973ca825db98e87815e7abe074b)() const = &::clang::ObjCObjectType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectType, autowig::HeldType< class ::clang::ObjCObjectType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3980f13801db50f498b55d818463d500("ObjCObjectType", "", boost::python::no_init);
    class_3980f13801db50f498b55d818463d500.def("classof", method_pointer_94f8f61a02d45f949f247d08b88c4815, "");
    class_3980f13801db50f498b55d818463d500.def("get_num_protocols", method_pointer_0b72f5192037592db657966adfa4bd19, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type", method_pointer_8be71f3727005f9a89419ce586af04db, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type_as_written", method_pointer_4aeaa06dc6c45dc390ca647677c5a303, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_class", method_pointer_4f19717f240556468b84dbe72172a519, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_id", method_pointer_b42bfd9762ce5c36ac3cac998fed13e8, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_class", method_pointer_85ab29ebdc2c5edfbdd15f8a55bda077, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_id", method_pointer_3e332399dcfa5fcf9e220a2cbc5b4bfc, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_class", method_pointer_cdcb4ec671215d45969df5ca98610731, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id", method_pointer_aee59e0d273651b1b5c56857ca9a2d27, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id_or_class", method_pointer_0246fb7d9bb45a1986a482f5d676eea1, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized", method_pointer_b952de7873f25628984b7594c3af754d, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized_as_written", method_pointer_205c6a2732f055588e7c1d12bb8212a0, "");
    class_3980f13801db50f498b55d818463d500.def("is_sugared", method_pointer_383178442f51576396c98a805ea8ef57, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized", method_pointer_84c48e43ebd457708b1a386d36ba04b3, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized_as_written", method_pointer_4791b4bb1bdb5c2c8d5d65337875a2d2, "");
    class_3980f13801db50f498b55d818463d500.def("qual_empty", method_pointer_e0f04973ca825db98e87815e7abe074b, "");
    class_3980f13801db50f498b55d818463d500.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectType >, autowig::HeldType< class ::clang::Type > >();
    }

}