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
    bool  (*method_pointer_14e6dca8e4105fd5965c94fe35f8701e)(class ::clang::Decl  const *) = ::clang::TypeDecl::classof;
    bool  (*method_pointer_955ab6f1a3b952d389cf41dc2d82bf0a)(enum ::clang::Decl::Kind ) = ::clang::TypeDecl::classofKind;
    class ::clang::Type  const * (::clang::TypeDecl::*method_pointer_d9834a5e8db95b0f9ee9dcb9df846465)() const = &::clang::TypeDecl::getTypeForDecl;
    void  (::clang::TypeDecl::*method_pointer_cd00c9d9a47a510fa7e39fc34d12477e)(class ::clang::Type  const *) = &::clang::TypeDecl::setTypeForDecl;
    boost::python::class_< class ::clang::TypeDecl, autowig::HeldType< class ::clang::TypeDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_945af159c3a0553abed1af6e2d31e631("TypeDecl", "", boost::python::no_init);
    class_945af159c3a0553abed1af6e2d31e631.def("classof", method_pointer_14e6dca8e4105fd5965c94fe35f8701e, "");
    class_945af159c3a0553abed1af6e2d31e631.def("classof_kind", method_pointer_955ab6f1a3b952d389cf41dc2d82bf0a, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_type_for_decl", method_pointer_d9834a5e8db95b0f9ee9dcb9df846465, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_type_for_decl", method_pointer_cd00c9d9a47a510fa7e39fc34d12477e, "");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof_kind");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypeDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypeDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}