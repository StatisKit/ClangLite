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
    bool  (*method_pointer_95bc40790e3057af89e137ec7d7257f6)(class ::clang::Type  const *) = ::clang::ObjCObjectPointerType::classof;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectPointerType::*method_pointer_73d0bfc303785eee8ec328109c9fdb84)() const = &::clang::ObjCObjectPointerType::getInterfaceDecl;
    class ::clang::ObjCInterfaceType  const * (::clang::ObjCObjectPointerType::*method_pointer_291f3c54f5b459c2829a5f8ed85ed11e)() const = &::clang::ObjCObjectPointerType::getInterfaceType;
    unsigned int  (::clang::ObjCObjectPointerType::*method_pointer_8bc3a8800a3456ea9cc89324b662ba80)() const = &::clang::ObjCObjectPointerType::getNumProtocols;
    class ::clang::ObjCObjectType  const * (::clang::ObjCObjectPointerType::*method_pointer_c4d0ed7c85e8556882115f9a4aa11e23)() const = &::clang::ObjCObjectPointerType::getObjectType;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectPointerType::*method_pointer_6e29f70181925bc1bbed42f4c6ac4674)(unsigned int ) const = &::clang::ObjCObjectPointerType::getProtocol;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_ede37d744a0953c2a4836002c08ab6d8)() const = &::clang::ObjCObjectPointerType::isKindOfType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_e15eec2fc5765ce58f8b259cdb0bb9e1)() const = &::clang::ObjCObjectPointerType::isObjCClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_44a603244b5a503cbda485d50c7f3ee7)() const = &::clang::ObjCObjectPointerType::isObjCIdOrClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_0dace47b09775e2f964a80a41e8bef0d)() const = &::clang::ObjCObjectPointerType::isObjCIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_3cb0f03a051a5bd5b3d1f73b698d03b2)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_8014024cce76537995f07016b75498b1)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_737771e8ccc1574985f5faf4679a1954)() const = &::clang::ObjCObjectPointerType::isSpecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_0f70fbef86025f6988870f6daab6e080)() const = &::clang::ObjCObjectPointerType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_a904becca8dc546f8166297fa166d6c1)() const = &::clang::ObjCObjectPointerType::isSugared;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_45bcd70a0a365093b9cc7cc5a8c86e23)() const = &::clang::ObjCObjectPointerType::isUnspecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_45abfeee0e5153fab73a2e06a821692c)() const = &::clang::ObjCObjectPointerType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_e38889d4246e533abed2d560001ff47f)() const = &::clang::ObjCObjectPointerType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectPointerType, autowig::HeldType< class ::clang::ObjCObjectPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_282d613855865c408950cce436839a1f("ObjCObjectPointerType", "", boost::python::no_init);
    class_282d613855865c408950cce436839a1f.def("classof", method_pointer_95bc40790e3057af89e137ec7d7257f6, "");
    class_282d613855865c408950cce436839a1f.def("get_interface_decl", method_pointer_73d0bfc303785eee8ec328109c9fdb84, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_interface_type", method_pointer_291f3c54f5b459c2829a5f8ed85ed11e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_num_protocols", method_pointer_8bc3a8800a3456ea9cc89324b662ba80, "");
    class_282d613855865c408950cce436839a1f.def("get_object_type", method_pointer_c4d0ed7c85e8556882115f9a4aa11e23, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_protocol", method_pointer_6e29f70181925bc1bbed42f4c6ac4674, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("is_kind_of_type", method_pointer_ede37d744a0953c2a4836002c08ab6d8, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_class_type", method_pointer_e15eec2fc5765ce58f8b259cdb0bb9e1, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_or_class_type", method_pointer_44a603244b5a503cbda485d50c7f3ee7, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_type", method_pointer_0dace47b09775e2f964a80a41e8bef0d, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_class_type", method_pointer_3cb0f03a051a5bd5b3d1f73b698d03b2, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_id_type", method_pointer_8014024cce76537995f07016b75498b1, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized", method_pointer_737771e8ccc1574985f5faf4679a1954, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized_as_written", method_pointer_0f70fbef86025f6988870f6daab6e080, "");
    class_282d613855865c408950cce436839a1f.def("is_sugared", method_pointer_a904becca8dc546f8166297fa166d6c1, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized", method_pointer_45bcd70a0a365093b9cc7cc5a8c86e23, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized_as_written", method_pointer_45abfeee0e5153fab73a2e06a821692c, "");
    class_282d613855865c408950cce436839a1f.def("qual_empty", method_pointer_e38889d4246e533abed2d560001ff47f, "");
    class_282d613855865c408950cce436839a1f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}