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
    bool  (*method_pointer_610287129edf59e6a1a120dcec017b85)(class ::clang::Type  const *) = ::clang::ObjCObjectPointerType::classof;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_930fde7a48d9524f87edcf9a851b4b9c)() const = &::clang::ObjCObjectPointerType::desugar;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectPointerType::*method_pointer_fac066cacb805979b4601a58900a5a4b)() const = &::clang::ObjCObjectPointerType::getInterfaceDecl;
    class ::clang::ObjCInterfaceType  const * (::clang::ObjCObjectPointerType::*method_pointer_bc0870643963566a870c3df9d7066c77)() const = &::clang::ObjCObjectPointerType::getInterfaceType;
    unsigned int  (::clang::ObjCObjectPointerType::*method_pointer_50de9d655de758da9911c9dc0d34d709)() const = &::clang::ObjCObjectPointerType::getNumProtocols;
    class ::clang::ObjCObjectType  const * (::clang::ObjCObjectPointerType::*method_pointer_103a309b7dd65c1fa5382726757bf3c6)() const = &::clang::ObjCObjectPointerType::getObjectType;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_e8a46063325153f0a355e4f25c4f414e)() const = &::clang::ObjCObjectPointerType::getPointeeType;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectPointerType::*method_pointer_062686c19d855295860db9cf42a374d0)(unsigned int ) const = &::clang::ObjCObjectPointerType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_a762ac77bcba5b37ad00ac306367369e)() const = &::clang::ObjCObjectPointerType::getSuperClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_817161b561635682929bdbd9870c50cc)() const = &::clang::ObjCObjectPointerType::isKindOfType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_1b3568d5d68e52a4ae8fc6063d1625d5)() const = &::clang::ObjCObjectPointerType::isObjCClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_45d4cb33b59b52268888e944e88b0f2a)() const = &::clang::ObjCObjectPointerType::isObjCIdOrClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_6dffcca4a08c55f383e1c55b6051323c)() const = &::clang::ObjCObjectPointerType::isObjCIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_d74eeef492965c81b3c8152031c0480a)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_3a925347374456dabaeccd3e0d8cff50)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_c9084f6210a257af94b09d6e944e06b1)() const = &::clang::ObjCObjectPointerType::isSpecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_ec01f41847ee551dbb07a25de41fe3c9)() const = &::clang::ObjCObjectPointerType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_2a07ec26cf1052cdb9e4a7afc326c8de)() const = &::clang::ObjCObjectPointerType::isSugared;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_e7e615439e1f5570be60abb382e7a82f)() const = &::clang::ObjCObjectPointerType::isUnspecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_376ad7b6824c52b9af80bddb55c331f2)() const = &::clang::ObjCObjectPointerType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_4868ff5d57915336b13d84f7c3a77ef9)() const = &::clang::ObjCObjectPointerType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectPointerType, autowig::HeldType< class ::clang::ObjCObjectPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_282d613855865c408950cce436839a1f("ObjCObjectPointerType", "", boost::python::no_init);
    class_282d613855865c408950cce436839a1f.def("classof", method_pointer_610287129edf59e6a1a120dcec017b85, "");
    class_282d613855865c408950cce436839a1f.def("desugar", method_pointer_930fde7a48d9524f87edcf9a851b4b9c, "");
    class_282d613855865c408950cce436839a1f.def("get_interface_decl", method_pointer_fac066cacb805979b4601a58900a5a4b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_interface_type", method_pointer_bc0870643963566a870c3df9d7066c77, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_num_protocols", method_pointer_50de9d655de758da9911c9dc0d34d709, "");
    class_282d613855865c408950cce436839a1f.def("get_object_type", method_pointer_103a309b7dd65c1fa5382726757bf3c6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_pointee_type", method_pointer_e8a46063325153f0a355e4f25c4f414e, "");
    class_282d613855865c408950cce436839a1f.def("get_protocol", method_pointer_062686c19d855295860db9cf42a374d0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_super_class_type", method_pointer_a762ac77bcba5b37ad00ac306367369e, "");
    class_282d613855865c408950cce436839a1f.def("is_kind_of_type", method_pointer_817161b561635682929bdbd9870c50cc, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_class_type", method_pointer_1b3568d5d68e52a4ae8fc6063d1625d5, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_or_class_type", method_pointer_45d4cb33b59b52268888e944e88b0f2a, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_type", method_pointer_6dffcca4a08c55f383e1c55b6051323c, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_class_type", method_pointer_d74eeef492965c81b3c8152031c0480a, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_id_type", method_pointer_3a925347374456dabaeccd3e0d8cff50, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized", method_pointer_c9084f6210a257af94b09d6e944e06b1, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized_as_written", method_pointer_ec01f41847ee551dbb07a25de41fe3c9, "");
    class_282d613855865c408950cce436839a1f.def("is_sugared", method_pointer_2a07ec26cf1052cdb9e4a7afc326c8de, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized", method_pointer_e7e615439e1f5570be60abb382e7a82f, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized_as_written", method_pointer_376ad7b6824c52b9af80bddb55c331f2, "");
    class_282d613855865c408950cce436839a1f.def("qual_empty", method_pointer_4868ff5d57915336b13d84f7c3a77ef9, "");
    class_282d613855865c408950cce436839a1f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}