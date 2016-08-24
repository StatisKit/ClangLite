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
    bool  (*method_pointer_24396ae83026556b896016b942af1079)(class ::clang::Type  const *) = ::clang::ObjCObjectType::classof;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_9d053ca5a4355bca8a1813d2d220c661)() const = &::clang::ObjCObjectType::desugar;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_f6273825868154bd9097e28d08f50fcb)() const = &::clang::ObjCObjectType::getBaseType;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectType::*method_pointer_83ab462e636054339c547c733b7ca152)() const = &::clang::ObjCObjectType::getInterface;
    unsigned int  (::clang::ObjCObjectType::*method_pointer_8b8a3c7e15f15dc79c904d5c1942749e)() const = &::clang::ObjCObjectType::getNumProtocols;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectType::*method_pointer_7dc8a6a4092859838661caac989560cb)(unsigned int ) const = &::clang::ObjCObjectType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_30fdb4b10dc3587c96f9715425cab7f7)() const = &::clang::ObjCObjectType::getSuperClassType;
    bool  (::clang::ObjCObjectType::*method_pointer_74cf574569205daa90aed2ec71bf1a2d)() const = &::clang::ObjCObjectType::isKindOfType;
    bool  (::clang::ObjCObjectType::*method_pointer_733016ae3f7854e58f090ea6a86cce85)() const = &::clang::ObjCObjectType::isKindOfTypeAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_6bd8b9c7b62955fbb70bf53c77e7bc9a)() const = &::clang::ObjCObjectType::isObjCClass;
    bool  (::clang::ObjCObjectType::*method_pointer_9802c814b7175373af5090b2f9868b63)() const = &::clang::ObjCObjectType::isObjCId;
    bool  (::clang::ObjCObjectType::*method_pointer_325b720d691f5dd0a0d9ad382b0c5fcf)() const = &::clang::ObjCObjectType::isObjCQualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_fa49070c6f5f5ea0be99cd78eb2b6cf5)() const = &::clang::ObjCObjectType::isObjCQualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_17de38b47f925a9f8b68d3ee3c5bc6c8)() const = &::clang::ObjCObjectType::isObjCUnqualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_1fdd511acc22594da3039dc4d862506c)() const = &::clang::ObjCObjectType::isObjCUnqualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_ccd17f4796205a729c2c8eb9935742aa)() const = &::clang::ObjCObjectType::isObjCUnqualifiedIdOrClass;
    bool  (::clang::ObjCObjectType::*method_pointer_aee608ca6541523093f3bbb10272e9f1)() const = &::clang::ObjCObjectType::isSpecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_5c1e2f1db4e25262819b1f55db31e36b)() const = &::clang::ObjCObjectType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_09b8592373735551a6b96c9671f2d2bc)() const = &::clang::ObjCObjectType::isSugared;
    bool  (::clang::ObjCObjectType::*method_pointer_91ed31370a985648ba62003cb6e3cdb9)() const = &::clang::ObjCObjectType::isUnspecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_67473411c3d05e87959986828753027a)() const = &::clang::ObjCObjectType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_ccf1b18e716b5214bbca4b77563fedce)() const = &::clang::ObjCObjectType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectType, autowig::HeldType< class ::clang::ObjCObjectType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3980f13801db50f498b55d818463d500("ObjCObjectType", "", boost::python::no_init);
    class_3980f13801db50f498b55d818463d500.def("classof", method_pointer_24396ae83026556b896016b942af1079, "");
    class_3980f13801db50f498b55d818463d500.def("desugar", method_pointer_9d053ca5a4355bca8a1813d2d220c661, "");
    class_3980f13801db50f498b55d818463d500.def("get_base_type", method_pointer_f6273825868154bd9097e28d08f50fcb, "");
    class_3980f13801db50f498b55d818463d500.def("get_interface", method_pointer_83ab462e636054339c547c733b7ca152, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_num_protocols", method_pointer_8b8a3c7e15f15dc79c904d5c1942749e, "");
    class_3980f13801db50f498b55d818463d500.def("get_protocol", method_pointer_7dc8a6a4092859838661caac989560cb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_super_class_type", method_pointer_30fdb4b10dc3587c96f9715425cab7f7, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type", method_pointer_74cf574569205daa90aed2ec71bf1a2d, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type_as_written", method_pointer_733016ae3f7854e58f090ea6a86cce85, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_class", method_pointer_6bd8b9c7b62955fbb70bf53c77e7bc9a, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_id", method_pointer_9802c814b7175373af5090b2f9868b63, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_class", method_pointer_325b720d691f5dd0a0d9ad382b0c5fcf, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_id", method_pointer_fa49070c6f5f5ea0be99cd78eb2b6cf5, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_class", method_pointer_17de38b47f925a9f8b68d3ee3c5bc6c8, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id", method_pointer_1fdd511acc22594da3039dc4d862506c, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id_or_class", method_pointer_ccd17f4796205a729c2c8eb9935742aa, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized", method_pointer_aee608ca6541523093f3bbb10272e9f1, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized_as_written", method_pointer_5c1e2f1db4e25262819b1f55db31e36b, "");
    class_3980f13801db50f498b55d818463d500.def("is_sugared", method_pointer_09b8592373735551a6b96c9671f2d2bc, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized", method_pointer_91ed31370a985648ba62003cb6e3cdb9, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized_as_written", method_pointer_67473411c3d05e87959986828753027a, "");
    class_3980f13801db50f498b55d818463d500.def("qual_empty", method_pointer_ccf1b18e716b5214bbca4b77563fedce, "");
    class_3980f13801db50f498b55d818463d500.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectType >, autowig::HeldType< class ::clang::Type > >();
    }

}