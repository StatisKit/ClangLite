#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_3980f13801db50f498b55d818463d500()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_cb7bb1ca7b005a4b9c831352828795f2)(class ::clang::Type  const *) = ::clang::ObjCObjectType::classof;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectType::*method_pointer_6a5e4996029d5af88f8e1e532ea7b3ec)() const = &::clang::ObjCObjectType::getInterface;
    unsigned int  (::clang::ObjCObjectType::*method_pointer_5a5e46dfdb035a4c89866401bcf0b9cd)() const = &::clang::ObjCObjectType::getNumProtocols;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectType::*method_pointer_f3f46ce82bd15e4f8a71511a32fdd692)(unsigned int ) const = &::clang::ObjCObjectType::getProtocol;
    bool  (::clang::ObjCObjectType::*method_pointer_29a675bddf5c5a758ca3b54e35fd8528)() const = &::clang::ObjCObjectType::isKindOfType;
    bool  (::clang::ObjCObjectType::*method_pointer_095fcbf6fe21502fbc2b8f87501a2476)() const = &::clang::ObjCObjectType::isKindOfTypeAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_55c26ff394c6586290647a608bcbeb79)() const = &::clang::ObjCObjectType::isObjCClass;
    bool  (::clang::ObjCObjectType::*method_pointer_c188a68833075414a24a2bb81541a976)() const = &::clang::ObjCObjectType::isObjCId;
    bool  (::clang::ObjCObjectType::*method_pointer_4582f9f088d75be1a782ec4218514b8d)() const = &::clang::ObjCObjectType::isObjCQualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_9dc34c33aa8b53fd8410530a715cba4e)() const = &::clang::ObjCObjectType::isObjCQualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_2a8b85efdc8550e0a9faaf4e6f81965f)() const = &::clang::ObjCObjectType::isObjCUnqualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_2a7a4ce3ca6951fe8dd5465ce4e59f59)() const = &::clang::ObjCObjectType::isObjCUnqualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_554ba4739f275e91b8cd9763a39b079a)() const = &::clang::ObjCObjectType::isObjCUnqualifiedIdOrClass;
    bool  (::clang::ObjCObjectType::*method_pointer_cf53bc5c335d5993985d57bfb53e215b)() const = &::clang::ObjCObjectType::isSpecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_9516d3a90e055aa697f4369a6dc1e291)() const = &::clang::ObjCObjectType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_6b8cbc27c89e58a4b26a9780083299bf)() const = &::clang::ObjCObjectType::isSugared;
    bool  (::clang::ObjCObjectType::*method_pointer_7fb8adfff6be5304ba5a9077fe8a5e9b)() const = &::clang::ObjCObjectType::isUnspecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_c7a2df35ed215bf8a625e69b223eb0ca)() const = &::clang::ObjCObjectType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_17b5944019f154529757abcc32144320)() const = &::clang::ObjCObjectType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectType, autowig::HeldType< class ::clang::ObjCObjectType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3980f13801db50f498b55d818463d500("ObjCObjectType", "", boost::python::no_init);
    class_3980f13801db50f498b55d818463d500.def("classof", method_pointer_cb7bb1ca7b005a4b9c831352828795f2, "");
    class_3980f13801db50f498b55d818463d500.def("get_interface", method_pointer_6a5e4996029d5af88f8e1e532ea7b3ec, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_num_protocols", method_pointer_5a5e46dfdb035a4c89866401bcf0b9cd, "");
    class_3980f13801db50f498b55d818463d500.def("get_protocol", method_pointer_f3f46ce82bd15e4f8a71511a32fdd692, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type", method_pointer_29a675bddf5c5a758ca3b54e35fd8528, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type_as_written", method_pointer_095fcbf6fe21502fbc2b8f87501a2476, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_class", method_pointer_55c26ff394c6586290647a608bcbeb79, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_id", method_pointer_c188a68833075414a24a2bb81541a976, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_class", method_pointer_4582f9f088d75be1a782ec4218514b8d, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_id", method_pointer_9dc34c33aa8b53fd8410530a715cba4e, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_class", method_pointer_2a8b85efdc8550e0a9faaf4e6f81965f, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id", method_pointer_2a7a4ce3ca6951fe8dd5465ce4e59f59, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id_or_class", method_pointer_554ba4739f275e91b8cd9763a39b079a, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized", method_pointer_cf53bc5c335d5993985d57bfb53e215b, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized_as_written", method_pointer_9516d3a90e055aa697f4369a6dc1e291, "");
    class_3980f13801db50f498b55d818463d500.def("is_sugared", method_pointer_6b8cbc27c89e58a4b26a9780083299bf, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized", method_pointer_7fb8adfff6be5304ba5a9077fe8a5e9b, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized_as_written", method_pointer_c7a2df35ed215bf8a625e69b223eb0ca, "");
    class_3980f13801db50f498b55d818463d500.def("qual_empty", method_pointer_17b5944019f154529757abcc32144320, "");
    class_3980f13801db50f498b55d818463d500.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectType >, autowig::HeldType< class ::clang::Type > >();
    }

}