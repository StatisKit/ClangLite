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
    bool  (*method_pointer_30ad3e8442a4593dbc0fa249cd47f287)(class ::clang::Decl  const *) = ::clang::TypeDecl::classof;
    bool  (*method_pointer_a11eb293dedd53e598e843cb2ec85b32)(enum ::clang::Decl::Kind ) = ::clang::TypeDecl::classofKind;
    class ::clang::SourceLocation  (::clang::TypeDecl::*method_pointer_5fab3b623aa15db896ec4de542d83ac2)() const = &::clang::TypeDecl::getLocStart;
    class ::clang::Type  const * (::clang::TypeDecl::*method_pointer_d2865bebe3095a728bb6288cd9f9854a)() const = &::clang::TypeDecl::getTypeForDecl;
    void  (::clang::TypeDecl::*method_pointer_62aad89c92845050aef29d7f30bd10d9)(class ::clang::SourceLocation ) = &::clang::TypeDecl::setLocStart;
    void  (::clang::TypeDecl::*method_pointer_cb3016d49c2f56c4b3e74869c679a7ac)(class ::clang::Type  const *) = &::clang::TypeDecl::setTypeForDecl;
    boost::python::class_< class ::clang::TypeDecl, autowig::HeldType< class ::clang::TypeDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_945af159c3a0553abed1af6e2d31e631("TypeDecl", "", boost::python::no_init);
    class_945af159c3a0553abed1af6e2d31e631.def("classof", method_pointer_30ad3e8442a4593dbc0fa249cd47f287, "");
    class_945af159c3a0553abed1af6e2d31e631.def("classof_kind", method_pointer_a11eb293dedd53e598e843cb2ec85b32, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_loc_start", method_pointer_5fab3b623aa15db896ec4de542d83ac2, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_type_for_decl", method_pointer_d2865bebe3095a728bb6288cd9f9854a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_loc_start", method_pointer_62aad89c92845050aef29d7f30bd10d9, "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_type_for_decl", method_pointer_cb3016d49c2f56c4b3e74869c679a7ac, "");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof_kind");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypeDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypeDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}