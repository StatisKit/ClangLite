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
    class ::clang::ObjCImplementationDecl  * (*method_pointer_52a21d06f60e5bdfa9aa4b9495749a96)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCImplementationDecl::CreateDeserialized;
    bool  (*method_pointer_207b1da415b55fafbfe7e043a5857258)(class ::clang::Decl  const *) = ::clang::ObjCImplementationDecl::classof;
    bool  (*method_pointer_ad989f308e5855f8a850c9e4910803f4)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplementationDecl::classofKind;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_ba0f03cf67275ca38d02385d05e67d1f)() const = &::clang::ObjCImplementationDecl::getNumIvarInitializers;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplementationDecl::*method_pointer_9de78c0fdc3e57428248584a0cb41d0f)() = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplementationDecl::*method_pointer_9c21ff64f083541f99787a05ec8e5c5f)() const = &::clang::ObjCImplementationDecl::getSuperClass;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_5bd6f8a71856548d875bc279af9ff14d)() const = &::clang::ObjCImplementationDecl::hasDestructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_4b1a09cf13c955af8ce590e1f871ffb8)() const = &::clang::ObjCImplementationDecl::hasNonZeroConstructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_f00729d63c985d2f97688a6e880c2dc2)() const = &::clang::ObjCImplementationDecl::ivar_empty;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_4176c3a87135572d908da460c67d66da)() const = &::clang::ObjCImplementationDecl::ivar_size;
    void  (::clang::ObjCImplementationDecl::*method_pointer_77815f2d9e985aa8989d49d6fe11594a)(bool ) = &::clang::ObjCImplementationDecl::setHasDestructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_78d2ddb4c01055c7b4a779ad8e1c8b64)(bool ) = &::clang::ObjCImplementationDecl::setHasNonZeroConstructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_4c23cda06d3f5f89b87da1d474b0028d)(unsigned int ) = &::clang::ObjCImplementationDecl::setNumIvarInitializers;
    void  (::clang::ObjCImplementationDecl::*method_pointer_4dc048aa89745560a0837180f267bd01)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplementationDecl::setSuperClass;
    boost::python::class_< class ::clang::ObjCImplementationDecl, autowig::HeldType< class ::clang::ObjCImplementationDecl >, boost::python::bases< class ::clang::ObjCImplDecl >, boost::noncopyable > class_744be89803015d4fa974827041a9835a("ObjCImplementationDecl", "", boost::python::no_init);
    class_744be89803015d4fa974827041a9835a.def("create_deserialized", method_pointer_52a21d06f60e5bdfa9aa4b9495749a96, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("classof", method_pointer_207b1da415b55fafbfe7e043a5857258, "");
    class_744be89803015d4fa974827041a9835a.def("classof_kind", method_pointer_ad989f308e5855f8a850c9e4910803f4, "");
    class_744be89803015d4fa974827041a9835a.def("get_num_ivar_initializers", method_pointer_ba0f03cf67275ca38d02385d05e67d1f, "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_9de78c0fdc3e57428248584a0cb41d0f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_9c21ff64f083541f99787a05ec8e5c5f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("has_destructors", method_pointer_5bd6f8a71856548d875bc279af9ff14d, "");
    class_744be89803015d4fa974827041a9835a.def("has_non_zero_constructors", method_pointer_4b1a09cf13c955af8ce590e1f871ffb8, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_empty", method_pointer_f00729d63c985d2f97688a6e880c2dc2, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_size", method_pointer_4176c3a87135572d908da460c67d66da, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_destructors", method_pointer_77815f2d9e985aa8989d49d6fe11594a, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_non_zero_constructors", method_pointer_78d2ddb4c01055c7b4a779ad8e1c8b64, "");
    class_744be89803015d4fa974827041a9835a.def("set_num_ivar_initializers", method_pointer_4c23cda06d3f5f89b87da1d474b0028d, "");
    class_744be89803015d4fa974827041a9835a.def("set_super_class", method_pointer_4dc048aa89745560a0837180f267bd01, "");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof_kind");
    class_744be89803015d4fa974827041a9835a.staticmethod("create_deserialized");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplementationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplementationDecl >, autowig::HeldType< class ::clang::ObjCImplDecl > >();
    }

}