#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_3980f13801db50f498b55d818463d500()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_17fd481c60e0531e8c7bd72b54fff661)(class ::clang::Type  const *) = ::clang::ObjCObjectType::classof;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_9bf05a2ebee754ebb53078542264fd53)() const = &::clang::ObjCObjectType::desugar;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_f76a5ac4cdf45f53baf021f41eb69aa0)() const = &::clang::ObjCObjectType::getBaseType;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectType::*method_pointer_48ea2863cb355ef2b7988fb64fca2ce2)() const = &::clang::ObjCObjectType::getInterface;
    unsigned int  (::clang::ObjCObjectType::*method_pointer_10f0c899fc7757cfb9cedfec44e0a5cc)() const = &::clang::ObjCObjectType::getNumProtocols;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectType::*method_pointer_8988b871ea4b559fa264d98d891c3b0e)(unsigned int ) const = &::clang::ObjCObjectType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_b339dd9042cb557cbac9957de5373314)() const = &::clang::ObjCObjectType::getSuperClassType;
    bool  (::clang::ObjCObjectType::*method_pointer_05b28fd17b6059f588f80e877349e721)() const = &::clang::ObjCObjectType::isKindOfType;
    bool  (::clang::ObjCObjectType::*method_pointer_e22aa845ea1c52199d1fbab93e1ebfda)() const = &::clang::ObjCObjectType::isKindOfTypeAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_3b23b3e62d47577f9aeb38a284ae75c4)() const = &::clang::ObjCObjectType::isObjCClass;
    bool  (::clang::ObjCObjectType::*method_pointer_bf58f1001ffb59379542d3c6e35466ce)() const = &::clang::ObjCObjectType::isObjCId;
    bool  (::clang::ObjCObjectType::*method_pointer_5ecc85ab6600536d8219fbd28fd92534)() const = &::clang::ObjCObjectType::isObjCQualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_433a6dc98cba54788994bcdd0799fa12)() const = &::clang::ObjCObjectType::isObjCQualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_d2096c5cf9215c1bb55aa7490aa547ba)() const = &::clang::ObjCObjectType::isObjCUnqualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_9d38339fd88d5c8ea68b38df3cff3dc6)() const = &::clang::ObjCObjectType::isObjCUnqualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_203941ee16435b28b7ce6fd459dba79b)() const = &::clang::ObjCObjectType::isObjCUnqualifiedIdOrClass;
    bool  (::clang::ObjCObjectType::*method_pointer_65aa251d3f7d5d139b8489c59ad7636c)() const = &::clang::ObjCObjectType::isSpecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_cff7a901808e52deaca6c1ec12795587)() const = &::clang::ObjCObjectType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_bf59dc9783fb531f9cf14fb2b9412b36)() const = &::clang::ObjCObjectType::isSugared;
    bool  (::clang::ObjCObjectType::*method_pointer_9e0c7b46e67e54df9af58e19a0617ae3)() const = &::clang::ObjCObjectType::isUnspecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_a4b892ccbec65addb34e62d0042f421e)() const = &::clang::ObjCObjectType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_e4a4c223ba785c598656e964155bb3fb)() const = &::clang::ObjCObjectType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectType, autowig::HeldType< class ::clang::ObjCObjectType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3980f13801db50f498b55d818463d500("ObjCObjectType", "", boost::python::no_init);
    class_3980f13801db50f498b55d818463d500.def("classof", method_pointer_17fd481c60e0531e8c7bd72b54fff661, "");
    class_3980f13801db50f498b55d818463d500.def("desugar", method_pointer_9bf05a2ebee754ebb53078542264fd53, "");
    class_3980f13801db50f498b55d818463d500.def("get_base_type", method_pointer_f76a5ac4cdf45f53baf021f41eb69aa0, "");
    class_3980f13801db50f498b55d818463d500.def("get_interface", method_pointer_48ea2863cb355ef2b7988fb64fca2ce2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_num_protocols", method_pointer_10f0c899fc7757cfb9cedfec44e0a5cc, "");
    class_3980f13801db50f498b55d818463d500.def("get_protocol", method_pointer_8988b871ea4b559fa264d98d891c3b0e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_super_class_type", method_pointer_b339dd9042cb557cbac9957de5373314, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type", method_pointer_05b28fd17b6059f588f80e877349e721, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type_as_written", method_pointer_e22aa845ea1c52199d1fbab93e1ebfda, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_class", method_pointer_3b23b3e62d47577f9aeb38a284ae75c4, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_id", method_pointer_bf58f1001ffb59379542d3c6e35466ce, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_class", method_pointer_5ecc85ab6600536d8219fbd28fd92534, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_id", method_pointer_433a6dc98cba54788994bcdd0799fa12, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_class", method_pointer_d2096c5cf9215c1bb55aa7490aa547ba, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id", method_pointer_9d38339fd88d5c8ea68b38df3cff3dc6, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id_or_class", method_pointer_203941ee16435b28b7ce6fd459dba79b, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized", method_pointer_65aa251d3f7d5d139b8489c59ad7636c, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized_as_written", method_pointer_cff7a901808e52deaca6c1ec12795587, "");
    class_3980f13801db50f498b55d818463d500.def("is_sugared", method_pointer_bf59dc9783fb531f9cf14fb2b9412b36, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized", method_pointer_9e0c7b46e67e54df9af58e19a0617ae3, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized_as_written", method_pointer_a4b892ccbec65addb34e62d0042f421e, "");
    class_3980f13801db50f498b55d818463d500.def("qual_empty", method_pointer_e4a4c223ba785c598656e964155bb3fb, "");
    class_3980f13801db50f498b55d818463d500.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectType >, autowig::HeldType< class ::clang::Type > >();
    }

}