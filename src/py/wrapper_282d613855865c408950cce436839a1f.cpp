#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_282d613855865c408950cce436839a1f()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_24aa2d51bee0569d94e23c299118c138)(class ::clang::Type  const *) = ::clang::ObjCObjectPointerType::classof;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectPointerType::*method_pointer_d7938b9f9ceb5d00bed8a836989661e7)() const = &::clang::ObjCObjectPointerType::getInterfaceDecl;
    class ::clang::ObjCInterfaceType  const * (::clang::ObjCObjectPointerType::*method_pointer_6c2ce3f1460b54b4a25bffe548ae6497)() const = &::clang::ObjCObjectPointerType::getInterfaceType;
    unsigned int  (::clang::ObjCObjectPointerType::*method_pointer_4439aa5bcac9564592f01042f79550e8)() const = &::clang::ObjCObjectPointerType::getNumProtocols;
    class ::clang::ObjCObjectType  const * (::clang::ObjCObjectPointerType::*method_pointer_a70c65b7f3b55d06a919326ad76d34be)() const = &::clang::ObjCObjectPointerType::getObjectType;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectPointerType::*method_pointer_ca4045eaa7115485ae0d1f3575f65072)(unsigned int ) const = &::clang::ObjCObjectPointerType::getProtocol;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_cd027f2b46a75e338124160c31a67254)() const = &::clang::ObjCObjectPointerType::isKindOfType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_a1d75c5d724d528782970abcdcf601e7)() const = &::clang::ObjCObjectPointerType::isObjCClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_e77d89bc4a805ac6afaf3fb6f8b9bfc7)() const = &::clang::ObjCObjectPointerType::isObjCIdOrClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_9a3429a4d83951958d120e8b5f1bbe39)() const = &::clang::ObjCObjectPointerType::isObjCIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_167e39320afd5cdda0a6fb41c2357aad)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_9e778fb19ea35997a40d440ff4212ef3)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_0e21748e9453546b83700464c06e3b20)() const = &::clang::ObjCObjectPointerType::isSpecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_31bf9fea328a5c07bb3f0a09c812a4be)() const = &::clang::ObjCObjectPointerType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_8cdb691eef02524eb92ea4e9064c5cdf)() const = &::clang::ObjCObjectPointerType::isSugared;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_efb507bd008350a5a456c04c5c976f26)() const = &::clang::ObjCObjectPointerType::isUnspecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_587a2bdd0192564995b166e85f678c49)() const = &::clang::ObjCObjectPointerType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_43a33b7b2e71523fad64bb018ef15386)() const = &::clang::ObjCObjectPointerType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectPointerType, autowig::HeldType< class ::clang::ObjCObjectPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_282d613855865c408950cce436839a1f("ObjCObjectPointerType", "", boost::python::no_init);
    class_282d613855865c408950cce436839a1f.def("classof", method_pointer_24aa2d51bee0569d94e23c299118c138, "");
    class_282d613855865c408950cce436839a1f.def("get_interface_decl", method_pointer_d7938b9f9ceb5d00bed8a836989661e7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_interface_type", method_pointer_6c2ce3f1460b54b4a25bffe548ae6497, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_num_protocols", method_pointer_4439aa5bcac9564592f01042f79550e8, "");
    class_282d613855865c408950cce436839a1f.def("get_object_type", method_pointer_a70c65b7f3b55d06a919326ad76d34be, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_protocol", method_pointer_ca4045eaa7115485ae0d1f3575f65072, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("is_kind_of_type", method_pointer_cd027f2b46a75e338124160c31a67254, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_class_type", method_pointer_a1d75c5d724d528782970abcdcf601e7, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_or_class_type", method_pointer_e77d89bc4a805ac6afaf3fb6f8b9bfc7, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_type", method_pointer_9a3429a4d83951958d120e8b5f1bbe39, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_class_type", method_pointer_167e39320afd5cdda0a6fb41c2357aad, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_id_type", method_pointer_9e778fb19ea35997a40d440ff4212ef3, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized", method_pointer_0e21748e9453546b83700464c06e3b20, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized_as_written", method_pointer_31bf9fea328a5c07bb3f0a09c812a4be, "");
    class_282d613855865c408950cce436839a1f.def("is_sugared", method_pointer_8cdb691eef02524eb92ea4e9064c5cdf, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized", method_pointer_efb507bd008350a5a456c04c5c976f26, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized_as_written", method_pointer_587a2bdd0192564995b166e85f678c49, "");
    class_282d613855865c408950cce436839a1f.def("qual_empty", method_pointer_43a33b7b2e71523fad64bb018ef15386, "");
    class_282d613855865c408950cce436839a1f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}