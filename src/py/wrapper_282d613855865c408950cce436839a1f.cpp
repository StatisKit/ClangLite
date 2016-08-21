#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_282d613855865c408950cce436839a1f()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_3d54320635f653b8992b8573e0f3b967)(class ::clang::Type  const *) = ::clang::ObjCObjectPointerType::classof;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectPointerType::*method_pointer_9a7b21655c0958e69b749b2e471d783f)() const = &::clang::ObjCObjectPointerType::getInterfaceDecl;
    class ::clang::ObjCInterfaceType  const * (::clang::ObjCObjectPointerType::*method_pointer_a30dc2c8369f56c38ac7b365abf52f1a)() const = &::clang::ObjCObjectPointerType::getInterfaceType;
    unsigned int  (::clang::ObjCObjectPointerType::*method_pointer_ff3603dffb7759aa9f91eed413e636ac)() const = &::clang::ObjCObjectPointerType::getNumProtocols;
    class ::clang::ObjCObjectType  const * (::clang::ObjCObjectPointerType::*method_pointer_01df6fc0a2725887ba2792f144929623)() const = &::clang::ObjCObjectPointerType::getObjectType;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectPointerType::*method_pointer_b4826fa20d35593a875bbb7522c00920)(unsigned int ) const = &::clang::ObjCObjectPointerType::getProtocol;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_cd0d1f2a22c05408b89b654d7807481d)() const = &::clang::ObjCObjectPointerType::isKindOfType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_c321898abf4e58c787b6e0b18db41382)() const = &::clang::ObjCObjectPointerType::isObjCClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_104674f4b17c51baa65a76768a52a45a)() const = &::clang::ObjCObjectPointerType::isObjCIdOrClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_55c943f6be4859b78c4b711a0b801591)() const = &::clang::ObjCObjectPointerType::isObjCIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_537a531d767d5978b52d52369349c849)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_5df2c0ee705b5781b679dd6ac5f3f8be)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_77fd6a9ffd295b4996a579458b2cc2fb)() const = &::clang::ObjCObjectPointerType::isSpecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_3a18ddc418575e579a8e7138283e2cd3)() const = &::clang::ObjCObjectPointerType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_d2d0c2e965e85b8fb4cafcc131b68618)() const = &::clang::ObjCObjectPointerType::isSugared;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_0d1f0321dcae5024985bf2df9f5dac68)() const = &::clang::ObjCObjectPointerType::isUnspecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_b9fee445ce015ff58930bec2b8258b01)() const = &::clang::ObjCObjectPointerType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_5b6c77c6aa0a5c2bbb3aa7068d1aab3e)() const = &::clang::ObjCObjectPointerType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectPointerType, autowig::HeldType< class ::clang::ObjCObjectPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_282d613855865c408950cce436839a1f("ObjCObjectPointerType", "", boost::python::no_init);
    class_282d613855865c408950cce436839a1f.def("classof", method_pointer_3d54320635f653b8992b8573e0f3b967, "");
    class_282d613855865c408950cce436839a1f.def("get_interface_decl", method_pointer_9a7b21655c0958e69b749b2e471d783f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_interface_type", method_pointer_a30dc2c8369f56c38ac7b365abf52f1a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_num_protocols", method_pointer_ff3603dffb7759aa9f91eed413e636ac, "");
    class_282d613855865c408950cce436839a1f.def("get_object_type", method_pointer_01df6fc0a2725887ba2792f144929623, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_protocol", method_pointer_b4826fa20d35593a875bbb7522c00920, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("is_kind_of_type", method_pointer_cd0d1f2a22c05408b89b654d7807481d, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_class_type", method_pointer_c321898abf4e58c787b6e0b18db41382, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_or_class_type", method_pointer_104674f4b17c51baa65a76768a52a45a, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_type", method_pointer_55c943f6be4859b78c4b711a0b801591, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_class_type", method_pointer_537a531d767d5978b52d52369349c849, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_id_type", method_pointer_5df2c0ee705b5781b679dd6ac5f3f8be, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized", method_pointer_77fd6a9ffd295b4996a579458b2cc2fb, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized_as_written", method_pointer_3a18ddc418575e579a8e7138283e2cd3, "");
    class_282d613855865c408950cce436839a1f.def("is_sugared", method_pointer_d2d0c2e965e85b8fb4cafcc131b68618, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized", method_pointer_0d1f0321dcae5024985bf2df9f5dac68, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized_as_written", method_pointer_b9fee445ce015ff58930bec2b8258b01, "");
    class_282d613855865c408950cce436839a1f.def("qual_empty", method_pointer_5b6c77c6aa0a5c2bbb3aa7068d1aab3e, "");
    class_282d613855865c408950cce436839a1f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}