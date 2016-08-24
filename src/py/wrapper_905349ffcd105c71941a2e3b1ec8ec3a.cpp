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
    bool  (*method_pointer_01606bdba5bb5f7eb92e1b9a94a9db78)(class ::clang::Decl  const *) = ::clang::DeclaratorDecl::classof;
    bool  (*method_pointer_ecf21cb817445558bac5081295b9d806)(enum ::clang::Decl::Kind ) = ::clang::DeclaratorDecl::classofKind;
    class ::clang::SourceLocation  (::clang::DeclaratorDecl::*method_pointer_85435bfd0bce5c31ab38fa5a8cb07795)() const = &::clang::DeclaratorDecl::getInnerLocStart;
    class ::clang::SourceLocation  (::clang::DeclaratorDecl::*method_pointer_e302a7da6f175650813dc89a15cb0c31)() const = &::clang::DeclaratorDecl::getLocStart;
    unsigned int  (::clang::DeclaratorDecl::*method_pointer_96d27e8953145f12ad67532333362440)() const = &::clang::DeclaratorDecl::getNumTemplateParameterLists;
    class ::clang::SourceLocation  (::clang::DeclaratorDecl::*method_pointer_bbbc08471c4c55279613c66999370ed4)() const = &::clang::DeclaratorDecl::getOuterLocStart;
    class ::clang::SourceLocation  (::clang::DeclaratorDecl::*method_pointer_54c7e458a80e52c3bc11b9625f510038)() const = &::clang::DeclaratorDecl::getTypeSpecStartLoc;
    void  (::clang::DeclaratorDecl::*method_pointer_739163abf0185a0180ee48c794dd9df8)(class ::clang::SourceLocation ) = &::clang::DeclaratorDecl::setInnerLocStart;
    boost::python::class_< class ::clang::DeclaratorDecl, autowig::HeldType< class ::clang::DeclaratorDecl >, boost::python::bases< class ::clang::ValueDecl >, boost::noncopyable > class_905349ffcd105c71941a2e3b1ec8ec3a("DeclaratorDecl", "", boost::python::no_init);
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("classof", method_pointer_01606bdba5bb5f7eb92e1b9a94a9db78, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("classof_kind", method_pointer_ecf21cb817445558bac5081295b9d806, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("get_inner_loc_start", method_pointer_85435bfd0bce5c31ab38fa5a8cb07795, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("get_loc_start", method_pointer_e302a7da6f175650813dc89a15cb0c31, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("get_num_template_parameter_lists", method_pointer_96d27e8953145f12ad67532333362440, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("get_outer_loc_start", method_pointer_bbbc08471c4c55279613c66999370ed4, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("get_type_spec_start_loc", method_pointer_54c7e458a80e52c3bc11b9625f510038, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("set_inner_loc_start", method_pointer_739163abf0185a0180ee48c794dd9df8, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.staticmethod("classof_kind");
    class_905349ffcd105c71941a2e3b1ec8ec3a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::DeclaratorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::DeclaratorDecl >, autowig::HeldType< class ::clang::ValueDecl > >();
    }

}