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
    bool  (*method_pointer_87f7a4de6abd510280531e8c9e80148e)(class ::clang::Type  const *) = ::clang::ObjCObjectPointerType::classof;
    class ::clang::ObjCInterfaceType  const * (::clang::ObjCObjectPointerType::*method_pointer_41c150f8003554869b604875bfb8ed95)() const = &::clang::ObjCObjectPointerType::getInterfaceType;
    unsigned int  (::clang::ObjCObjectPointerType::*method_pointer_190b50b4955e5566844e0fe319d001b8)() const = &::clang::ObjCObjectPointerType::getNumProtocols;
    class ::clang::ObjCObjectType  const * (::clang::ObjCObjectPointerType::*method_pointer_b13d5f5b4c0550f093a32d86f5f221e1)() const = &::clang::ObjCObjectPointerType::getObjectType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_2afac86deb725faf9f397a37a0d5a7d0)() const = &::clang::ObjCObjectPointerType::isKindOfType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_6d7c57d2dcc8516e91ccbfbe2adf7bc0)() const = &::clang::ObjCObjectPointerType::isObjCClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_bd99c9d1044b5a8996577a121a9b93fb)() const = &::clang::ObjCObjectPointerType::isObjCIdOrClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_f3c8034578b2579d954d6264b3350c4e)() const = &::clang::ObjCObjectPointerType::isObjCIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_9ffadcb795775429b700c415383ea235)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_691354d45b23593a8fb372a52d6fafbb)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_b2bc41fcb3385bb69f963a1ba97f8c47)() const = &::clang::ObjCObjectPointerType::isSpecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_5cf18d182dcd51bb841773ede5cb9e32)() const = &::clang::ObjCObjectPointerType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_5887bcc350e554bcbc069331f4187c5a)() const = &::clang::ObjCObjectPointerType::isSugared;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_5d276083d0405ec79e4664366ef4cc84)() const = &::clang::ObjCObjectPointerType::isUnspecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_8ef25b851c5b52e197772318f0d2aa6c)() const = &::clang::ObjCObjectPointerType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_cc028e3ec18a58a19ca0806ce5cbe6f4)() const = &::clang::ObjCObjectPointerType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectPointerType, autowig::HeldType< class ::clang::ObjCObjectPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_282d613855865c408950cce436839a1f("ObjCObjectPointerType", "", boost::python::no_init);
    class_282d613855865c408950cce436839a1f.def("classof", method_pointer_87f7a4de6abd510280531e8c9e80148e, "");
    class_282d613855865c408950cce436839a1f.def("get_interface_type", method_pointer_41c150f8003554869b604875bfb8ed95, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_num_protocols", method_pointer_190b50b4955e5566844e0fe319d001b8, "");
    class_282d613855865c408950cce436839a1f.def("get_object_type", method_pointer_b13d5f5b4c0550f093a32d86f5f221e1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("is_kind_of_type", method_pointer_2afac86deb725faf9f397a37a0d5a7d0, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_class_type", method_pointer_6d7c57d2dcc8516e91ccbfbe2adf7bc0, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_or_class_type", method_pointer_bd99c9d1044b5a8996577a121a9b93fb, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_type", method_pointer_f3c8034578b2579d954d6264b3350c4e, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_class_type", method_pointer_9ffadcb795775429b700c415383ea235, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_id_type", method_pointer_691354d45b23593a8fb372a52d6fafbb, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized", method_pointer_b2bc41fcb3385bb69f963a1ba97f8c47, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized_as_written", method_pointer_5cf18d182dcd51bb841773ede5cb9e32, "");
    class_282d613855865c408950cce436839a1f.def("is_sugared", method_pointer_5887bcc350e554bcbc069331f4187c5a, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized", method_pointer_5d276083d0405ec79e4664366ef4cc84, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized_as_written", method_pointer_8ef25b851c5b52e197772318f0d2aa6c, "");
    class_282d613855865c408950cce436839a1f.def("qual_empty", method_pointer_cc028e3ec18a58a19ca0806ce5cbe6f4, "");
    class_282d613855865c408950cce436839a1f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}