#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_71391b5023a057ca94506c6564b06c2a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_8a219701ba7e51abbd73fc8c63296245)(class ::clang::Decl  const *) = ::clang::TypedefNameDecl::classof;
    bool  (*method_pointer_783940d469925f6ebf51d6499c7e83f2)(enum ::clang::Decl::Kind ) = ::clang::TypedefNameDecl::classofKind;
    class ::clang::TagDecl  * (::clang::TypedefNameDecl::*method_pointer_ac1d6e24755853e1820e356370dc6ba0)(bool ) const = &::clang::TypedefNameDecl::getAnonDeclWithTypedefName;
    class ::clang::TypedefNameDecl  const * (::clang::TypedefNameDecl::*method_pointer_9c797785c8cf59a4a281f55a01d63e9d)() const = &::clang::TypedefNameDecl::getCanonicalDecl;
    class ::clang::TypedefNameDecl  * (::clang::TypedefNameDecl::*method_pointer_deca274527945ca48a991452e400fc81)() = &::clang::TypedefNameDecl::getCanonicalDecl;
    class ::clang::QualType  (::clang::TypedefNameDecl::*method_pointer_8616a0144f45599c842a481d04e8b208)() const = &::clang::TypedefNameDecl::getUnderlyingType;
    bool  (::clang::TypedefNameDecl::*method_pointer_740a6d7953a55fb190362c8653c648ca)() const = &::clang::TypedefNameDecl::isModed;
    boost::python::class_< class ::clang::TypedefNameDecl, autowig::HeldType< class ::clang::TypedefNameDecl >, boost::python::bases< class ::clang::TypeDecl >, boost::noncopyable > class_71391b5023a057ca94506c6564b06c2a("TypedefNameDecl", "", boost::python::no_init);
    class_71391b5023a057ca94506c6564b06c2a.def("classof", method_pointer_8a219701ba7e51abbd73fc8c63296245, "");
    class_71391b5023a057ca94506c6564b06c2a.def("classof_kind", method_pointer_783940d469925f6ebf51d6499c7e83f2, "");
    class_71391b5023a057ca94506c6564b06c2a.def("get_anon_decl_with_typedef_name", method_pointer_ac1d6e24755853e1820e356370dc6ba0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_71391b5023a057ca94506c6564b06c2a.def("get_canonical_decl", method_pointer_9c797785c8cf59a4a281f55a01d63e9d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_71391b5023a057ca94506c6564b06c2a.def("get_canonical_decl", method_pointer_deca274527945ca48a991452e400fc81, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_71391b5023a057ca94506c6564b06c2a.def("get_underlying_type", method_pointer_8616a0144f45599c842a481d04e8b208, "");
    class_71391b5023a057ca94506c6564b06c2a.def("is_moded", method_pointer_740a6d7953a55fb190362c8653c648ca, "");
    class_71391b5023a057ca94506c6564b06c2a.staticmethod("classof_kind");
    class_71391b5023a057ca94506c6564b06c2a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypedefNameDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypedefNameDecl >, autowig::HeldType< class ::clang::TypeDecl > >();
    }

}