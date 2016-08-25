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
    bool  (*method_pointer_47d1679596b1577faffa255eccff0a08)(class ::clang::Decl  const *) = ::clang::TypeDecl::classof;
    bool  (*method_pointer_871682729e135eac8a7ed87430440b4d)(enum ::clang::Decl::Kind ) = ::clang::TypeDecl::classofKind;
    class ::clang::SourceLocation  (::clang::TypeDecl::*method_pointer_0cae1a8ba1665de1ad15a1ba10691530)() const = &::clang::TypeDecl::getLocStart;
    class ::clang::Type  const * (::clang::TypeDecl::*method_pointer_c87cea69b524548899d76928d81ab24e)() const = &::clang::TypeDecl::getTypeForDecl;
    void  (::clang::TypeDecl::*method_pointer_691b98401d7d5b00b6494cbc77d09691)(class ::clang::SourceLocation ) = &::clang::TypeDecl::setLocStart;
    void  (::clang::TypeDecl::*method_pointer_bb6ca13934265402959156d91d6c9cf9)(class ::clang::Type  const *) = &::clang::TypeDecl::setTypeForDecl;
    boost::python::class_< class ::clang::TypeDecl, autowig::HeldType< class ::clang::TypeDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_945af159c3a0553abed1af6e2d31e631("TypeDecl", "", boost::python::no_init);
    class_945af159c3a0553abed1af6e2d31e631.def("classof", method_pointer_47d1679596b1577faffa255eccff0a08, "");
    class_945af159c3a0553abed1af6e2d31e631.def("classof_kind", method_pointer_871682729e135eac8a7ed87430440b4d, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_loc_start", method_pointer_0cae1a8ba1665de1ad15a1ba10691530, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_type_for_decl", method_pointer_c87cea69b524548899d76928d81ab24e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_loc_start", method_pointer_691b98401d7d5b00b6494cbc77d09691, "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_type_for_decl", method_pointer_bb6ca13934265402959156d91d6c9cf9, "");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof_kind");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypeDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypeDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}