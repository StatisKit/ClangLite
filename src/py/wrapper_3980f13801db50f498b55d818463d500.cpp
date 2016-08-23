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
    bool  (*method_pointer_5eb04660828f5a8ba04141627611bb76)(class ::clang::Type  const *) = ::clang::ObjCObjectType::classof;
    unsigned int  (::clang::ObjCObjectType::*method_pointer_58b5a178de465827be3478473f6c840b)() const = &::clang::ObjCObjectType::getNumProtocols;
    bool  (::clang::ObjCObjectType::*method_pointer_e072fbf79924591f9d8b4456661ef719)() const = &::clang::ObjCObjectType::isKindOfType;
    bool  (::clang::ObjCObjectType::*method_pointer_877bf9bc316258e993d6180c8bedc492)() const = &::clang::ObjCObjectType::isKindOfTypeAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_4c51f8dc849d5fd1b173ded2b1ea3d6f)() const = &::clang::ObjCObjectType::isObjCClass;
    bool  (::clang::ObjCObjectType::*method_pointer_f714f9ff9b6d5bb59b39d42290c05139)() const = &::clang::ObjCObjectType::isObjCId;
    bool  (::clang::ObjCObjectType::*method_pointer_21861a88aef8516e9f1f04bb016293a1)() const = &::clang::ObjCObjectType::isObjCQualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_75e7416ea3285daaac30a4fbc2526cdc)() const = &::clang::ObjCObjectType::isObjCQualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_66c1c30a6290518fa57103065a6d1d4f)() const = &::clang::ObjCObjectType::isObjCUnqualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_6776c820ad845d2a813b1b7433b41f66)() const = &::clang::ObjCObjectType::isObjCUnqualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_f1ca40121d6d5fcdaafd6f0b28d08254)() const = &::clang::ObjCObjectType::isObjCUnqualifiedIdOrClass;
    bool  (::clang::ObjCObjectType::*method_pointer_4e4f21aa753a528c8322b14cd5c162b8)() const = &::clang::ObjCObjectType::isSpecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_c43fcbc60fc75de08830bba381fe5670)() const = &::clang::ObjCObjectType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_a8470e5c73e75b88b640ede0f093a3c7)() const = &::clang::ObjCObjectType::isSugared;
    bool  (::clang::ObjCObjectType::*method_pointer_fbf9591f5b1a5d24822cba87bd79dd4e)() const = &::clang::ObjCObjectType::isUnspecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_1b3aef3bba705dea9e069f4eb0459f31)() const = &::clang::ObjCObjectType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_ecc0e4c3ca02588281029dd5fb6beef8)() const = &::clang::ObjCObjectType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectType, autowig::HeldType< class ::clang::ObjCObjectType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3980f13801db50f498b55d818463d500("ObjCObjectType", "", boost::python::no_init);
    class_3980f13801db50f498b55d818463d500.def("classof", method_pointer_5eb04660828f5a8ba04141627611bb76, "");
    class_3980f13801db50f498b55d818463d500.def("get_num_protocols", method_pointer_58b5a178de465827be3478473f6c840b, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type", method_pointer_e072fbf79924591f9d8b4456661ef719, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type_as_written", method_pointer_877bf9bc316258e993d6180c8bedc492, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_class", method_pointer_4c51f8dc849d5fd1b173ded2b1ea3d6f, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_id", method_pointer_f714f9ff9b6d5bb59b39d42290c05139, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_class", method_pointer_21861a88aef8516e9f1f04bb016293a1, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_id", method_pointer_75e7416ea3285daaac30a4fbc2526cdc, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_class", method_pointer_66c1c30a6290518fa57103065a6d1d4f, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id", method_pointer_6776c820ad845d2a813b1b7433b41f66, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id_or_class", method_pointer_f1ca40121d6d5fcdaafd6f0b28d08254, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized", method_pointer_4e4f21aa753a528c8322b14cd5c162b8, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized_as_written", method_pointer_c43fcbc60fc75de08830bba381fe5670, "");
    class_3980f13801db50f498b55d818463d500.def("is_sugared", method_pointer_a8470e5c73e75b88b640ede0f093a3c7, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized", method_pointer_fbf9591f5b1a5d24822cba87bd79dd4e, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized_as_written", method_pointer_1b3aef3bba705dea9e069f4eb0459f31, "");
    class_3980f13801db50f498b55d818463d500.def("qual_empty", method_pointer_ecc0e4c3ca02588281029dd5fb6beef8, "");
    class_3980f13801db50f498b55d818463d500.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectType >, autowig::HeldType< class ::clang::Type > >();
    }

}