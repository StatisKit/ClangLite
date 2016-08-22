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
    bool  (*method_pointer_ff948224973c5a95aa7b420a5b0aa474)(class ::clang::Type  const *) = ::clang::ObjCObjectPointerType::classof;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectPointerType::*method_pointer_f87aa2200a8a5aea9c5cbb1ad8274810)() const = &::clang::ObjCObjectPointerType::getInterfaceDecl;
    class ::clang::ObjCInterfaceType  const * (::clang::ObjCObjectPointerType::*method_pointer_d48d25ed24315d11b31e1d9711cacc06)() const = &::clang::ObjCObjectPointerType::getInterfaceType;
    unsigned int  (::clang::ObjCObjectPointerType::*method_pointer_09532b04fd315507a698b8d8cb8cb6b6)() const = &::clang::ObjCObjectPointerType::getNumProtocols;
    class ::clang::ObjCObjectType  const * (::clang::ObjCObjectPointerType::*method_pointer_7119f42c4e3158bbbb399ea06b299a83)() const = &::clang::ObjCObjectPointerType::getObjectType;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectPointerType::*method_pointer_132e419b9502578cb1cd22d736d40907)(unsigned int ) const = &::clang::ObjCObjectPointerType::getProtocol;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_df90a89edd5159d7b1397dd0cde6a240)() const = &::clang::ObjCObjectPointerType::isKindOfType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_4d1d3a49cc715b2989eb275402d4cb89)() const = &::clang::ObjCObjectPointerType::isObjCClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_2a5fd240dc5a5fe2afee623a76b98835)() const = &::clang::ObjCObjectPointerType::isObjCIdOrClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_5fb722f80a8f558cb61719455a6d58a4)() const = &::clang::ObjCObjectPointerType::isObjCIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_21604a7a617d5e5e84b67e1c4ee93965)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_4869365df9c35450bb35dab118516e76)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_9dd9faaad30b5bdb914997de581adf66)() const = &::clang::ObjCObjectPointerType::isSpecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_96892a57ba43582eb43a907522234cca)() const = &::clang::ObjCObjectPointerType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_a19e80a36fec556587b63662f5e96573)() const = &::clang::ObjCObjectPointerType::isSugared;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_fba48cc251215b80bb5704c0820fd350)() const = &::clang::ObjCObjectPointerType::isUnspecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_f0e930c1216e5e0c99cc80d7a757eb6e)() const = &::clang::ObjCObjectPointerType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_7044b524b1c65a68b30b8cb59ec428f1)() const = &::clang::ObjCObjectPointerType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectPointerType, autowig::HeldType< class ::clang::ObjCObjectPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_282d613855865c408950cce436839a1f("ObjCObjectPointerType", "", boost::python::no_init);
    class_282d613855865c408950cce436839a1f.def("classof", method_pointer_ff948224973c5a95aa7b420a5b0aa474, "");
    class_282d613855865c408950cce436839a1f.def("get_interface_decl", method_pointer_f87aa2200a8a5aea9c5cbb1ad8274810, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_interface_type", method_pointer_d48d25ed24315d11b31e1d9711cacc06, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_num_protocols", method_pointer_09532b04fd315507a698b8d8cb8cb6b6, "");
    class_282d613855865c408950cce436839a1f.def("get_object_type", method_pointer_7119f42c4e3158bbbb399ea06b299a83, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_protocol", method_pointer_132e419b9502578cb1cd22d736d40907, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("is_kind_of_type", method_pointer_df90a89edd5159d7b1397dd0cde6a240, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_class_type", method_pointer_4d1d3a49cc715b2989eb275402d4cb89, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_or_class_type", method_pointer_2a5fd240dc5a5fe2afee623a76b98835, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_type", method_pointer_5fb722f80a8f558cb61719455a6d58a4, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_class_type", method_pointer_21604a7a617d5e5e84b67e1c4ee93965, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_id_type", method_pointer_4869365df9c35450bb35dab118516e76, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized", method_pointer_9dd9faaad30b5bdb914997de581adf66, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized_as_written", method_pointer_96892a57ba43582eb43a907522234cca, "");
    class_282d613855865c408950cce436839a1f.def("is_sugared", method_pointer_a19e80a36fec556587b63662f5e96573, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized", method_pointer_fba48cc251215b80bb5704c0820fd350, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized_as_written", method_pointer_f0e930c1216e5e0c99cc80d7a757eb6e, "");
    class_282d613855865c408950cce436839a1f.def("qual_empty", method_pointer_7044b524b1c65a68b30b8cb59ec428f1, "");
    class_282d613855865c408950cce436839a1f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}