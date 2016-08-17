#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_945af159c3a0553abed1af6e2d31e631()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_5ff34e2558385629bb4705103f9cddb7)(enum ::clang::Decl::Kind ) = ::clang::TypeDecl::classofKind;
    class ::clang::Type  const * (::clang::TypeDecl::*method_pointer_799357ecd8945196a7bc0aaa9e81a034)() const = &::clang::TypeDecl::getTypeForDecl;
    bool  (*method_pointer_c8ade62134cc5c1ea684aa22cff6ab4b)(class ::clang::Decl  const *) = ::clang::TypeDecl::classof;
    void  (::clang::TypeDecl::*method_pointer_287f125e032b550a85baa1719d5a49fb)(class ::clang::Type  const *) = &::clang::TypeDecl::setTypeForDecl;
    boost::python::class_< class ::clang::TypeDecl, autowig::HeldType< class ::clang::TypeDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_945af159c3a0553abed1af6e2d31e631("TypeDecl", "", boost::python::no_init);
    class_945af159c3a0553abed1af6e2d31e631.def("classof_kind", method_pointer_5ff34e2558385629bb4705103f9cddb7, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_type_for_decl", method_pointer_799357ecd8945196a7bc0aaa9e81a034, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_945af159c3a0553abed1af6e2d31e631.def("classof", method_pointer_c8ade62134cc5c1ea684aa22cff6ab4b, "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_type_for_decl", method_pointer_287f125e032b550a85baa1719d5a49fb, "");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof_kind");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypeDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypeDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}