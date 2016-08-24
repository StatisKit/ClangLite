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
    bool  (*method_pointer_5e4be7b8cdc85435b877c3401271da61)(class ::clang::Type  const *) = ::clang::ObjCObjectPointerType::classof;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_e32175487e675b68ae31a20ff0c0e41c)() const = &::clang::ObjCObjectPointerType::desugar;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectPointerType::*method_pointer_406d836ce6b05c6183734ebc7873d668)() const = &::clang::ObjCObjectPointerType::getInterfaceDecl;
    class ::clang::ObjCInterfaceType  const * (::clang::ObjCObjectPointerType::*method_pointer_4e5a5e490e8f53a6ad2eb5714af6be7b)() const = &::clang::ObjCObjectPointerType::getInterfaceType;
    unsigned int  (::clang::ObjCObjectPointerType::*method_pointer_a5c6155f5e3e5adb84029b03a4c99bb8)() const = &::clang::ObjCObjectPointerType::getNumProtocols;
    class ::clang::ObjCObjectType  const * (::clang::ObjCObjectPointerType::*method_pointer_450b215902be5fd8911c3f552f9c95bf)() const = &::clang::ObjCObjectPointerType::getObjectType;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_ea7a4cd19b765e3ca50b084a90782921)() const = &::clang::ObjCObjectPointerType::getPointeeType;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectPointerType::*method_pointer_a82a1d142030569c855bdaca1a2a9245)(unsigned int ) const = &::clang::ObjCObjectPointerType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_5b941907571152fb9fb346e99bee1a5a)() const = &::clang::ObjCObjectPointerType::getSuperClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_bf07c74992f85cbfb25637ec3adf5233)() const = &::clang::ObjCObjectPointerType::isKindOfType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_8a4871bfa0235f50aabe33fcfa147c32)() const = &::clang::ObjCObjectPointerType::isObjCClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_9e1dc636cabc5e1b976797c38e8fc79d)() const = &::clang::ObjCObjectPointerType::isObjCIdOrClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_721e1f18bd855cecb67098915ce5c381)() const = &::clang::ObjCObjectPointerType::isObjCIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_1ada8cb48e5d50e8912458dc0f2cd8d0)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_80db73fbe6f852b08ef46dd85847ff3e)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_2e646add5cb259dd81c4c4080edfb402)() const = &::clang::ObjCObjectPointerType::isSpecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_d766e759a5b05907b18daece615f397d)() const = &::clang::ObjCObjectPointerType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_e46625b3c6525f68964be2706b4cea89)() const = &::clang::ObjCObjectPointerType::isSugared;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_63baad9cecc355b98acf8c1f1c794d60)() const = &::clang::ObjCObjectPointerType::isUnspecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_b5ab5fc50ff45494b668416a44ea342b)() const = &::clang::ObjCObjectPointerType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_19174afa78975e3392b9a981ac82aa24)() const = &::clang::ObjCObjectPointerType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectPointerType, autowig::HeldType< class ::clang::ObjCObjectPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_282d613855865c408950cce436839a1f("ObjCObjectPointerType", "", boost::python::no_init);
    class_282d613855865c408950cce436839a1f.def("classof", method_pointer_5e4be7b8cdc85435b877c3401271da61, "");
    class_282d613855865c408950cce436839a1f.def("desugar", method_pointer_e32175487e675b68ae31a20ff0c0e41c, "");
    class_282d613855865c408950cce436839a1f.def("get_interface_decl", method_pointer_406d836ce6b05c6183734ebc7873d668, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_interface_type", method_pointer_4e5a5e490e8f53a6ad2eb5714af6be7b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_num_protocols", method_pointer_a5c6155f5e3e5adb84029b03a4c99bb8, "");
    class_282d613855865c408950cce436839a1f.def("get_object_type", method_pointer_450b215902be5fd8911c3f552f9c95bf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_pointee_type", method_pointer_ea7a4cd19b765e3ca50b084a90782921, "");
    class_282d613855865c408950cce436839a1f.def("get_protocol", method_pointer_a82a1d142030569c855bdaca1a2a9245, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_super_class_type", method_pointer_5b941907571152fb9fb346e99bee1a5a, "");
    class_282d613855865c408950cce436839a1f.def("is_kind_of_type", method_pointer_bf07c74992f85cbfb25637ec3adf5233, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_class_type", method_pointer_8a4871bfa0235f50aabe33fcfa147c32, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_or_class_type", method_pointer_9e1dc636cabc5e1b976797c38e8fc79d, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_type", method_pointer_721e1f18bd855cecb67098915ce5c381, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_class_type", method_pointer_1ada8cb48e5d50e8912458dc0f2cd8d0, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_id_type", method_pointer_80db73fbe6f852b08ef46dd85847ff3e, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized", method_pointer_2e646add5cb259dd81c4c4080edfb402, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized_as_written", method_pointer_d766e759a5b05907b18daece615f397d, "");
    class_282d613855865c408950cce436839a1f.def("is_sugared", method_pointer_e46625b3c6525f68964be2706b4cea89, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized", method_pointer_63baad9cecc355b98acf8c1f1c794d60, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized_as_written", method_pointer_b5ab5fc50ff45494b668416a44ea342b, "");
    class_282d613855865c408950cce436839a1f.def("qual_empty", method_pointer_19174afa78975e3392b9a981ac82aa24, "");
    class_282d613855865c408950cce436839a1f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}