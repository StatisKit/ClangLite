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
    bool  (*method_pointer_0f7fcf8b620d5bba945b76149c60ac2c)(class ::clang::Decl  const *) = ::clang::TypeDecl::classof;
    bool  (*method_pointer_d692bc495b135972bc56e6b231946396)(enum ::clang::Decl::Kind ) = ::clang::TypeDecl::classofKind;
    class ::clang::SourceLocation  (::clang::TypeDecl::*method_pointer_92469347809f5980aa719af13c0c9192)() const = &::clang::TypeDecl::getLocStart;
    class ::clang::Type  const * (::clang::TypeDecl::*method_pointer_1288c72478595fd6a5c4638077d62190)() const = &::clang::TypeDecl::getTypeForDecl;
    void  (::clang::TypeDecl::*method_pointer_6d4179f150c2510ebc01b352e539c7c7)(class ::clang::SourceLocation ) = &::clang::TypeDecl::setLocStart;
    void  (::clang::TypeDecl::*method_pointer_51f39f851e76506592ba7626d31a2b22)(class ::clang::Type  const *) = &::clang::TypeDecl::setTypeForDecl;
    boost::python::class_< class ::clang::TypeDecl, autowig::HeldType< class ::clang::TypeDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_945af159c3a0553abed1af6e2d31e631("TypeDecl", "", boost::python::no_init);
    class_945af159c3a0553abed1af6e2d31e631.def("classof", method_pointer_0f7fcf8b620d5bba945b76149c60ac2c, "");
    class_945af159c3a0553abed1af6e2d31e631.def("classof_kind", method_pointer_d692bc495b135972bc56e6b231946396, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_loc_start", method_pointer_92469347809f5980aa719af13c0c9192, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_type_for_decl", method_pointer_1288c72478595fd6a5c4638077d62190, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_loc_start", method_pointer_6d4179f150c2510ebc01b352e539c7c7, "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_type_for_decl", method_pointer_51f39f851e76506592ba7626d31a2b22, "");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof_kind");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypeDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypeDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}