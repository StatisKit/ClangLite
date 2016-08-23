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
    bool  (*method_pointer_795957a8ed0859119f93baccc1e5b433)(class ::clang::Type  const *) = ::clang::ObjCObjectType::classof;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_34fccbf8e86858df84ac5e0d77086b82)() const = &::clang::ObjCObjectType::desugar;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_1822057d1acf5b5e80a82ce372acc2fc)() const = &::clang::ObjCObjectType::getBaseType;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectType::*method_pointer_84ceb89472595829ae32fc553ca72514)() const = &::clang::ObjCObjectType::getInterface;
    unsigned int  (::clang::ObjCObjectType::*method_pointer_717cee0d138d5f2d93f53f9a60502251)() const = &::clang::ObjCObjectType::getNumProtocols;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectType::*method_pointer_5136834958dd53519a401f2b8d15498d)(unsigned int ) const = &::clang::ObjCObjectType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_1c7069933e51538aad644d70e3b937b5)() const = &::clang::ObjCObjectType::getSuperClassType;
    bool  (::clang::ObjCObjectType::*method_pointer_01bc8b0a4a535f17a6a7fed317b181d7)() const = &::clang::ObjCObjectType::isKindOfType;
    bool  (::clang::ObjCObjectType::*method_pointer_875a76046ed459e288fa1ea64a6b2bbf)() const = &::clang::ObjCObjectType::isKindOfTypeAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_4d55d775235d54658a5eb6fbba6dc1ab)() const = &::clang::ObjCObjectType::isObjCClass;
    bool  (::clang::ObjCObjectType::*method_pointer_79e06bbf6327588bb5944dd06c1496c1)() const = &::clang::ObjCObjectType::isObjCId;
    bool  (::clang::ObjCObjectType::*method_pointer_50f0b22271bd580b974e44667fa18ae4)() const = &::clang::ObjCObjectType::isObjCQualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_7b3ac0af0e3456d495ef92d8cba80134)() const = &::clang::ObjCObjectType::isObjCQualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_04fa562d17015444a12bcbcf0ca7d85b)() const = &::clang::ObjCObjectType::isObjCUnqualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_31e8a54c2fda5b8da7664f5c1c181839)() const = &::clang::ObjCObjectType::isObjCUnqualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_69c4471ea7a95fac9420b1bfb302773c)() const = &::clang::ObjCObjectType::isObjCUnqualifiedIdOrClass;
    bool  (::clang::ObjCObjectType::*method_pointer_11f69225d6ea51a3805414f285bc4980)() const = &::clang::ObjCObjectType::isSpecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_b28736fe17ab5c798fa9e1ef2bf57c3b)() const = &::clang::ObjCObjectType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_a6c1574546085a12b6c0e1fe7e1d4cd5)() const = &::clang::ObjCObjectType::isSugared;
    bool  (::clang::ObjCObjectType::*method_pointer_1c957f25aa3f59db8a8082715deeb36f)() const = &::clang::ObjCObjectType::isUnspecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_c2733452cfbf5c198620117846c06e47)() const = &::clang::ObjCObjectType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_8d44d832cb55515f90430ea005fb5672)() const = &::clang::ObjCObjectType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectType, autowig::HeldType< class ::clang::ObjCObjectType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3980f13801db50f498b55d818463d500("ObjCObjectType", "", boost::python::no_init);
    class_3980f13801db50f498b55d818463d500.def("classof", method_pointer_795957a8ed0859119f93baccc1e5b433, "");
    class_3980f13801db50f498b55d818463d500.def("desugar", method_pointer_34fccbf8e86858df84ac5e0d77086b82, "");
    class_3980f13801db50f498b55d818463d500.def("get_base_type", method_pointer_1822057d1acf5b5e80a82ce372acc2fc, "");
    class_3980f13801db50f498b55d818463d500.def("get_interface", method_pointer_84ceb89472595829ae32fc553ca72514, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_num_protocols", method_pointer_717cee0d138d5f2d93f53f9a60502251, "");
    class_3980f13801db50f498b55d818463d500.def("get_protocol", method_pointer_5136834958dd53519a401f2b8d15498d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_super_class_type", method_pointer_1c7069933e51538aad644d70e3b937b5, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type", method_pointer_01bc8b0a4a535f17a6a7fed317b181d7, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type_as_written", method_pointer_875a76046ed459e288fa1ea64a6b2bbf, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_class", method_pointer_4d55d775235d54658a5eb6fbba6dc1ab, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_id", method_pointer_79e06bbf6327588bb5944dd06c1496c1, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_class", method_pointer_50f0b22271bd580b974e44667fa18ae4, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_id", method_pointer_7b3ac0af0e3456d495ef92d8cba80134, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_class", method_pointer_04fa562d17015444a12bcbcf0ca7d85b, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id", method_pointer_31e8a54c2fda5b8da7664f5c1c181839, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id_or_class", method_pointer_69c4471ea7a95fac9420b1bfb302773c, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized", method_pointer_11f69225d6ea51a3805414f285bc4980, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized_as_written", method_pointer_b28736fe17ab5c798fa9e1ef2bf57c3b, "");
    class_3980f13801db50f498b55d818463d500.def("is_sugared", method_pointer_a6c1574546085a12b6c0e1fe7e1d4cd5, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized", method_pointer_1c957f25aa3f59db8a8082715deeb36f, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized_as_written", method_pointer_c2733452cfbf5c198620117846c06e47, "");
    class_3980f13801db50f498b55d818463d500.def("qual_empty", method_pointer_8d44d832cb55515f90430ea005fb5672, "");
    class_3980f13801db50f498b55d818463d500.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectType >, autowig::HeldType< class ::clang::Type > >();
    }

}