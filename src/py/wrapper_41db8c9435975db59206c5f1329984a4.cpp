#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_41db8c9435975db59206c5f1329984a4()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCIvarDecl  * (*method_pointer_540045feeb505543afe05ab837903599)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCIvarDecl::CreateDeserialized;
    bool  (*method_pointer_40c532bd880b5a83a7de5fd5f1174b3a)(class ::clang::Decl  const *) = ::clang::ObjCIvarDecl::classof;
    bool  (*method_pointer_83c55f8fb1dd5f61bf9cf71c880c0689)(enum ::clang::Decl::Kind ) = ::clang::ObjCIvarDecl::classofKind;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCIvarDecl::*method_pointer_a0231aaa8918557791c8a95bdf2ee7b3)() const = &::clang::ObjCIvarDecl::getContainingInterface;
    class ::clang::ObjCIvarDecl  const * (::clang::ObjCIvarDecl::*method_pointer_9c99b93cffad50eab54012aead41ca52)() const = &::clang::ObjCIvarDecl::getNextIvar;
    class ::clang::ObjCIvarDecl  * (::clang::ObjCIvarDecl::*method_pointer_19c5ec5fbfab52eb98d341bc6eacb7a2)() = &::clang::ObjCIvarDecl::getNextIvar;
    bool  (::clang::ObjCIvarDecl::*method_pointer_b27450fd8ca657ce98560bf098804f3c)() const = &::clang::ObjCIvarDecl::getSynthesize;
    void  (::clang::ObjCIvarDecl::*method_pointer_3d3c42950c8c5e83a9b1ebd1be6e7fd7)(class ::clang::ObjCIvarDecl  *) = &::clang::ObjCIvarDecl::setNextIvar;
    void  (::clang::ObjCIvarDecl::*method_pointer_574c8edfb82159f2b02452686b245af9)(bool ) = &::clang::ObjCIvarDecl::setSynthesize;
    boost::python::class_< class ::clang::ObjCIvarDecl, autowig::HeldType< class ::clang::ObjCIvarDecl >, boost::python::bases< class ::clang::FieldDecl >, boost::noncopyable > class_41db8c9435975db59206c5f1329984a4("ObjCIvarDecl", "", boost::python::no_init);
    class_41db8c9435975db59206c5f1329984a4.def("create_deserialized", method_pointer_540045feeb505543afe05ab837903599, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("classof", method_pointer_40c532bd880b5a83a7de5fd5f1174b3a, "");
    class_41db8c9435975db59206c5f1329984a4.def("classof_kind", method_pointer_83c55f8fb1dd5f61bf9cf71c880c0689, "");
    class_41db8c9435975db59206c5f1329984a4.def("get_containing_interface", method_pointer_a0231aaa8918557791c8a95bdf2ee7b3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("get_next_ivar", method_pointer_9c99b93cffad50eab54012aead41ca52, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("get_next_ivar", method_pointer_19c5ec5fbfab52eb98d341bc6eacb7a2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("get_synthesize", method_pointer_b27450fd8ca657ce98560bf098804f3c, "");
    class_41db8c9435975db59206c5f1329984a4.def("set_next_ivar", method_pointer_3d3c42950c8c5e83a9b1ebd1be6e7fd7, "");
    class_41db8c9435975db59206c5f1329984a4.def("set_synthesize", method_pointer_574c8edfb82159f2b02452686b245af9, "");
    class_41db8c9435975db59206c5f1329984a4.staticmethod("classof_kind");
    class_41db8c9435975db59206c5f1329984a4.staticmethod("create_deserialized");
    class_41db8c9435975db59206c5f1329984a4.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCIvarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCIvarDecl >, autowig::HeldType< class ::clang::FieldDecl > >();
    }

}