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
    bool  (*method_pointer_7c964bb47133592b81440a90677956cc)(class ::clang::Decl  const *) = ::clang::TypeDecl::classof;
    bool  (*method_pointer_39425b5c80d1551e9ddab89f6f6b19ef)(enum ::clang::Decl::Kind ) = ::clang::TypeDecl::classofKind;
    class ::clang::SourceLocation  (::clang::TypeDecl::*method_pointer_eaac82fabb1a5a1db89fe276ef577a31)() const = &::clang::TypeDecl::getLocStart;
    class ::clang::Type  const * (::clang::TypeDecl::*method_pointer_6377024a77af52cfbcb0049a8a209f3f)() const = &::clang::TypeDecl::getTypeForDecl;
    void  (::clang::TypeDecl::*method_pointer_661fdcdc483f573db7e76f5a9e4aad27)(class ::clang::SourceLocation ) = &::clang::TypeDecl::setLocStart;
    void  (::clang::TypeDecl::*method_pointer_61dc024f637a5a5ebadd6a34d64a9103)(class ::clang::Type  const *) = &::clang::TypeDecl::setTypeForDecl;
    boost::python::class_< class ::clang::TypeDecl, autowig::HeldType< class ::clang::TypeDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_945af159c3a0553abed1af6e2d31e631("TypeDecl", "", boost::python::no_init);
    class_945af159c3a0553abed1af6e2d31e631.def("classof", method_pointer_7c964bb47133592b81440a90677956cc, "");
    class_945af159c3a0553abed1af6e2d31e631.def("classof_kind", method_pointer_39425b5c80d1551e9ddab89f6f6b19ef, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_loc_start", method_pointer_eaac82fabb1a5a1db89fe276ef577a31, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_type_for_decl", method_pointer_6377024a77af52cfbcb0049a8a209f3f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_loc_start", method_pointer_661fdcdc483f573db7e76f5a9e4aad27, "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_type_for_decl", method_pointer_61dc024f637a5a5ebadd6a34d64a9103, "");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof_kind");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypeDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypeDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}