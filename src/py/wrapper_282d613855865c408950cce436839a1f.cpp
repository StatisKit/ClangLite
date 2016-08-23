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
    bool  (*method_pointer_bca87b0c76d55b98a9f6e3fb12da7aa8)(class ::clang::Type  const *) = ::clang::ObjCObjectPointerType::classof;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_e6814b89a6855eefb3c793d295560827)() const = &::clang::ObjCObjectPointerType::desugar;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectPointerType::*method_pointer_7eed6667563851f491c6e0cdf1b7f5f0)() const = &::clang::ObjCObjectPointerType::getInterfaceDecl;
    class ::clang::ObjCInterfaceType  const * (::clang::ObjCObjectPointerType::*method_pointer_adc48b98ad5d59b1a2eff52dc5bf09cd)() const = &::clang::ObjCObjectPointerType::getInterfaceType;
    unsigned int  (::clang::ObjCObjectPointerType::*method_pointer_20805899e56454bf96ce3f745a1a4458)() const = &::clang::ObjCObjectPointerType::getNumProtocols;
    class ::clang::ObjCObjectType  const * (::clang::ObjCObjectPointerType::*method_pointer_1230054d6a7159ff8a6cf54cc943cfbe)() const = &::clang::ObjCObjectPointerType::getObjectType;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_465bca3b46b553a8aefffbb5d25f3957)() const = &::clang::ObjCObjectPointerType::getPointeeType;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectPointerType::*method_pointer_5940f5144fb05b12abc671b1697f0641)(unsigned int ) const = &::clang::ObjCObjectPointerType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_442aebd9e71d5c21b460b250e3f72529)() const = &::clang::ObjCObjectPointerType::getSuperClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_924f04b98bb65ef28f8aa69e290b3cda)() const = &::clang::ObjCObjectPointerType::isKindOfType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_af373c17609f513887b407f2b3f21730)() const = &::clang::ObjCObjectPointerType::isObjCClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_935ddbb117175c53be8afe38a0340c86)() const = &::clang::ObjCObjectPointerType::isObjCIdOrClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_62772607324d553287dd6db008a48b7c)() const = &::clang::ObjCObjectPointerType::isObjCIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_d6329612f1425bb685ea0ac71ed01525)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_4a53a61ad60d578a809f926dc2444709)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_b1267ba9ecf9558893fa6b79686e6fda)() const = &::clang::ObjCObjectPointerType::isSpecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_a0eb367b0ce95491a8ee6295688730c1)() const = &::clang::ObjCObjectPointerType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_e14bf21b61895150865e06daaa6d427f)() const = &::clang::ObjCObjectPointerType::isSugared;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_5ea82612358d5c80bdd568f9e976609d)() const = &::clang::ObjCObjectPointerType::isUnspecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_b0d618f8fa315c1c8e2cd58163db7925)() const = &::clang::ObjCObjectPointerType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_21304ab54fc752cf9eb62a92472ac3b4)() const = &::clang::ObjCObjectPointerType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectPointerType, autowig::HeldType< class ::clang::ObjCObjectPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_282d613855865c408950cce436839a1f("ObjCObjectPointerType", "", boost::python::no_init);
    class_282d613855865c408950cce436839a1f.def("classof", method_pointer_bca87b0c76d55b98a9f6e3fb12da7aa8, "");
    class_282d613855865c408950cce436839a1f.def("desugar", method_pointer_e6814b89a6855eefb3c793d295560827, "");
    class_282d613855865c408950cce436839a1f.def("get_interface_decl", method_pointer_7eed6667563851f491c6e0cdf1b7f5f0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_interface_type", method_pointer_adc48b98ad5d59b1a2eff52dc5bf09cd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_num_protocols", method_pointer_20805899e56454bf96ce3f745a1a4458, "");
    class_282d613855865c408950cce436839a1f.def("get_object_type", method_pointer_1230054d6a7159ff8a6cf54cc943cfbe, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_pointee_type", method_pointer_465bca3b46b553a8aefffbb5d25f3957, "");
    class_282d613855865c408950cce436839a1f.def("get_protocol", method_pointer_5940f5144fb05b12abc671b1697f0641, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_super_class_type", method_pointer_442aebd9e71d5c21b460b250e3f72529, "");
    class_282d613855865c408950cce436839a1f.def("is_kind_of_type", method_pointer_924f04b98bb65ef28f8aa69e290b3cda, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_class_type", method_pointer_af373c17609f513887b407f2b3f21730, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_or_class_type", method_pointer_935ddbb117175c53be8afe38a0340c86, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_type", method_pointer_62772607324d553287dd6db008a48b7c, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_class_type", method_pointer_d6329612f1425bb685ea0ac71ed01525, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_id_type", method_pointer_4a53a61ad60d578a809f926dc2444709, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized", method_pointer_b1267ba9ecf9558893fa6b79686e6fda, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized_as_written", method_pointer_a0eb367b0ce95491a8ee6295688730c1, "");
    class_282d613855865c408950cce436839a1f.def("is_sugared", method_pointer_e14bf21b61895150865e06daaa6d427f, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized", method_pointer_5ea82612358d5c80bdd568f9e976609d, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized_as_written", method_pointer_b0d618f8fa315c1c8e2cd58163db7925, "");
    class_282d613855865c408950cce436839a1f.def("qual_empty", method_pointer_21304ab54fc752cf9eb62a92472ac3b4, "");
    class_282d613855865c408950cce436839a1f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}