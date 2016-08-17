#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_9e2974d2ed6b5833946cd12a4205bb14()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_2813b137bc505f74a71c628f126f9d2f)(enum ::clang::Decl::Kind ) = ::clang::OMPThreadPrivateDecl::classofKind;
    class ::clang::OMPThreadPrivateDecl  * (*method_pointer_4cb552ffd1125a09911b2a14acad76bf)(class ::clang::ASTContext  &, unsigned int , unsigned int ) = ::clang::OMPThreadPrivateDecl::CreateDeserialized;
    bool  (*method_pointer_91f80ca910b957cc86d6ccc6785e43e4)(class ::clang::Decl  const *) = ::clang::OMPThreadPrivateDecl::classof;
    unsigned int  (::clang::OMPThreadPrivateDecl::*method_pointer_921d1c57770157fda29c98fdef9f0485)() const = &::clang::OMPThreadPrivateDecl::varlist_size;
    bool  (::clang::OMPThreadPrivateDecl::*method_pointer_745d5d1995b255a4bbe25f88e5e626eb)() const = &::clang::OMPThreadPrivateDecl::varlist_empty;
    boost::python::class_< class ::clang::OMPThreadPrivateDecl, autowig::HeldType< class ::clang::OMPThreadPrivateDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_9e2974d2ed6b5833946cd12a4205bb14("OMPThreadPrivateDecl", "", boost::python::no_init);
    class_9e2974d2ed6b5833946cd12a4205bb14.def("classof_kind", method_pointer_2813b137bc505f74a71c628f126f9d2f, "");
    class_9e2974d2ed6b5833946cd12a4205bb14.def("create_deserialized", method_pointer_4cb552ffd1125a09911b2a14acad76bf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e2974d2ed6b5833946cd12a4205bb14.def("classof", method_pointer_91f80ca910b957cc86d6ccc6785e43e4, "");
    class_9e2974d2ed6b5833946cd12a4205bb14.def("varlist_size", method_pointer_921d1c57770157fda29c98fdef9f0485, "");
    class_9e2974d2ed6b5833946cd12a4205bb14.def("varlist_empty", method_pointer_745d5d1995b255a4bbe25f88e5e626eb, "");
    class_9e2974d2ed6b5833946cd12a4205bb14.staticmethod("classof_kind");
    class_9e2974d2ed6b5833946cd12a4205bb14.staticmethod("create_deserialized");
    class_9e2974d2ed6b5833946cd12a4205bb14.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::OMPThreadPrivateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::OMPThreadPrivateDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}