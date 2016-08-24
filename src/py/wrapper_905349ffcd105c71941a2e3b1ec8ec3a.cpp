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
    bool  (*method_pointer_3caa5dd320c95e388d3129bad8ff96f6)(class ::clang::Decl  const *) = ::clang::DeclaratorDecl::classof;
    bool  (*method_pointer_98c05a0cc9c1520987c65f79d28cba2b)(enum ::clang::Decl::Kind ) = ::clang::DeclaratorDecl::classofKind;
    class ::clang::SourceLocation  (::clang::DeclaratorDecl::*method_pointer_82ea39ead5385182b78fc36ae85abc80)() const = &::clang::DeclaratorDecl::getInnerLocStart;
    class ::clang::SourceLocation  (::clang::DeclaratorDecl::*method_pointer_985070e70fce50b0a1607ac9309dfc4a)() const = &::clang::DeclaratorDecl::getLocStart;
    unsigned int  (::clang::DeclaratorDecl::*method_pointer_3c9d7a0bc00d500ab3b97bd81272a26f)() const = &::clang::DeclaratorDecl::getNumTemplateParameterLists;
    class ::clang::SourceLocation  (::clang::DeclaratorDecl::*method_pointer_252a545b0c6454c68b18ab8186efedcd)() const = &::clang::DeclaratorDecl::getOuterLocStart;
    class ::clang::SourceLocation  (::clang::DeclaratorDecl::*method_pointer_b2e7141d207559fbac73bf3741354697)() const = &::clang::DeclaratorDecl::getTypeSpecStartLoc;
    void  (::clang::DeclaratorDecl::*method_pointer_8c88ff770aac5ef9ae65bdca3b8e020a)(class ::clang::SourceLocation ) = &::clang::DeclaratorDecl::setInnerLocStart;
    boost::python::class_< class ::clang::DeclaratorDecl, autowig::HeldType< class ::clang::DeclaratorDecl >, boost::python::bases< class ::clang::ValueDecl >, boost::noncopyable > class_905349ffcd105c71941a2e3b1ec8ec3a("DeclaratorDecl", "", boost::python::no_init);
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("classof", method_pointer_3caa5dd320c95e388d3129bad8ff96f6, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("classof_kind", method_pointer_98c05a0cc9c1520987c65f79d28cba2b, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("get_inner_loc_start", method_pointer_82ea39ead5385182b78fc36ae85abc80, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("get_loc_start", method_pointer_985070e70fce50b0a1607ac9309dfc4a, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("get_num_template_parameter_lists", method_pointer_3c9d7a0bc00d500ab3b97bd81272a26f, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("get_outer_loc_start", method_pointer_252a545b0c6454c68b18ab8186efedcd, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("get_type_spec_start_loc", method_pointer_b2e7141d207559fbac73bf3741354697, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("set_inner_loc_start", method_pointer_8c88ff770aac5ef9ae65bdca3b8e020a, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.staticmethod("classof_kind");
    class_905349ffcd105c71941a2e3b1ec8ec3a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::DeclaratorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::DeclaratorDecl >, autowig::HeldType< class ::clang::ValueDecl > >();
    }

}