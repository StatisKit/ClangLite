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
    class ::clang::OMPThreadPrivateDecl  * (*method_pointer_6e902fb1c00b5bd09c756f611290ed62)(class ::clang::ASTContext  &, unsigned int , unsigned int ) = ::clang::OMPThreadPrivateDecl::CreateDeserialized;
    bool  (*method_pointer_159fa76ff6fb5cafaee27cb1a26ef390)(class ::clang::Decl  const *) = ::clang::OMPThreadPrivateDecl::classof;
    bool  (*method_pointer_3be0d848b6c55478a9fb465d48e8e3de)(enum ::clang::Decl::Kind ) = ::clang::OMPThreadPrivateDecl::classofKind;
    bool  (::clang::OMPThreadPrivateDecl::*method_pointer_b1a1ab83e4aa548a95949afe0798cd5e)() const = &::clang::OMPThreadPrivateDecl::varlist_empty;
    unsigned int  (::clang::OMPThreadPrivateDecl::*method_pointer_8fb0448438525ac6b3b9e72cc01f2cf1)() const = &::clang::OMPThreadPrivateDecl::varlist_size;
    boost::python::class_< class ::clang::OMPThreadPrivateDecl, autowig::HeldType< class ::clang::OMPThreadPrivateDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_9e2974d2ed6b5833946cd12a4205bb14("OMPThreadPrivateDecl", "", boost::python::no_init);
    class_9e2974d2ed6b5833946cd12a4205bb14.def("create_deserialized", method_pointer_6e902fb1c00b5bd09c756f611290ed62, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e2974d2ed6b5833946cd12a4205bb14.def("classof", method_pointer_159fa76ff6fb5cafaee27cb1a26ef390, "");
    class_9e2974d2ed6b5833946cd12a4205bb14.def("classof_kind", method_pointer_3be0d848b6c55478a9fb465d48e8e3de, "");
    class_9e2974d2ed6b5833946cd12a4205bb14.def("varlist_empty", method_pointer_b1a1ab83e4aa548a95949afe0798cd5e, "");
    class_9e2974d2ed6b5833946cd12a4205bb14.def("varlist_size", method_pointer_8fb0448438525ac6b3b9e72cc01f2cf1, "");
    class_9e2974d2ed6b5833946cd12a4205bb14.staticmethod("classof_kind");
    class_9e2974d2ed6b5833946cd12a4205bb14.staticmethod("create_deserialized");
    class_9e2974d2ed6b5833946cd12a4205bb14.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::OMPThreadPrivateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::OMPThreadPrivateDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}