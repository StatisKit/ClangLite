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
    bool  (*method_pointer_26f23874537b55659041205216adcb9b)(class ::clang::Type  const *) = ::clang::ObjCObjectType::classof;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_e170039a8d335be68731f326104981b8)() const = &::clang::ObjCObjectType::desugar;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_2ac38906f50f57fd80dc0af6deb05396)() const = &::clang::ObjCObjectType::getBaseType;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectType::*method_pointer_6faab2faf3db58b4a2702c4539419c84)() const = &::clang::ObjCObjectType::getInterface;
    unsigned int  (::clang::ObjCObjectType::*method_pointer_7daa1680792557a3ac89ce377c47b0f9)() const = &::clang::ObjCObjectType::getNumProtocols;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectType::*method_pointer_aacc7fcbeeae5e6a90979a5baa58a0e0)(unsigned int ) const = &::clang::ObjCObjectType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_6d4e3fd413115f8b8d7a6779fc97f72b)() const = &::clang::ObjCObjectType::getSuperClassType;
    bool  (::clang::ObjCObjectType::*method_pointer_6a7c2e444a89570aa407359be4bb361f)() const = &::clang::ObjCObjectType::isKindOfType;
    bool  (::clang::ObjCObjectType::*method_pointer_ac0295053da257ffaf6c7cd96bcbd591)() const = &::clang::ObjCObjectType::isKindOfTypeAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_b834261f738158e998a541f03ed45e75)() const = &::clang::ObjCObjectType::isObjCClass;
    bool  (::clang::ObjCObjectType::*method_pointer_5c736da38aaa52ef909ddf07f6c103a3)() const = &::clang::ObjCObjectType::isObjCId;
    bool  (::clang::ObjCObjectType::*method_pointer_8add29ce04d5536aa64705f518b80ca5)() const = &::clang::ObjCObjectType::isObjCQualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_bd9f3533ea6253f4aed618547b252f5c)() const = &::clang::ObjCObjectType::isObjCQualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_1849dd29875e5449bb206fa2560e620f)() const = &::clang::ObjCObjectType::isObjCUnqualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_95f59d5e1fa0564e8a66088f90598c05)() const = &::clang::ObjCObjectType::isObjCUnqualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_b3a1edd793a35f6bae24705b8ea5d92f)() const = &::clang::ObjCObjectType::isObjCUnqualifiedIdOrClass;
    bool  (::clang::ObjCObjectType::*method_pointer_a52f2a53d69b54e59deb0c65c898a7ee)() const = &::clang::ObjCObjectType::isSpecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_573209f62b465a86aac7c5ba18828bd9)() const = &::clang::ObjCObjectType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_1422a2466a895edab0ea8ca7936f77d3)() const = &::clang::ObjCObjectType::isSugared;
    bool  (::clang::ObjCObjectType::*method_pointer_437ef34134005f168a445d4e414aee5a)() const = &::clang::ObjCObjectType::isUnspecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_3fbb730041b256ad92b566386eba565d)() const = &::clang::ObjCObjectType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_cbf6a8f0834e5ff68001c5787368c74c)() const = &::clang::ObjCObjectType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectType, autowig::HeldType< class ::clang::ObjCObjectType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3980f13801db50f498b55d818463d500("ObjCObjectType", "", boost::python::no_init);
    class_3980f13801db50f498b55d818463d500.def("classof", method_pointer_26f23874537b55659041205216adcb9b, "");
    class_3980f13801db50f498b55d818463d500.def("desugar", method_pointer_e170039a8d335be68731f326104981b8, "");
    class_3980f13801db50f498b55d818463d500.def("get_base_type", method_pointer_2ac38906f50f57fd80dc0af6deb05396, "");
    class_3980f13801db50f498b55d818463d500.def("get_interface", method_pointer_6faab2faf3db58b4a2702c4539419c84, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_num_protocols", method_pointer_7daa1680792557a3ac89ce377c47b0f9, "");
    class_3980f13801db50f498b55d818463d500.def("get_protocol", method_pointer_aacc7fcbeeae5e6a90979a5baa58a0e0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_super_class_type", method_pointer_6d4e3fd413115f8b8d7a6779fc97f72b, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type", method_pointer_6a7c2e444a89570aa407359be4bb361f, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type_as_written", method_pointer_ac0295053da257ffaf6c7cd96bcbd591, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_class", method_pointer_b834261f738158e998a541f03ed45e75, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_id", method_pointer_5c736da38aaa52ef909ddf07f6c103a3, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_class", method_pointer_8add29ce04d5536aa64705f518b80ca5, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_id", method_pointer_bd9f3533ea6253f4aed618547b252f5c, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_class", method_pointer_1849dd29875e5449bb206fa2560e620f, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id", method_pointer_95f59d5e1fa0564e8a66088f90598c05, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id_or_class", method_pointer_b3a1edd793a35f6bae24705b8ea5d92f, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized", method_pointer_a52f2a53d69b54e59deb0c65c898a7ee, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized_as_written", method_pointer_573209f62b465a86aac7c5ba18828bd9, "");
    class_3980f13801db50f498b55d818463d500.def("is_sugared", method_pointer_1422a2466a895edab0ea8ca7936f77d3, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized", method_pointer_437ef34134005f168a445d4e414aee5a, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized_as_written", method_pointer_3fbb730041b256ad92b566386eba565d, "");
    class_3980f13801db50f498b55d818463d500.def("qual_empty", method_pointer_cbf6a8f0834e5ff68001c5787368c74c, "");
    class_3980f13801db50f498b55d818463d500.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectType >, autowig::HeldType< class ::clang::Type > >();
    }

}