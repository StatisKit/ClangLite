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
    bool  (*method_pointer_72f312ac07fa55fb898334a61b4d43dd)(class ::clang::Type  const *) = ::clang::ObjCObjectPointerType::classof;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_37daa8b908cb5a649c435ca5726032af)() const = &::clang::ObjCObjectPointerType::desugar;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectPointerType::*method_pointer_1f03bfb9a09c5f88b42fbd8b5e131c1c)() const = &::clang::ObjCObjectPointerType::getInterfaceDecl;
    class ::clang::ObjCInterfaceType  const * (::clang::ObjCObjectPointerType::*method_pointer_6595a16755195e2db0f5eaeea774b969)() const = &::clang::ObjCObjectPointerType::getInterfaceType;
    unsigned int  (::clang::ObjCObjectPointerType::*method_pointer_11d131e5d8c3513aa7b4c2afc6e7afca)() const = &::clang::ObjCObjectPointerType::getNumProtocols;
    class ::clang::ObjCObjectType  const * (::clang::ObjCObjectPointerType::*method_pointer_f4afd1f294f659deaa7b8e3a2b12d542)() const = &::clang::ObjCObjectPointerType::getObjectType;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_164f643741b158608552817f6405d7fe)() const = &::clang::ObjCObjectPointerType::getPointeeType;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectPointerType::*method_pointer_cc5231430609534c8df5353da28573e0)(unsigned int ) const = &::clang::ObjCObjectPointerType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_b984384c60d056cb9db44f5c936f88df)() const = &::clang::ObjCObjectPointerType::getSuperClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_03bf3d48ea1a5e9c8ae81ebccfc39ea3)() const = &::clang::ObjCObjectPointerType::isKindOfType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_f341bed234c75870995b6fc420ba0704)() const = &::clang::ObjCObjectPointerType::isObjCClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_194b56b67343589abcd485912d3aac26)() const = &::clang::ObjCObjectPointerType::isObjCIdOrClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_a6866852d1fb54f4ac7f09f03c993f54)() const = &::clang::ObjCObjectPointerType::isObjCIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_53c598c6862457daaa49232cfd8cacd8)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_885c8257ce7952f193d3c70cbfc5bb7a)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_e5c29f518e6053ee816953692dca745a)() const = &::clang::ObjCObjectPointerType::isSpecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_1dd292ffd4665b6bb7e760daf47e55ff)() const = &::clang::ObjCObjectPointerType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_b710599eaa8e5224b372fd05a40d2383)() const = &::clang::ObjCObjectPointerType::isSugared;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_26ab54420112597396c20504ffe6e7a9)() const = &::clang::ObjCObjectPointerType::isUnspecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_0223581d9a0b5cee8d7cd5eb64c2ebd3)() const = &::clang::ObjCObjectPointerType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_3705ccba788a5055bbbd4b4c0028c1a6)() const = &::clang::ObjCObjectPointerType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectPointerType, autowig::HeldType< class ::clang::ObjCObjectPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_282d613855865c408950cce436839a1f("ObjCObjectPointerType", "", boost::python::no_init);
    class_282d613855865c408950cce436839a1f.def("classof", method_pointer_72f312ac07fa55fb898334a61b4d43dd, "");
    class_282d613855865c408950cce436839a1f.def("desugar", method_pointer_37daa8b908cb5a649c435ca5726032af, "");
    class_282d613855865c408950cce436839a1f.def("get_interface_decl", method_pointer_1f03bfb9a09c5f88b42fbd8b5e131c1c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_interface_type", method_pointer_6595a16755195e2db0f5eaeea774b969, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_num_protocols", method_pointer_11d131e5d8c3513aa7b4c2afc6e7afca, "");
    class_282d613855865c408950cce436839a1f.def("get_object_type", method_pointer_f4afd1f294f659deaa7b8e3a2b12d542, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_pointee_type", method_pointer_164f643741b158608552817f6405d7fe, "");
    class_282d613855865c408950cce436839a1f.def("get_protocol", method_pointer_cc5231430609534c8df5353da28573e0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_super_class_type", method_pointer_b984384c60d056cb9db44f5c936f88df, "");
    class_282d613855865c408950cce436839a1f.def("is_kind_of_type", method_pointer_03bf3d48ea1a5e9c8ae81ebccfc39ea3, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_class_type", method_pointer_f341bed234c75870995b6fc420ba0704, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_or_class_type", method_pointer_194b56b67343589abcd485912d3aac26, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_type", method_pointer_a6866852d1fb54f4ac7f09f03c993f54, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_class_type", method_pointer_53c598c6862457daaa49232cfd8cacd8, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_id_type", method_pointer_885c8257ce7952f193d3c70cbfc5bb7a, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized", method_pointer_e5c29f518e6053ee816953692dca745a, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized_as_written", method_pointer_1dd292ffd4665b6bb7e760daf47e55ff, "");
    class_282d613855865c408950cce436839a1f.def("is_sugared", method_pointer_b710599eaa8e5224b372fd05a40d2383, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized", method_pointer_26ab54420112597396c20504ffe6e7a9, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized_as_written", method_pointer_0223581d9a0b5cee8d7cd5eb64c2ebd3, "");
    class_282d613855865c408950cce436839a1f.def("qual_empty", method_pointer_3705ccba788a5055bbbd4b4c0028c1a6, "");
    class_282d613855865c408950cce436839a1f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}