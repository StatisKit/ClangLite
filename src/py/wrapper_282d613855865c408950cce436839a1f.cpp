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
    bool  (*method_pointer_dc0126ba470f51459f37b328a9fa2869)(class ::clang::Type  const *) = ::clang::ObjCObjectPointerType::classof;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectPointerType::*method_pointer_50102b2274545dbdb0545d065c319a8c)() const = &::clang::ObjCObjectPointerType::getInterfaceDecl;
    class ::clang::ObjCInterfaceType  const * (::clang::ObjCObjectPointerType::*method_pointer_96f146fa654951af9ec29b665e5386be)() const = &::clang::ObjCObjectPointerType::getInterfaceType;
    unsigned int  (::clang::ObjCObjectPointerType::*method_pointer_cb3bd1e85e025f5ab49db6fc965fbcaf)() const = &::clang::ObjCObjectPointerType::getNumProtocols;
    class ::clang::ObjCObjectType  const * (::clang::ObjCObjectPointerType::*method_pointer_a5edacb8222a5b8b88f47c1092cde58e)() const = &::clang::ObjCObjectPointerType::getObjectType;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectPointerType::*method_pointer_822df903db3951799ee5cd2c8a0a9059)(unsigned int ) const = &::clang::ObjCObjectPointerType::getProtocol;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_eb273418d129525b843683c4a5e6ae1d)() const = &::clang::ObjCObjectPointerType::isKindOfType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_95fb8a7428175a58a1bf11024be469e9)() const = &::clang::ObjCObjectPointerType::isObjCClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_90fab45204d45565a7c96adaa9cd44a2)() const = &::clang::ObjCObjectPointerType::isObjCIdOrClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_70f50477e1cc5ef3912093695f76a99c)() const = &::clang::ObjCObjectPointerType::isObjCIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_3f956102a23c56b19f486315623e3892)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_0906e7e6c1b05ba1844dbc832a467e71)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_49507573357c55de9d75a12d02c297b4)() const = &::clang::ObjCObjectPointerType::isSpecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_5480b99c573753bb916e337916a64de1)() const = &::clang::ObjCObjectPointerType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_bcfc14ae9e3c549a87394e870b348c9e)() const = &::clang::ObjCObjectPointerType::isSugared;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_05e17b188c7a5f8eaf02d1c73f20acea)() const = &::clang::ObjCObjectPointerType::isUnspecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_bf585445956059dc9ab27c763ed782d3)() const = &::clang::ObjCObjectPointerType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_2c51a03b066e5da8b68dcb06ad988b34)() const = &::clang::ObjCObjectPointerType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectPointerType, autowig::HeldType< class ::clang::ObjCObjectPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_282d613855865c408950cce436839a1f("ObjCObjectPointerType", "", boost::python::no_init);
    class_282d613855865c408950cce436839a1f.def("classof", method_pointer_dc0126ba470f51459f37b328a9fa2869, "");
    class_282d613855865c408950cce436839a1f.def("get_interface_decl", method_pointer_50102b2274545dbdb0545d065c319a8c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_interface_type", method_pointer_96f146fa654951af9ec29b665e5386be, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_num_protocols", method_pointer_cb3bd1e85e025f5ab49db6fc965fbcaf, "");
    class_282d613855865c408950cce436839a1f.def("get_object_type", method_pointer_a5edacb8222a5b8b88f47c1092cde58e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_protocol", method_pointer_822df903db3951799ee5cd2c8a0a9059, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("is_kind_of_type", method_pointer_eb273418d129525b843683c4a5e6ae1d, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_class_type", method_pointer_95fb8a7428175a58a1bf11024be469e9, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_or_class_type", method_pointer_90fab45204d45565a7c96adaa9cd44a2, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_type", method_pointer_70f50477e1cc5ef3912093695f76a99c, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_class_type", method_pointer_3f956102a23c56b19f486315623e3892, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_id_type", method_pointer_0906e7e6c1b05ba1844dbc832a467e71, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized", method_pointer_49507573357c55de9d75a12d02c297b4, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized_as_written", method_pointer_5480b99c573753bb916e337916a64de1, "");
    class_282d613855865c408950cce436839a1f.def("is_sugared", method_pointer_bcfc14ae9e3c549a87394e870b348c9e, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized", method_pointer_05e17b188c7a5f8eaf02d1c73f20acea, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized_as_written", method_pointer_bf585445956059dc9ab27c763ed782d3, "");
    class_282d613855865c408950cce436839a1f.def("qual_empty", method_pointer_2c51a03b066e5da8b68dcb06ad988b34, "");
    class_282d613855865c408950cce436839a1f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}