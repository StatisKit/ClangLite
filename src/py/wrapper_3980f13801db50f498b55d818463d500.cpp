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
    bool  (*method_pointer_9d55d72e089459cfa9b6f4d70a1ae598)(class ::clang::Type  const *) = ::clang::ObjCObjectType::classof;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_a7f97d68e5725e5384b274ffc301cc98)() const = &::clang::ObjCObjectType::desugar;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_18168f3aa58e51db856f2b9c0d9a95fd)() const = &::clang::ObjCObjectType::getBaseType;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectType::*method_pointer_c9e6232fe9705e5b8c0d89584f335de7)() const = &::clang::ObjCObjectType::getInterface;
    unsigned int  (::clang::ObjCObjectType::*method_pointer_40b1f893e0cd568695381e81e876cb52)() const = &::clang::ObjCObjectType::getNumProtocols;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectType::*method_pointer_7060aa993b3259dbab913c1d6172d794)(unsigned int ) const = &::clang::ObjCObjectType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_d2d60dbf99a4528498c3bbc8001b4e86)() const = &::clang::ObjCObjectType::getSuperClassType;
    bool  (::clang::ObjCObjectType::*method_pointer_c9df791fc4945bba9190cb70051cff10)() const = &::clang::ObjCObjectType::isKindOfType;
    bool  (::clang::ObjCObjectType::*method_pointer_7a1fd97d352f56c18f9759756b65ee30)() const = &::clang::ObjCObjectType::isKindOfTypeAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_f287aa1352de587aad73e544b0bbde25)() const = &::clang::ObjCObjectType::isObjCClass;
    bool  (::clang::ObjCObjectType::*method_pointer_4a0aaf55c62a542e8472a04ad5077413)() const = &::clang::ObjCObjectType::isObjCId;
    bool  (::clang::ObjCObjectType::*method_pointer_2158d1daa2435c40956c1897081f627d)() const = &::clang::ObjCObjectType::isObjCQualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_e9adfe0e81a85f819b860b5736c862a9)() const = &::clang::ObjCObjectType::isObjCQualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_9e7c82bebdf25c1c961bd4cddd71d920)() const = &::clang::ObjCObjectType::isObjCUnqualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_deeb18ac054856949bc3b08853225907)() const = &::clang::ObjCObjectType::isObjCUnqualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_1857f59a7f825f52a6737424c250eeb7)() const = &::clang::ObjCObjectType::isObjCUnqualifiedIdOrClass;
    bool  (::clang::ObjCObjectType::*method_pointer_7670e23e246b5de78bb8a2d16d33c6d8)() const = &::clang::ObjCObjectType::isSpecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_ac55cc7bedfd54f19c5d4543f6daf3ca)() const = &::clang::ObjCObjectType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_3812d93d2e8350129304120cec689f7c)() const = &::clang::ObjCObjectType::isSugared;
    bool  (::clang::ObjCObjectType::*method_pointer_1a4492a0331f56c5bfdfe6e6c538f4a8)() const = &::clang::ObjCObjectType::isUnspecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_30226e345f0b5035bd3cc7a9a3d0db99)() const = &::clang::ObjCObjectType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_006211dec74b529ba7decdd106195626)() const = &::clang::ObjCObjectType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectType, autowig::HeldType< class ::clang::ObjCObjectType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3980f13801db50f498b55d818463d500("ObjCObjectType", "", boost::python::no_init);
    class_3980f13801db50f498b55d818463d500.def("classof", method_pointer_9d55d72e089459cfa9b6f4d70a1ae598, "");
    class_3980f13801db50f498b55d818463d500.def("desugar", method_pointer_a7f97d68e5725e5384b274ffc301cc98, "");
    class_3980f13801db50f498b55d818463d500.def("get_base_type", method_pointer_18168f3aa58e51db856f2b9c0d9a95fd, "");
    class_3980f13801db50f498b55d818463d500.def("get_interface", method_pointer_c9e6232fe9705e5b8c0d89584f335de7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_num_protocols", method_pointer_40b1f893e0cd568695381e81e876cb52, "");
    class_3980f13801db50f498b55d818463d500.def("get_protocol", method_pointer_7060aa993b3259dbab913c1d6172d794, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_super_class_type", method_pointer_d2d60dbf99a4528498c3bbc8001b4e86, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type", method_pointer_c9df791fc4945bba9190cb70051cff10, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type_as_written", method_pointer_7a1fd97d352f56c18f9759756b65ee30, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_class", method_pointer_f287aa1352de587aad73e544b0bbde25, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_id", method_pointer_4a0aaf55c62a542e8472a04ad5077413, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_class", method_pointer_2158d1daa2435c40956c1897081f627d, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_id", method_pointer_e9adfe0e81a85f819b860b5736c862a9, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_class", method_pointer_9e7c82bebdf25c1c961bd4cddd71d920, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id", method_pointer_deeb18ac054856949bc3b08853225907, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id_or_class", method_pointer_1857f59a7f825f52a6737424c250eeb7, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized", method_pointer_7670e23e246b5de78bb8a2d16d33c6d8, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized_as_written", method_pointer_ac55cc7bedfd54f19c5d4543f6daf3ca, "");
    class_3980f13801db50f498b55d818463d500.def("is_sugared", method_pointer_3812d93d2e8350129304120cec689f7c, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized", method_pointer_1a4492a0331f56c5bfdfe6e6c538f4a8, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized_as_written", method_pointer_30226e345f0b5035bd3cc7a9a3d0db99, "");
    class_3980f13801db50f498b55d818463d500.def("qual_empty", method_pointer_006211dec74b529ba7decdd106195626, "");
    class_3980f13801db50f498b55d818463d500.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectType >, autowig::HeldType< class ::clang::Type > >();
    }

}