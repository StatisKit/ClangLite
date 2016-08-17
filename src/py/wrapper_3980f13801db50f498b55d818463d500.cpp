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
    bool  (::clang::ObjCObjectType::*method_pointer_a20457a248065d6d8485e42a141634b5)() const = &::clang::ObjCObjectType::isKindOfType;
    bool  (::clang::ObjCObjectType::*method_pointer_7e0bb716f52a5f3abe1db1aefbbe8351)() const = &::clang::ObjCObjectType::isSpecializedAsWritten;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectType::*method_pointer_fda3572d96705824a4c1c0b93accf519)() const = &::clang::ObjCObjectType::getInterface;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectType::*method_pointer_c2ef352b89455659bc110ee8a455b06a)(unsigned int ) const = &::clang::ObjCObjectType::getProtocol;
    bool  (::clang::ObjCObjectType::*method_pointer_c85c4f420da5528d99e4b8c8bb7cf8bd)() const = &::clang::ObjCObjectType::isObjCId;
    bool  (::clang::ObjCObjectType::*method_pointer_3316b60a295d5411bcd45515c15ab40b)() const = &::clang::ObjCObjectType::isObjCUnqualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_f9c1b3d20fb75584b0a3fe46454019e1)() const = &::clang::ObjCObjectType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_87c82a60ba0152129b5ed7d454c475bd)() const = &::clang::ObjCObjectType::isSugared;
    bool  (::clang::ObjCObjectType::*method_pointer_b7adec56e2c25fad90172ed9e52530cd)() const = &::clang::ObjCObjectType::qual_empty;
    bool  (::clang::ObjCObjectType::*method_pointer_990cb2a748175b7586ce194f49e393e8)() const = &::clang::ObjCObjectType::isSpecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_581b2e7ec2cb5b90bf982fcac38b1f0e)() const = &::clang::ObjCObjectType::isUnspecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_6b62e74b15a259a78cb044cd359250d9)() const = &::clang::ObjCObjectType::isObjCUnqualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_126b92775340523682437cea4ae40571)() const = &::clang::ObjCObjectType::isObjCQualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_7975062588e25a91bbee50b33a295df0)() const = &::clang::ObjCObjectType::isObjCQualifiedId;
    unsigned int  (::clang::ObjCObjectType::*method_pointer_00d6fa0d40035040a93899aa9b20759f)() const = &::clang::ObjCObjectType::getNumProtocols;
    bool  (::clang::ObjCObjectType::*method_pointer_272406c73ce15263abbf1c7140dd6105)() const = &::clang::ObjCObjectType::isObjCUnqualifiedIdOrClass;
    bool  (::clang::ObjCObjectType::*method_pointer_0e412a5432dd5fa4a1970ad9cd6d6f28)() const = &::clang::ObjCObjectType::isObjCClass;
    bool  (::clang::ObjCObjectType::*method_pointer_bd0ba45e24be5c10b0dd00f826a74750)() const = &::clang::ObjCObjectType::isKindOfTypeAsWritten;
    bool  (*method_pointer_fb302c85168e5682b5680c18853e8177)(class ::clang::Type  const *) = ::clang::ObjCObjectType::classof;
    boost::python::class_< class ::clang::ObjCObjectType, autowig::HeldType< class ::clang::ObjCObjectType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3980f13801db50f498b55d818463d500("ObjCObjectType", "", boost::python::no_init);
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type", method_pointer_a20457a248065d6d8485e42a141634b5, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized_as_written", method_pointer_7e0bb716f52a5f3abe1db1aefbbe8351, "");
    class_3980f13801db50f498b55d818463d500.def("get_interface", method_pointer_fda3572d96705824a4c1c0b93accf519, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_protocol", method_pointer_c2ef352b89455659bc110ee8a455b06a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_id", method_pointer_c85c4f420da5528d99e4b8c8bb7cf8bd, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_class", method_pointer_3316b60a295d5411bcd45515c15ab40b, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized_as_written", method_pointer_f9c1b3d20fb75584b0a3fe46454019e1, "");
    class_3980f13801db50f498b55d818463d500.def("is_sugared", method_pointer_87c82a60ba0152129b5ed7d454c475bd, "");
    class_3980f13801db50f498b55d818463d500.def("qual_empty", method_pointer_b7adec56e2c25fad90172ed9e52530cd, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized", method_pointer_990cb2a748175b7586ce194f49e393e8, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized", method_pointer_581b2e7ec2cb5b90bf982fcac38b1f0e, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id", method_pointer_6b62e74b15a259a78cb044cd359250d9, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_class", method_pointer_126b92775340523682437cea4ae40571, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_id", method_pointer_7975062588e25a91bbee50b33a295df0, "");
    class_3980f13801db50f498b55d818463d500.def("get_num_protocols", method_pointer_00d6fa0d40035040a93899aa9b20759f, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id_or_class", method_pointer_272406c73ce15263abbf1c7140dd6105, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_class", method_pointer_0e412a5432dd5fa4a1970ad9cd6d6f28, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type_as_written", method_pointer_bd0ba45e24be5c10b0dd00f826a74750, "");
    class_3980f13801db50f498b55d818463d500.def("classof", method_pointer_fb302c85168e5682b5680c18853e8177, "");
    class_3980f13801db50f498b55d818463d500.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectType >, autowig::HeldType< class ::clang::Type > >();
    }

}