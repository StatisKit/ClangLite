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
    bool  (*method_pointer_2e702757538b553488ff1a755f04eccf)(class ::clang::Type  const *) = ::clang::ObjCObjectType::classof;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectType::*method_pointer_70081328148550d5ba91e3fab8cb2b65)() const = &::clang::ObjCObjectType::getInterface;
    unsigned int  (::clang::ObjCObjectType::*method_pointer_5cca9064ee855ab2a12001bb815a4183)() const = &::clang::ObjCObjectType::getNumProtocols;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectType::*method_pointer_3d5e574f5d3058cca78f0023f6bc25a9)(unsigned int ) const = &::clang::ObjCObjectType::getProtocol;
    bool  (::clang::ObjCObjectType::*method_pointer_a0c21dd58952519b9782b3d6383ca94c)() const = &::clang::ObjCObjectType::isKindOfType;
    bool  (::clang::ObjCObjectType::*method_pointer_ebdd4cc6ad7c5f9c9107e6f1d643018a)() const = &::clang::ObjCObjectType::isKindOfTypeAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_b970dc8e421a57e7b11aaff360facbce)() const = &::clang::ObjCObjectType::isObjCClass;
    bool  (::clang::ObjCObjectType::*method_pointer_20a58c5efc4f57d6b08d6727a79d3245)() const = &::clang::ObjCObjectType::isObjCId;
    bool  (::clang::ObjCObjectType::*method_pointer_acd74d85133659e7acb2f8a1d96a37e6)() const = &::clang::ObjCObjectType::isObjCQualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_7563da80fed8546092b00882206c9a49)() const = &::clang::ObjCObjectType::isObjCQualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_2d25e89386a85146834000b1c98d2485)() const = &::clang::ObjCObjectType::isObjCUnqualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_86c851b2c2655c6f8ad634f6d147241f)() const = &::clang::ObjCObjectType::isObjCUnqualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_4160b2e7504757339012a9656580a9a4)() const = &::clang::ObjCObjectType::isObjCUnqualifiedIdOrClass;
    bool  (::clang::ObjCObjectType::*method_pointer_aeb1d98f7fbc5c4cb989fd86a9b70dea)() const = &::clang::ObjCObjectType::isSpecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_25e16c2a1ab45afbbef171aaeeb44cb9)() const = &::clang::ObjCObjectType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_28f444ecd99d50bda6ae7bd64146e32e)() const = &::clang::ObjCObjectType::isSugared;
    bool  (::clang::ObjCObjectType::*method_pointer_5453e42217ca515b8203d45fe05e6aaa)() const = &::clang::ObjCObjectType::isUnspecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_7f727ed8ad575313beaf530418a17867)() const = &::clang::ObjCObjectType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_cf89505fe1c05c159c3fd5966972dd9f)() const = &::clang::ObjCObjectType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectType, autowig::HeldType< class ::clang::ObjCObjectType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3980f13801db50f498b55d818463d500("ObjCObjectType", "", boost::python::no_init);
    class_3980f13801db50f498b55d818463d500.def("classof", method_pointer_2e702757538b553488ff1a755f04eccf, "");
    class_3980f13801db50f498b55d818463d500.def("get_interface", method_pointer_70081328148550d5ba91e3fab8cb2b65, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_num_protocols", method_pointer_5cca9064ee855ab2a12001bb815a4183, "");
    class_3980f13801db50f498b55d818463d500.def("get_protocol", method_pointer_3d5e574f5d3058cca78f0023f6bc25a9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type", method_pointer_a0c21dd58952519b9782b3d6383ca94c, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type_as_written", method_pointer_ebdd4cc6ad7c5f9c9107e6f1d643018a, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_class", method_pointer_b970dc8e421a57e7b11aaff360facbce, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_id", method_pointer_20a58c5efc4f57d6b08d6727a79d3245, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_class", method_pointer_acd74d85133659e7acb2f8a1d96a37e6, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_id", method_pointer_7563da80fed8546092b00882206c9a49, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_class", method_pointer_2d25e89386a85146834000b1c98d2485, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id", method_pointer_86c851b2c2655c6f8ad634f6d147241f, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id_or_class", method_pointer_4160b2e7504757339012a9656580a9a4, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized", method_pointer_aeb1d98f7fbc5c4cb989fd86a9b70dea, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized_as_written", method_pointer_25e16c2a1ab45afbbef171aaeeb44cb9, "");
    class_3980f13801db50f498b55d818463d500.def("is_sugared", method_pointer_28f444ecd99d50bda6ae7bd64146e32e, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized", method_pointer_5453e42217ca515b8203d45fe05e6aaa, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized_as_written", method_pointer_7f727ed8ad575313beaf530418a17867, "");
    class_3980f13801db50f498b55d818463d500.def("qual_empty", method_pointer_cf89505fe1c05c159c3fd5966972dd9f, "");
    class_3980f13801db50f498b55d818463d500.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectType >, autowig::HeldType< class ::clang::Type > >();
    }

}