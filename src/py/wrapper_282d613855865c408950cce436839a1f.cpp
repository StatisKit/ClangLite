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
    bool  (*method_pointer_3ab13e38f88a5e6bbebede572a4ade17)(class ::clang::Type  const *) = ::clang::ObjCObjectPointerType::classof;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_b5a1a8239ec65b478d5a996269ce3132)() const = &::clang::ObjCObjectPointerType::desugar;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectPointerType::*method_pointer_cadb859e912a5f5c96296d152373b19d)() const = &::clang::ObjCObjectPointerType::getInterfaceDecl;
    class ::clang::ObjCInterfaceType  const * (::clang::ObjCObjectPointerType::*method_pointer_37abddd39a765b8d9dadd9659cc525b0)() const = &::clang::ObjCObjectPointerType::getInterfaceType;
    unsigned int  (::clang::ObjCObjectPointerType::*method_pointer_45b445e7792654339851a45dfcfc1dbf)() const = &::clang::ObjCObjectPointerType::getNumProtocols;
    class ::clang::ObjCObjectType  const * (::clang::ObjCObjectPointerType::*method_pointer_4547c60d5be15df19864e5946720efa3)() const = &::clang::ObjCObjectPointerType::getObjectType;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_c616dd60f5cc5edea2b013db1a065d6f)() const = &::clang::ObjCObjectPointerType::getPointeeType;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectPointerType::*method_pointer_57715eb8f5725f14a03658cc5057f645)(unsigned int ) const = &::clang::ObjCObjectPointerType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_76b4980ee6eb5023ab492b84857d4e6e)() const = &::clang::ObjCObjectPointerType::getSuperClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_4b18eef31d9c5a13a981631f379c9958)() const = &::clang::ObjCObjectPointerType::isKindOfType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_84149c391bba5d36a2748c41d017f596)() const = &::clang::ObjCObjectPointerType::isObjCClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_21de698a7a8a5fe6b3f8a654c7e946ee)() const = &::clang::ObjCObjectPointerType::isObjCIdOrClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_dc2210fb8dda53e38d3c349fa355359f)() const = &::clang::ObjCObjectPointerType::isObjCIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_5ccfbe413587501cbc075cf03776c8ca)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_41473aec2cc65db094c51a0ac893d882)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_7705ce7276fc5bc3b766693fa6bd1713)() const = &::clang::ObjCObjectPointerType::isSpecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_666a4b88a8ac56eea0bae319033b533b)() const = &::clang::ObjCObjectPointerType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_b61c6d186eb65e9195079a5f3cc693e5)() const = &::clang::ObjCObjectPointerType::isSugared;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_201777846c7a55dcacf0676dfd4cb72f)() const = &::clang::ObjCObjectPointerType::isUnspecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_80423d5d2ced562dab6061c8b9130d55)() const = &::clang::ObjCObjectPointerType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_ba6ce67cc94b55d69ce5b9ce8cb4af84)() const = &::clang::ObjCObjectPointerType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectPointerType, autowig::HeldType< class ::clang::ObjCObjectPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_282d613855865c408950cce436839a1f("ObjCObjectPointerType", "", boost::python::no_init);
    class_282d613855865c408950cce436839a1f.def("classof", method_pointer_3ab13e38f88a5e6bbebede572a4ade17, "");
    class_282d613855865c408950cce436839a1f.def("desugar", method_pointer_b5a1a8239ec65b478d5a996269ce3132, "");
    class_282d613855865c408950cce436839a1f.def("get_interface_decl", method_pointer_cadb859e912a5f5c96296d152373b19d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_interface_type", method_pointer_37abddd39a765b8d9dadd9659cc525b0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_num_protocols", method_pointer_45b445e7792654339851a45dfcfc1dbf, "");
    class_282d613855865c408950cce436839a1f.def("get_object_type", method_pointer_4547c60d5be15df19864e5946720efa3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_pointee_type", method_pointer_c616dd60f5cc5edea2b013db1a065d6f, "");
    class_282d613855865c408950cce436839a1f.def("get_protocol", method_pointer_57715eb8f5725f14a03658cc5057f645, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_super_class_type", method_pointer_76b4980ee6eb5023ab492b84857d4e6e, "");
    class_282d613855865c408950cce436839a1f.def("is_kind_of_type", method_pointer_4b18eef31d9c5a13a981631f379c9958, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_class_type", method_pointer_84149c391bba5d36a2748c41d017f596, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_or_class_type", method_pointer_21de698a7a8a5fe6b3f8a654c7e946ee, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_type", method_pointer_dc2210fb8dda53e38d3c349fa355359f, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_class_type", method_pointer_5ccfbe413587501cbc075cf03776c8ca, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_id_type", method_pointer_41473aec2cc65db094c51a0ac893d882, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized", method_pointer_7705ce7276fc5bc3b766693fa6bd1713, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized_as_written", method_pointer_666a4b88a8ac56eea0bae319033b533b, "");
    class_282d613855865c408950cce436839a1f.def("is_sugared", method_pointer_b61c6d186eb65e9195079a5f3cc693e5, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized", method_pointer_201777846c7a55dcacf0676dfd4cb72f, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized_as_written", method_pointer_80423d5d2ced562dab6061c8b9130d55, "");
    class_282d613855865c408950cce436839a1f.def("qual_empty", method_pointer_ba6ce67cc94b55d69ce5b9ce8cb4af84, "");
    class_282d613855865c408950cce436839a1f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}