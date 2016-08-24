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
    bool  (*method_pointer_5053fa4304905803a641d5d68a0addc5)(class ::clang::Decl  const *) = ::clang::TypeDecl::classof;
    bool  (*method_pointer_46661c6429145ce79cc412ba1a476fe7)(enum ::clang::Decl::Kind ) = ::clang::TypeDecl::classofKind;
    class ::clang::SourceLocation  (::clang::TypeDecl::*method_pointer_22ce5bdab3f855b2b9e6dfc36a6d403e)() const = &::clang::TypeDecl::getLocStart;
    class ::clang::Type  const * (::clang::TypeDecl::*method_pointer_8f2795746fb75052bc08df7ec7e948d4)() const = &::clang::TypeDecl::getTypeForDecl;
    void  (::clang::TypeDecl::*method_pointer_e9c14bbea248597984a13f4ce12dcee8)(class ::clang::SourceLocation ) = &::clang::TypeDecl::setLocStart;
    void  (::clang::TypeDecl::*method_pointer_4a5dd0546ca75465bfca0a3ea8e6179f)(class ::clang::Type  const *) = &::clang::TypeDecl::setTypeForDecl;
    boost::python::class_< class ::clang::TypeDecl, autowig::HeldType< class ::clang::TypeDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_945af159c3a0553abed1af6e2d31e631("TypeDecl", "", boost::python::no_init);
    class_945af159c3a0553abed1af6e2d31e631.def("classof", method_pointer_5053fa4304905803a641d5d68a0addc5, "");
    class_945af159c3a0553abed1af6e2d31e631.def("classof_kind", method_pointer_46661c6429145ce79cc412ba1a476fe7, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_loc_start", method_pointer_22ce5bdab3f855b2b9e6dfc36a6d403e, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_type_for_decl", method_pointer_8f2795746fb75052bc08df7ec7e948d4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_loc_start", method_pointer_e9c14bbea248597984a13f4ce12dcee8, "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_type_for_decl", method_pointer_4a5dd0546ca75465bfca0a3ea8e6179f, "");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof_kind");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypeDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypeDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}