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
    bool  (*method_pointer_1a2ae59f4e7353d0af553cb1307b2a24)(class ::clang::Type  const *) = ::clang::ObjCObjectType::classof;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_d030d9d4c5235fa2b0b2aa93d0703b5a)() const = &::clang::ObjCObjectType::desugar;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_a7b219c287295f4a88890415dd136e4d)() const = &::clang::ObjCObjectType::getBaseType;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectType::*method_pointer_da101a5460125a3499f1950519ce7e83)() const = &::clang::ObjCObjectType::getInterface;
    unsigned int  (::clang::ObjCObjectType::*method_pointer_d1a90d95d3345caea7e77cde06899d8d)() const = &::clang::ObjCObjectType::getNumProtocols;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectType::*method_pointer_68d8f7258a4a53db9585ce36079d8b8f)(unsigned int ) const = &::clang::ObjCObjectType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_6f8cd82a358a56dd86ea7e7816dd7b23)() const = &::clang::ObjCObjectType::getSuperClassType;
    bool  (::clang::ObjCObjectType::*method_pointer_922a35ccd0e05f62b11d06be89bbd154)() const = &::clang::ObjCObjectType::isKindOfType;
    bool  (::clang::ObjCObjectType::*method_pointer_a25a69c3ac5d547182465d4685042670)() const = &::clang::ObjCObjectType::isKindOfTypeAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_fe2a80f3b881594f82adce3d0f79a9d6)() const = &::clang::ObjCObjectType::isObjCClass;
    bool  (::clang::ObjCObjectType::*method_pointer_e519afac842a560cb2d8a045afab3545)() const = &::clang::ObjCObjectType::isObjCId;
    bool  (::clang::ObjCObjectType::*method_pointer_45925bed2b165a6b9e43d81a2994a05b)() const = &::clang::ObjCObjectType::isObjCQualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_6657f0b95c8f5c589e991bb8c1dad710)() const = &::clang::ObjCObjectType::isObjCQualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_581dc173b9aa59b9b1c06da825857ac9)() const = &::clang::ObjCObjectType::isObjCUnqualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_fed67b5df0f758ee9c34e82c92f34578)() const = &::clang::ObjCObjectType::isObjCUnqualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_088689c53d9f5ebf9de147b3d912cbc0)() const = &::clang::ObjCObjectType::isObjCUnqualifiedIdOrClass;
    bool  (::clang::ObjCObjectType::*method_pointer_1843f948889b5289aa9bd79be201d74f)() const = &::clang::ObjCObjectType::isSpecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_2a251ee8350f5c0d9e06247253326050)() const = &::clang::ObjCObjectType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_c939cfb9054754ad9fd6817cd7537322)() const = &::clang::ObjCObjectType::isSugared;
    bool  (::clang::ObjCObjectType::*method_pointer_51ef2c3c782d52a39ab030f39db6c920)() const = &::clang::ObjCObjectType::isUnspecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_140aeb5ce26f5a1e8d01413fe0e85e81)() const = &::clang::ObjCObjectType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_bc9c3dc4acd2509db612197f2fadd5a9)() const = &::clang::ObjCObjectType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectType, autowig::HeldType< class ::clang::ObjCObjectType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3980f13801db50f498b55d818463d500("ObjCObjectType", "", boost::python::no_init);
    class_3980f13801db50f498b55d818463d500.def("classof", method_pointer_1a2ae59f4e7353d0af553cb1307b2a24, "");
    class_3980f13801db50f498b55d818463d500.def("desugar", method_pointer_d030d9d4c5235fa2b0b2aa93d0703b5a, "");
    class_3980f13801db50f498b55d818463d500.def("get_base_type", method_pointer_a7b219c287295f4a88890415dd136e4d, "");
    class_3980f13801db50f498b55d818463d500.def("get_interface", method_pointer_da101a5460125a3499f1950519ce7e83, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_num_protocols", method_pointer_d1a90d95d3345caea7e77cde06899d8d, "");
    class_3980f13801db50f498b55d818463d500.def("get_protocol", method_pointer_68d8f7258a4a53db9585ce36079d8b8f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_super_class_type", method_pointer_6f8cd82a358a56dd86ea7e7816dd7b23, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type", method_pointer_922a35ccd0e05f62b11d06be89bbd154, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type_as_written", method_pointer_a25a69c3ac5d547182465d4685042670, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_class", method_pointer_fe2a80f3b881594f82adce3d0f79a9d6, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_id", method_pointer_e519afac842a560cb2d8a045afab3545, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_class", method_pointer_45925bed2b165a6b9e43d81a2994a05b, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_id", method_pointer_6657f0b95c8f5c589e991bb8c1dad710, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_class", method_pointer_581dc173b9aa59b9b1c06da825857ac9, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id", method_pointer_fed67b5df0f758ee9c34e82c92f34578, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id_or_class", method_pointer_088689c53d9f5ebf9de147b3d912cbc0, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized", method_pointer_1843f948889b5289aa9bd79be201d74f, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized_as_written", method_pointer_2a251ee8350f5c0d9e06247253326050, "");
    class_3980f13801db50f498b55d818463d500.def("is_sugared", method_pointer_c939cfb9054754ad9fd6817cd7537322, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized", method_pointer_51ef2c3c782d52a39ab030f39db6c920, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized_as_written", method_pointer_140aeb5ce26f5a1e8d01413fe0e85e81, "");
    class_3980f13801db50f498b55d818463d500.def("qual_empty", method_pointer_bc9c3dc4acd2509db612197f2fadd5a9, "");
    class_3980f13801db50f498b55d818463d500.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectType >, autowig::HeldType< class ::clang::Type > >();
    }

}