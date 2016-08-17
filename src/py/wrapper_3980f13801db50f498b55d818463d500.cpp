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
    bool  (::clang::ObjCObjectType::*method_pointer_3b76585746495158aca1f8fe18bbb7b5)() const = &::clang::ObjCObjectType::isKindOfTypeAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_2ab080946f725140aab660eceb7e6de9)() const = &::clang::ObjCObjectType::isObjCUnqualifiedIdOrClass;
    bool  (::clang::ObjCObjectType::*method_pointer_1194320d4e0a549a9f83b80bf28966e4)() const = &::clang::ObjCObjectType::isObjCUnqualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_d090096325165345a394e298fa55be87)() const = &::clang::ObjCObjectType::isObjCUnqualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_e4800acb6728505b99e6258cd1565f1c)() const = &::clang::ObjCObjectType::isSugared;
    bool  (::clang::ObjCObjectType::*method_pointer_4eeac3afa80a558c830a1cd7dcfe9e33)() const = &::clang::ObjCObjectType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_ee8590513ea854d1a9b1bff07f07b2ac)() const = &::clang::ObjCObjectType::qual_empty;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectType::*method_pointer_4c4924463057565a8e4eb349def75aba)(unsigned int ) const = &::clang::ObjCObjectType::getProtocol;
    bool  (::clang::ObjCObjectType::*method_pointer_1e61cb2050a75bb2b7b975c970f0e935)() const = &::clang::ObjCObjectType::isKindOfType;
    bool  (::clang::ObjCObjectType::*method_pointer_4acc72707f7c5311a807f26dad52461d)() const = &::clang::ObjCObjectType::isObjCQualifiedClass;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectType::*method_pointer_d24a5120c54250ff8a7fc2b697e340cd)() const = &::clang::ObjCObjectType::getInterface;
    unsigned int  (::clang::ObjCObjectType::*method_pointer_fb528ffd18e258e982805a952389ca90)() const = &::clang::ObjCObjectType::getNumProtocols;
    bool  (::clang::ObjCObjectType::*method_pointer_aa5878843dfc50c5af980c5275dfde23)() const = &::clang::ObjCObjectType::isObjCQualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_26b8bd5f4fad5a13897b4a50d0766d40)() const = &::clang::ObjCObjectType::isObjCId;
    bool  (::clang::ObjCObjectType::*method_pointer_14456f92e51256d48921f0b6131c92ff)() const = &::clang::ObjCObjectType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_20631a2fd71f571fa963047b8a6f0c2d)() const = &::clang::ObjCObjectType::isUnspecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_303d6b4eca225ce6a9d9da35706025d4)() const = &::clang::ObjCObjectType::isObjCClass;
    bool  (*method_pointer_0103bf203af458169066a7bcb82c5b37)(class ::clang::Type  const *) = ::clang::ObjCObjectType::classof;
    bool  (::clang::ObjCObjectType::*method_pointer_d14d81392d18518884af39380cc53a27)() const = &::clang::ObjCObjectType::isSpecialized;
    boost::python::class_< class ::clang::ObjCObjectType, autowig::HeldType< class ::clang::ObjCObjectType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3980f13801db50f498b55d818463d500("ObjCObjectType", "", boost::python::no_init);
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type_as_written", method_pointer_3b76585746495158aca1f8fe18bbb7b5, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id_or_class", method_pointer_2ab080946f725140aab660eceb7e6de9, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_class", method_pointer_1194320d4e0a549a9f83b80bf28966e4, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id", method_pointer_d090096325165345a394e298fa55be87, "");
    class_3980f13801db50f498b55d818463d500.def("is_sugared", method_pointer_e4800acb6728505b99e6258cd1565f1c, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized_as_written", method_pointer_4eeac3afa80a558c830a1cd7dcfe9e33, "");
    class_3980f13801db50f498b55d818463d500.def("qual_empty", method_pointer_ee8590513ea854d1a9b1bff07f07b2ac, "");
    class_3980f13801db50f498b55d818463d500.def("get_protocol", method_pointer_4c4924463057565a8e4eb349def75aba, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type", method_pointer_1e61cb2050a75bb2b7b975c970f0e935, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_class", method_pointer_4acc72707f7c5311a807f26dad52461d, "");
    class_3980f13801db50f498b55d818463d500.def("get_interface", method_pointer_d24a5120c54250ff8a7fc2b697e340cd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_num_protocols", method_pointer_fb528ffd18e258e982805a952389ca90, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_id", method_pointer_aa5878843dfc50c5af980c5275dfde23, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_id", method_pointer_26b8bd5f4fad5a13897b4a50d0766d40, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized_as_written", method_pointer_14456f92e51256d48921f0b6131c92ff, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized", method_pointer_20631a2fd71f571fa963047b8a6f0c2d, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_class", method_pointer_303d6b4eca225ce6a9d9da35706025d4, "");
    class_3980f13801db50f498b55d818463d500.def("classof", method_pointer_0103bf203af458169066a7bcb82c5b37, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized", method_pointer_d14d81392d18518884af39380cc53a27, "");
    class_3980f13801db50f498b55d818463d500.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectType >, autowig::HeldType< class ::clang::Type > >();
    }

}