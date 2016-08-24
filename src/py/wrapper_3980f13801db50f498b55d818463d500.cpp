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
    bool  (*method_pointer_7c084f30c77f56f3841abc3250e13db9)(class ::clang::Type  const *) = ::clang::ObjCObjectType::classof;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_0eb8ff4532125cdf99bd9bcdd2cf05ab)() const = &::clang::ObjCObjectType::desugar;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_e336bab7e41c52f7979b7019913568fa)() const = &::clang::ObjCObjectType::getBaseType;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectType::*method_pointer_bba1dad3e5975821bb87585c5c7d96ce)() const = &::clang::ObjCObjectType::getInterface;
    unsigned int  (::clang::ObjCObjectType::*method_pointer_f4da4096eb235f8086787d9f456d1749)() const = &::clang::ObjCObjectType::getNumProtocols;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectType::*method_pointer_d37344124e395c9f90677a8515e85f8a)(unsigned int ) const = &::clang::ObjCObjectType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_5d9861fd4bd258eb969e01c8507ddbb9)() const = &::clang::ObjCObjectType::getSuperClassType;
    bool  (::clang::ObjCObjectType::*method_pointer_7f0e23dd369c51b5b792378cfb732a3c)() const = &::clang::ObjCObjectType::isKindOfType;
    bool  (::clang::ObjCObjectType::*method_pointer_d0b74ddbb1e558ae922a02025ddd15c5)() const = &::clang::ObjCObjectType::isKindOfTypeAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_d4bd23d329d75e829270a4182d7ad4bd)() const = &::clang::ObjCObjectType::isObjCClass;
    bool  (::clang::ObjCObjectType::*method_pointer_ecf43c4981b45c0789acabee0543aba1)() const = &::clang::ObjCObjectType::isObjCId;
    bool  (::clang::ObjCObjectType::*method_pointer_6f05684d542a585ab209e365fc7b4f95)() const = &::clang::ObjCObjectType::isObjCQualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_b8726aade8cf54f89ff834c04cea0a14)() const = &::clang::ObjCObjectType::isObjCQualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_9f764f5c0c765745ad4d69c89b279bfa)() const = &::clang::ObjCObjectType::isObjCUnqualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_1091ec89bdf9515997670c42339b8e40)() const = &::clang::ObjCObjectType::isObjCUnqualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_ef54d3e5f1915fc1b3ebcd27674a37d9)() const = &::clang::ObjCObjectType::isObjCUnqualifiedIdOrClass;
    bool  (::clang::ObjCObjectType::*method_pointer_77566ac5d5da573f97501d2c024a7694)() const = &::clang::ObjCObjectType::isSpecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_58232bdaf9d05a5498970d3d4a8dda05)() const = &::clang::ObjCObjectType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_5240f63d362d5744961db1cbd4e9b767)() const = &::clang::ObjCObjectType::isSugared;
    bool  (::clang::ObjCObjectType::*method_pointer_5bf03ce5ded65bd08a872352be6276b9)() const = &::clang::ObjCObjectType::isUnspecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_ef38a87848935047a449dcc2373efbdc)() const = &::clang::ObjCObjectType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_092d6eef8b0259a599ad90b7df7d61f2)() const = &::clang::ObjCObjectType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectType, autowig::HeldType< class ::clang::ObjCObjectType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3980f13801db50f498b55d818463d500("ObjCObjectType", "", boost::python::no_init);
    class_3980f13801db50f498b55d818463d500.def("classof", method_pointer_7c084f30c77f56f3841abc3250e13db9, "");
    class_3980f13801db50f498b55d818463d500.def("desugar", method_pointer_0eb8ff4532125cdf99bd9bcdd2cf05ab, "");
    class_3980f13801db50f498b55d818463d500.def("get_base_type", method_pointer_e336bab7e41c52f7979b7019913568fa, "");
    class_3980f13801db50f498b55d818463d500.def("get_interface", method_pointer_bba1dad3e5975821bb87585c5c7d96ce, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_num_protocols", method_pointer_f4da4096eb235f8086787d9f456d1749, "");
    class_3980f13801db50f498b55d818463d500.def("get_protocol", method_pointer_d37344124e395c9f90677a8515e85f8a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_super_class_type", method_pointer_5d9861fd4bd258eb969e01c8507ddbb9, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type", method_pointer_7f0e23dd369c51b5b792378cfb732a3c, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type_as_written", method_pointer_d0b74ddbb1e558ae922a02025ddd15c5, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_class", method_pointer_d4bd23d329d75e829270a4182d7ad4bd, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_id", method_pointer_ecf43c4981b45c0789acabee0543aba1, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_class", method_pointer_6f05684d542a585ab209e365fc7b4f95, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_id", method_pointer_b8726aade8cf54f89ff834c04cea0a14, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_class", method_pointer_9f764f5c0c765745ad4d69c89b279bfa, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id", method_pointer_1091ec89bdf9515997670c42339b8e40, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id_or_class", method_pointer_ef54d3e5f1915fc1b3ebcd27674a37d9, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized", method_pointer_77566ac5d5da573f97501d2c024a7694, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized_as_written", method_pointer_58232bdaf9d05a5498970d3d4a8dda05, "");
    class_3980f13801db50f498b55d818463d500.def("is_sugared", method_pointer_5240f63d362d5744961db1cbd4e9b767, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized", method_pointer_5bf03ce5ded65bd08a872352be6276b9, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized_as_written", method_pointer_ef38a87848935047a449dcc2373efbdc, "");
    class_3980f13801db50f498b55d818463d500.def("qual_empty", method_pointer_092d6eef8b0259a599ad90b7df7d61f2, "");
    class_3980f13801db50f498b55d818463d500.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectType >, autowig::HeldType< class ::clang::Type > >();
    }

}