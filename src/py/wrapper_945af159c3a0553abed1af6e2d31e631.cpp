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
    bool  (*method_pointer_2ac31f16064c54fd9660277fb62173a8)(class ::clang::Decl  const *) = ::clang::TypeDecl::classof;
    bool  (*method_pointer_94f3b41ae95d509eba62c9f0816acc6d)(enum ::clang::Decl::Kind ) = ::clang::TypeDecl::classofKind;
    class ::clang::SourceLocation  (::clang::TypeDecl::*method_pointer_24c94a70cba45816bb39f4beb2538f3f)() const = &::clang::TypeDecl::getLocStart;
    class ::clang::Type  const * (::clang::TypeDecl::*method_pointer_af846358ed2f50fd86c82ff2f179711f)() const = &::clang::TypeDecl::getTypeForDecl;
    void  (::clang::TypeDecl::*method_pointer_cd840c7488c15abf874528e905edf31e)(class ::clang::SourceLocation ) = &::clang::TypeDecl::setLocStart;
    void  (::clang::TypeDecl::*method_pointer_46142973659359de9e9140c66b50199b)(class ::clang::Type  const *) = &::clang::TypeDecl::setTypeForDecl;
    boost::python::class_< class ::clang::TypeDecl, autowig::HeldType< class ::clang::TypeDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_945af159c3a0553abed1af6e2d31e631("TypeDecl", "", boost::python::no_init);
    class_945af159c3a0553abed1af6e2d31e631.def("classof", method_pointer_2ac31f16064c54fd9660277fb62173a8, "");
    class_945af159c3a0553abed1af6e2d31e631.def("classof_kind", method_pointer_94f3b41ae95d509eba62c9f0816acc6d, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_loc_start", method_pointer_24c94a70cba45816bb39f4beb2538f3f, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_type_for_decl", method_pointer_af846358ed2f50fd86c82ff2f179711f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_loc_start", method_pointer_cd840c7488c15abf874528e905edf31e, "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_type_for_decl", method_pointer_46142973659359de9e9140c66b50199b, "");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof_kind");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypeDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypeDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}