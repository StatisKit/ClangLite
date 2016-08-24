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
    bool  (*method_pointer_e48dfb8f0d655036bcbc6763de4daf90)(class ::clang::Type  const *) = ::clang::ObjCObjectPointerType::classof;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_280c64d2025d519e993a4f6037300493)() const = &::clang::ObjCObjectPointerType::desugar;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectPointerType::*method_pointer_9c6d0951df2f53438515d393b8d8379c)() const = &::clang::ObjCObjectPointerType::getInterfaceDecl;
    class ::clang::ObjCInterfaceType  const * (::clang::ObjCObjectPointerType::*method_pointer_2fabe89add0c5449b9d4a9e37e1cb602)() const = &::clang::ObjCObjectPointerType::getInterfaceType;
    unsigned int  (::clang::ObjCObjectPointerType::*method_pointer_bf31dc7d4b095878aa6f26629384c265)() const = &::clang::ObjCObjectPointerType::getNumProtocols;
    class ::clang::ObjCObjectType  const * (::clang::ObjCObjectPointerType::*method_pointer_2aea4c948fc75718ba5436aa2adcee13)() const = &::clang::ObjCObjectPointerType::getObjectType;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_4faee23af5265579a5c3d6534a1dbd5b)() const = &::clang::ObjCObjectPointerType::getPointeeType;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectPointerType::*method_pointer_8d44519fddf75f8395a7c14eba46a15d)(unsigned int ) const = &::clang::ObjCObjectPointerType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_5844831fb9c0527098cd6044cdb067c0)() const = &::clang::ObjCObjectPointerType::getSuperClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_b95be39a7ee05c378ca0451627c3f9cc)() const = &::clang::ObjCObjectPointerType::isKindOfType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_a0b5638805eb5508b2648167021c55b9)() const = &::clang::ObjCObjectPointerType::isObjCClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_a1b8c02524855be892cb60cc3215433a)() const = &::clang::ObjCObjectPointerType::isObjCIdOrClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_e39926b24de85b30af91f5643d4766d7)() const = &::clang::ObjCObjectPointerType::isObjCIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_d5d315489177503e9169c9a734a8c750)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_f55f9558377756089f4af03ff76adb74)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_d3638149fa125e2cbd7ac64d4b0d40c3)() const = &::clang::ObjCObjectPointerType::isSpecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_d1bcd8cade3e5fd9bb7b45df7e9ba117)() const = &::clang::ObjCObjectPointerType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_ed1b622b94bf50e0ae4adfd8ae274b80)() const = &::clang::ObjCObjectPointerType::isSugared;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_84dbc0a65b9b56d89b7fa481fdad3e34)() const = &::clang::ObjCObjectPointerType::isUnspecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_bc3bebe277cf5e299574c8d839e8e5f2)() const = &::clang::ObjCObjectPointerType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_a274debd360c515990eb6d3a6009a5f0)() const = &::clang::ObjCObjectPointerType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectPointerType, autowig::HeldType< class ::clang::ObjCObjectPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_282d613855865c408950cce436839a1f("ObjCObjectPointerType", "", boost::python::no_init);
    class_282d613855865c408950cce436839a1f.def("classof", method_pointer_e48dfb8f0d655036bcbc6763de4daf90, "");
    class_282d613855865c408950cce436839a1f.def("desugar", method_pointer_280c64d2025d519e993a4f6037300493, "");
    class_282d613855865c408950cce436839a1f.def("get_interface_decl", method_pointer_9c6d0951df2f53438515d393b8d8379c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_interface_type", method_pointer_2fabe89add0c5449b9d4a9e37e1cb602, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_num_protocols", method_pointer_bf31dc7d4b095878aa6f26629384c265, "");
    class_282d613855865c408950cce436839a1f.def("get_object_type", method_pointer_2aea4c948fc75718ba5436aa2adcee13, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_pointee_type", method_pointer_4faee23af5265579a5c3d6534a1dbd5b, "");
    class_282d613855865c408950cce436839a1f.def("get_protocol", method_pointer_8d44519fddf75f8395a7c14eba46a15d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_super_class_type", method_pointer_5844831fb9c0527098cd6044cdb067c0, "");
    class_282d613855865c408950cce436839a1f.def("is_kind_of_type", method_pointer_b95be39a7ee05c378ca0451627c3f9cc, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_class_type", method_pointer_a0b5638805eb5508b2648167021c55b9, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_or_class_type", method_pointer_a1b8c02524855be892cb60cc3215433a, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_type", method_pointer_e39926b24de85b30af91f5643d4766d7, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_class_type", method_pointer_d5d315489177503e9169c9a734a8c750, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_id_type", method_pointer_f55f9558377756089f4af03ff76adb74, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized", method_pointer_d3638149fa125e2cbd7ac64d4b0d40c3, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized_as_written", method_pointer_d1bcd8cade3e5fd9bb7b45df7e9ba117, "");
    class_282d613855865c408950cce436839a1f.def("is_sugared", method_pointer_ed1b622b94bf50e0ae4adfd8ae274b80, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized", method_pointer_84dbc0a65b9b56d89b7fa481fdad3e34, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized_as_written", method_pointer_bc3bebe277cf5e299574c8d839e8e5f2, "");
    class_282d613855865c408950cce436839a1f.def("qual_empty", method_pointer_a274debd360c515990eb6d3a6009a5f0, "");
    class_282d613855865c408950cce436839a1f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}