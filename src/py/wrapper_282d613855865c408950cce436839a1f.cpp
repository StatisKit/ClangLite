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
    bool  (*method_pointer_bf989e38eca8527fb97a2f81cb6c392e)(class ::clang::Type  const *) = ::clang::ObjCObjectPointerType::classof;
    class ::clang::ObjCInterfaceType  const * (::clang::ObjCObjectPointerType::*method_pointer_8c8005974ad45976aa54254742a03d89)() const = &::clang::ObjCObjectPointerType::getInterfaceType;
    unsigned int  (::clang::ObjCObjectPointerType::*method_pointer_f8315aeb780e5a75a328586f4cb52360)() const = &::clang::ObjCObjectPointerType::getNumProtocols;
    class ::clang::ObjCObjectType  const * (::clang::ObjCObjectPointerType::*method_pointer_c70fcb4efb31514583808b704276ab33)() const = &::clang::ObjCObjectPointerType::getObjectType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_e29d1380c0c95c0f868c45d8f765e9d5)() const = &::clang::ObjCObjectPointerType::isKindOfType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_5b0149677d0950d484f9b1225690e6c4)() const = &::clang::ObjCObjectPointerType::isObjCClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_6a7d7a9281ba5b0e8e69238546b36a81)() const = &::clang::ObjCObjectPointerType::isObjCIdOrClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_4e069558593a50dba46d0d1833cf3f88)() const = &::clang::ObjCObjectPointerType::isObjCIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_e194be6c2efe53378a417f24bdff25a5)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_c01abc19190c5e7ea68905f643b92487)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_807cf6f1cbd3527a8ff2fa0c46642c53)() const = &::clang::ObjCObjectPointerType::isSpecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_baca51082bc35107904a6134f93f81c5)() const = &::clang::ObjCObjectPointerType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_f6670a797f2f5393a279e452706a7c24)() const = &::clang::ObjCObjectPointerType::isSugared;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_9760cd9b8b8355239a1b5035042ab747)() const = &::clang::ObjCObjectPointerType::isUnspecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_95b7b62ff1fa574b98f73944922a7c84)() const = &::clang::ObjCObjectPointerType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_c15731ef36685625832b2de1a3bcbd3d)() const = &::clang::ObjCObjectPointerType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectPointerType, autowig::HeldType< class ::clang::ObjCObjectPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_282d613855865c408950cce436839a1f("ObjCObjectPointerType", "", boost::python::no_init);
    class_282d613855865c408950cce436839a1f.def("classof", method_pointer_bf989e38eca8527fb97a2f81cb6c392e, "");
    class_282d613855865c408950cce436839a1f.def("get_interface_type", method_pointer_8c8005974ad45976aa54254742a03d89, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_num_protocols", method_pointer_f8315aeb780e5a75a328586f4cb52360, "");
    class_282d613855865c408950cce436839a1f.def("get_object_type", method_pointer_c70fcb4efb31514583808b704276ab33, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("is_kind_of_type", method_pointer_e29d1380c0c95c0f868c45d8f765e9d5, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_class_type", method_pointer_5b0149677d0950d484f9b1225690e6c4, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_or_class_type", method_pointer_6a7d7a9281ba5b0e8e69238546b36a81, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_type", method_pointer_4e069558593a50dba46d0d1833cf3f88, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_class_type", method_pointer_e194be6c2efe53378a417f24bdff25a5, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_id_type", method_pointer_c01abc19190c5e7ea68905f643b92487, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized", method_pointer_807cf6f1cbd3527a8ff2fa0c46642c53, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized_as_written", method_pointer_baca51082bc35107904a6134f93f81c5, "");
    class_282d613855865c408950cce436839a1f.def("is_sugared", method_pointer_f6670a797f2f5393a279e452706a7c24, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized", method_pointer_9760cd9b8b8355239a1b5035042ab747, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized_as_written", method_pointer_95b7b62ff1fa574b98f73944922a7c84, "");
    class_282d613855865c408950cce436839a1f.def("qual_empty", method_pointer_c15731ef36685625832b2de1a3bcbd3d, "");
    class_282d613855865c408950cce436839a1f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}