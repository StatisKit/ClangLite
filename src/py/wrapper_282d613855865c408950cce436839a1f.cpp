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
    bool  (*method_pointer_02ab715a55c753c4a0a6f0422039b981)(class ::clang::Type  const *) = ::clang::ObjCObjectPointerType::classof;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_c996eef844615d64a7ef31d558110f1b)() const = &::clang::ObjCObjectPointerType::desugar;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectPointerType::*method_pointer_104cb43e44bb5128996ec4ff115227c0)() const = &::clang::ObjCObjectPointerType::getInterfaceDecl;
    class ::clang::ObjCInterfaceType  const * (::clang::ObjCObjectPointerType::*method_pointer_3137ac3f20c85af8980acd3f5c1f2b6f)() const = &::clang::ObjCObjectPointerType::getInterfaceType;
    unsigned int  (::clang::ObjCObjectPointerType::*method_pointer_4ee8eef3d7d75968a0142f59fc6dc813)() const = &::clang::ObjCObjectPointerType::getNumProtocols;
    class ::clang::ObjCObjectType  const * (::clang::ObjCObjectPointerType::*method_pointer_3280fc56b2275fcba4500faaea02cd21)() const = &::clang::ObjCObjectPointerType::getObjectType;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_aab63813f75254ccbbb5ad0b8020deb2)() const = &::clang::ObjCObjectPointerType::getPointeeType;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectPointerType::*method_pointer_13fda71efd885d94890584bd0cf4d998)(unsigned int ) const = &::clang::ObjCObjectPointerType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_707743dfb5ff5174aa56427ac7a4c079)() const = &::clang::ObjCObjectPointerType::getSuperClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_26edf479d260520189b94950c50fc95b)() const = &::clang::ObjCObjectPointerType::isKindOfType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_2337013c83a05a14b52f6ca69b3ce449)() const = &::clang::ObjCObjectPointerType::isObjCClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_71a3d23b32095d029177f8a3b6330fb7)() const = &::clang::ObjCObjectPointerType::isObjCIdOrClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_f91fbab3749f569eb2d2b8491e5d4e66)() const = &::clang::ObjCObjectPointerType::isObjCIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_567bf71986545539896f1caba695bf0d)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_7d23006669da58c289bc8cfc0a084267)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_51faed8a403f5313a9b10671aee61d8c)() const = &::clang::ObjCObjectPointerType::isSpecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_6e18f3e9ad9f5a47bd4362b3b3173aa8)() const = &::clang::ObjCObjectPointerType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_03c4e70df5ac5571b82311583ff2593f)() const = &::clang::ObjCObjectPointerType::isSugared;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_6198f237e582511680bdbd4777a5e592)() const = &::clang::ObjCObjectPointerType::isUnspecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_89d7783ce5d357d2b8523b15f515dd86)() const = &::clang::ObjCObjectPointerType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_9779e9a9325053948b9da5a0d0839dad)() const = &::clang::ObjCObjectPointerType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectPointerType, autowig::HeldType< class ::clang::ObjCObjectPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_282d613855865c408950cce436839a1f("ObjCObjectPointerType", "", boost::python::no_init);
    class_282d613855865c408950cce436839a1f.def("classof", method_pointer_02ab715a55c753c4a0a6f0422039b981, "");
    class_282d613855865c408950cce436839a1f.def("desugar", method_pointer_c996eef844615d64a7ef31d558110f1b, "");
    class_282d613855865c408950cce436839a1f.def("get_interface_decl", method_pointer_104cb43e44bb5128996ec4ff115227c0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_interface_type", method_pointer_3137ac3f20c85af8980acd3f5c1f2b6f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_num_protocols", method_pointer_4ee8eef3d7d75968a0142f59fc6dc813, "");
    class_282d613855865c408950cce436839a1f.def("get_object_type", method_pointer_3280fc56b2275fcba4500faaea02cd21, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_pointee_type", method_pointer_aab63813f75254ccbbb5ad0b8020deb2, "");
    class_282d613855865c408950cce436839a1f.def("get_protocol", method_pointer_13fda71efd885d94890584bd0cf4d998, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_super_class_type", method_pointer_707743dfb5ff5174aa56427ac7a4c079, "");
    class_282d613855865c408950cce436839a1f.def("is_kind_of_type", method_pointer_26edf479d260520189b94950c50fc95b, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_class_type", method_pointer_2337013c83a05a14b52f6ca69b3ce449, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_or_class_type", method_pointer_71a3d23b32095d029177f8a3b6330fb7, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_type", method_pointer_f91fbab3749f569eb2d2b8491e5d4e66, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_class_type", method_pointer_567bf71986545539896f1caba695bf0d, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_id_type", method_pointer_7d23006669da58c289bc8cfc0a084267, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized", method_pointer_51faed8a403f5313a9b10671aee61d8c, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized_as_written", method_pointer_6e18f3e9ad9f5a47bd4362b3b3173aa8, "");
    class_282d613855865c408950cce436839a1f.def("is_sugared", method_pointer_03c4e70df5ac5571b82311583ff2593f, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized", method_pointer_6198f237e582511680bdbd4777a5e592, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized_as_written", method_pointer_89d7783ce5d357d2b8523b15f515dd86, "");
    class_282d613855865c408950cce436839a1f.def("qual_empty", method_pointer_9779e9a9325053948b9da5a0d0839dad, "");
    class_282d613855865c408950cce436839a1f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}