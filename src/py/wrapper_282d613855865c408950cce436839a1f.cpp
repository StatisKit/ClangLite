#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_282d613855865c408950cce436839a1f()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_0d2fbafa300d5701a67fc937d7bd7bae)(class ::clang::Type  const *) = ::clang::ObjCObjectPointerType::classof;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_33236bb7ab9a54649830af41a92b0cc0)() const = &::clang::ObjCObjectPointerType::desugar;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectPointerType::*method_pointer_4fc96758a6e55f9eac8fdeb292085a3a)() const = &::clang::ObjCObjectPointerType::getInterfaceDecl;
    class ::clang::ObjCInterfaceType  const * (::clang::ObjCObjectPointerType::*method_pointer_7345727713d752b5a60241c6d5f63bea)() const = &::clang::ObjCObjectPointerType::getInterfaceType;
    unsigned int  (::clang::ObjCObjectPointerType::*method_pointer_4edfa6bce4e552fc9e9659406b38b7b2)() const = &::clang::ObjCObjectPointerType::getNumProtocols;
    class ::clang::ObjCObjectType  const * (::clang::ObjCObjectPointerType::*method_pointer_b83a0fc68300525ca0a55c388c380572)() const = &::clang::ObjCObjectPointerType::getObjectType;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_96527cad174d5be281340cdf3dc8664c)() const = &::clang::ObjCObjectPointerType::getPointeeType;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectPointerType::*method_pointer_11d27977a64556829d6bd5ab85e7a30a)(unsigned int ) const = &::clang::ObjCObjectPointerType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_309495b40b695e30812d1da1ef835c23)() const = &::clang::ObjCObjectPointerType::getSuperClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_a66be406bcb75f08b5dd5c5106d50806)() const = &::clang::ObjCObjectPointerType::isKindOfType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_30368f828bbd562196a3c96b849b417c)() const = &::clang::ObjCObjectPointerType::isObjCClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_651c6593fc915c68b4a405c4032b2317)() const = &::clang::ObjCObjectPointerType::isObjCIdOrClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_1fb508c0fdfe5cba9e9810b030f9ddea)() const = &::clang::ObjCObjectPointerType::isObjCIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_0dca2caa3b115ee892dbd0e56e811fd6)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_09e158e2ade85d03926c55120fe4211c)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_d0c3fa21544e56ca892b85d510e5dd8b)() const = &::clang::ObjCObjectPointerType::isSpecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_f9964ff3849156e7a469bec97d2bf3a2)() const = &::clang::ObjCObjectPointerType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_5c3708c723055ef189bb881086a83800)() const = &::clang::ObjCObjectPointerType::isSugared;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_d4f9ff614da85dcc8d67edbcfb77e089)() const = &::clang::ObjCObjectPointerType::isUnspecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_a3c19d18341f53889dd067a75535caca)() const = &::clang::ObjCObjectPointerType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_c273a0a1f92955afb849ebeb07d1728a)() const = &::clang::ObjCObjectPointerType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectPointerType, autowig::HeldType< class ::clang::ObjCObjectPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_282d613855865c408950cce436839a1f("ObjCObjectPointerType", "", boost::python::no_init);
    class_282d613855865c408950cce436839a1f.def("classof", method_pointer_0d2fbafa300d5701a67fc937d7bd7bae, "");
    class_282d613855865c408950cce436839a1f.def("desugar", method_pointer_33236bb7ab9a54649830af41a92b0cc0, "");
    class_282d613855865c408950cce436839a1f.def("get_interface_decl", method_pointer_4fc96758a6e55f9eac8fdeb292085a3a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_interface_type", method_pointer_7345727713d752b5a60241c6d5f63bea, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_num_protocols", method_pointer_4edfa6bce4e552fc9e9659406b38b7b2, "");
    class_282d613855865c408950cce436839a1f.def("get_object_type", method_pointer_b83a0fc68300525ca0a55c388c380572, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_pointee_type", method_pointer_96527cad174d5be281340cdf3dc8664c, "");
    class_282d613855865c408950cce436839a1f.def("get_protocol", method_pointer_11d27977a64556829d6bd5ab85e7a30a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_super_class_type", method_pointer_309495b40b695e30812d1da1ef835c23, "");
    class_282d613855865c408950cce436839a1f.def("is_kind_of_type", method_pointer_a66be406bcb75f08b5dd5c5106d50806, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_class_type", method_pointer_30368f828bbd562196a3c96b849b417c, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_or_class_type", method_pointer_651c6593fc915c68b4a405c4032b2317, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_type", method_pointer_1fb508c0fdfe5cba9e9810b030f9ddea, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_class_type", method_pointer_0dca2caa3b115ee892dbd0e56e811fd6, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_id_type", method_pointer_09e158e2ade85d03926c55120fe4211c, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized", method_pointer_d0c3fa21544e56ca892b85d510e5dd8b, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized_as_written", method_pointer_f9964ff3849156e7a469bec97d2bf3a2, "");
    class_282d613855865c408950cce436839a1f.def("is_sugared", method_pointer_5c3708c723055ef189bb881086a83800, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized", method_pointer_d4f9ff614da85dcc8d67edbcfb77e089, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized_as_written", method_pointer_a3c19d18341f53889dd067a75535caca, "");
    class_282d613855865c408950cce436839a1f.def("qual_empty", method_pointer_c273a0a1f92955afb849ebeb07d1728a, "");
    class_282d613855865c408950cce436839a1f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}