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
    class ::clang::ObjCImplementationDecl  * (*method_pointer_3523865020f05f4fb295318ed138d693)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::ObjCInterfaceDecl  *, class ::clang::ObjCInterfaceDecl  *, class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation ) = ::clang::ObjCImplementationDecl::Create;
    class ::clang::ObjCImplementationDecl  * (*method_pointer_61cfd5371c53551ab4e261bcc9fddec9)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCImplementationDecl::CreateDeserialized;
    bool  (*method_pointer_069c1e14ffba5df1b5d07c78320bcecb)(class ::clang::Decl  const *) = ::clang::ObjCImplementationDecl::classof;
    bool  (*method_pointer_04f9e3534ac056c9ae3f4152be584e0d)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplementationDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_527379ad707c588ea794e07cae980851)() const = &::clang::ObjCImplementationDecl::getIvarLBraceLoc;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_97082220a43252728fe4b7e87ec5ad87)() const = &::clang::ObjCImplementationDecl::getIvarRBraceLoc;
    class ::llvm::StringRef  (::clang::ObjCImplementationDecl::*method_pointer_a5ee2ff0f74a5d0799b70681fa48500a)() const = &::clang::ObjCImplementationDecl::getName;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_d9172882ba7753bfadac89edcf1aa6ce)() const = &::clang::ObjCImplementationDecl::getNumIvarInitializers;
    class ::llvm::StringRef  (::clang::ObjCImplementationDecl::*method_pointer_3949b88660cb5e8cb06751daebd49214)() const = &::clang::ObjCImplementationDecl::getObjCRuntimeNameAsString;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplementationDecl::*method_pointer_2bc11fe80a57523db5059ce010cf51ca)() = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplementationDecl::*method_pointer_3ac25ef683b852978c305f8c314e7c7e)() const = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_287c929a05b650148383d9bb8b73abc3)() const = &::clang::ObjCImplementationDecl::getSuperClassLoc;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_af9717f96e475e25b3d7c8728ac2aa3e)() const = &::clang::ObjCImplementationDecl::hasDestructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_13cac00b6e865db4bd2e2bfbcda4cbfc)() const = &::clang::ObjCImplementationDecl::hasNonZeroConstructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_b0e5a5254ab15dbeb0ea0b05298ed7b8)() const = &::clang::ObjCImplementationDecl::ivar_empty;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_8a856c933ef55232bb7c156bd0060eb9)() const = &::clang::ObjCImplementationDecl::ivar_size;
    void  (::clang::ObjCImplementationDecl::*method_pointer_70cb466f119d5f0089f3c4b5d602cb40)(bool ) = &::clang::ObjCImplementationDecl::setHasDestructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_fed3b0b36dfd572ea990f6cd75851835)(bool ) = &::clang::ObjCImplementationDecl::setHasNonZeroConstructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_475261a6bad0519c9cd2f5c1a36ae0a1)(class ::clang::SourceLocation ) = &::clang::ObjCImplementationDecl::setIvarLBraceLoc;
    void  (::clang::ObjCImplementationDecl::*method_pointer_b88c451c0594513d9a05df3e17b5b223)(class ::clang::SourceLocation ) = &::clang::ObjCImplementationDecl::setIvarRBraceLoc;
    void  (::clang::ObjCImplementationDecl::*method_pointer_4ea9b5eb3aa35052bf4b88c27f5b21a6)(unsigned int ) = &::clang::ObjCImplementationDecl::setNumIvarInitializers;
    void  (::clang::ObjCImplementationDecl::*method_pointer_9e53c156c55e58bab6433c169aa14b4d)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplementationDecl::setSuperClass;
    boost::python::class_< class ::clang::ObjCImplementationDecl, autowig::HeldType< class ::clang::ObjCImplementationDecl >, boost::python::bases< class ::clang::ObjCImplDecl >, boost::noncopyable > class_744be89803015d4fa974827041a9835a("ObjCImplementationDecl", "", boost::python::no_init);
    class_744be89803015d4fa974827041a9835a.def("create", method_pointer_3523865020f05f4fb295318ed138d693, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("create_deserialized", method_pointer_61cfd5371c53551ab4e261bcc9fddec9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("classof", method_pointer_069c1e14ffba5df1b5d07c78320bcecb, "");
    class_744be89803015d4fa974827041a9835a.def("classof_kind", method_pointer_04f9e3534ac056c9ae3f4152be584e0d, "");
    class_744be89803015d4fa974827041a9835a.def("get_ivar_l_brace_loc", method_pointer_527379ad707c588ea794e07cae980851, "");
    class_744be89803015d4fa974827041a9835a.def("get_ivar_r_brace_loc", method_pointer_97082220a43252728fe4b7e87ec5ad87, "");
    class_744be89803015d4fa974827041a9835a.def("get_name", method_pointer_a5ee2ff0f74a5d0799b70681fa48500a, "");
    class_744be89803015d4fa974827041a9835a.def("get_num_ivar_initializers", method_pointer_d9172882ba7753bfadac89edcf1aa6ce, "");
    class_744be89803015d4fa974827041a9835a.def("get_obj_c_runtime_name_as_string", method_pointer_3949b88660cb5e8cb06751daebd49214, "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_2bc11fe80a57523db5059ce010cf51ca, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_3ac25ef683b852978c305f8c314e7c7e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class_loc", method_pointer_287c929a05b650148383d9bb8b73abc3, "");
    class_744be89803015d4fa974827041a9835a.def("has_destructors", method_pointer_af9717f96e475e25b3d7c8728ac2aa3e, "");
    class_744be89803015d4fa974827041a9835a.def("has_non_zero_constructors", method_pointer_13cac00b6e865db4bd2e2bfbcda4cbfc, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_empty", method_pointer_b0e5a5254ab15dbeb0ea0b05298ed7b8, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_size", method_pointer_8a856c933ef55232bb7c156bd0060eb9, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_destructors", method_pointer_70cb466f119d5f0089f3c4b5d602cb40, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_non_zero_constructors", method_pointer_fed3b0b36dfd572ea990f6cd75851835, "");
    class_744be89803015d4fa974827041a9835a.def("set_ivar_l_brace_loc", method_pointer_475261a6bad0519c9cd2f5c1a36ae0a1, "");
    class_744be89803015d4fa974827041a9835a.def("set_ivar_r_brace_loc", method_pointer_b88c451c0594513d9a05df3e17b5b223, "");
    class_744be89803015d4fa974827041a9835a.def("set_num_ivar_initializers", method_pointer_4ea9b5eb3aa35052bf4b88c27f5b21a6, "");
    class_744be89803015d4fa974827041a9835a.def("set_super_class", method_pointer_9e53c156c55e58bab6433c169aa14b4d, "");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof_kind");
    class_744be89803015d4fa974827041a9835a.staticmethod("create");
    class_744be89803015d4fa974827041a9835a.staticmethod("create_deserialized");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplementationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplementationDecl >, autowig::HeldType< class ::clang::ObjCImplDecl > >();
    }

}