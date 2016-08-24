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
    bool  (*method_pointer_ade999e52aef5149b8678546fbee1932)(class ::clang::Decl  const *) = ::clang::TypeDecl::classof;
    bool  (*method_pointer_43ba94cdc38756d59bfda4117902f42a)(enum ::clang::Decl::Kind ) = ::clang::TypeDecl::classofKind;
    class ::clang::SourceLocation  (::clang::TypeDecl::*method_pointer_56dfd6a41e2054e2b264c3276f9254a1)() const = &::clang::TypeDecl::getLocStart;
    class ::clang::Type  const * (::clang::TypeDecl::*method_pointer_ab719fa3d27a58fb97968df59f87aaab)() const = &::clang::TypeDecl::getTypeForDecl;
    void  (::clang::TypeDecl::*method_pointer_067546a9136856ccbe8cfbe96af74aa5)(class ::clang::SourceLocation ) = &::clang::TypeDecl::setLocStart;
    void  (::clang::TypeDecl::*method_pointer_bfc9cd62d9b854b887f71e9c86335110)(class ::clang::Type  const *) = &::clang::TypeDecl::setTypeForDecl;
    boost::python::class_< class ::clang::TypeDecl, autowig::HeldType< class ::clang::TypeDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_945af159c3a0553abed1af6e2d31e631("TypeDecl", "", boost::python::no_init);
    class_945af159c3a0553abed1af6e2d31e631.def("classof", method_pointer_ade999e52aef5149b8678546fbee1932, "");
    class_945af159c3a0553abed1af6e2d31e631.def("classof_kind", method_pointer_43ba94cdc38756d59bfda4117902f42a, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_loc_start", method_pointer_56dfd6a41e2054e2b264c3276f9254a1, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_type_for_decl", method_pointer_ab719fa3d27a58fb97968df59f87aaab, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_loc_start", method_pointer_067546a9136856ccbe8cfbe96af74aa5, "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_type_for_decl", method_pointer_bfc9cd62d9b854b887f71e9c86335110, "");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof_kind");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypeDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypeDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}