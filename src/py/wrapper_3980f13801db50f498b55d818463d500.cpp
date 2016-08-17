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
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectType::*method_pointer_116c7dc833c55626af27743dc88e759d)() const = &::clang::ObjCObjectType::getInterface;
    bool  (::clang::ObjCObjectType::*method_pointer_59d0c17a8bcb5796830ca7d7b746db7b)() const = &::clang::ObjCObjectType::isObjCId;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectType::*method_pointer_d95c901e6b595b20a4df0a115c020965)(unsigned int ) const = &::clang::ObjCObjectType::getProtocol;
    bool  (::clang::ObjCObjectType::*method_pointer_54c637bdbb6d58fb81417ebc14f2e2ab)() const = &::clang::ObjCObjectType::isObjCQualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_aacd596486b55601a8e8cec4645818f4)() const = &::clang::ObjCObjectType::isObjCUnqualifiedIdOrClass;
    bool  (::clang::ObjCObjectType::*method_pointer_f41311c235705c8ba714c1264900de00)() const = &::clang::ObjCObjectType::isSpecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_06f9ede4eb0c533fb22b243436d37ce6)() const = &::clang::ObjCObjectType::isObjCClass;
    unsigned int  (::clang::ObjCObjectType::*method_pointer_5c0d1e9481b35e728056a5f28ba0108b)() const = &::clang::ObjCObjectType::getNumProtocols;
    bool  (::clang::ObjCObjectType::*method_pointer_edace69a87405a1c87a4c114ea3c91dd)() const = &::clang::ObjCObjectType::isObjCUnqualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_ec74fdb1ba4258278716321a959fdaf1)() const = &::clang::ObjCObjectType::isKindOfType;
    bool  (::clang::ObjCObjectType::*method_pointer_dbfaa252ea6c5dae82a4ef4f7adcde8c)() const = &::clang::ObjCObjectType::isObjCQualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_6e6031196b8a5b18a5e607f02fa34cbf)() const = &::clang::ObjCObjectType::isKindOfTypeAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_66a89f81d1ad5c5bb114362bcf26622f)() const = &::clang::ObjCObjectType::isUnspecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_e2428dcfa5d15a8d8c87f8b7aa1e5811)() const = &::clang::ObjCObjectType::isUnspecializedAsWritten;
    bool  (*method_pointer_1e7837303219529883d7b207683337df)(class ::clang::Type  const *) = ::clang::ObjCObjectType::classof;
    bool  (::clang::ObjCObjectType::*method_pointer_2db44a2c68625005bfcc5fc701be34f4)() const = &::clang::ObjCObjectType::isSugared;
    bool  (::clang::ObjCObjectType::*method_pointer_2ec8799a7297583fb127c5a5571243c6)() const = &::clang::ObjCObjectType::isObjCUnqualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_905b01da93d357da9dc6cdcf42ead927)() const = &::clang::ObjCObjectType::qual_empty;
    bool  (::clang::ObjCObjectType::*method_pointer_7408fe23f97a5a2ead632fc37eb5a989)() const = &::clang::ObjCObjectType::isSpecializedAsWritten;
    boost::python::class_< class ::clang::ObjCObjectType, autowig::HeldType< class ::clang::ObjCObjectType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3980f13801db50f498b55d818463d500("ObjCObjectType", "", boost::python::no_init);
    class_3980f13801db50f498b55d818463d500.def("get_interface", method_pointer_116c7dc833c55626af27743dc88e759d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_id", method_pointer_59d0c17a8bcb5796830ca7d7b746db7b, "");
    class_3980f13801db50f498b55d818463d500.def("get_protocol", method_pointer_d95c901e6b595b20a4df0a115c020965, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_id", method_pointer_54c637bdbb6d58fb81417ebc14f2e2ab, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id_or_class", method_pointer_aacd596486b55601a8e8cec4645818f4, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized", method_pointer_f41311c235705c8ba714c1264900de00, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_class", method_pointer_06f9ede4eb0c533fb22b243436d37ce6, "");
    class_3980f13801db50f498b55d818463d500.def("get_num_protocols", method_pointer_5c0d1e9481b35e728056a5f28ba0108b, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_class", method_pointer_edace69a87405a1c87a4c114ea3c91dd, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type", method_pointer_ec74fdb1ba4258278716321a959fdaf1, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_class", method_pointer_dbfaa252ea6c5dae82a4ef4f7adcde8c, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type_as_written", method_pointer_6e6031196b8a5b18a5e607f02fa34cbf, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized", method_pointer_66a89f81d1ad5c5bb114362bcf26622f, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized_as_written", method_pointer_e2428dcfa5d15a8d8c87f8b7aa1e5811, "");
    class_3980f13801db50f498b55d818463d500.def("classof", method_pointer_1e7837303219529883d7b207683337df, "");
    class_3980f13801db50f498b55d818463d500.def("is_sugared", method_pointer_2db44a2c68625005bfcc5fc701be34f4, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id", method_pointer_2ec8799a7297583fb127c5a5571243c6, "");
    class_3980f13801db50f498b55d818463d500.def("qual_empty", method_pointer_905b01da93d357da9dc6cdcf42ead927, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized_as_written", method_pointer_7408fe23f97a5a2ead632fc37eb5a989, "");
    class_3980f13801db50f498b55d818463d500.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectType >, autowig::HeldType< class ::clang::Type > >();
    }

}