#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_744be89803015d4fa974827041a9835a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCImplementationDecl  * (*method_pointer_f5887294a4965afdb1d547a955a342c9)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::ObjCInterfaceDecl  *, class ::clang::ObjCInterfaceDecl  *, class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation ) = ::clang::ObjCImplementationDecl::Create;
    class ::clang::ObjCImplementationDecl  * (*method_pointer_3c6737988f0d51dfa0bc882a417c3789)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCImplementationDecl::CreateDeserialized;
    bool  (*method_pointer_fae3e737b4395b53ac86b5839a7156ba)(class ::clang::Decl  const *) = ::clang::ObjCImplementationDecl::classof;
    bool  (*method_pointer_54dbbc30809d5f12b16a721c591cae5a)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplementationDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_05b3e41debf454608e9d2931eb9a9e58)() const = &::clang::ObjCImplementationDecl::getIvarLBraceLoc;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_b5df598bea3e539d894a541e7001d73b)() const = &::clang::ObjCImplementationDecl::getIvarRBraceLoc;
    class ::llvm::StringRef  (::clang::ObjCImplementationDecl::*method_pointer_ad17704afa275eddb9973e01a9634dfb)() const = &::clang::ObjCImplementationDecl::getName;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_ecb1635c038d51d79bdadbffdf210f8f)() const = &::clang::ObjCImplementationDecl::getNumIvarInitializers;
    class ::llvm::StringRef  (::clang::ObjCImplementationDecl::*method_pointer_cdb111eda9525a97858bb14de2f2d9f0)() const = &::clang::ObjCImplementationDecl::getObjCRuntimeNameAsString;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplementationDecl::*method_pointer_6d3048fd5e6d55c78ef8de5587291972)() const = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplementationDecl::*method_pointer_1afa5189c3015b288e6853aa63c2fb2c)() = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_1f30cf9eb9415d419bad023d51e405b4)() const = &::clang::ObjCImplementationDecl::getSuperClassLoc;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_7a8badc941a05f6083e46621fae29fd0)() const = &::clang::ObjCImplementationDecl::hasDestructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_226883be686f53949be47a1255205fd3)() const = &::clang::ObjCImplementationDecl::hasNonZeroConstructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_c2e65b4bbb9759029770538e4cd40421)() const = &::clang::ObjCImplementationDecl::ivar_empty;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_d36df4b49a0c58168107f1fd181d7cbf)() const = &::clang::ObjCImplementationDecl::ivar_size;
    void  (::clang::ObjCImplementationDecl::*method_pointer_f1baa556c1f551a19558a741823273a0)(bool ) = &::clang::ObjCImplementationDecl::setHasDestructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_9a0497175b895752afc15f7d928901ec)(bool ) = &::clang::ObjCImplementationDecl::setHasNonZeroConstructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_a53c340b4bfe55a195a712792a8addef)(class ::clang::SourceLocation ) = &::clang::ObjCImplementationDecl::setIvarLBraceLoc;
    void  (::clang::ObjCImplementationDecl::*method_pointer_4d12303936e556d289a575cc2f2118ad)(class ::clang::SourceLocation ) = &::clang::ObjCImplementationDecl::setIvarRBraceLoc;
    void  (::clang::ObjCImplementationDecl::*method_pointer_8fc0ed0a6b6c5f3f9d967c1248f56c56)(unsigned int ) = &::clang::ObjCImplementationDecl::setNumIvarInitializers;
    void  (::clang::ObjCImplementationDecl::*method_pointer_f0698aade0ee50d5ac2974c013106905)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplementationDecl::setSuperClass;
    boost::python::class_< class ::clang::ObjCImplementationDecl, autowig::HeldType< class ::clang::ObjCImplementationDecl >, boost::python::bases< class ::clang::ObjCImplDecl >, boost::noncopyable > class_744be89803015d4fa974827041a9835a("ObjCImplementationDecl", "", boost::python::no_init);
    class_744be89803015d4fa974827041a9835a.def("create", method_pointer_f5887294a4965afdb1d547a955a342c9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("create_deserialized", method_pointer_3c6737988f0d51dfa0bc882a417c3789, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("classof", method_pointer_fae3e737b4395b53ac86b5839a7156ba, "");
    class_744be89803015d4fa974827041a9835a.def("classof_kind", method_pointer_54dbbc30809d5f12b16a721c591cae5a, "");
    class_744be89803015d4fa974827041a9835a.def("get_ivar_l_brace_loc", method_pointer_05b3e41debf454608e9d2931eb9a9e58, "");
    class_744be89803015d4fa974827041a9835a.def("get_ivar_r_brace_loc", method_pointer_b5df598bea3e539d894a541e7001d73b, "");
    class_744be89803015d4fa974827041a9835a.def("get_name", method_pointer_ad17704afa275eddb9973e01a9634dfb, "");
    class_744be89803015d4fa974827041a9835a.def("get_num_ivar_initializers", method_pointer_ecb1635c038d51d79bdadbffdf210f8f, "");
    class_744be89803015d4fa974827041a9835a.def("get_obj_c_runtime_name_as_string", method_pointer_cdb111eda9525a97858bb14de2f2d9f0, "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_6d3048fd5e6d55c78ef8de5587291972, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_1afa5189c3015b288e6853aa63c2fb2c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class_loc", method_pointer_1f30cf9eb9415d419bad023d51e405b4, "");
    class_744be89803015d4fa974827041a9835a.def("has_destructors", method_pointer_7a8badc941a05f6083e46621fae29fd0, "");
    class_744be89803015d4fa974827041a9835a.def("has_non_zero_constructors", method_pointer_226883be686f53949be47a1255205fd3, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_empty", method_pointer_c2e65b4bbb9759029770538e4cd40421, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_size", method_pointer_d36df4b49a0c58168107f1fd181d7cbf, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_destructors", method_pointer_f1baa556c1f551a19558a741823273a0, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_non_zero_constructors", method_pointer_9a0497175b895752afc15f7d928901ec, "");
    class_744be89803015d4fa974827041a9835a.def("set_ivar_l_brace_loc", method_pointer_a53c340b4bfe55a195a712792a8addef, "");
    class_744be89803015d4fa974827041a9835a.def("set_ivar_r_brace_loc", method_pointer_4d12303936e556d289a575cc2f2118ad, "");
    class_744be89803015d4fa974827041a9835a.def("set_num_ivar_initializers", method_pointer_8fc0ed0a6b6c5f3f9d967c1248f56c56, "");
    class_744be89803015d4fa974827041a9835a.def("set_super_class", method_pointer_f0698aade0ee50d5ac2974c013106905, "");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof_kind");
    class_744be89803015d4fa974827041a9835a.staticmethod("create");
    class_744be89803015d4fa974827041a9835a.staticmethod("create_deserialized");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplementationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplementationDecl >, autowig::HeldType< class ::clang::ObjCImplDecl > >();
    }

}