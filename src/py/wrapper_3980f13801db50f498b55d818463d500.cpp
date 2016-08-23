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
    bool  (*method_pointer_72dd66684b295134a3265b8d9d36f3fd)(class ::clang::Type  const *) = ::clang::ObjCObjectType::classof;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectType::*method_pointer_115123f7161656fea0618d874539aa8a)() const = &::clang::ObjCObjectType::getInterface;
    unsigned int  (::clang::ObjCObjectType::*method_pointer_78f4fc16f64c522cbfec0cacf9126aca)() const = &::clang::ObjCObjectType::getNumProtocols;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectType::*method_pointer_7b8df9ede1eb5a8d8a442ef341691fae)(unsigned int ) const = &::clang::ObjCObjectType::getProtocol;
    bool  (::clang::ObjCObjectType::*method_pointer_753b90a589fa53d89c10044b1be5dda8)() const = &::clang::ObjCObjectType::isKindOfType;
    bool  (::clang::ObjCObjectType::*method_pointer_b3105035dfdd52ef9454833bfacac39a)() const = &::clang::ObjCObjectType::isKindOfTypeAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_cb6bb4562aae5e168be7bc327a6a53a1)() const = &::clang::ObjCObjectType::isObjCClass;
    bool  (::clang::ObjCObjectType::*method_pointer_eae3c27ab6d352d6a4019fa9698a43af)() const = &::clang::ObjCObjectType::isObjCId;
    bool  (::clang::ObjCObjectType::*method_pointer_6fc7f92192fa5a21b605701498d08a32)() const = &::clang::ObjCObjectType::isObjCQualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_41eb00d9798257d2af6bb915f98f01c6)() const = &::clang::ObjCObjectType::isObjCQualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_a885273f00e358a19743686bc330f072)() const = &::clang::ObjCObjectType::isObjCUnqualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_31a5910d4f435ba8bc997582ecce8666)() const = &::clang::ObjCObjectType::isObjCUnqualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_10660512b5515a59896009d751d0124f)() const = &::clang::ObjCObjectType::isObjCUnqualifiedIdOrClass;
    bool  (::clang::ObjCObjectType::*method_pointer_bfbce546da16539198e18278bbff89d5)() const = &::clang::ObjCObjectType::isSpecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_b3d14e3a5c4e570c8cae2b824be77c6f)() const = &::clang::ObjCObjectType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_1a8fb0a89ed6525491d904fce3d9db36)() const = &::clang::ObjCObjectType::isSugared;
    bool  (::clang::ObjCObjectType::*method_pointer_dc5babf9892c5c6a88150d90b993e43d)() const = &::clang::ObjCObjectType::isUnspecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_7a83a2b669bf5345ae2980e94e335c8f)() const = &::clang::ObjCObjectType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_efd503a316eb597293b4949a05bf0c00)() const = &::clang::ObjCObjectType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectType, autowig::HeldType< class ::clang::ObjCObjectType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3980f13801db50f498b55d818463d500("ObjCObjectType", "", boost::python::no_init);
    class_3980f13801db50f498b55d818463d500.def("classof", method_pointer_72dd66684b295134a3265b8d9d36f3fd, "");
    class_3980f13801db50f498b55d818463d500.def("get_interface", method_pointer_115123f7161656fea0618d874539aa8a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_num_protocols", method_pointer_78f4fc16f64c522cbfec0cacf9126aca, "");
    class_3980f13801db50f498b55d818463d500.def("get_protocol", method_pointer_7b8df9ede1eb5a8d8a442ef341691fae, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type", method_pointer_753b90a589fa53d89c10044b1be5dda8, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type_as_written", method_pointer_b3105035dfdd52ef9454833bfacac39a, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_class", method_pointer_cb6bb4562aae5e168be7bc327a6a53a1, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_id", method_pointer_eae3c27ab6d352d6a4019fa9698a43af, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_class", method_pointer_6fc7f92192fa5a21b605701498d08a32, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_id", method_pointer_41eb00d9798257d2af6bb915f98f01c6, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_class", method_pointer_a885273f00e358a19743686bc330f072, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id", method_pointer_31a5910d4f435ba8bc997582ecce8666, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id_or_class", method_pointer_10660512b5515a59896009d751d0124f, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized", method_pointer_bfbce546da16539198e18278bbff89d5, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized_as_written", method_pointer_b3d14e3a5c4e570c8cae2b824be77c6f, "");
    class_3980f13801db50f498b55d818463d500.def("is_sugared", method_pointer_1a8fb0a89ed6525491d904fce3d9db36, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized", method_pointer_dc5babf9892c5c6a88150d90b993e43d, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized_as_written", method_pointer_7a83a2b669bf5345ae2980e94e335c8f, "");
    class_3980f13801db50f498b55d818463d500.def("qual_empty", method_pointer_efd503a316eb597293b4949a05bf0c00, "");
    class_3980f13801db50f498b55d818463d500.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectType >, autowig::HeldType< class ::clang::Type > >();
    }

}