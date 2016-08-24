#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_945af159c3a0553abed1af6e2d31e631()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_1f57d698619154d1bb83e18f7c5d24a3)(class ::clang::Decl  const *) = ::clang::TypeDecl::classof;
    bool  (*method_pointer_d2d3521129c455d491545dd67b1b0731)(enum ::clang::Decl::Kind ) = ::clang::TypeDecl::classofKind;
    class ::clang::SourceLocation  (::clang::TypeDecl::*method_pointer_9b6bdc7509ee50d994237a11b01d5c63)() const = &::clang::TypeDecl::getLocStart;
    class ::clang::Type  const * (::clang::TypeDecl::*method_pointer_89d3f53a6bc1558498b04328c190b6f3)() const = &::clang::TypeDecl::getTypeForDecl;
    void  (::clang::TypeDecl::*method_pointer_1055cc1c2f58564686eb4fa292b2c162)(class ::clang::SourceLocation ) = &::clang::TypeDecl::setLocStart;
    void  (::clang::TypeDecl::*method_pointer_ade6ffae7dcb5d83810a827d2bc14f2f)(class ::clang::Type  const *) = &::clang::TypeDecl::setTypeForDecl;
    boost::python::class_< class ::clang::TypeDecl, autowig::HeldType< class ::clang::TypeDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_945af159c3a0553abed1af6e2d31e631("TypeDecl", "", boost::python::no_init);
    class_945af159c3a0553abed1af6e2d31e631.def("classof", method_pointer_1f57d698619154d1bb83e18f7c5d24a3, "");
    class_945af159c3a0553abed1af6e2d31e631.def("classof_kind", method_pointer_d2d3521129c455d491545dd67b1b0731, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_loc_start", method_pointer_9b6bdc7509ee50d994237a11b01d5c63, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_type_for_decl", method_pointer_89d3f53a6bc1558498b04328c190b6f3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_loc_start", method_pointer_1055cc1c2f58564686eb4fa292b2c162, "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_type_for_decl", method_pointer_ade6ffae7dcb5d83810a827d2bc14f2f, "");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof_kind");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypeDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypeDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}