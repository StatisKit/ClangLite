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
    bool  (*method_pointer_6c1fa88534915d9dbc4501d33b091957)(class ::clang::Type  const *) = ::clang::ObjCObjectPointerType::classof;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_12179e08eab15272b176a014da3046cb)() const = &::clang::ObjCObjectPointerType::desugar;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectPointerType::*method_pointer_cb830103cb9b5a7e95868ca2d99e4f2a)() const = &::clang::ObjCObjectPointerType::getInterfaceDecl;
    class ::clang::ObjCInterfaceType  const * (::clang::ObjCObjectPointerType::*method_pointer_bfc8847bcf085ca198a777be9abe88fc)() const = &::clang::ObjCObjectPointerType::getInterfaceType;
    unsigned int  (::clang::ObjCObjectPointerType::*method_pointer_f82c299ce8b35135b4bfffcbada81609)() const = &::clang::ObjCObjectPointerType::getNumProtocols;
    class ::clang::ObjCObjectType  const * (::clang::ObjCObjectPointerType::*method_pointer_a9bbd87e26d25aa4992720a8ad965e09)() const = &::clang::ObjCObjectPointerType::getObjectType;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_3eb05d626df450a2aae117a55e6edc1a)() const = &::clang::ObjCObjectPointerType::getPointeeType;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectPointerType::*method_pointer_773c0883848e583699ecd243f86511c4)(unsigned int ) const = &::clang::ObjCObjectPointerType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_12b3a91aa8bf51c2b9a64e5440c2fe66)() const = &::clang::ObjCObjectPointerType::getSuperClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_798c4d635d8059faadbb9ae2b60fb122)() const = &::clang::ObjCObjectPointerType::isKindOfType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_079a80ac39775e269d187ca89efb5757)() const = &::clang::ObjCObjectPointerType::isObjCClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_18a701611f1952459b9ab08ac4ab27d6)() const = &::clang::ObjCObjectPointerType::isObjCIdOrClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_955f50671db55cd3ace7de065e2717b9)() const = &::clang::ObjCObjectPointerType::isObjCIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_76d099dcaf63570b9044cd858c80285e)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_3bab395a155d5b8b87b25484e72006dc)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_edc9c4c57cde555a8263d90a8025d6d9)() const = &::clang::ObjCObjectPointerType::isSpecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_98433e14a249553f9bd0a05cf6a026e9)() const = &::clang::ObjCObjectPointerType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_653f372a868858d9bcfbb9d900976599)() const = &::clang::ObjCObjectPointerType::isSugared;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_a4f10072ae1953f889d2f10ade104ecb)() const = &::clang::ObjCObjectPointerType::isUnspecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_8f843ef4813059d18c60eebd816a88a7)() const = &::clang::ObjCObjectPointerType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_b079ba7493475c72a64e1b6f4da2414e)() const = &::clang::ObjCObjectPointerType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectPointerType, autowig::HeldType< class ::clang::ObjCObjectPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_282d613855865c408950cce436839a1f("ObjCObjectPointerType", "", boost::python::no_init);
    class_282d613855865c408950cce436839a1f.def("classof", method_pointer_6c1fa88534915d9dbc4501d33b091957, "");
    class_282d613855865c408950cce436839a1f.def("desugar", method_pointer_12179e08eab15272b176a014da3046cb, "");
    class_282d613855865c408950cce436839a1f.def("get_interface_decl", method_pointer_cb830103cb9b5a7e95868ca2d99e4f2a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_interface_type", method_pointer_bfc8847bcf085ca198a777be9abe88fc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_num_protocols", method_pointer_f82c299ce8b35135b4bfffcbada81609, "");
    class_282d613855865c408950cce436839a1f.def("get_object_type", method_pointer_a9bbd87e26d25aa4992720a8ad965e09, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_pointee_type", method_pointer_3eb05d626df450a2aae117a55e6edc1a, "");
    class_282d613855865c408950cce436839a1f.def("get_protocol", method_pointer_773c0883848e583699ecd243f86511c4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_super_class_type", method_pointer_12b3a91aa8bf51c2b9a64e5440c2fe66, "");
    class_282d613855865c408950cce436839a1f.def("is_kind_of_type", method_pointer_798c4d635d8059faadbb9ae2b60fb122, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_class_type", method_pointer_079a80ac39775e269d187ca89efb5757, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_or_class_type", method_pointer_18a701611f1952459b9ab08ac4ab27d6, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_type", method_pointer_955f50671db55cd3ace7de065e2717b9, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_class_type", method_pointer_76d099dcaf63570b9044cd858c80285e, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_id_type", method_pointer_3bab395a155d5b8b87b25484e72006dc, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized", method_pointer_edc9c4c57cde555a8263d90a8025d6d9, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized_as_written", method_pointer_98433e14a249553f9bd0a05cf6a026e9, "");
    class_282d613855865c408950cce436839a1f.def("is_sugared", method_pointer_653f372a868858d9bcfbb9d900976599, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized", method_pointer_a4f10072ae1953f889d2f10ade104ecb, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized_as_written", method_pointer_8f843ef4813059d18c60eebd816a88a7, "");
    class_282d613855865c408950cce436839a1f.def("qual_empty", method_pointer_b079ba7493475c72a64e1b6f4da2414e, "");
    class_282d613855865c408950cce436839a1f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}