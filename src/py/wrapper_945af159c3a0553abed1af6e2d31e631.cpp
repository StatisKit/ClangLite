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
    bool  (*method_pointer_abe58fdc670f5287ad834412e7f876c3)(class ::clang::Decl  const *) = ::clang::TypeDecl::classof;
    bool  (*method_pointer_da43d7b36aad51fdaae2509b5bcf57e9)(enum ::clang::Decl::Kind ) = ::clang::TypeDecl::classofKind;
    class ::clang::SourceLocation  (::clang::TypeDecl::*method_pointer_e2738974254a5b6f8a433565790c3ddd)() const = &::clang::TypeDecl::getLocStart;
    class ::clang::Type  const * (::clang::TypeDecl::*method_pointer_47ec8b2f7bee54e086c57a5224c91620)() const = &::clang::TypeDecl::getTypeForDecl;
    void  (::clang::TypeDecl::*method_pointer_f60837201acf510e9671cce53a90145c)(class ::clang::SourceLocation ) = &::clang::TypeDecl::setLocStart;
    void  (::clang::TypeDecl::*method_pointer_7aed53fcc4165bcbab89a76ac2659634)(class ::clang::Type  const *) = &::clang::TypeDecl::setTypeForDecl;
    boost::python::class_< class ::clang::TypeDecl, autowig::HeldType< class ::clang::TypeDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_945af159c3a0553abed1af6e2d31e631("TypeDecl", "", boost::python::no_init);
    class_945af159c3a0553abed1af6e2d31e631.def("classof", method_pointer_abe58fdc670f5287ad834412e7f876c3, "");
    class_945af159c3a0553abed1af6e2d31e631.def("classof_kind", method_pointer_da43d7b36aad51fdaae2509b5bcf57e9, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_loc_start", method_pointer_e2738974254a5b6f8a433565790c3ddd, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_type_for_decl", method_pointer_47ec8b2f7bee54e086c57a5224c91620, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_loc_start", method_pointer_f60837201acf510e9671cce53a90145c, "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_type_for_decl", method_pointer_7aed53fcc4165bcbab89a76ac2659634, "");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof_kind");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypeDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypeDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}