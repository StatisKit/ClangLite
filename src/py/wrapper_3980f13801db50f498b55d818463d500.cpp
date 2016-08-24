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
    bool  (*method_pointer_60b31ea3677b535d8a530c7a71b50eb2)(class ::clang::Type  const *) = ::clang::ObjCObjectType::classof;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_bd0dcd6c0b0f58949cfcd63ce294e4a8)() const = &::clang::ObjCObjectType::desugar;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_379aebbcdde856768c03a835c418693c)() const = &::clang::ObjCObjectType::getBaseType;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectType::*method_pointer_7345feb2e7d45a7ead818b73bb9f0ff3)() const = &::clang::ObjCObjectType::getInterface;
    unsigned int  (::clang::ObjCObjectType::*method_pointer_11b4b35052585744b68dd2c9cefe2056)() const = &::clang::ObjCObjectType::getNumProtocols;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectType::*method_pointer_c998268a6df35676ad88371d561683ff)(unsigned int ) const = &::clang::ObjCObjectType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_a2e00981c87e566f88fae8501ceacc43)() const = &::clang::ObjCObjectType::getSuperClassType;
    bool  (::clang::ObjCObjectType::*method_pointer_ae3c923bcd735ce1b3f05d888efd9fec)() const = &::clang::ObjCObjectType::isKindOfType;
    bool  (::clang::ObjCObjectType::*method_pointer_0c3eaf0a8a625eb7a027805843df7298)() const = &::clang::ObjCObjectType::isKindOfTypeAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_4206682152a05a2ead45db640faba739)() const = &::clang::ObjCObjectType::isObjCClass;
    bool  (::clang::ObjCObjectType::*method_pointer_6da4166238245c12a93dbd33ef19aea8)() const = &::clang::ObjCObjectType::isObjCId;
    bool  (::clang::ObjCObjectType::*method_pointer_f4ff503d2d9054918f676ce045a29a14)() const = &::clang::ObjCObjectType::isObjCQualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_a74b306db0b250b19a53d0173593732c)() const = &::clang::ObjCObjectType::isObjCQualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_e8230e90ffab53bab766c7f1bb6ec193)() const = &::clang::ObjCObjectType::isObjCUnqualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_b5819d78b7d45ca4b4bdeab22933ff4e)() const = &::clang::ObjCObjectType::isObjCUnqualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_6860cce20d5f5b3a8e77e67ebf01869b)() const = &::clang::ObjCObjectType::isObjCUnqualifiedIdOrClass;
    bool  (::clang::ObjCObjectType::*method_pointer_08c9f89277915a3a8f3636c77d529cb7)() const = &::clang::ObjCObjectType::isSpecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_587a6ec18f3a5356aa8fd7eed1d972c9)() const = &::clang::ObjCObjectType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_0ad33e440a7c5bc2b5601432cd15b2f9)() const = &::clang::ObjCObjectType::isSugared;
    bool  (::clang::ObjCObjectType::*method_pointer_f825344fe2ef525489ba3378d950afec)() const = &::clang::ObjCObjectType::isUnspecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_a7489d83448455f7b0940503e5d3616b)() const = &::clang::ObjCObjectType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_82ab6106c30b535f820a1e4710c5049a)() const = &::clang::ObjCObjectType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectType, autowig::HeldType< class ::clang::ObjCObjectType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3980f13801db50f498b55d818463d500("ObjCObjectType", "", boost::python::no_init);
    class_3980f13801db50f498b55d818463d500.def("classof", method_pointer_60b31ea3677b535d8a530c7a71b50eb2, "");
    class_3980f13801db50f498b55d818463d500.def("desugar", method_pointer_bd0dcd6c0b0f58949cfcd63ce294e4a8, "");
    class_3980f13801db50f498b55d818463d500.def("get_base_type", method_pointer_379aebbcdde856768c03a835c418693c, "");
    class_3980f13801db50f498b55d818463d500.def("get_interface", method_pointer_7345feb2e7d45a7ead818b73bb9f0ff3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_num_protocols", method_pointer_11b4b35052585744b68dd2c9cefe2056, "");
    class_3980f13801db50f498b55d818463d500.def("get_protocol", method_pointer_c998268a6df35676ad88371d561683ff, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_super_class_type", method_pointer_a2e00981c87e566f88fae8501ceacc43, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type", method_pointer_ae3c923bcd735ce1b3f05d888efd9fec, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type_as_written", method_pointer_0c3eaf0a8a625eb7a027805843df7298, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_class", method_pointer_4206682152a05a2ead45db640faba739, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_id", method_pointer_6da4166238245c12a93dbd33ef19aea8, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_class", method_pointer_f4ff503d2d9054918f676ce045a29a14, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_id", method_pointer_a74b306db0b250b19a53d0173593732c, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_class", method_pointer_e8230e90ffab53bab766c7f1bb6ec193, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id", method_pointer_b5819d78b7d45ca4b4bdeab22933ff4e, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id_or_class", method_pointer_6860cce20d5f5b3a8e77e67ebf01869b, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized", method_pointer_08c9f89277915a3a8f3636c77d529cb7, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized_as_written", method_pointer_587a6ec18f3a5356aa8fd7eed1d972c9, "");
    class_3980f13801db50f498b55d818463d500.def("is_sugared", method_pointer_0ad33e440a7c5bc2b5601432cd15b2f9, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized", method_pointer_f825344fe2ef525489ba3378d950afec, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized_as_written", method_pointer_a7489d83448455f7b0940503e5d3616b, "");
    class_3980f13801db50f498b55d818463d500.def("qual_empty", method_pointer_82ab6106c30b535f820a1e4710c5049a, "");
    class_3980f13801db50f498b55d818463d500.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectType >, autowig::HeldType< class ::clang::Type > >();
    }

}