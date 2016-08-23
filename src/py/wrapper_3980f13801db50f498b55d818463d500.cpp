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
    bool  (*method_pointer_a65fec7f6c96581aad868ec75be97fd5)(class ::clang::Type  const *) = ::clang::ObjCObjectType::classof;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_bfce019008225c56b7e6d28715720729)() const = &::clang::ObjCObjectType::desugar;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_f611ceed03e25bb39b1370b26105c5c6)() const = &::clang::ObjCObjectType::getBaseType;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectType::*method_pointer_b8978947373751e1bed1d5edcc51cc21)() const = &::clang::ObjCObjectType::getInterface;
    unsigned int  (::clang::ObjCObjectType::*method_pointer_9bb8f516a89c564ab7fe5e7cca3665b6)() const = &::clang::ObjCObjectType::getNumProtocols;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectType::*method_pointer_f418c91accef5ef3b2ebfbb492669366)(unsigned int ) const = &::clang::ObjCObjectType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_e2be066e7aba5523bc6a513570664407)() const = &::clang::ObjCObjectType::getSuperClassType;
    bool  (::clang::ObjCObjectType::*method_pointer_0ad2a0fb8cf55824a2e5f5d170a9df16)() const = &::clang::ObjCObjectType::isKindOfType;
    bool  (::clang::ObjCObjectType::*method_pointer_60ed05f0e6975dac9c687abecae6a1ee)() const = &::clang::ObjCObjectType::isKindOfTypeAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_66d9ac4e389d5e068c1f5fe8f0d6a2a2)() const = &::clang::ObjCObjectType::isObjCClass;
    bool  (::clang::ObjCObjectType::*method_pointer_c2d894d8f2da5517aeffc286a7161231)() const = &::clang::ObjCObjectType::isObjCId;
    bool  (::clang::ObjCObjectType::*method_pointer_0552d0f2b00f5d76a9771d493dd11478)() const = &::clang::ObjCObjectType::isObjCQualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_ceecbe16937c5162a3883190bb3d46f6)() const = &::clang::ObjCObjectType::isObjCQualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_bac4304951dd561b9653110d61ffc756)() const = &::clang::ObjCObjectType::isObjCUnqualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_530074eff06c54dbb1eab4c5d3c35135)() const = &::clang::ObjCObjectType::isObjCUnqualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_b2fa82cb4ae6562c879bb89171edd350)() const = &::clang::ObjCObjectType::isObjCUnqualifiedIdOrClass;
    bool  (::clang::ObjCObjectType::*method_pointer_f8e2fa69fd9058ed8c814b03401c0bcd)() const = &::clang::ObjCObjectType::isSpecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_64c4e2cdc732529bb63cb2aa204bc0ad)() const = &::clang::ObjCObjectType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_1c78995404a05384b567e7157e3989a9)() const = &::clang::ObjCObjectType::isSugared;
    bool  (::clang::ObjCObjectType::*method_pointer_0bd96aaa3f3255e3adc15c1e50161f64)() const = &::clang::ObjCObjectType::isUnspecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_0d9118cb10b4524e921d8cea16a9d362)() const = &::clang::ObjCObjectType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_b2baac66598554749ebd3657037ef85e)() const = &::clang::ObjCObjectType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectType, autowig::HeldType< class ::clang::ObjCObjectType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3980f13801db50f498b55d818463d500("ObjCObjectType", "", boost::python::no_init);
    class_3980f13801db50f498b55d818463d500.def("classof", method_pointer_a65fec7f6c96581aad868ec75be97fd5, "");
    class_3980f13801db50f498b55d818463d500.def("desugar", method_pointer_bfce019008225c56b7e6d28715720729, "");
    class_3980f13801db50f498b55d818463d500.def("get_base_type", method_pointer_f611ceed03e25bb39b1370b26105c5c6, "");
    class_3980f13801db50f498b55d818463d500.def("get_interface", method_pointer_b8978947373751e1bed1d5edcc51cc21, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_num_protocols", method_pointer_9bb8f516a89c564ab7fe5e7cca3665b6, "");
    class_3980f13801db50f498b55d818463d500.def("get_protocol", method_pointer_f418c91accef5ef3b2ebfbb492669366, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_super_class_type", method_pointer_e2be066e7aba5523bc6a513570664407, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type", method_pointer_0ad2a0fb8cf55824a2e5f5d170a9df16, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type_as_written", method_pointer_60ed05f0e6975dac9c687abecae6a1ee, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_class", method_pointer_66d9ac4e389d5e068c1f5fe8f0d6a2a2, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_id", method_pointer_c2d894d8f2da5517aeffc286a7161231, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_class", method_pointer_0552d0f2b00f5d76a9771d493dd11478, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_id", method_pointer_ceecbe16937c5162a3883190bb3d46f6, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_class", method_pointer_bac4304951dd561b9653110d61ffc756, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id", method_pointer_530074eff06c54dbb1eab4c5d3c35135, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id_or_class", method_pointer_b2fa82cb4ae6562c879bb89171edd350, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized", method_pointer_f8e2fa69fd9058ed8c814b03401c0bcd, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized_as_written", method_pointer_64c4e2cdc732529bb63cb2aa204bc0ad, "");
    class_3980f13801db50f498b55d818463d500.def("is_sugared", method_pointer_1c78995404a05384b567e7157e3989a9, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized", method_pointer_0bd96aaa3f3255e3adc15c1e50161f64, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized_as_written", method_pointer_0d9118cb10b4524e921d8cea16a9d362, "");
    class_3980f13801db50f498b55d818463d500.def("qual_empty", method_pointer_b2baac66598554749ebd3657037ef85e, "");
    class_3980f13801db50f498b55d818463d500.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectType >, autowig::HeldType< class ::clang::Type > >();
    }

}