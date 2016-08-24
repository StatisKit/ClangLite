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
    bool  (*method_pointer_a5b812d6c855536ca0f76fb7174c752b)(class ::clang::Type  const *) = ::clang::ObjCObjectType::classof;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_f78e6bf1a0055c8b963d55a1253e335a)() const = &::clang::ObjCObjectType::desugar;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_34f6223db82e56569ecedb62d786ff8b)() const = &::clang::ObjCObjectType::getBaseType;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectType::*method_pointer_54bfc82241b85b4db885de87062c413a)() const = &::clang::ObjCObjectType::getInterface;
    unsigned int  (::clang::ObjCObjectType::*method_pointer_f552dcdf9729526d83a4e31b9c29cd0f)() const = &::clang::ObjCObjectType::getNumProtocols;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectType::*method_pointer_b1e190b5e3495bf793a64547256a8753)(unsigned int ) const = &::clang::ObjCObjectType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_6841666380375540ba87a88e7e0f272d)() const = &::clang::ObjCObjectType::getSuperClassType;
    bool  (::clang::ObjCObjectType::*method_pointer_630ac9eb42f059f9b068af6991ce5fe9)() const = &::clang::ObjCObjectType::isKindOfType;
    bool  (::clang::ObjCObjectType::*method_pointer_21a7f85c4b2456cab9e1c124d8c082ce)() const = &::clang::ObjCObjectType::isKindOfTypeAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_a5d8938eb151588cbedc3dae7b4d090f)() const = &::clang::ObjCObjectType::isObjCClass;
    bool  (::clang::ObjCObjectType::*method_pointer_ad5e828f0a38554f9f63c9b96ff65c03)() const = &::clang::ObjCObjectType::isObjCId;
    bool  (::clang::ObjCObjectType::*method_pointer_ae9a62e497225e5989e24e1b8bddf51d)() const = &::clang::ObjCObjectType::isObjCQualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_7db473adc44159baa0a87dca86736719)() const = &::clang::ObjCObjectType::isObjCQualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_8f888f195ecb575199744f9fc063390b)() const = &::clang::ObjCObjectType::isObjCUnqualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_5148807b277a534788c05f6e173e842c)() const = &::clang::ObjCObjectType::isObjCUnqualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_7ec5eeb510a85231a2de23cc8aa3cf8c)() const = &::clang::ObjCObjectType::isObjCUnqualifiedIdOrClass;
    bool  (::clang::ObjCObjectType::*method_pointer_7561b3de329a54839a67787737556451)() const = &::clang::ObjCObjectType::isSpecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_704d484016285e4fbf9d7ecd99f0c3b2)() const = &::clang::ObjCObjectType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_07481c71dc445427918a1f4863828ba7)() const = &::clang::ObjCObjectType::isSugared;
    bool  (::clang::ObjCObjectType::*method_pointer_65995cbe2ca05711ad9750eb3f37ab3e)() const = &::clang::ObjCObjectType::isUnspecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_fb82fac29c845bc8a364f441c87b0408)() const = &::clang::ObjCObjectType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_fc29cc3cc53353a2b0e0a2a906c43980)() const = &::clang::ObjCObjectType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectType, autowig::HeldType< class ::clang::ObjCObjectType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3980f13801db50f498b55d818463d500("ObjCObjectType", "", boost::python::no_init);
    class_3980f13801db50f498b55d818463d500.def("classof", method_pointer_a5b812d6c855536ca0f76fb7174c752b, "");
    class_3980f13801db50f498b55d818463d500.def("desugar", method_pointer_f78e6bf1a0055c8b963d55a1253e335a, "");
    class_3980f13801db50f498b55d818463d500.def("get_base_type", method_pointer_34f6223db82e56569ecedb62d786ff8b, "");
    class_3980f13801db50f498b55d818463d500.def("get_interface", method_pointer_54bfc82241b85b4db885de87062c413a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_num_protocols", method_pointer_f552dcdf9729526d83a4e31b9c29cd0f, "");
    class_3980f13801db50f498b55d818463d500.def("get_protocol", method_pointer_b1e190b5e3495bf793a64547256a8753, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_super_class_type", method_pointer_6841666380375540ba87a88e7e0f272d, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type", method_pointer_630ac9eb42f059f9b068af6991ce5fe9, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type_as_written", method_pointer_21a7f85c4b2456cab9e1c124d8c082ce, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_class", method_pointer_a5d8938eb151588cbedc3dae7b4d090f, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_id", method_pointer_ad5e828f0a38554f9f63c9b96ff65c03, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_class", method_pointer_ae9a62e497225e5989e24e1b8bddf51d, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_id", method_pointer_7db473adc44159baa0a87dca86736719, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_class", method_pointer_8f888f195ecb575199744f9fc063390b, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id", method_pointer_5148807b277a534788c05f6e173e842c, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id_or_class", method_pointer_7ec5eeb510a85231a2de23cc8aa3cf8c, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized", method_pointer_7561b3de329a54839a67787737556451, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized_as_written", method_pointer_704d484016285e4fbf9d7ecd99f0c3b2, "");
    class_3980f13801db50f498b55d818463d500.def("is_sugared", method_pointer_07481c71dc445427918a1f4863828ba7, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized", method_pointer_65995cbe2ca05711ad9750eb3f37ab3e, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized_as_written", method_pointer_fb82fac29c845bc8a364f441c87b0408, "");
    class_3980f13801db50f498b55d818463d500.def("qual_empty", method_pointer_fc29cc3cc53353a2b0e0a2a906c43980, "");
    class_3980f13801db50f498b55d818463d500.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectType >, autowig::HeldType< class ::clang::Type > >();
    }

}