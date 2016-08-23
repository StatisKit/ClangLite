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
    bool  (*method_pointer_14e7ff2066aa5e469959a0cb835185ec)(class ::clang::Type  const *) = ::clang::ObjCObjectPointerType::classof;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_d15875aa2d4c5286840602c53f9c2dfc)() const = &::clang::ObjCObjectPointerType::desugar;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectPointerType::*method_pointer_f20122bee9c852b3991fa09ee374c186)() const = &::clang::ObjCObjectPointerType::getInterfaceDecl;
    class ::clang::ObjCInterfaceType  const * (::clang::ObjCObjectPointerType::*method_pointer_34f2ed1e9fc152b8a850b165af4dc8e1)() const = &::clang::ObjCObjectPointerType::getInterfaceType;
    unsigned int  (::clang::ObjCObjectPointerType::*method_pointer_60f0e7ed53205b6aad367501e2441986)() const = &::clang::ObjCObjectPointerType::getNumProtocols;
    class ::clang::ObjCObjectType  const * (::clang::ObjCObjectPointerType::*method_pointer_fe47809a8199505084f46642011861a3)() const = &::clang::ObjCObjectPointerType::getObjectType;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_c48849b4c4f652abaef3ef014043a08d)() const = &::clang::ObjCObjectPointerType::getPointeeType;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectPointerType::*method_pointer_67b16cfeda2c5fdd8be327dea8eb4d29)(unsigned int ) const = &::clang::ObjCObjectPointerType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_04877af87a095afcb62dbd942d0119ff)() const = &::clang::ObjCObjectPointerType::getSuperClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_2e628b3a2b4951d693b433fab752e195)() const = &::clang::ObjCObjectPointerType::isKindOfType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_4b03d8cf3d8b5db38f0b634016e9c6a0)() const = &::clang::ObjCObjectPointerType::isObjCClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_abb508fcaca25e15a65db845515a7c4b)() const = &::clang::ObjCObjectPointerType::isObjCIdOrClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_76f828ebdda551bf992638b305f0fb70)() const = &::clang::ObjCObjectPointerType::isObjCIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_c0be0401f6b65af68b4fe3d617c0c9cc)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_4aa06a52eccd582b9df761828143c7d4)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_d92323c2da6157a28ce98eafb209ce04)() const = &::clang::ObjCObjectPointerType::isSpecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_bdba4bf023e25fc28bd3339192e3c551)() const = &::clang::ObjCObjectPointerType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_f9839ecd0b55562092bed5af13fd8189)() const = &::clang::ObjCObjectPointerType::isSugared;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_3f1ba168f58c5bd19b7c45d25c98b68c)() const = &::clang::ObjCObjectPointerType::isUnspecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_e5d4fd0666445e9483525785594e54f2)() const = &::clang::ObjCObjectPointerType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_b49567d23aff5564aebd87e69f748f68)() const = &::clang::ObjCObjectPointerType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectPointerType, autowig::HeldType< class ::clang::ObjCObjectPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_282d613855865c408950cce436839a1f("ObjCObjectPointerType", "", boost::python::no_init);
    class_282d613855865c408950cce436839a1f.def("classof", method_pointer_14e7ff2066aa5e469959a0cb835185ec, "");
    class_282d613855865c408950cce436839a1f.def("desugar", method_pointer_d15875aa2d4c5286840602c53f9c2dfc, "");
    class_282d613855865c408950cce436839a1f.def("get_interface_decl", method_pointer_f20122bee9c852b3991fa09ee374c186, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_interface_type", method_pointer_34f2ed1e9fc152b8a850b165af4dc8e1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_num_protocols", method_pointer_60f0e7ed53205b6aad367501e2441986, "");
    class_282d613855865c408950cce436839a1f.def("get_object_type", method_pointer_fe47809a8199505084f46642011861a3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_pointee_type", method_pointer_c48849b4c4f652abaef3ef014043a08d, "");
    class_282d613855865c408950cce436839a1f.def("get_protocol", method_pointer_67b16cfeda2c5fdd8be327dea8eb4d29, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_super_class_type", method_pointer_04877af87a095afcb62dbd942d0119ff, "");
    class_282d613855865c408950cce436839a1f.def("is_kind_of_type", method_pointer_2e628b3a2b4951d693b433fab752e195, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_class_type", method_pointer_4b03d8cf3d8b5db38f0b634016e9c6a0, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_or_class_type", method_pointer_abb508fcaca25e15a65db845515a7c4b, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_type", method_pointer_76f828ebdda551bf992638b305f0fb70, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_class_type", method_pointer_c0be0401f6b65af68b4fe3d617c0c9cc, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_id_type", method_pointer_4aa06a52eccd582b9df761828143c7d4, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized", method_pointer_d92323c2da6157a28ce98eafb209ce04, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized_as_written", method_pointer_bdba4bf023e25fc28bd3339192e3c551, "");
    class_282d613855865c408950cce436839a1f.def("is_sugared", method_pointer_f9839ecd0b55562092bed5af13fd8189, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized", method_pointer_3f1ba168f58c5bd19b7c45d25c98b68c, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized_as_written", method_pointer_e5d4fd0666445e9483525785594e54f2, "");
    class_282d613855865c408950cce436839a1f.def("qual_empty", method_pointer_b49567d23aff5564aebd87e69f748f68, "");
    class_282d613855865c408950cce436839a1f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}