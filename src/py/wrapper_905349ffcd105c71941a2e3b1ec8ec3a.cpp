#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_905349ffcd105c71941a2e3b1ec8ec3a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_02bee2ffe84e53b68c13b2bfc7cd33fe)(class ::clang::Decl  const *) = ::clang::DeclaratorDecl::classof;
    bool  (*method_pointer_a2d7b8a7eb335ebe90bac1d8a7dd66fa)(enum ::clang::Decl::Kind ) = ::clang::DeclaratorDecl::classofKind;
    class ::clang::SourceLocation  (::clang::DeclaratorDecl::*method_pointer_5a1b1c96ff495b058d8a02ec7ee971dd)() const = &::clang::DeclaratorDecl::getInnerLocStart;
    class ::clang::SourceLocation  (::clang::DeclaratorDecl::*method_pointer_54cdcf152cdb539f8e429bb0f09f48d9)() const = &::clang::DeclaratorDecl::getLocStart;
    unsigned int  (::clang::DeclaratorDecl::*method_pointer_ce879f634d025af5b6537dc8a45ec405)() const = &::clang::DeclaratorDecl::getNumTemplateParameterLists;
    class ::clang::SourceLocation  (::clang::DeclaratorDecl::*method_pointer_9ac5f9f5f15653908ce6e5fdb994475f)() const = &::clang::DeclaratorDecl::getOuterLocStart;
    class ::clang::SourceLocation  (::clang::DeclaratorDecl::*method_pointer_a9831cd7c76b59ea997483bf2eec5ed5)() const = &::clang::DeclaratorDecl::getTypeSpecStartLoc;
    void  (::clang::DeclaratorDecl::*method_pointer_a1f97e67811551b5a42b7cf555ef58d8)(class ::clang::SourceLocation ) = &::clang::DeclaratorDecl::setInnerLocStart;
    boost::python::class_< class ::clang::DeclaratorDecl, autowig::HeldType< class ::clang::DeclaratorDecl >, boost::python::bases< class ::clang::ValueDecl >, boost::noncopyable > class_905349ffcd105c71941a2e3b1ec8ec3a("DeclaratorDecl", "", boost::python::no_init);
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("classof", method_pointer_02bee2ffe84e53b68c13b2bfc7cd33fe, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("classof_kind", method_pointer_a2d7b8a7eb335ebe90bac1d8a7dd66fa, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("get_inner_loc_start", method_pointer_5a1b1c96ff495b058d8a02ec7ee971dd, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("get_loc_start", method_pointer_54cdcf152cdb539f8e429bb0f09f48d9, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("get_num_template_parameter_lists", method_pointer_ce879f634d025af5b6537dc8a45ec405, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("get_outer_loc_start", method_pointer_9ac5f9f5f15653908ce6e5fdb994475f, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("get_type_spec_start_loc", method_pointer_a9831cd7c76b59ea997483bf2eec5ed5, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("set_inner_loc_start", method_pointer_a1f97e67811551b5a42b7cf555ef58d8, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.staticmethod("classof_kind");
    class_905349ffcd105c71941a2e3b1ec8ec3a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::DeclaratorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::DeclaratorDecl >, autowig::HeldType< class ::clang::ValueDecl > >();
    }

}