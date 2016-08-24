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
    bool  (*method_pointer_0415aabe79545dbab8b6ba7855d6ddaa)(class ::clang::Type  const *) = ::clang::ObjCObjectType::classof;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_82fc68f5c5705e03bc5862d10ca51bb7)() const = &::clang::ObjCObjectType::desugar;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_a0841f60bc6b5795ad1f42e93025f505)() const = &::clang::ObjCObjectType::getBaseType;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectType::*method_pointer_08213104519a586890ec5b3f17017da7)() const = &::clang::ObjCObjectType::getInterface;
    unsigned int  (::clang::ObjCObjectType::*method_pointer_fe37be0c41c45926bcbda7a8c63f69c1)() const = &::clang::ObjCObjectType::getNumProtocols;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectType::*method_pointer_d39ff69efd335c3dadf85bdbd2fbafe8)(unsigned int ) const = &::clang::ObjCObjectType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_96bdd193613451489cff562821dc7739)() const = &::clang::ObjCObjectType::getSuperClassType;
    bool  (::clang::ObjCObjectType::*method_pointer_3d7d7b5927035f9bad513a8e3b5a87cb)() const = &::clang::ObjCObjectType::isKindOfType;
    bool  (::clang::ObjCObjectType::*method_pointer_ce89d5631e6454f8a8370f8b854bdb5d)() const = &::clang::ObjCObjectType::isKindOfTypeAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_888220b101a75f568fa8bfaf72ba9226)() const = &::clang::ObjCObjectType::isObjCClass;
    bool  (::clang::ObjCObjectType::*method_pointer_7b89077b70a85dbbb94b375d77e6a290)() const = &::clang::ObjCObjectType::isObjCId;
    bool  (::clang::ObjCObjectType::*method_pointer_8c2f1483470059f498b83d8731cdc626)() const = &::clang::ObjCObjectType::isObjCQualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_7a36770a271b579b9ed390f3c66b138d)() const = &::clang::ObjCObjectType::isObjCQualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_f355036176005e5c91d14f5aeb537942)() const = &::clang::ObjCObjectType::isObjCUnqualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_d1150938d94c5ee8866839f89cf9b1a4)() const = &::clang::ObjCObjectType::isObjCUnqualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_463c0f4d4d2951c6a888c06b86f22659)() const = &::clang::ObjCObjectType::isObjCUnqualifiedIdOrClass;
    bool  (::clang::ObjCObjectType::*method_pointer_63088b55147c54fcbc07af6d7aeba992)() const = &::clang::ObjCObjectType::isSpecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_5b1287e3ddcb56ab865ad4ba184a8873)() const = &::clang::ObjCObjectType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_5c36f56289f95863bbca35ba1baa861b)() const = &::clang::ObjCObjectType::isSugared;
    bool  (::clang::ObjCObjectType::*method_pointer_0e3e69609586560bb41f5fded3798a38)() const = &::clang::ObjCObjectType::isUnspecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_b09562e016de56228f5f2ff318903fdb)() const = &::clang::ObjCObjectType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_0b4c70c41b8254d08345ad5e936c7efc)() const = &::clang::ObjCObjectType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectType, autowig::HeldType< class ::clang::ObjCObjectType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3980f13801db50f498b55d818463d500("ObjCObjectType", "", boost::python::no_init);
    class_3980f13801db50f498b55d818463d500.def("classof", method_pointer_0415aabe79545dbab8b6ba7855d6ddaa, "");
    class_3980f13801db50f498b55d818463d500.def("desugar", method_pointer_82fc68f5c5705e03bc5862d10ca51bb7, "");
    class_3980f13801db50f498b55d818463d500.def("get_base_type", method_pointer_a0841f60bc6b5795ad1f42e93025f505, "");
    class_3980f13801db50f498b55d818463d500.def("get_interface", method_pointer_08213104519a586890ec5b3f17017da7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_num_protocols", method_pointer_fe37be0c41c45926bcbda7a8c63f69c1, "");
    class_3980f13801db50f498b55d818463d500.def("get_protocol", method_pointer_d39ff69efd335c3dadf85bdbd2fbafe8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_super_class_type", method_pointer_96bdd193613451489cff562821dc7739, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type", method_pointer_3d7d7b5927035f9bad513a8e3b5a87cb, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type_as_written", method_pointer_ce89d5631e6454f8a8370f8b854bdb5d, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_class", method_pointer_888220b101a75f568fa8bfaf72ba9226, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_id", method_pointer_7b89077b70a85dbbb94b375d77e6a290, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_class", method_pointer_8c2f1483470059f498b83d8731cdc626, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_id", method_pointer_7a36770a271b579b9ed390f3c66b138d, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_class", method_pointer_f355036176005e5c91d14f5aeb537942, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id", method_pointer_d1150938d94c5ee8866839f89cf9b1a4, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id_or_class", method_pointer_463c0f4d4d2951c6a888c06b86f22659, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized", method_pointer_63088b55147c54fcbc07af6d7aeba992, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized_as_written", method_pointer_5b1287e3ddcb56ab865ad4ba184a8873, "");
    class_3980f13801db50f498b55d818463d500.def("is_sugared", method_pointer_5c36f56289f95863bbca35ba1baa861b, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized", method_pointer_0e3e69609586560bb41f5fded3798a38, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized_as_written", method_pointer_b09562e016de56228f5f2ff318903fdb, "");
    class_3980f13801db50f498b55d818463d500.def("qual_empty", method_pointer_0b4c70c41b8254d08345ad5e936c7efc, "");
    class_3980f13801db50f498b55d818463d500.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectType >, autowig::HeldType< class ::clang::Type > >();
    }

}