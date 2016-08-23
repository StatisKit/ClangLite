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
    bool  (*method_pointer_2deefe819d505d4ba34c021406ecd85b)(class ::clang::Type  const *) = ::clang::ObjCObjectType::classof;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectType::*method_pointer_0afc38e5191252d39be1a1d19d9b99fb)() const = &::clang::ObjCObjectType::getInterface;
    unsigned int  (::clang::ObjCObjectType::*method_pointer_c6e1048aa0a45839bcbeae504a3cc413)() const = &::clang::ObjCObjectType::getNumProtocols;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectType::*method_pointer_4fc701eb1e3d548ab8178478e02b7c8a)(unsigned int ) const = &::clang::ObjCObjectType::getProtocol;
    bool  (::clang::ObjCObjectType::*method_pointer_c345767e457c5475ba986e53be80f2a5)() const = &::clang::ObjCObjectType::isKindOfType;
    bool  (::clang::ObjCObjectType::*method_pointer_193b90f5f2585d9683a2afc23549769b)() const = &::clang::ObjCObjectType::isKindOfTypeAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_ed8668159bab547fbd36bdfb1fa2aa69)() const = &::clang::ObjCObjectType::isObjCClass;
    bool  (::clang::ObjCObjectType::*method_pointer_c066150b3b9259699dfa1facd43b10bc)() const = &::clang::ObjCObjectType::isObjCId;
    bool  (::clang::ObjCObjectType::*method_pointer_c61666a75eaa550492e5e38812b3aab9)() const = &::clang::ObjCObjectType::isObjCQualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_7c1113440b0553d9b33b6f2874852bf8)() const = &::clang::ObjCObjectType::isObjCQualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_f01153271a055d12a13068cff1b0843b)() const = &::clang::ObjCObjectType::isObjCUnqualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_5a0711320f9b5d6b9d09d7d490a15308)() const = &::clang::ObjCObjectType::isObjCUnqualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_bdfc1b86834d5e3fbf40ff44a4341b3f)() const = &::clang::ObjCObjectType::isObjCUnqualifiedIdOrClass;
    bool  (::clang::ObjCObjectType::*method_pointer_ebabc94a1df15a59bb2f27df204b6c17)() const = &::clang::ObjCObjectType::isSpecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_82ab770af51b5a74877a446ba8a9bba6)() const = &::clang::ObjCObjectType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_b9c5ea97ddf3567abe6158252d1aafd9)() const = &::clang::ObjCObjectType::isSugared;
    bool  (::clang::ObjCObjectType::*method_pointer_88a1f0c1a5235f10905417b199b27a08)() const = &::clang::ObjCObjectType::isUnspecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_2694187b79ea5885a6a447f40e81fed7)() const = &::clang::ObjCObjectType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_a8df0ef4b636540cbf6c8f1e4bf176ab)() const = &::clang::ObjCObjectType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectType, autowig::HeldType< class ::clang::ObjCObjectType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3980f13801db50f498b55d818463d500("ObjCObjectType", "", boost::python::no_init);
    class_3980f13801db50f498b55d818463d500.def("classof", method_pointer_2deefe819d505d4ba34c021406ecd85b, "");
    class_3980f13801db50f498b55d818463d500.def("get_interface", method_pointer_0afc38e5191252d39be1a1d19d9b99fb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_num_protocols", method_pointer_c6e1048aa0a45839bcbeae504a3cc413, "");
    class_3980f13801db50f498b55d818463d500.def("get_protocol", method_pointer_4fc701eb1e3d548ab8178478e02b7c8a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type", method_pointer_c345767e457c5475ba986e53be80f2a5, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type_as_written", method_pointer_193b90f5f2585d9683a2afc23549769b, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_class", method_pointer_ed8668159bab547fbd36bdfb1fa2aa69, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_id", method_pointer_c066150b3b9259699dfa1facd43b10bc, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_class", method_pointer_c61666a75eaa550492e5e38812b3aab9, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_id", method_pointer_7c1113440b0553d9b33b6f2874852bf8, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_class", method_pointer_f01153271a055d12a13068cff1b0843b, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id", method_pointer_5a0711320f9b5d6b9d09d7d490a15308, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id_or_class", method_pointer_bdfc1b86834d5e3fbf40ff44a4341b3f, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized", method_pointer_ebabc94a1df15a59bb2f27df204b6c17, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized_as_written", method_pointer_82ab770af51b5a74877a446ba8a9bba6, "");
    class_3980f13801db50f498b55d818463d500.def("is_sugared", method_pointer_b9c5ea97ddf3567abe6158252d1aafd9, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized", method_pointer_88a1f0c1a5235f10905417b199b27a08, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized_as_written", method_pointer_2694187b79ea5885a6a447f40e81fed7, "");
    class_3980f13801db50f498b55d818463d500.def("qual_empty", method_pointer_a8df0ef4b636540cbf6c8f1e4bf176ab, "");
    class_3980f13801db50f498b55d818463d500.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectType >, autowig::HeldType< class ::clang::Type > >();
    }

}