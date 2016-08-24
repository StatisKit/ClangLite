#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_41db8c9435975db59206c5f1329984a4()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCIvarDecl  * (*method_pointer_832618e8549b54f798a8e8c2690ddc9a)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCIvarDecl::CreateDeserialized;
    bool  (*method_pointer_57a96265a22655478e3a76a13853ff83)(class ::clang::Decl  const *) = ::clang::ObjCIvarDecl::classof;
    bool  (*method_pointer_98bd53d9f81d52ee96e4c6875056d276)(enum ::clang::Decl::Kind ) = ::clang::ObjCIvarDecl::classofKind;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCIvarDecl::*method_pointer_c922429d3f0058eba113eaf4815ea5a3)() const = &::clang::ObjCIvarDecl::getContainingInterface;
    class ::clang::ObjCIvarDecl  * (::clang::ObjCIvarDecl::*method_pointer_4bba59a97a9b5bb4aa28c9b8bbfa141a)() = &::clang::ObjCIvarDecl::getNextIvar;
    class ::clang::ObjCIvarDecl  const * (::clang::ObjCIvarDecl::*method_pointer_05bf73e78f645249b75da30a55828ad9)() const = &::clang::ObjCIvarDecl::getNextIvar;
    bool  (::clang::ObjCIvarDecl::*method_pointer_9dd178d5ee1f5ccd852d44812aa74e51)() const = &::clang::ObjCIvarDecl::getSynthesize;
    class ::clang::QualType  (::clang::ObjCIvarDecl::*method_pointer_641625bf64885e6585e5bd0cfdc67b44)(class ::clang::QualType ) const = &::clang::ObjCIvarDecl::getUsageType;
    void  (::clang::ObjCIvarDecl::*method_pointer_54d89efe42d45d539d21a0ebfec4403c)(class ::clang::ObjCIvarDecl  *) = &::clang::ObjCIvarDecl::setNextIvar;
    void  (::clang::ObjCIvarDecl::*method_pointer_43cf91629a805a00b897d62015d97b65)(bool ) = &::clang::ObjCIvarDecl::setSynthesize;
    boost::python::class_< class ::clang::ObjCIvarDecl, autowig::HeldType< class ::clang::ObjCIvarDecl >, boost::python::bases< class ::clang::FieldDecl >, boost::noncopyable > class_41db8c9435975db59206c5f1329984a4("ObjCIvarDecl", "", boost::python::no_init);
    class_41db8c9435975db59206c5f1329984a4.def("create_deserialized", method_pointer_832618e8549b54f798a8e8c2690ddc9a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("classof", method_pointer_57a96265a22655478e3a76a13853ff83, "");
    class_41db8c9435975db59206c5f1329984a4.def("classof_kind", method_pointer_98bd53d9f81d52ee96e4c6875056d276, "");
    class_41db8c9435975db59206c5f1329984a4.def("get_containing_interface", method_pointer_c922429d3f0058eba113eaf4815ea5a3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("get_next_ivar", method_pointer_4bba59a97a9b5bb4aa28c9b8bbfa141a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("get_next_ivar", method_pointer_05bf73e78f645249b75da30a55828ad9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("get_synthesize", method_pointer_9dd178d5ee1f5ccd852d44812aa74e51, "");
    class_41db8c9435975db59206c5f1329984a4.def("get_usage_type", method_pointer_641625bf64885e6585e5bd0cfdc67b44, "");
    class_41db8c9435975db59206c5f1329984a4.def("set_next_ivar", method_pointer_54d89efe42d45d539d21a0ebfec4403c, "");
    class_41db8c9435975db59206c5f1329984a4.def("set_synthesize", method_pointer_43cf91629a805a00b897d62015d97b65, "");
    class_41db8c9435975db59206c5f1329984a4.staticmethod("classof_kind");
    class_41db8c9435975db59206c5f1329984a4.staticmethod("create_deserialized");
    class_41db8c9435975db59206c5f1329984a4.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCIvarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCIvarDecl >, autowig::HeldType< class ::clang::FieldDecl > >();
    }

}