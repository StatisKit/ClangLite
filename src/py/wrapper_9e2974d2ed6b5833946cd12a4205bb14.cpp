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
    bool  (*method_pointer_4fd7c0ac2f4855b3ad69d8f0e563c093)(enum ::clang::Decl::Kind ) = ::clang::OMPThreadPrivateDecl::classofKind;
    bool  (*method_pointer_0ff74b5135c25d45bd0928bb0ed4cd1d)(class ::clang::Decl  const *) = ::clang::OMPThreadPrivateDecl::classof;
    unsigned int  (::clang::OMPThreadPrivateDecl::*method_pointer_4f36ea0035b55fa0866b3f891d127277)() const = &::clang::OMPThreadPrivateDecl::varlist_size;
    bool  (::clang::OMPThreadPrivateDecl::*method_pointer_d83128ea6f39574e821da7f522c35506)() const = &::clang::OMPThreadPrivateDecl::varlist_empty;
    class ::clang::OMPThreadPrivateDecl  * (*method_pointer_a46eb964a0de521a8a10c823986539b9)(class ::clang::ASTContext  &, unsigned int , unsigned int ) = ::clang::OMPThreadPrivateDecl::CreateDeserialized;
    boost::python::class_< class ::clang::OMPThreadPrivateDecl, autowig::HeldType< class ::clang::OMPThreadPrivateDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_9e2974d2ed6b5833946cd12a4205bb14("OMPThreadPrivateDecl", "", boost::python::no_init);
    class_9e2974d2ed6b5833946cd12a4205bb14.def("classof_kind", method_pointer_4fd7c0ac2f4855b3ad69d8f0e563c093, "");
    class_9e2974d2ed6b5833946cd12a4205bb14.def("classof", method_pointer_0ff74b5135c25d45bd0928bb0ed4cd1d, "");
    class_9e2974d2ed6b5833946cd12a4205bb14.def("varlist_size", method_pointer_4f36ea0035b55fa0866b3f891d127277, "");
    class_9e2974d2ed6b5833946cd12a4205bb14.def("varlist_empty", method_pointer_d83128ea6f39574e821da7f522c35506, "");
    class_9e2974d2ed6b5833946cd12a4205bb14.def("create_deserialized", method_pointer_a46eb964a0de521a8a10c823986539b9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e2974d2ed6b5833946cd12a4205bb14.staticmethod("classof_kind");
    class_9e2974d2ed6b5833946cd12a4205bb14.staticmethod("create_deserialized");
    class_9e2974d2ed6b5833946cd12a4205bb14.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::OMPThreadPrivateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::OMPThreadPrivateDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}