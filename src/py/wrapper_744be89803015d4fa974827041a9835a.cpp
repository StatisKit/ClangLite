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
    class ::clang::ObjCImplementationDecl  * (*method_pointer_08bde7e4c1ca5c8b9b255420e40b774c)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCImplementationDecl::CreateDeserialized;
    bool  (*method_pointer_7d41e4daa0f152f9a7640c5664b59a93)(class ::clang::Decl  const *) = ::clang::ObjCImplementationDecl::classof;
    bool  (*method_pointer_2847b8405cb55bb38bd3d4f4f8d05079)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplementationDecl::classofKind;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_7f82d527e15f5d46a44186e4bbfd68e2)() const = &::clang::ObjCImplementationDecl::getNumIvarInitializers;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplementationDecl::*method_pointer_8e3cfc1e3cd058dcbf4fb74006a08ae3)() = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplementationDecl::*method_pointer_aeb0d047cbae5a03b9afb23a3fd5be11)() const = &::clang::ObjCImplementationDecl::getSuperClass;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_45bca96b154a5f18ab4201d9842345aa)() const = &::clang::ObjCImplementationDecl::hasDestructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_f68dbb8b4c8353e18d1d68124af79228)() const = &::clang::ObjCImplementationDecl::hasNonZeroConstructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_8774ddffebba52beba0015f03f252f3b)() const = &::clang::ObjCImplementationDecl::ivar_empty;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_ce310eefce9f5e309a53a02298167988)() const = &::clang::ObjCImplementationDecl::ivar_size;
    void  (::clang::ObjCImplementationDecl::*method_pointer_a3905418c02d5f95975e09d86147d387)(bool ) = &::clang::ObjCImplementationDecl::setHasDestructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_f9263620a21c5e078f5301f24c7527a9)(bool ) = &::clang::ObjCImplementationDecl::setHasNonZeroConstructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_a4178377b6615de3a9c82a3355ddca67)(unsigned int ) = &::clang::ObjCImplementationDecl::setNumIvarInitializers;
    void  (::clang::ObjCImplementationDecl::*method_pointer_acf2a42d8a6c5a0baa52ce180a4ebd71)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplementationDecl::setSuperClass;
    boost::python::class_< class ::clang::ObjCImplementationDecl, autowig::HeldType< class ::clang::ObjCImplementationDecl >, boost::python::bases< class ::clang::ObjCImplDecl >, boost::noncopyable > class_744be89803015d4fa974827041a9835a("ObjCImplementationDecl", "", boost::python::no_init);
    class_744be89803015d4fa974827041a9835a.def("create_deserialized", method_pointer_08bde7e4c1ca5c8b9b255420e40b774c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("classof", method_pointer_7d41e4daa0f152f9a7640c5664b59a93, "");
    class_744be89803015d4fa974827041a9835a.def("classof_kind", method_pointer_2847b8405cb55bb38bd3d4f4f8d05079, "");
    class_744be89803015d4fa974827041a9835a.def("get_num_ivar_initializers", method_pointer_7f82d527e15f5d46a44186e4bbfd68e2, "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_8e3cfc1e3cd058dcbf4fb74006a08ae3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_aeb0d047cbae5a03b9afb23a3fd5be11, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("has_destructors", method_pointer_45bca96b154a5f18ab4201d9842345aa, "");
    class_744be89803015d4fa974827041a9835a.def("has_non_zero_constructors", method_pointer_f68dbb8b4c8353e18d1d68124af79228, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_empty", method_pointer_8774ddffebba52beba0015f03f252f3b, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_size", method_pointer_ce310eefce9f5e309a53a02298167988, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_destructors", method_pointer_a3905418c02d5f95975e09d86147d387, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_non_zero_constructors", method_pointer_f9263620a21c5e078f5301f24c7527a9, "");
    class_744be89803015d4fa974827041a9835a.def("set_num_ivar_initializers", method_pointer_a4178377b6615de3a9c82a3355ddca67, "");
    class_744be89803015d4fa974827041a9835a.def("set_super_class", method_pointer_acf2a42d8a6c5a0baa52ce180a4ebd71, "");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof_kind");
    class_744be89803015d4fa974827041a9835a.staticmethod("create_deserialized");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplementationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplementationDecl >, autowig::HeldType< class ::clang::ObjCImplDecl > >();
    }

}