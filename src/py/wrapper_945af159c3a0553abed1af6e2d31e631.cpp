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
    bool  (*method_pointer_7a93c730b34d54fcac93cb81dcfd5f22)(class ::clang::Decl  const *) = ::clang::TypeDecl::classof;
    bool  (*method_pointer_31ef0d93fedc5bdf89c990a9c8e8d8a4)(enum ::clang::Decl::Kind ) = ::clang::TypeDecl::classofKind;
    class ::clang::SourceLocation  (::clang::TypeDecl::*method_pointer_87f39586da2958d9bb522a374546a9dc)() const = &::clang::TypeDecl::getLocStart;
    class ::clang::Type  const * (::clang::TypeDecl::*method_pointer_09e59eac47455580909e8e58c83605c8)() const = &::clang::TypeDecl::getTypeForDecl;
    void  (::clang::TypeDecl::*method_pointer_47d35796fdbd56a2a509157866ce0b6c)(class ::clang::SourceLocation ) = &::clang::TypeDecl::setLocStart;
    void  (::clang::TypeDecl::*method_pointer_c58450123c225712a31544e44ead5cd2)(class ::clang::Type  const *) = &::clang::TypeDecl::setTypeForDecl;
    boost::python::class_< class ::clang::TypeDecl, autowig::HeldType< class ::clang::TypeDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_945af159c3a0553abed1af6e2d31e631("TypeDecl", "", boost::python::no_init);
    class_945af159c3a0553abed1af6e2d31e631.def("classof", method_pointer_7a93c730b34d54fcac93cb81dcfd5f22, "");
    class_945af159c3a0553abed1af6e2d31e631.def("classof_kind", method_pointer_31ef0d93fedc5bdf89c990a9c8e8d8a4, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_loc_start", method_pointer_87f39586da2958d9bb522a374546a9dc, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_type_for_decl", method_pointer_09e59eac47455580909e8e58c83605c8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_loc_start", method_pointer_47d35796fdbd56a2a509157866ce0b6c, "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_type_for_decl", method_pointer_c58450123c225712a31544e44ead5cd2, "");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof_kind");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypeDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypeDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}