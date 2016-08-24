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
    bool  (*method_pointer_edec5d2deca758d0b661b05efed4953d)(class ::clang::Type  const *) = ::clang::ObjCObjectPointerType::classof;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_c458f531c0655af0a0e84c0ee236c62d)() const = &::clang::ObjCObjectPointerType::desugar;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectPointerType::*method_pointer_194645a910f956c7880562df2dfee47a)() const = &::clang::ObjCObjectPointerType::getInterfaceDecl;
    class ::clang::ObjCInterfaceType  const * (::clang::ObjCObjectPointerType::*method_pointer_465cefe7a15653a49d8aa9629fdbe883)() const = &::clang::ObjCObjectPointerType::getInterfaceType;
    unsigned int  (::clang::ObjCObjectPointerType::*method_pointer_0c842589110159e5953af4ec681b691d)() const = &::clang::ObjCObjectPointerType::getNumProtocols;
    class ::clang::ObjCObjectType  const * (::clang::ObjCObjectPointerType::*method_pointer_8e1a9f89ca5d5bb0afbe1afe8fd66717)() const = &::clang::ObjCObjectPointerType::getObjectType;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_1cc3e245492c5ae7af04445d565c4f41)() const = &::clang::ObjCObjectPointerType::getPointeeType;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectPointerType::*method_pointer_96bdfb35411c5f8bb25fded611c14957)(unsigned int ) const = &::clang::ObjCObjectPointerType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_1be3e9426f5c5920bdbf8e207465b1a9)() const = &::clang::ObjCObjectPointerType::getSuperClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_92f6c5bb18d15c2d97f4b5c86fcbd75e)() const = &::clang::ObjCObjectPointerType::isKindOfType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_1edb0854694f58569eaf1b043b59b12a)() const = &::clang::ObjCObjectPointerType::isObjCClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_31e395bc43e45b87a9da7b8197f98e13)() const = &::clang::ObjCObjectPointerType::isObjCIdOrClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_6a71ba3fedf3545e9b337647e7a29a5d)() const = &::clang::ObjCObjectPointerType::isObjCIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_26aca645ce4c520aa37c2b6a412fcd10)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_2c0e68ed37fc59ed824f11e8e7db61b2)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_7c15967412b65ef983689e627bb49bde)() const = &::clang::ObjCObjectPointerType::isSpecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_794ac99050bc56b69e404a204d783c91)() const = &::clang::ObjCObjectPointerType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_b86cb69b8dbf5fa6ac0fef962bcbbc86)() const = &::clang::ObjCObjectPointerType::isSugared;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_ad423587978757a6b200caa3368759f1)() const = &::clang::ObjCObjectPointerType::isUnspecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_56604a8effeb5c738c60b2798a20aa84)() const = &::clang::ObjCObjectPointerType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_06e9e50c842d5c0591a2a8cb1be8194d)() const = &::clang::ObjCObjectPointerType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectPointerType, autowig::HeldType< class ::clang::ObjCObjectPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_282d613855865c408950cce436839a1f("ObjCObjectPointerType", "", boost::python::no_init);
    class_282d613855865c408950cce436839a1f.def("classof", method_pointer_edec5d2deca758d0b661b05efed4953d, "");
    class_282d613855865c408950cce436839a1f.def("desugar", method_pointer_c458f531c0655af0a0e84c0ee236c62d, "");
    class_282d613855865c408950cce436839a1f.def("get_interface_decl", method_pointer_194645a910f956c7880562df2dfee47a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_interface_type", method_pointer_465cefe7a15653a49d8aa9629fdbe883, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_num_protocols", method_pointer_0c842589110159e5953af4ec681b691d, "");
    class_282d613855865c408950cce436839a1f.def("get_object_type", method_pointer_8e1a9f89ca5d5bb0afbe1afe8fd66717, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_pointee_type", method_pointer_1cc3e245492c5ae7af04445d565c4f41, "");
    class_282d613855865c408950cce436839a1f.def("get_protocol", method_pointer_96bdfb35411c5f8bb25fded611c14957, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_super_class_type", method_pointer_1be3e9426f5c5920bdbf8e207465b1a9, "");
    class_282d613855865c408950cce436839a1f.def("is_kind_of_type", method_pointer_92f6c5bb18d15c2d97f4b5c86fcbd75e, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_class_type", method_pointer_1edb0854694f58569eaf1b043b59b12a, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_or_class_type", method_pointer_31e395bc43e45b87a9da7b8197f98e13, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_type", method_pointer_6a71ba3fedf3545e9b337647e7a29a5d, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_class_type", method_pointer_26aca645ce4c520aa37c2b6a412fcd10, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_id_type", method_pointer_2c0e68ed37fc59ed824f11e8e7db61b2, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized", method_pointer_7c15967412b65ef983689e627bb49bde, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized_as_written", method_pointer_794ac99050bc56b69e404a204d783c91, "");
    class_282d613855865c408950cce436839a1f.def("is_sugared", method_pointer_b86cb69b8dbf5fa6ac0fef962bcbbc86, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized", method_pointer_ad423587978757a6b200caa3368759f1, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized_as_written", method_pointer_56604a8effeb5c738c60b2798a20aa84, "");
    class_282d613855865c408950cce436839a1f.def("qual_empty", method_pointer_06e9e50c842d5c0591a2a8cb1be8194d, "");
    class_282d613855865c408950cce436839a1f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}