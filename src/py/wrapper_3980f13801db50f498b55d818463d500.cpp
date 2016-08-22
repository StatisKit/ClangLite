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
    bool  (*method_pointer_682042c0074953c9b4056bb90e3eb940)(class ::clang::Type  const *) = ::clang::ObjCObjectType::classof;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectType::*method_pointer_6898b2221922527ea8e25535fa9a8fa1)() const = &::clang::ObjCObjectType::getInterface;
    unsigned int  (::clang::ObjCObjectType::*method_pointer_cecffa6d030454c9ac4578edaa553ed9)() const = &::clang::ObjCObjectType::getNumProtocols;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectType::*method_pointer_2bb87fda7e5a5c9d95c27741967165fb)(unsigned int ) const = &::clang::ObjCObjectType::getProtocol;
    bool  (::clang::ObjCObjectType::*method_pointer_00a72e0f4c5b501eb3b11625440d6b54)() const = &::clang::ObjCObjectType::isKindOfType;
    bool  (::clang::ObjCObjectType::*method_pointer_a57cff8b0fa5521fa6955ce4b2d9f732)() const = &::clang::ObjCObjectType::isKindOfTypeAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_1fb2f502acb653bfa166984fbdbfb48f)() const = &::clang::ObjCObjectType::isObjCClass;
    bool  (::clang::ObjCObjectType::*method_pointer_fa9006c723b650f5a735dde69a5ac3f4)() const = &::clang::ObjCObjectType::isObjCId;
    bool  (::clang::ObjCObjectType::*method_pointer_005e7085ee9759e7b92be384ddaa158e)() const = &::clang::ObjCObjectType::isObjCQualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_a48dcfdeaa3358cf9be6495873f9a549)() const = &::clang::ObjCObjectType::isObjCQualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_e5e214d3b7105f1a928dabbac1c756be)() const = &::clang::ObjCObjectType::isObjCUnqualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_c63655eca4375c9d9cabd0df3151b350)() const = &::clang::ObjCObjectType::isObjCUnqualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_b97c391b1cbe50a8ab6276dc923a1080)() const = &::clang::ObjCObjectType::isObjCUnqualifiedIdOrClass;
    bool  (::clang::ObjCObjectType::*method_pointer_56c54ea0d8cb564b862395b7c9db3d10)() const = &::clang::ObjCObjectType::isSpecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_e93b154634835b8ca2465640fb29ba02)() const = &::clang::ObjCObjectType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_58aef9d474b9589fba7a2e5fba6e5464)() const = &::clang::ObjCObjectType::isSugared;
    bool  (::clang::ObjCObjectType::*method_pointer_869a06f89e085b54a4fd0e5d21d87c11)() const = &::clang::ObjCObjectType::isUnspecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_56cd756312b85b218f0a6dd3c108443a)() const = &::clang::ObjCObjectType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_044ddce481ed50189331678d82aa2d0e)() const = &::clang::ObjCObjectType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectType, autowig::HeldType< class ::clang::ObjCObjectType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3980f13801db50f498b55d818463d500("ObjCObjectType", "", boost::python::no_init);
    class_3980f13801db50f498b55d818463d500.def("classof", method_pointer_682042c0074953c9b4056bb90e3eb940, "");
    class_3980f13801db50f498b55d818463d500.def("get_interface", method_pointer_6898b2221922527ea8e25535fa9a8fa1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_num_protocols", method_pointer_cecffa6d030454c9ac4578edaa553ed9, "");
    class_3980f13801db50f498b55d818463d500.def("get_protocol", method_pointer_2bb87fda7e5a5c9d95c27741967165fb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type", method_pointer_00a72e0f4c5b501eb3b11625440d6b54, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type_as_written", method_pointer_a57cff8b0fa5521fa6955ce4b2d9f732, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_class", method_pointer_1fb2f502acb653bfa166984fbdbfb48f, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_id", method_pointer_fa9006c723b650f5a735dde69a5ac3f4, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_class", method_pointer_005e7085ee9759e7b92be384ddaa158e, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_id", method_pointer_a48dcfdeaa3358cf9be6495873f9a549, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_class", method_pointer_e5e214d3b7105f1a928dabbac1c756be, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id", method_pointer_c63655eca4375c9d9cabd0df3151b350, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id_or_class", method_pointer_b97c391b1cbe50a8ab6276dc923a1080, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized", method_pointer_56c54ea0d8cb564b862395b7c9db3d10, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized_as_written", method_pointer_e93b154634835b8ca2465640fb29ba02, "");
    class_3980f13801db50f498b55d818463d500.def("is_sugared", method_pointer_58aef9d474b9589fba7a2e5fba6e5464, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized", method_pointer_869a06f89e085b54a4fd0e5d21d87c11, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized_as_written", method_pointer_56cd756312b85b218f0a6dd3c108443a, "");
    class_3980f13801db50f498b55d818463d500.def("qual_empty", method_pointer_044ddce481ed50189331678d82aa2d0e, "");
    class_3980f13801db50f498b55d818463d500.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectType >, autowig::HeldType< class ::clang::Type > >();
    }

}