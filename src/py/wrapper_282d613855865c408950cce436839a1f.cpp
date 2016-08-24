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
    bool  (*method_pointer_be2cee16c3bc5f1f9238806acbbb953c)(class ::clang::Type  const *) = ::clang::ObjCObjectPointerType::classof;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_14e3ab6bd5675ae9a6438fb2bd0289dd)() const = &::clang::ObjCObjectPointerType::desugar;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectPointerType::*method_pointer_a6dfc8d8dfd85a319c4a4de9a67628da)() const = &::clang::ObjCObjectPointerType::getInterfaceDecl;
    class ::clang::ObjCInterfaceType  const * (::clang::ObjCObjectPointerType::*method_pointer_bf222edcb2bd5d5bba4b3ebc41b9d8bd)() const = &::clang::ObjCObjectPointerType::getInterfaceType;
    unsigned int  (::clang::ObjCObjectPointerType::*method_pointer_269099ae9ff157bf9b9d2a26beabd9f5)() const = &::clang::ObjCObjectPointerType::getNumProtocols;
    class ::clang::ObjCObjectType  const * (::clang::ObjCObjectPointerType::*method_pointer_fd80114059da52f79f3c07a809c9982b)() const = &::clang::ObjCObjectPointerType::getObjectType;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_5f5b16783fcc53eeb59050eb50e5efa9)() const = &::clang::ObjCObjectPointerType::getPointeeType;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectPointerType::*method_pointer_8fcc7364e0c55c2a9358c2317c9826ab)(unsigned int ) const = &::clang::ObjCObjectPointerType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_7cab12b27b345dfbaf059b2a34a9671f)() const = &::clang::ObjCObjectPointerType::getSuperClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_66a86482d94b5b5b910807da0e7f6b04)() const = &::clang::ObjCObjectPointerType::isKindOfType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_0adc5c8f98f55aaf9a7b0cad7053cdae)() const = &::clang::ObjCObjectPointerType::isObjCClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_6712b18f1db45bdf9096c1a654603ce7)() const = &::clang::ObjCObjectPointerType::isObjCIdOrClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_d5a4e2ec32415d7c995586889a2c1f28)() const = &::clang::ObjCObjectPointerType::isObjCIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_9d7b4f6292e55696aadb99d18f14f63a)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_3fcf7c9b696f52ed8d0e6b07074164e2)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_5d51284b130f5dbc8d324a250ed00a2d)() const = &::clang::ObjCObjectPointerType::isSpecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_2ffe56c7e744569890b4a1c1640d95f9)() const = &::clang::ObjCObjectPointerType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_9c7c4733924a51e082ebb2be3cfb24cf)() const = &::clang::ObjCObjectPointerType::isSugared;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_d41ac49192de52639b5c114351c31e16)() const = &::clang::ObjCObjectPointerType::isUnspecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_9d0735cf7df553d28d924530bb91c46b)() const = &::clang::ObjCObjectPointerType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_9b435ab0a1f451c29bdc7023c7de7dac)() const = &::clang::ObjCObjectPointerType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectPointerType, autowig::HeldType< class ::clang::ObjCObjectPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_282d613855865c408950cce436839a1f("ObjCObjectPointerType", "", boost::python::no_init);
    class_282d613855865c408950cce436839a1f.def("classof", method_pointer_be2cee16c3bc5f1f9238806acbbb953c, "");
    class_282d613855865c408950cce436839a1f.def("desugar", method_pointer_14e3ab6bd5675ae9a6438fb2bd0289dd, "");
    class_282d613855865c408950cce436839a1f.def("get_interface_decl", method_pointer_a6dfc8d8dfd85a319c4a4de9a67628da, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_interface_type", method_pointer_bf222edcb2bd5d5bba4b3ebc41b9d8bd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_num_protocols", method_pointer_269099ae9ff157bf9b9d2a26beabd9f5, "");
    class_282d613855865c408950cce436839a1f.def("get_object_type", method_pointer_fd80114059da52f79f3c07a809c9982b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_pointee_type", method_pointer_5f5b16783fcc53eeb59050eb50e5efa9, "");
    class_282d613855865c408950cce436839a1f.def("get_protocol", method_pointer_8fcc7364e0c55c2a9358c2317c9826ab, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_super_class_type", method_pointer_7cab12b27b345dfbaf059b2a34a9671f, "");
    class_282d613855865c408950cce436839a1f.def("is_kind_of_type", method_pointer_66a86482d94b5b5b910807da0e7f6b04, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_class_type", method_pointer_0adc5c8f98f55aaf9a7b0cad7053cdae, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_or_class_type", method_pointer_6712b18f1db45bdf9096c1a654603ce7, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_type", method_pointer_d5a4e2ec32415d7c995586889a2c1f28, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_class_type", method_pointer_9d7b4f6292e55696aadb99d18f14f63a, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_id_type", method_pointer_3fcf7c9b696f52ed8d0e6b07074164e2, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized", method_pointer_5d51284b130f5dbc8d324a250ed00a2d, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized_as_written", method_pointer_2ffe56c7e744569890b4a1c1640d95f9, "");
    class_282d613855865c408950cce436839a1f.def("is_sugared", method_pointer_9c7c4733924a51e082ebb2be3cfb24cf, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized", method_pointer_d41ac49192de52639b5c114351c31e16, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized_as_written", method_pointer_9d0735cf7df553d28d924530bb91c46b, "");
    class_282d613855865c408950cce436839a1f.def("qual_empty", method_pointer_9b435ab0a1f451c29bdc7023c7de7dac, "");
    class_282d613855865c408950cce436839a1f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}