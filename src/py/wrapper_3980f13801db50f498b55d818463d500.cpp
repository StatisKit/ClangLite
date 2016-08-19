#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_3980f13801db50f498b55d818463d500()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_e019fa5cccb45092baa273d35eb5d103)(class ::clang::Type  const *) = ::clang::ObjCObjectType::classof;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectType::*method_pointer_6e59f12598d05d2db5846c251e725732)() const = &::clang::ObjCObjectType::getInterface;
    unsigned int  (::clang::ObjCObjectType::*method_pointer_2e93ae2095fb55b798b9e0dc5875f436)() const = &::clang::ObjCObjectType::getNumProtocols;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectType::*method_pointer_019ca8de19615493b460154ffdd168c3)(unsigned int ) const = &::clang::ObjCObjectType::getProtocol;
    bool  (::clang::ObjCObjectType::*method_pointer_8ada6cb8e1f755e9b1880760a50e7889)() const = &::clang::ObjCObjectType::isKindOfType;
    bool  (::clang::ObjCObjectType::*method_pointer_a9800371efdc5d3a8f56f269bb3ad710)() const = &::clang::ObjCObjectType::isKindOfTypeAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_bc1fc26a88235fb78236868bbd07293a)() const = &::clang::ObjCObjectType::isObjCClass;
    bool  (::clang::ObjCObjectType::*method_pointer_bb1dc274db025ce285aefe67b21f62d8)() const = &::clang::ObjCObjectType::isObjCId;
    bool  (::clang::ObjCObjectType::*method_pointer_734f5597ac7358808c4e7204046d410c)() const = &::clang::ObjCObjectType::isObjCQualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_f6b568b51978531a9f14a6e8f0e5e899)() const = &::clang::ObjCObjectType::isObjCQualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_c5ebddd0360d53c59b88a073d21ccc2f)() const = &::clang::ObjCObjectType::isObjCUnqualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_3995e91e81945c56bba761d6572c8445)() const = &::clang::ObjCObjectType::isObjCUnqualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_4322a976eb985cd3a82c9ce8144c81e7)() const = &::clang::ObjCObjectType::isObjCUnqualifiedIdOrClass;
    bool  (::clang::ObjCObjectType::*method_pointer_53193d84c174503c8d0a9654beeacaf8)() const = &::clang::ObjCObjectType::isSpecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_c7a8fa4825f250559229d6e59702eb7f)() const = &::clang::ObjCObjectType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_54f23a33c1725b068e3ca8e6c755bcb1)() const = &::clang::ObjCObjectType::isSugared;
    bool  (::clang::ObjCObjectType::*method_pointer_9da96f1a7b385e1fa4c574913e9122d3)() const = &::clang::ObjCObjectType::isUnspecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_a863fcaf6255586f8b053bf08ac3e34f)() const = &::clang::ObjCObjectType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_e2ba4c7f44ec5599a34e5a9d21cab22a)() const = &::clang::ObjCObjectType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectType, autowig::HeldType< class ::clang::ObjCObjectType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3980f13801db50f498b55d818463d500("ObjCObjectType", "", boost::python::no_init);
    class_3980f13801db50f498b55d818463d500.def("classof", method_pointer_e019fa5cccb45092baa273d35eb5d103, "");
    class_3980f13801db50f498b55d818463d500.def("get_interface", method_pointer_6e59f12598d05d2db5846c251e725732, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_num_protocols", method_pointer_2e93ae2095fb55b798b9e0dc5875f436, "");
    class_3980f13801db50f498b55d818463d500.def("get_protocol", method_pointer_019ca8de19615493b460154ffdd168c3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type", method_pointer_8ada6cb8e1f755e9b1880760a50e7889, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type_as_written", method_pointer_a9800371efdc5d3a8f56f269bb3ad710, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_class", method_pointer_bc1fc26a88235fb78236868bbd07293a, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_id", method_pointer_bb1dc274db025ce285aefe67b21f62d8, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_class", method_pointer_734f5597ac7358808c4e7204046d410c, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_id", method_pointer_f6b568b51978531a9f14a6e8f0e5e899, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_class", method_pointer_c5ebddd0360d53c59b88a073d21ccc2f, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id", method_pointer_3995e91e81945c56bba761d6572c8445, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id_or_class", method_pointer_4322a976eb985cd3a82c9ce8144c81e7, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized", method_pointer_53193d84c174503c8d0a9654beeacaf8, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized_as_written", method_pointer_c7a8fa4825f250559229d6e59702eb7f, "");
    class_3980f13801db50f498b55d818463d500.def("is_sugared", method_pointer_54f23a33c1725b068e3ca8e6c755bcb1, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized", method_pointer_9da96f1a7b385e1fa4c574913e9122d3, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized_as_written", method_pointer_a863fcaf6255586f8b053bf08ac3e34f, "");
    class_3980f13801db50f498b55d818463d500.def("qual_empty", method_pointer_e2ba4c7f44ec5599a34e5a9d21cab22a, "");
    class_3980f13801db50f498b55d818463d500.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectType >, autowig::HeldType< class ::clang::Type > >();
    }

}