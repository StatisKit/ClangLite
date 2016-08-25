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
    bool  (*method_pointer_e75e0ed8ec5f5ef0bd63e2f08ac4d6fa)(class ::clang::Decl  const *) = ::clang::DeclaratorDecl::classof;
    bool  (*method_pointer_bb9eda105a655b559aef60f3790202cd)(enum ::clang::Decl::Kind ) = ::clang::DeclaratorDecl::classofKind;
    class ::clang::SourceLocation  (::clang::DeclaratorDecl::*method_pointer_7881fa113e30552f9d6f658bcce89594)() const = &::clang::DeclaratorDecl::getInnerLocStart;
    class ::clang::SourceLocation  (::clang::DeclaratorDecl::*method_pointer_26be9f41a60f51ffa68afde455ed1410)() const = &::clang::DeclaratorDecl::getLocStart;
    unsigned int  (::clang::DeclaratorDecl::*method_pointer_9d9051964c9d5a5a9b16e41f41d759ba)() const = &::clang::DeclaratorDecl::getNumTemplateParameterLists;
    class ::clang::SourceLocation  (::clang::DeclaratorDecl::*method_pointer_2021ddf88e1056cebf5e431ae658a17b)() const = &::clang::DeclaratorDecl::getOuterLocStart;
    class ::clang::SourceLocation  (::clang::DeclaratorDecl::*method_pointer_d28933cc95ff5d8c9da02d1c745d79f7)() const = &::clang::DeclaratorDecl::getTypeSpecStartLoc;
    void  (::clang::DeclaratorDecl::*method_pointer_06671e973bc75c5ca4073c8667ecbf29)(class ::clang::SourceLocation ) = &::clang::DeclaratorDecl::setInnerLocStart;
    boost::python::class_< class ::clang::DeclaratorDecl, autowig::HeldType< class ::clang::DeclaratorDecl >, boost::python::bases< class ::clang::ValueDecl >, boost::noncopyable > class_905349ffcd105c71941a2e3b1ec8ec3a("DeclaratorDecl", "", boost::python::no_init);
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("classof", method_pointer_e75e0ed8ec5f5ef0bd63e2f08ac4d6fa, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("classof_kind", method_pointer_bb9eda105a655b559aef60f3790202cd, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("get_inner_loc_start", method_pointer_7881fa113e30552f9d6f658bcce89594, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("get_loc_start", method_pointer_26be9f41a60f51ffa68afde455ed1410, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("get_num_template_parameter_lists", method_pointer_9d9051964c9d5a5a9b16e41f41d759ba, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("get_outer_loc_start", method_pointer_2021ddf88e1056cebf5e431ae658a17b, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("get_type_spec_start_loc", method_pointer_d28933cc95ff5d8c9da02d1c745d79f7, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("set_inner_loc_start", method_pointer_06671e973bc75c5ca4073c8667ecbf29, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.staticmethod("classof_kind");
    class_905349ffcd105c71941a2e3b1ec8ec3a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::DeclaratorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::DeclaratorDecl >, autowig::HeldType< class ::clang::ValueDecl > >();
    }

}