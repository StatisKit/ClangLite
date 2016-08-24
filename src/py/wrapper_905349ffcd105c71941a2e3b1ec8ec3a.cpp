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
    bool  (*method_pointer_15dc4f3b75d95e0a9a4fd33310223d56)(class ::clang::Decl  const *) = ::clang::DeclaratorDecl::classof;
    bool  (*method_pointer_895c84565da752dbb4593ec1f4a75bb8)(enum ::clang::Decl::Kind ) = ::clang::DeclaratorDecl::classofKind;
    class ::clang::SourceLocation  (::clang::DeclaratorDecl::*method_pointer_c8e71c4a97d05808afceea36f7afd708)() const = &::clang::DeclaratorDecl::getInnerLocStart;
    class ::clang::SourceLocation  (::clang::DeclaratorDecl::*method_pointer_cf81f14603095f6a88f6679612eb1b29)() const = &::clang::DeclaratorDecl::getLocStart;
    unsigned int  (::clang::DeclaratorDecl::*method_pointer_af4131bc5efe5fc5bffa8dcf340ae1f0)() const = &::clang::DeclaratorDecl::getNumTemplateParameterLists;
    class ::clang::SourceLocation  (::clang::DeclaratorDecl::*method_pointer_699f23dc1b585b3cac96eef1ec35fb76)() const = &::clang::DeclaratorDecl::getOuterLocStart;
    class ::clang::SourceLocation  (::clang::DeclaratorDecl::*method_pointer_1ac229de4795570195bb4c93e959740f)() const = &::clang::DeclaratorDecl::getTypeSpecStartLoc;
    void  (::clang::DeclaratorDecl::*method_pointer_6fe11c2a4b2957a2b826692d7f445ecc)(class ::clang::SourceLocation ) = &::clang::DeclaratorDecl::setInnerLocStart;
    boost::python::class_< class ::clang::DeclaratorDecl, autowig::HeldType< class ::clang::DeclaratorDecl >, boost::python::bases< class ::clang::ValueDecl >, boost::noncopyable > class_905349ffcd105c71941a2e3b1ec8ec3a("DeclaratorDecl", "", boost::python::no_init);
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("classof", method_pointer_15dc4f3b75d95e0a9a4fd33310223d56, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("classof_kind", method_pointer_895c84565da752dbb4593ec1f4a75bb8, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("get_inner_loc_start", method_pointer_c8e71c4a97d05808afceea36f7afd708, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("get_loc_start", method_pointer_cf81f14603095f6a88f6679612eb1b29, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("get_num_template_parameter_lists", method_pointer_af4131bc5efe5fc5bffa8dcf340ae1f0, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("get_outer_loc_start", method_pointer_699f23dc1b585b3cac96eef1ec35fb76, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("get_type_spec_start_loc", method_pointer_1ac229de4795570195bb4c93e959740f, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("set_inner_loc_start", method_pointer_6fe11c2a4b2957a2b826692d7f445ecc, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.staticmethod("classof_kind");
    class_905349ffcd105c71941a2e3b1ec8ec3a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::DeclaratorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::DeclaratorDecl >, autowig::HeldType< class ::clang::ValueDecl > >();
    }

}