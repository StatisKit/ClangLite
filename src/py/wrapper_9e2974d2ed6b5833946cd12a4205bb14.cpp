#include "_clanglite.h"


namespace autowig
{
}


void wrapper_9e2974d2ed6b5833946cd12a4205bb14()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::OMPThreadPrivateDecl  * (*method_pointer_74a4fce7661d5bb8ab19e7576d9b606a)(class ::clang::ASTContext  &, unsigned int , unsigned int ) = ::clang::OMPThreadPrivateDecl::CreateDeserialized;
    bool  (*method_pointer_6012288208735f4e891c781740bc528a)(class ::clang::Decl  const *) = ::clang::OMPThreadPrivateDecl::classof;
    bool  (*method_pointer_1c3f02eac11350a79c9ecd4ef0e64016)(enum ::clang::Decl::Kind ) = ::clang::OMPThreadPrivateDecl::classofKind;
    bool  (::clang::OMPThreadPrivateDecl::*method_pointer_828421e65f2e5683a8cacaf9cb53a18f)() const = &::clang::OMPThreadPrivateDecl::varlist_empty;
    unsigned int  (::clang::OMPThreadPrivateDecl::*method_pointer_63b3f89d424856b1a603d82f98e48504)() const = &::clang::OMPThreadPrivateDecl::varlist_size;
    boost::python::class_< class ::clang::OMPThreadPrivateDecl, autowig::HeldType< class ::clang::OMPThreadPrivateDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_9e2974d2ed6b5833946cd12a4205bb14("OMPThreadPrivateDecl", "", boost::python::no_init);
    class_9e2974d2ed6b5833946cd12a4205bb14.def("create_deserialized", method_pointer_74a4fce7661d5bb8ab19e7576d9b606a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e2974d2ed6b5833946cd12a4205bb14.def("classof", method_pointer_6012288208735f4e891c781740bc528a, "");
    class_9e2974d2ed6b5833946cd12a4205bb14.def("classof_kind", method_pointer_1c3f02eac11350a79c9ecd4ef0e64016, "");
    class_9e2974d2ed6b5833946cd12a4205bb14.def("varlist_empty", method_pointer_828421e65f2e5683a8cacaf9cb53a18f, "");
    class_9e2974d2ed6b5833946cd12a4205bb14.def("varlist_size", method_pointer_63b3f89d424856b1a603d82f98e48504, "");
    class_9e2974d2ed6b5833946cd12a4205bb14.staticmethod("classof_kind");
    class_9e2974d2ed6b5833946cd12a4205bb14.staticmethod("create_deserialized");
    class_9e2974d2ed6b5833946cd12a4205bb14.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::OMPThreadPrivateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::OMPThreadPrivateDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}