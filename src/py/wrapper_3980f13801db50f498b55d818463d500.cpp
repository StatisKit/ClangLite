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
    bool  (*method_pointer_99a6e5cb1eae523a94f9bf64cd5cfd76)(class ::clang::Type  const *) = ::clang::ObjCObjectType::classof;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_8ea1f1a6a45f5c5c9fe4c30a31b8b044)() const = &::clang::ObjCObjectType::desugar;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_7f31d4f6e1b254f48536d27c2accf6d4)() const = &::clang::ObjCObjectType::getBaseType;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectType::*method_pointer_f269b6f2d86f5d49b2f375a6a7d3f970)() const = &::clang::ObjCObjectType::getInterface;
    unsigned int  (::clang::ObjCObjectType::*method_pointer_650eec5bed675c9e858b7e5c352c473b)() const = &::clang::ObjCObjectType::getNumProtocols;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectType::*method_pointer_ddfa4ed4dc845a9dac8caeaee55b4ae6)(unsigned int ) const = &::clang::ObjCObjectType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_bd1090668cc350d396b925071772e3e1)() const = &::clang::ObjCObjectType::getSuperClassType;
    bool  (::clang::ObjCObjectType::*method_pointer_1ff7570cf9e757d7892da0d94499edd3)() const = &::clang::ObjCObjectType::isKindOfType;
    bool  (::clang::ObjCObjectType::*method_pointer_0e786a30d2565ea4b5172321b0ab5628)() const = &::clang::ObjCObjectType::isKindOfTypeAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_0060fcc3d2ea5f2c88b19bf8aa2aecdb)() const = &::clang::ObjCObjectType::isObjCClass;
    bool  (::clang::ObjCObjectType::*method_pointer_0bbe735607d25d6ab4392a98019acf1b)() const = &::clang::ObjCObjectType::isObjCId;
    bool  (::clang::ObjCObjectType::*method_pointer_e364f40e52d359619572bbbfe9f9b3ca)() const = &::clang::ObjCObjectType::isObjCQualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_f91084b819555b05a40c612c0f4bada3)() const = &::clang::ObjCObjectType::isObjCQualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_591e3c2b44f95bdaaea761b632f24d00)() const = &::clang::ObjCObjectType::isObjCUnqualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_b0c93f91e9e05ca39d710143ec3e7eae)() const = &::clang::ObjCObjectType::isObjCUnqualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_dfbb400bcc6854d5b7a02e6d85181317)() const = &::clang::ObjCObjectType::isObjCUnqualifiedIdOrClass;
    bool  (::clang::ObjCObjectType::*method_pointer_c2ee168ee068567ca5eaa0bfb5a850d2)() const = &::clang::ObjCObjectType::isSpecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_ca3d5d78fb93500faa77d8b23f3efa3c)() const = &::clang::ObjCObjectType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_21f028bb71a055e79d61dc61e7bbe31f)() const = &::clang::ObjCObjectType::isSugared;
    bool  (::clang::ObjCObjectType::*method_pointer_059e570d43e75da299604a4c4e094254)() const = &::clang::ObjCObjectType::isUnspecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_68dfe22851a052308a3075cc92724587)() const = &::clang::ObjCObjectType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_7ba9336e89b65fc590f59d5de8e952f4)() const = &::clang::ObjCObjectType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectType, autowig::HeldType< class ::clang::ObjCObjectType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3980f13801db50f498b55d818463d500("ObjCObjectType", "", boost::python::no_init);
    class_3980f13801db50f498b55d818463d500.def("classof", method_pointer_99a6e5cb1eae523a94f9bf64cd5cfd76, "");
    class_3980f13801db50f498b55d818463d500.def("desugar", method_pointer_8ea1f1a6a45f5c5c9fe4c30a31b8b044, "");
    class_3980f13801db50f498b55d818463d500.def("get_base_type", method_pointer_7f31d4f6e1b254f48536d27c2accf6d4, "");
    class_3980f13801db50f498b55d818463d500.def("get_interface", method_pointer_f269b6f2d86f5d49b2f375a6a7d3f970, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_num_protocols", method_pointer_650eec5bed675c9e858b7e5c352c473b, "");
    class_3980f13801db50f498b55d818463d500.def("get_protocol", method_pointer_ddfa4ed4dc845a9dac8caeaee55b4ae6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_super_class_type", method_pointer_bd1090668cc350d396b925071772e3e1, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type", method_pointer_1ff7570cf9e757d7892da0d94499edd3, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type_as_written", method_pointer_0e786a30d2565ea4b5172321b0ab5628, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_class", method_pointer_0060fcc3d2ea5f2c88b19bf8aa2aecdb, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_id", method_pointer_0bbe735607d25d6ab4392a98019acf1b, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_class", method_pointer_e364f40e52d359619572bbbfe9f9b3ca, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_id", method_pointer_f91084b819555b05a40c612c0f4bada3, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_class", method_pointer_591e3c2b44f95bdaaea761b632f24d00, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id", method_pointer_b0c93f91e9e05ca39d710143ec3e7eae, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id_or_class", method_pointer_dfbb400bcc6854d5b7a02e6d85181317, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized", method_pointer_c2ee168ee068567ca5eaa0bfb5a850d2, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized_as_written", method_pointer_ca3d5d78fb93500faa77d8b23f3efa3c, "");
    class_3980f13801db50f498b55d818463d500.def("is_sugared", method_pointer_21f028bb71a055e79d61dc61e7bbe31f, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized", method_pointer_059e570d43e75da299604a4c4e094254, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized_as_written", method_pointer_68dfe22851a052308a3075cc92724587, "");
    class_3980f13801db50f498b55d818463d500.def("qual_empty", method_pointer_7ba9336e89b65fc590f59d5de8e952f4, "");
    class_3980f13801db50f498b55d818463d500.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectType >, autowig::HeldType< class ::clang::Type > >();
    }

}