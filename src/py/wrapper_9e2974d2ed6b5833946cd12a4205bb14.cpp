#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_9e2974d2ed6b5833946cd12a4205bb14()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::OMPThreadPrivateDecl  * (*method_pointer_e309089f16885e42addda21586947fe5)(class ::clang::ASTContext  &, unsigned int , unsigned int ) = ::clang::OMPThreadPrivateDecl::CreateDeserialized;
    bool  (*method_pointer_872befbde6505fafa8c4d3e628140ff1)(class ::clang::Decl  const *) = ::clang::OMPThreadPrivateDecl::classof;
    bool  (*method_pointer_cfd2eaf593ab5d0186906232f5e62d3a)(enum ::clang::Decl::Kind ) = ::clang::OMPThreadPrivateDecl::classofKind;
    bool  (::clang::OMPThreadPrivateDecl::*method_pointer_0fde9120769d5e5bae6fc70ebc58a074)() const = &::clang::OMPThreadPrivateDecl::varlist_empty;
    unsigned int  (::clang::OMPThreadPrivateDecl::*method_pointer_6052b886d8a25ded8fefa0505a1f4f1b)() const = &::clang::OMPThreadPrivateDecl::varlist_size;
    boost::python::class_< class ::clang::OMPThreadPrivateDecl, autowig::HeldType< class ::clang::OMPThreadPrivateDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_9e2974d2ed6b5833946cd12a4205bb14("OMPThreadPrivateDecl", "", boost::python::no_init);
    class_9e2974d2ed6b5833946cd12a4205bb14.def("create_deserialized", method_pointer_e309089f16885e42addda21586947fe5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e2974d2ed6b5833946cd12a4205bb14.def("classof", method_pointer_872befbde6505fafa8c4d3e628140ff1, "");
    class_9e2974d2ed6b5833946cd12a4205bb14.def("classof_kind", method_pointer_cfd2eaf593ab5d0186906232f5e62d3a, "");
    class_9e2974d2ed6b5833946cd12a4205bb14.def("varlist_empty", method_pointer_0fde9120769d5e5bae6fc70ebc58a074, "");
    class_9e2974d2ed6b5833946cd12a4205bb14.def("varlist_size", method_pointer_6052b886d8a25ded8fefa0505a1f4f1b, "");
    class_9e2974d2ed6b5833946cd12a4205bb14.staticmethod("classof_kind");
    class_9e2974d2ed6b5833946cd12a4205bb14.staticmethod("create_deserialized");
    class_9e2974d2ed6b5833946cd12a4205bb14.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::OMPThreadPrivateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::OMPThreadPrivateDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}