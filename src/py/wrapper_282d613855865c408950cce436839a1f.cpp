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
    bool  (*method_pointer_4429f5db0321578986163e93bef7b1ff)(class ::clang::Type  const *) = ::clang::ObjCObjectPointerType::classof;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_24a058b1070350e1974db0608a77f53a)() const = &::clang::ObjCObjectPointerType::desugar;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectPointerType::*method_pointer_8339e9a967cc52ba8a61553f7f56498c)() const = &::clang::ObjCObjectPointerType::getInterfaceDecl;
    class ::clang::ObjCInterfaceType  const * (::clang::ObjCObjectPointerType::*method_pointer_3c16b86de7ce5189886db9dde330261e)() const = &::clang::ObjCObjectPointerType::getInterfaceType;
    unsigned int  (::clang::ObjCObjectPointerType::*method_pointer_dc0bf9bb681f519a9fbb5af8b6150702)() const = &::clang::ObjCObjectPointerType::getNumProtocols;
    class ::clang::ObjCObjectType  const * (::clang::ObjCObjectPointerType::*method_pointer_cf1e73f19626514a958081feacdbfde0)() const = &::clang::ObjCObjectPointerType::getObjectType;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_7d9583c691bd553586a9609652e01c5f)() const = &::clang::ObjCObjectPointerType::getPointeeType;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectPointerType::*method_pointer_f9449247e1ee5dad93ed0bba3040d14f)(unsigned int ) const = &::clang::ObjCObjectPointerType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_a6164fc73a2850d885ac1c41b0785a02)() const = &::clang::ObjCObjectPointerType::getSuperClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_16c76ca322465b9db192a5f832e04cd6)() const = &::clang::ObjCObjectPointerType::isKindOfType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_f0cca692e3eb555cb92122aaee78b089)() const = &::clang::ObjCObjectPointerType::isObjCClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_76f8c10c88cc515d8d797df6776aa611)() const = &::clang::ObjCObjectPointerType::isObjCIdOrClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_74e7c3e556ae5a14a743f7d5367ab99f)() const = &::clang::ObjCObjectPointerType::isObjCIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_d035c97972695a889a872b06f338373e)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_4c763181212f5e79909d01c6bd10db3c)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_65eded84d90c57a5b9896bdb1f04ee58)() const = &::clang::ObjCObjectPointerType::isSpecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_51ec2eac54225a62a3a11913c0c27253)() const = &::clang::ObjCObjectPointerType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_13a4166eb34355969f2b26939bafbcba)() const = &::clang::ObjCObjectPointerType::isSugared;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_ea97c031b710544189cb39ff0a5a3ed9)() const = &::clang::ObjCObjectPointerType::isUnspecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_293ef5dc951959dba4f19c32ab328c5c)() const = &::clang::ObjCObjectPointerType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_eb3b672427ae56c592ddf7f90972b380)() const = &::clang::ObjCObjectPointerType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectPointerType, autowig::HeldType< class ::clang::ObjCObjectPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_282d613855865c408950cce436839a1f("ObjCObjectPointerType", "", boost::python::no_init);
    class_282d613855865c408950cce436839a1f.def("classof", method_pointer_4429f5db0321578986163e93bef7b1ff, "");
    class_282d613855865c408950cce436839a1f.def("desugar", method_pointer_24a058b1070350e1974db0608a77f53a, "");
    class_282d613855865c408950cce436839a1f.def("get_interface_decl", method_pointer_8339e9a967cc52ba8a61553f7f56498c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_interface_type", method_pointer_3c16b86de7ce5189886db9dde330261e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_num_protocols", method_pointer_dc0bf9bb681f519a9fbb5af8b6150702, "");
    class_282d613855865c408950cce436839a1f.def("get_object_type", method_pointer_cf1e73f19626514a958081feacdbfde0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_pointee_type", method_pointer_7d9583c691bd553586a9609652e01c5f, "");
    class_282d613855865c408950cce436839a1f.def("get_protocol", method_pointer_f9449247e1ee5dad93ed0bba3040d14f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_super_class_type", method_pointer_a6164fc73a2850d885ac1c41b0785a02, "");
    class_282d613855865c408950cce436839a1f.def("is_kind_of_type", method_pointer_16c76ca322465b9db192a5f832e04cd6, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_class_type", method_pointer_f0cca692e3eb555cb92122aaee78b089, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_or_class_type", method_pointer_76f8c10c88cc515d8d797df6776aa611, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_type", method_pointer_74e7c3e556ae5a14a743f7d5367ab99f, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_class_type", method_pointer_d035c97972695a889a872b06f338373e, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_id_type", method_pointer_4c763181212f5e79909d01c6bd10db3c, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized", method_pointer_65eded84d90c57a5b9896bdb1f04ee58, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized_as_written", method_pointer_51ec2eac54225a62a3a11913c0c27253, "");
    class_282d613855865c408950cce436839a1f.def("is_sugared", method_pointer_13a4166eb34355969f2b26939bafbcba, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized", method_pointer_ea97c031b710544189cb39ff0a5a3ed9, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized_as_written", method_pointer_293ef5dc951959dba4f19c32ab328c5c, "");
    class_282d613855865c408950cce436839a1f.def("qual_empty", method_pointer_eb3b672427ae56c592ddf7f90972b380, "");
    class_282d613855865c408950cce436839a1f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}