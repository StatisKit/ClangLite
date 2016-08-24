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
    bool  (*method_pointer_bc49decb71fa50e49f3fc0795eb69645)(class ::clang::Type  const *) = ::clang::ObjCObjectPointerType::classof;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_8c398b16f32051f78f113241b7f6aa0e)() const = &::clang::ObjCObjectPointerType::desugar;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectPointerType::*method_pointer_7222bcd787a05d81b1c1efad1b2ecabe)() const = &::clang::ObjCObjectPointerType::getInterfaceDecl;
    class ::clang::ObjCInterfaceType  const * (::clang::ObjCObjectPointerType::*method_pointer_f1a143d529815c2b95bd648f53799df9)() const = &::clang::ObjCObjectPointerType::getInterfaceType;
    unsigned int  (::clang::ObjCObjectPointerType::*method_pointer_54d0fd86e4b85fbbb661b2f8ef448d0e)() const = &::clang::ObjCObjectPointerType::getNumProtocols;
    class ::clang::ObjCObjectType  const * (::clang::ObjCObjectPointerType::*method_pointer_ae41f3d503e756b49122fa7fcdf105f6)() const = &::clang::ObjCObjectPointerType::getObjectType;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_14eec078ba9e51b4a742edd36c0147b3)() const = &::clang::ObjCObjectPointerType::getPointeeType;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectPointerType::*method_pointer_a575facbe7bc5d989a9738cc55dba360)(unsigned int ) const = &::clang::ObjCObjectPointerType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_40f6d046f4595146961f3c64ed8a2d8b)() const = &::clang::ObjCObjectPointerType::getSuperClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_0e82e08fff405050863101d706dc98c1)() const = &::clang::ObjCObjectPointerType::isKindOfType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_ef25dc4433b85070b1df41b744aad425)() const = &::clang::ObjCObjectPointerType::isObjCClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_d5ccc643d90954bcb266f15bbc4ec0cb)() const = &::clang::ObjCObjectPointerType::isObjCIdOrClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_b41c993ac0245e49aa2fee1d9d1d5127)() const = &::clang::ObjCObjectPointerType::isObjCIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_bac81bf76dc95fc585feda8249ac70c9)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_2833b910dbdc516a87ffc1e46b1e5ced)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_a3032c4e163e5342b6ddd5baec40a5cf)() const = &::clang::ObjCObjectPointerType::isSpecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_79fbeb752fd158d9a84a5dee727caa63)() const = &::clang::ObjCObjectPointerType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_853f1ba396f25af683a37ff1b1b9780f)() const = &::clang::ObjCObjectPointerType::isSugared;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_01e6945397e85014a4f87334a5b4e2ce)() const = &::clang::ObjCObjectPointerType::isUnspecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_58d9860f215750bcae02663309dc6782)() const = &::clang::ObjCObjectPointerType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_8d8939f624945ee0ba7670f880711bd1)() const = &::clang::ObjCObjectPointerType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectPointerType, autowig::HeldType< class ::clang::ObjCObjectPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_282d613855865c408950cce436839a1f("ObjCObjectPointerType", "", boost::python::no_init);
    class_282d613855865c408950cce436839a1f.def("classof", method_pointer_bc49decb71fa50e49f3fc0795eb69645, "");
    class_282d613855865c408950cce436839a1f.def("desugar", method_pointer_8c398b16f32051f78f113241b7f6aa0e, "");
    class_282d613855865c408950cce436839a1f.def("get_interface_decl", method_pointer_7222bcd787a05d81b1c1efad1b2ecabe, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_interface_type", method_pointer_f1a143d529815c2b95bd648f53799df9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_num_protocols", method_pointer_54d0fd86e4b85fbbb661b2f8ef448d0e, "");
    class_282d613855865c408950cce436839a1f.def("get_object_type", method_pointer_ae41f3d503e756b49122fa7fcdf105f6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_pointee_type", method_pointer_14eec078ba9e51b4a742edd36c0147b3, "");
    class_282d613855865c408950cce436839a1f.def("get_protocol", method_pointer_a575facbe7bc5d989a9738cc55dba360, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_super_class_type", method_pointer_40f6d046f4595146961f3c64ed8a2d8b, "");
    class_282d613855865c408950cce436839a1f.def("is_kind_of_type", method_pointer_0e82e08fff405050863101d706dc98c1, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_class_type", method_pointer_ef25dc4433b85070b1df41b744aad425, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_or_class_type", method_pointer_d5ccc643d90954bcb266f15bbc4ec0cb, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_type", method_pointer_b41c993ac0245e49aa2fee1d9d1d5127, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_class_type", method_pointer_bac81bf76dc95fc585feda8249ac70c9, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_id_type", method_pointer_2833b910dbdc516a87ffc1e46b1e5ced, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized", method_pointer_a3032c4e163e5342b6ddd5baec40a5cf, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized_as_written", method_pointer_79fbeb752fd158d9a84a5dee727caa63, "");
    class_282d613855865c408950cce436839a1f.def("is_sugared", method_pointer_853f1ba396f25af683a37ff1b1b9780f, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized", method_pointer_01e6945397e85014a4f87334a5b4e2ce, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized_as_written", method_pointer_58d9860f215750bcae02663309dc6782, "");
    class_282d613855865c408950cce436839a1f.def("qual_empty", method_pointer_8d8939f624945ee0ba7670f880711bd1, "");
    class_282d613855865c408950cce436839a1f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}