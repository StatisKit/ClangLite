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
    bool  (*method_pointer_3f851733c55559cfb6002befa16401d8)(class ::clang::Type  const *) = ::clang::ObjCObjectPointerType::classof;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_5eac4acdbf595619aada6ca87926d6b2)() const = &::clang::ObjCObjectPointerType::desugar;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectPointerType::*method_pointer_6d3f1822c88659a09149b6cae41cc43c)() const = &::clang::ObjCObjectPointerType::getInterfaceDecl;
    class ::clang::ObjCInterfaceType  const * (::clang::ObjCObjectPointerType::*method_pointer_fd0d6dc2f2cc5235b8e16c2f4e1aff67)() const = &::clang::ObjCObjectPointerType::getInterfaceType;
    unsigned int  (::clang::ObjCObjectPointerType::*method_pointer_a4515692899b5140915b4feff04e311b)() const = &::clang::ObjCObjectPointerType::getNumProtocols;
    class ::clang::ObjCObjectType  const * (::clang::ObjCObjectPointerType::*method_pointer_617822fa682352a190faaf53b76eef03)() const = &::clang::ObjCObjectPointerType::getObjectType;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_ad31ee3d428c5214985e53509d8a7c39)() const = &::clang::ObjCObjectPointerType::getPointeeType;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectPointerType::*method_pointer_794a87149d5a518bafd26f0b6ff63880)(unsigned int ) const = &::clang::ObjCObjectPointerType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_cdffa7372490594aa26d932c711a212e)() const = &::clang::ObjCObjectPointerType::getSuperClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_2a5b83c5499a587aaf3c923dac3ddb5c)() const = &::clang::ObjCObjectPointerType::isKindOfType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_8f830c35d8f95255b97051b7e4ea88ce)() const = &::clang::ObjCObjectPointerType::isObjCClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_9d21b29a5d195d03858a77ae6810b41f)() const = &::clang::ObjCObjectPointerType::isObjCIdOrClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_cd4460ccf153563c8ac24e8fb5f7ad69)() const = &::clang::ObjCObjectPointerType::isObjCIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_60fbf41197305120b52eb3b58b82ec28)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_281eb8493edb52cb8d7c839017d8a48e)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_2b7ef3a05c985f0b8ea034245b16dd69)() const = &::clang::ObjCObjectPointerType::isSpecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_5d13a2b9ab775f9ca89b3a17503079a4)() const = &::clang::ObjCObjectPointerType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_2e0f0b281c6651d68bec533016e00a7d)() const = &::clang::ObjCObjectPointerType::isSugared;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_2454816db2e151d9aaae4f86a90aad26)() const = &::clang::ObjCObjectPointerType::isUnspecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_0f5d3920aa795b24948cffe8ee8bb8e0)() const = &::clang::ObjCObjectPointerType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_2f20d25b0bef5ec8bda2a628b91b5e93)() const = &::clang::ObjCObjectPointerType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectPointerType, autowig::HeldType< class ::clang::ObjCObjectPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_282d613855865c408950cce436839a1f("ObjCObjectPointerType", "", boost::python::no_init);
    class_282d613855865c408950cce436839a1f.def("classof", method_pointer_3f851733c55559cfb6002befa16401d8, "");
    class_282d613855865c408950cce436839a1f.def("desugar", method_pointer_5eac4acdbf595619aada6ca87926d6b2, "");
    class_282d613855865c408950cce436839a1f.def("get_interface_decl", method_pointer_6d3f1822c88659a09149b6cae41cc43c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_interface_type", method_pointer_fd0d6dc2f2cc5235b8e16c2f4e1aff67, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_num_protocols", method_pointer_a4515692899b5140915b4feff04e311b, "");
    class_282d613855865c408950cce436839a1f.def("get_object_type", method_pointer_617822fa682352a190faaf53b76eef03, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_pointee_type", method_pointer_ad31ee3d428c5214985e53509d8a7c39, "");
    class_282d613855865c408950cce436839a1f.def("get_protocol", method_pointer_794a87149d5a518bafd26f0b6ff63880, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_super_class_type", method_pointer_cdffa7372490594aa26d932c711a212e, "");
    class_282d613855865c408950cce436839a1f.def("is_kind_of_type", method_pointer_2a5b83c5499a587aaf3c923dac3ddb5c, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_class_type", method_pointer_8f830c35d8f95255b97051b7e4ea88ce, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_or_class_type", method_pointer_9d21b29a5d195d03858a77ae6810b41f, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_type", method_pointer_cd4460ccf153563c8ac24e8fb5f7ad69, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_class_type", method_pointer_60fbf41197305120b52eb3b58b82ec28, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_id_type", method_pointer_281eb8493edb52cb8d7c839017d8a48e, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized", method_pointer_2b7ef3a05c985f0b8ea034245b16dd69, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized_as_written", method_pointer_5d13a2b9ab775f9ca89b3a17503079a4, "");
    class_282d613855865c408950cce436839a1f.def("is_sugared", method_pointer_2e0f0b281c6651d68bec533016e00a7d, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized", method_pointer_2454816db2e151d9aaae4f86a90aad26, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized_as_written", method_pointer_0f5d3920aa795b24948cffe8ee8bb8e0, "");
    class_282d613855865c408950cce436839a1f.def("qual_empty", method_pointer_2f20d25b0bef5ec8bda2a628b91b5e93, "");
    class_282d613855865c408950cce436839a1f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}