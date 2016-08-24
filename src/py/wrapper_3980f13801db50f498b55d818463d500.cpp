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
    bool  (*method_pointer_54ce16e3db8f53b9879cc8a08625b41c)(class ::clang::Type  const *) = ::clang::ObjCObjectType::classof;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_a5770f14626358088c5a00188674c90d)() const = &::clang::ObjCObjectType::desugar;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_ec52ab7b35035d0e8b364a44ac8f0af8)() const = &::clang::ObjCObjectType::getBaseType;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectType::*method_pointer_da760e4ee7665ebead5be61030dbb661)() const = &::clang::ObjCObjectType::getInterface;
    unsigned int  (::clang::ObjCObjectType::*method_pointer_bf6faca0f90255f3a414511cf0f48afe)() const = &::clang::ObjCObjectType::getNumProtocols;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectType::*method_pointer_660abcb1c770563e93139cc906f43576)(unsigned int ) const = &::clang::ObjCObjectType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_d5efd099b3c05bb79b54cce7fc4217b9)() const = &::clang::ObjCObjectType::getSuperClassType;
    bool  (::clang::ObjCObjectType::*method_pointer_562d786580915262b37a1a2dd765c79b)() const = &::clang::ObjCObjectType::isKindOfType;
    bool  (::clang::ObjCObjectType::*method_pointer_29dd170f76ba54c3a420cb87c604d139)() const = &::clang::ObjCObjectType::isKindOfTypeAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_85be1120aff45db29749057e5d0e2848)() const = &::clang::ObjCObjectType::isObjCClass;
    bool  (::clang::ObjCObjectType::*method_pointer_ad341db6a7f75449b01ed9ddf2eaaedc)() const = &::clang::ObjCObjectType::isObjCId;
    bool  (::clang::ObjCObjectType::*method_pointer_a6ca463ebda85eb581708103d8779e3b)() const = &::clang::ObjCObjectType::isObjCQualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_eac9bc77729155eabc6c099855cfa23e)() const = &::clang::ObjCObjectType::isObjCQualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_c013ef2929e45b6a8e2a7a6b58156aaf)() const = &::clang::ObjCObjectType::isObjCUnqualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_a299e390067c5fd984f1bde9f5ccd1ce)() const = &::clang::ObjCObjectType::isObjCUnqualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_417a4d6297e951ddb6b416c5509557f8)() const = &::clang::ObjCObjectType::isObjCUnqualifiedIdOrClass;
    bool  (::clang::ObjCObjectType::*method_pointer_506a34c874fa5eacbf1959886a133f0f)() const = &::clang::ObjCObjectType::isSpecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_e1bea685cb2356479a04df1ae5e5807e)() const = &::clang::ObjCObjectType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_4479ee33e9335a908cb13bb27bd74d90)() const = &::clang::ObjCObjectType::isSugared;
    bool  (::clang::ObjCObjectType::*method_pointer_f1d082b412905a5d8a1ca58b4d563c68)() const = &::clang::ObjCObjectType::isUnspecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_d6b305ca38ac55279e797c147defdeaa)() const = &::clang::ObjCObjectType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_bc46b235c6a7568f83bedabbba527fb8)() const = &::clang::ObjCObjectType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectType, autowig::HeldType< class ::clang::ObjCObjectType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3980f13801db50f498b55d818463d500("ObjCObjectType", "", boost::python::no_init);
    class_3980f13801db50f498b55d818463d500.def("classof", method_pointer_54ce16e3db8f53b9879cc8a08625b41c, "");
    class_3980f13801db50f498b55d818463d500.def("desugar", method_pointer_a5770f14626358088c5a00188674c90d, "");
    class_3980f13801db50f498b55d818463d500.def("get_base_type", method_pointer_ec52ab7b35035d0e8b364a44ac8f0af8, "");
    class_3980f13801db50f498b55d818463d500.def("get_interface", method_pointer_da760e4ee7665ebead5be61030dbb661, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_num_protocols", method_pointer_bf6faca0f90255f3a414511cf0f48afe, "");
    class_3980f13801db50f498b55d818463d500.def("get_protocol", method_pointer_660abcb1c770563e93139cc906f43576, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_super_class_type", method_pointer_d5efd099b3c05bb79b54cce7fc4217b9, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type", method_pointer_562d786580915262b37a1a2dd765c79b, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type_as_written", method_pointer_29dd170f76ba54c3a420cb87c604d139, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_class", method_pointer_85be1120aff45db29749057e5d0e2848, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_id", method_pointer_ad341db6a7f75449b01ed9ddf2eaaedc, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_class", method_pointer_a6ca463ebda85eb581708103d8779e3b, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_id", method_pointer_eac9bc77729155eabc6c099855cfa23e, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_class", method_pointer_c013ef2929e45b6a8e2a7a6b58156aaf, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id", method_pointer_a299e390067c5fd984f1bde9f5ccd1ce, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id_or_class", method_pointer_417a4d6297e951ddb6b416c5509557f8, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized", method_pointer_506a34c874fa5eacbf1959886a133f0f, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized_as_written", method_pointer_e1bea685cb2356479a04df1ae5e5807e, "");
    class_3980f13801db50f498b55d818463d500.def("is_sugared", method_pointer_4479ee33e9335a908cb13bb27bd74d90, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized", method_pointer_f1d082b412905a5d8a1ca58b4d563c68, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized_as_written", method_pointer_d6b305ca38ac55279e797c147defdeaa, "");
    class_3980f13801db50f498b55d818463d500.def("qual_empty", method_pointer_bc46b235c6a7568f83bedabbba527fb8, "");
    class_3980f13801db50f498b55d818463d500.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectType >, autowig::HeldType< class ::clang::Type > >();
    }

}