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
    bool  (*method_pointer_46539beddc6357abb22ef29b68b8c0fe)(enum ::clang::Decl::Kind ) = ::clang::OMPThreadPrivateDecl::classofKind;
    unsigned int  (::clang::OMPThreadPrivateDecl::*method_pointer_d8a74fb3e0b755e9be53f5b4d2799b48)() const = &::clang::OMPThreadPrivateDecl::varlist_size;
    bool  (*method_pointer_7e3e08bfca97573298866f0de12e95c5)(class ::clang::Decl  const *) = ::clang::OMPThreadPrivateDecl::classof;
    class ::clang::OMPThreadPrivateDecl  * (*method_pointer_53dd96941e815aa39ae2e2deba78f3c5)(class ::clang::ASTContext  &, unsigned int , unsigned int ) = ::clang::OMPThreadPrivateDecl::CreateDeserialized;
    bool  (::clang::OMPThreadPrivateDecl::*method_pointer_917bb4f058345b86a1e3c549b401238c)() const = &::clang::OMPThreadPrivateDecl::varlist_empty;
    boost::python::class_< class ::clang::OMPThreadPrivateDecl, autowig::HeldType< class ::clang::OMPThreadPrivateDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_9e2974d2ed6b5833946cd12a4205bb14("OMPThreadPrivateDecl", "", boost::python::no_init);
    class_9e2974d2ed6b5833946cd12a4205bb14.def("classof_kind", method_pointer_46539beddc6357abb22ef29b68b8c0fe, "");
    class_9e2974d2ed6b5833946cd12a4205bb14.def("varlist_size", method_pointer_d8a74fb3e0b755e9be53f5b4d2799b48, "");
    class_9e2974d2ed6b5833946cd12a4205bb14.def("classof", method_pointer_7e3e08bfca97573298866f0de12e95c5, "");
    class_9e2974d2ed6b5833946cd12a4205bb14.def("create_deserialized", method_pointer_53dd96941e815aa39ae2e2deba78f3c5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e2974d2ed6b5833946cd12a4205bb14.def("varlist_empty", method_pointer_917bb4f058345b86a1e3c549b401238c, "");
    class_9e2974d2ed6b5833946cd12a4205bb14.staticmethod("classof_kind");
    class_9e2974d2ed6b5833946cd12a4205bb14.staticmethod("create_deserialized");
    class_9e2974d2ed6b5833946cd12a4205bb14.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::OMPThreadPrivateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::OMPThreadPrivateDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}