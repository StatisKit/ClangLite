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
    class ::clang::ObjCImplementationDecl  * (*method_pointer_9e29413acdcc55a29a1e784c26003448)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::ObjCInterfaceDecl  *, class ::clang::ObjCInterfaceDecl  *, class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation ) = ::clang::ObjCImplementationDecl::Create;
    class ::clang::ObjCImplementationDecl  * (*method_pointer_08113a21aa6157679a3d161e5975f34f)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCImplementationDecl::CreateDeserialized;
    bool  (*method_pointer_2f778af394385557a7237df488b508ce)(class ::clang::Decl  const *) = ::clang::ObjCImplementationDecl::classof;
    bool  (*method_pointer_43b0bfa9ca5852bfacf5398329a0889b)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplementationDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_a518b2408a235329ba48a219d5e633eb)() const = &::clang::ObjCImplementationDecl::getIvarLBraceLoc;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_9d76406549325da8bbd52b2c9d42bda5)() const = &::clang::ObjCImplementationDecl::getIvarRBraceLoc;
    class ::llvm::StringRef  (::clang::ObjCImplementationDecl::*method_pointer_0704f57648a35aa18c548d3cf23e1e3d)() const = &::clang::ObjCImplementationDecl::getName;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_c3c7d580315851d5a0d4ca16e7e46205)() const = &::clang::ObjCImplementationDecl::getNumIvarInitializers;
    class ::llvm::StringRef  (::clang::ObjCImplementationDecl::*method_pointer_f24b0687a2395815aff77ec729d2400b)() const = &::clang::ObjCImplementationDecl::getObjCRuntimeNameAsString;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplementationDecl::*method_pointer_024e251b16995f60963522db579b4bf1)() const = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplementationDecl::*method_pointer_a77ca577827a597b863a78c919982339)() = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_9524b83f7ac8573eb0f84b62261892ad)() const = &::clang::ObjCImplementationDecl::getSuperClassLoc;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_2a626707f7d553028097699768b8ad9e)() const = &::clang::ObjCImplementationDecl::hasDestructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_f9b43f4125155157ae6f840422273219)() const = &::clang::ObjCImplementationDecl::hasNonZeroConstructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_bb41b4e358365f149c2dab042b9602f3)() const = &::clang::ObjCImplementationDecl::ivar_empty;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_d50727dbf6805cc7ae9c7c82271398d8)() const = &::clang::ObjCImplementationDecl::ivar_size;
    void  (::clang::ObjCImplementationDecl::*method_pointer_5e77fd78b66e51adb97a2953f75c6e2d)(bool ) = &::clang::ObjCImplementationDecl::setHasDestructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_1aaf323e65bf5e2daf027da9bfd4b5ee)(bool ) = &::clang::ObjCImplementationDecl::setHasNonZeroConstructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_971b909b36035cb9a3cd8502f7cef010)(class ::clang::SourceLocation ) = &::clang::ObjCImplementationDecl::setIvarLBraceLoc;
    void  (::clang::ObjCImplementationDecl::*method_pointer_2a048e585d695ab3b74d1fc4a60e345e)(class ::clang::SourceLocation ) = &::clang::ObjCImplementationDecl::setIvarRBraceLoc;
    void  (::clang::ObjCImplementationDecl::*method_pointer_fe4823bc4d6e5f77b2142be0472cf604)(unsigned int ) = &::clang::ObjCImplementationDecl::setNumIvarInitializers;
    void  (::clang::ObjCImplementationDecl::*method_pointer_40917ae29ed355e8951e7b7e10329a89)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplementationDecl::setSuperClass;
    boost::python::class_< class ::clang::ObjCImplementationDecl, autowig::HeldType< class ::clang::ObjCImplementationDecl >, boost::python::bases< class ::clang::ObjCImplDecl >, boost::noncopyable > class_744be89803015d4fa974827041a9835a("ObjCImplementationDecl", "", boost::python::no_init);
    class_744be89803015d4fa974827041a9835a.def("create", method_pointer_9e29413acdcc55a29a1e784c26003448, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("create_deserialized", method_pointer_08113a21aa6157679a3d161e5975f34f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("classof", method_pointer_2f778af394385557a7237df488b508ce, "");
    class_744be89803015d4fa974827041a9835a.def("classof_kind", method_pointer_43b0bfa9ca5852bfacf5398329a0889b, "");
    class_744be89803015d4fa974827041a9835a.def("get_ivar_l_brace_loc", method_pointer_a518b2408a235329ba48a219d5e633eb, "");
    class_744be89803015d4fa974827041a9835a.def("get_ivar_r_brace_loc", method_pointer_9d76406549325da8bbd52b2c9d42bda5, "");
    class_744be89803015d4fa974827041a9835a.def("get_name", method_pointer_0704f57648a35aa18c548d3cf23e1e3d, "");
    class_744be89803015d4fa974827041a9835a.def("get_num_ivar_initializers", method_pointer_c3c7d580315851d5a0d4ca16e7e46205, "");
    class_744be89803015d4fa974827041a9835a.def("get_obj_c_runtime_name_as_string", method_pointer_f24b0687a2395815aff77ec729d2400b, "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_024e251b16995f60963522db579b4bf1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_a77ca577827a597b863a78c919982339, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class_loc", method_pointer_9524b83f7ac8573eb0f84b62261892ad, "");
    class_744be89803015d4fa974827041a9835a.def("has_destructors", method_pointer_2a626707f7d553028097699768b8ad9e, "");
    class_744be89803015d4fa974827041a9835a.def("has_non_zero_constructors", method_pointer_f9b43f4125155157ae6f840422273219, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_empty", method_pointer_bb41b4e358365f149c2dab042b9602f3, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_size", method_pointer_d50727dbf6805cc7ae9c7c82271398d8, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_destructors", method_pointer_5e77fd78b66e51adb97a2953f75c6e2d, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_non_zero_constructors", method_pointer_1aaf323e65bf5e2daf027da9bfd4b5ee, "");
    class_744be89803015d4fa974827041a9835a.def("set_ivar_l_brace_loc", method_pointer_971b909b36035cb9a3cd8502f7cef010, "");
    class_744be89803015d4fa974827041a9835a.def("set_ivar_r_brace_loc", method_pointer_2a048e585d695ab3b74d1fc4a60e345e, "");
    class_744be89803015d4fa974827041a9835a.def("set_num_ivar_initializers", method_pointer_fe4823bc4d6e5f77b2142be0472cf604, "");
    class_744be89803015d4fa974827041a9835a.def("set_super_class", method_pointer_40917ae29ed355e8951e7b7e10329a89, "");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof_kind");
    class_744be89803015d4fa974827041a9835a.staticmethod("create");
    class_744be89803015d4fa974827041a9835a.staticmethod("create_deserialized");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplementationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplementationDecl >, autowig::HeldType< class ::clang::ObjCImplDecl > >();
    }

}