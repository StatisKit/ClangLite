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
    bool  (*method_pointer_6eb7d0db04d95d1ca051a76c4f5adcf0)(class ::clang::Type  const *) = ::clang::ObjCObjectType::classof;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectType::*method_pointer_4d79aa64019f5a2eb6f5c05cf181d117)() const = &::clang::ObjCObjectType::getInterface;
    unsigned int  (::clang::ObjCObjectType::*method_pointer_4ff31886f7c45c1b8939060c2b883e38)() const = &::clang::ObjCObjectType::getNumProtocols;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectType::*method_pointer_09e216d56fe152e284fd160db5eb43b8)(unsigned int ) const = &::clang::ObjCObjectType::getProtocol;
    bool  (::clang::ObjCObjectType::*method_pointer_94182e621fb559a6b1a45b15d12c093c)() const = &::clang::ObjCObjectType::isKindOfType;
    bool  (::clang::ObjCObjectType::*method_pointer_285ff27bdded56b6a86a5e926a4e25d8)() const = &::clang::ObjCObjectType::isKindOfTypeAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_c9011d2ff09f510f97427d5365180d50)() const = &::clang::ObjCObjectType::isObjCClass;
    bool  (::clang::ObjCObjectType::*method_pointer_6a21516541b85e1b808afbce7d6c2e8b)() const = &::clang::ObjCObjectType::isObjCId;
    bool  (::clang::ObjCObjectType::*method_pointer_ae8d19cc92cb5d0cadb76df3ffee9a30)() const = &::clang::ObjCObjectType::isObjCQualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_36051e0a58cd53c7ab6be0ee28ac50a4)() const = &::clang::ObjCObjectType::isObjCQualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_76ce7ed30ce15d9bab085f69e84e5d88)() const = &::clang::ObjCObjectType::isObjCUnqualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_106454d4a4fa5c3a81831d558e0131ec)() const = &::clang::ObjCObjectType::isObjCUnqualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_0c1bae71a39b537ea615bedfa67ea460)() const = &::clang::ObjCObjectType::isObjCUnqualifiedIdOrClass;
    bool  (::clang::ObjCObjectType::*method_pointer_c58091fb3c725b498ae17ccc9178450c)() const = &::clang::ObjCObjectType::isSpecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_7910f2e061aa5c068559b845b49ab675)() const = &::clang::ObjCObjectType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_88d0bd8f01455ecabf14d1f0e6c81850)() const = &::clang::ObjCObjectType::isSugared;
    bool  (::clang::ObjCObjectType::*method_pointer_5174d1fea317500f9775d0aa7a932814)() const = &::clang::ObjCObjectType::isUnspecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_62eeed8754f45e1c806b16cc5d43c6c0)() const = &::clang::ObjCObjectType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_0fe8ce70453a592f872805fbf7488d84)() const = &::clang::ObjCObjectType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectType, autowig::HeldType< class ::clang::ObjCObjectType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3980f13801db50f498b55d818463d500("ObjCObjectType", "", boost::python::no_init);
    class_3980f13801db50f498b55d818463d500.def("classof", method_pointer_6eb7d0db04d95d1ca051a76c4f5adcf0, "");
    class_3980f13801db50f498b55d818463d500.def("get_interface", method_pointer_4d79aa64019f5a2eb6f5c05cf181d117, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_num_protocols", method_pointer_4ff31886f7c45c1b8939060c2b883e38, "");
    class_3980f13801db50f498b55d818463d500.def("get_protocol", method_pointer_09e216d56fe152e284fd160db5eb43b8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type", method_pointer_94182e621fb559a6b1a45b15d12c093c, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type_as_written", method_pointer_285ff27bdded56b6a86a5e926a4e25d8, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_class", method_pointer_c9011d2ff09f510f97427d5365180d50, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_id", method_pointer_6a21516541b85e1b808afbce7d6c2e8b, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_class", method_pointer_ae8d19cc92cb5d0cadb76df3ffee9a30, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_id", method_pointer_36051e0a58cd53c7ab6be0ee28ac50a4, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_class", method_pointer_76ce7ed30ce15d9bab085f69e84e5d88, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id", method_pointer_106454d4a4fa5c3a81831d558e0131ec, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id_or_class", method_pointer_0c1bae71a39b537ea615bedfa67ea460, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized", method_pointer_c58091fb3c725b498ae17ccc9178450c, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized_as_written", method_pointer_7910f2e061aa5c068559b845b49ab675, "");
    class_3980f13801db50f498b55d818463d500.def("is_sugared", method_pointer_88d0bd8f01455ecabf14d1f0e6c81850, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized", method_pointer_5174d1fea317500f9775d0aa7a932814, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized_as_written", method_pointer_62eeed8754f45e1c806b16cc5d43c6c0, "");
    class_3980f13801db50f498b55d818463d500.def("qual_empty", method_pointer_0fe8ce70453a592f872805fbf7488d84, "");
    class_3980f13801db50f498b55d818463d500.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectType >, autowig::HeldType< class ::clang::Type > >();
    }

}