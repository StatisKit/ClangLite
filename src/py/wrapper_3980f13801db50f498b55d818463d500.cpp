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
    bool  (*method_pointer_2f37bd420e9855dfb9ba32012aeffecd)(class ::clang::Type  const *) = ::clang::ObjCObjectType::classof;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_cc0aefa234165883a96d73806b98d289)() const = &::clang::ObjCObjectType::desugar;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_32032ae338e252b7b6e436d69b495742)() const = &::clang::ObjCObjectType::getBaseType;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectType::*method_pointer_12fd570fed3e58db9a1cd283fcfe0b87)() const = &::clang::ObjCObjectType::getInterface;
    unsigned int  (::clang::ObjCObjectType::*method_pointer_1a20525c5eac5edd93e517905887a46f)() const = &::clang::ObjCObjectType::getNumProtocols;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectType::*method_pointer_5a86abbca2825b928817dbc2fa164b29)(unsigned int ) const = &::clang::ObjCObjectType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_54757da6612c5bd59d3f8af017eee050)() const = &::clang::ObjCObjectType::getSuperClassType;
    bool  (::clang::ObjCObjectType::*method_pointer_ca22212c8f015fe28330e45d75aba24c)() const = &::clang::ObjCObjectType::isKindOfType;
    bool  (::clang::ObjCObjectType::*method_pointer_37fdb02500c65a19b8b3f7154111f83f)() const = &::clang::ObjCObjectType::isKindOfTypeAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_db68b030945c5e65b0c656f0197460da)() const = &::clang::ObjCObjectType::isObjCClass;
    bool  (::clang::ObjCObjectType::*method_pointer_85be926ab36b57848a3bf2c28c45edb1)() const = &::clang::ObjCObjectType::isObjCId;
    bool  (::clang::ObjCObjectType::*method_pointer_cd108d589dfa5aefbd7a72435b3a3945)() const = &::clang::ObjCObjectType::isObjCQualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_830e8fbafb2c5650884373845e379dca)() const = &::clang::ObjCObjectType::isObjCQualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_c925efcbd4195550af29403f41a1aa7a)() const = &::clang::ObjCObjectType::isObjCUnqualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_7100656eadaa5c4e85a708c5f3b87a57)() const = &::clang::ObjCObjectType::isObjCUnqualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_cdf351d817dd5a6da3529d0258b32a4b)() const = &::clang::ObjCObjectType::isObjCUnqualifiedIdOrClass;
    bool  (::clang::ObjCObjectType::*method_pointer_0e6e81145236541c8b5fb115fdbee335)() const = &::clang::ObjCObjectType::isSpecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_a6d21e584ff9514dad228d3ffe9f81f3)() const = &::clang::ObjCObjectType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_eefaf11d830f5cceac1fdc1438c53ca6)() const = &::clang::ObjCObjectType::isSugared;
    bool  (::clang::ObjCObjectType::*method_pointer_ee107df491d3564abf40e8bf1d6f53fd)() const = &::clang::ObjCObjectType::isUnspecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_49879e275afd5128b5483dbf2f7c1fc5)() const = &::clang::ObjCObjectType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_bb45e9128ac156b6a4547a1c7508d7d9)() const = &::clang::ObjCObjectType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectType, autowig::HeldType< class ::clang::ObjCObjectType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3980f13801db50f498b55d818463d500("ObjCObjectType", "", boost::python::no_init);
    class_3980f13801db50f498b55d818463d500.def("classof", method_pointer_2f37bd420e9855dfb9ba32012aeffecd, "");
    class_3980f13801db50f498b55d818463d500.def("desugar", method_pointer_cc0aefa234165883a96d73806b98d289, "");
    class_3980f13801db50f498b55d818463d500.def("get_base_type", method_pointer_32032ae338e252b7b6e436d69b495742, "");
    class_3980f13801db50f498b55d818463d500.def("get_interface", method_pointer_12fd570fed3e58db9a1cd283fcfe0b87, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_num_protocols", method_pointer_1a20525c5eac5edd93e517905887a46f, "");
    class_3980f13801db50f498b55d818463d500.def("get_protocol", method_pointer_5a86abbca2825b928817dbc2fa164b29, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_super_class_type", method_pointer_54757da6612c5bd59d3f8af017eee050, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type", method_pointer_ca22212c8f015fe28330e45d75aba24c, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type_as_written", method_pointer_37fdb02500c65a19b8b3f7154111f83f, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_class", method_pointer_db68b030945c5e65b0c656f0197460da, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_id", method_pointer_85be926ab36b57848a3bf2c28c45edb1, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_class", method_pointer_cd108d589dfa5aefbd7a72435b3a3945, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_id", method_pointer_830e8fbafb2c5650884373845e379dca, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_class", method_pointer_c925efcbd4195550af29403f41a1aa7a, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id", method_pointer_7100656eadaa5c4e85a708c5f3b87a57, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id_or_class", method_pointer_cdf351d817dd5a6da3529d0258b32a4b, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized", method_pointer_0e6e81145236541c8b5fb115fdbee335, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized_as_written", method_pointer_a6d21e584ff9514dad228d3ffe9f81f3, "");
    class_3980f13801db50f498b55d818463d500.def("is_sugared", method_pointer_eefaf11d830f5cceac1fdc1438c53ca6, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized", method_pointer_ee107df491d3564abf40e8bf1d6f53fd, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized_as_written", method_pointer_49879e275afd5128b5483dbf2f7c1fc5, "");
    class_3980f13801db50f498b55d818463d500.def("qual_empty", method_pointer_bb45e9128ac156b6a4547a1c7508d7d9, "");
    class_3980f13801db50f498b55d818463d500.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectType >, autowig::HeldType< class ::clang::Type > >();
    }

}