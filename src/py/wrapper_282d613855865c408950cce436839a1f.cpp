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
    bool  (*method_pointer_57db103aeb895224b3c7d90957810ebf)(class ::clang::Type  const *) = ::clang::ObjCObjectPointerType::classof;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_c7b43c27cefe5b2d81899cb278f6f2da)() const = &::clang::ObjCObjectPointerType::desugar;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectPointerType::*method_pointer_a6eabf8f165457c9ac246f23c8a8d68e)() const = &::clang::ObjCObjectPointerType::getInterfaceDecl;
    class ::clang::ObjCInterfaceType  const * (::clang::ObjCObjectPointerType::*method_pointer_1c4a9cf65e2d5dda91c7f7a2f9f91dfc)() const = &::clang::ObjCObjectPointerType::getInterfaceType;
    unsigned int  (::clang::ObjCObjectPointerType::*method_pointer_38b7e5a3de61520e816fe79e4b901834)() const = &::clang::ObjCObjectPointerType::getNumProtocols;
    class ::clang::ObjCObjectType  const * (::clang::ObjCObjectPointerType::*method_pointer_570fb0dc8ab9554793fe138d55bb43ed)() const = &::clang::ObjCObjectPointerType::getObjectType;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_3c3b9579a8c25d3dbab627ff18a922d0)() const = &::clang::ObjCObjectPointerType::getPointeeType;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectPointerType::*method_pointer_fd278029152353809a38f5980977fdc8)(unsigned int ) const = &::clang::ObjCObjectPointerType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_54f65ec18e3b559790b70f9cd61959cf)() const = &::clang::ObjCObjectPointerType::getSuperClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_6d47f0a5b7b5539a9317f97bbab779f8)() const = &::clang::ObjCObjectPointerType::isKindOfType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_7fafba9b4d6b5e63b6cbe42bd4a92095)() const = &::clang::ObjCObjectPointerType::isObjCClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_b35db79335d150cb992679efd5dc82b4)() const = &::clang::ObjCObjectPointerType::isObjCIdOrClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_479e7fc410795808b362bc0a79aa6a5e)() const = &::clang::ObjCObjectPointerType::isObjCIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_0dc1ed0677b656178adad0cec66f9c20)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_f8f5cfd9b0a45e28a83febc30becf0c3)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_e4f38b32a0845d06a8c80e2879947861)() const = &::clang::ObjCObjectPointerType::isSpecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_0a3c6ead88bc54fb9782237e6a63c516)() const = &::clang::ObjCObjectPointerType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_673ae1b14e33526eac783fde9c42c129)() const = &::clang::ObjCObjectPointerType::isSugared;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_d131e6f8798e5ccda787426f96f858f2)() const = &::clang::ObjCObjectPointerType::isUnspecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_840f71315103583887b75c0171922a4d)() const = &::clang::ObjCObjectPointerType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_8b6f83d9a6e55596a99c5877c8f24de9)() const = &::clang::ObjCObjectPointerType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectPointerType, autowig::HeldType< class ::clang::ObjCObjectPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_282d613855865c408950cce436839a1f("ObjCObjectPointerType", "", boost::python::no_init);
    class_282d613855865c408950cce436839a1f.def("classof", method_pointer_57db103aeb895224b3c7d90957810ebf, "");
    class_282d613855865c408950cce436839a1f.def("desugar", method_pointer_c7b43c27cefe5b2d81899cb278f6f2da, "");
    class_282d613855865c408950cce436839a1f.def("get_interface_decl", method_pointer_a6eabf8f165457c9ac246f23c8a8d68e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_interface_type", method_pointer_1c4a9cf65e2d5dda91c7f7a2f9f91dfc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_num_protocols", method_pointer_38b7e5a3de61520e816fe79e4b901834, "");
    class_282d613855865c408950cce436839a1f.def("get_object_type", method_pointer_570fb0dc8ab9554793fe138d55bb43ed, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_pointee_type", method_pointer_3c3b9579a8c25d3dbab627ff18a922d0, "");
    class_282d613855865c408950cce436839a1f.def("get_protocol", method_pointer_fd278029152353809a38f5980977fdc8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_super_class_type", method_pointer_54f65ec18e3b559790b70f9cd61959cf, "");
    class_282d613855865c408950cce436839a1f.def("is_kind_of_type", method_pointer_6d47f0a5b7b5539a9317f97bbab779f8, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_class_type", method_pointer_7fafba9b4d6b5e63b6cbe42bd4a92095, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_or_class_type", method_pointer_b35db79335d150cb992679efd5dc82b4, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_type", method_pointer_479e7fc410795808b362bc0a79aa6a5e, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_class_type", method_pointer_0dc1ed0677b656178adad0cec66f9c20, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_id_type", method_pointer_f8f5cfd9b0a45e28a83febc30becf0c3, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized", method_pointer_e4f38b32a0845d06a8c80e2879947861, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized_as_written", method_pointer_0a3c6ead88bc54fb9782237e6a63c516, "");
    class_282d613855865c408950cce436839a1f.def("is_sugared", method_pointer_673ae1b14e33526eac783fde9c42c129, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized", method_pointer_d131e6f8798e5ccda787426f96f858f2, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized_as_written", method_pointer_840f71315103583887b75c0171922a4d, "");
    class_282d613855865c408950cce436839a1f.def("qual_empty", method_pointer_8b6f83d9a6e55596a99c5877c8f24de9, "");
    class_282d613855865c408950cce436839a1f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}