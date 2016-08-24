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
    class ::clang::ObjCImplementationDecl  * (*method_pointer_fb38358a339f551b9fddb64c7510aaa0)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::ObjCInterfaceDecl  *, class ::clang::ObjCInterfaceDecl  *, class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation ) = ::clang::ObjCImplementationDecl::Create;
    class ::clang::ObjCImplementationDecl  * (*method_pointer_507e78597a405f6bacc77e9d91a0a4f8)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCImplementationDecl::CreateDeserialized;
    bool  (*method_pointer_5dd929371a5253f69b812a49ed1e1663)(class ::clang::Decl  const *) = ::clang::ObjCImplementationDecl::classof;
    bool  (*method_pointer_ca885e3dddf95fa391bdd24838c8742d)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplementationDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_ba28e7e9ef0f59a59e17bef1ba3221b9)() const = &::clang::ObjCImplementationDecl::getIvarLBraceLoc;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_e13a8b8bc6be530c81388850b7811802)() const = &::clang::ObjCImplementationDecl::getIvarRBraceLoc;
    class ::llvm::StringRef  (::clang::ObjCImplementationDecl::*method_pointer_b81ecb40871d59f6bfdcc26105622a64)() const = &::clang::ObjCImplementationDecl::getName;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_9204c8dd0a2d571f8876c0d375cf2448)() const = &::clang::ObjCImplementationDecl::getNumIvarInitializers;
    class ::llvm::StringRef  (::clang::ObjCImplementationDecl::*method_pointer_ca99090932825d0ebae2e8a48470c7b5)() const = &::clang::ObjCImplementationDecl::getObjCRuntimeNameAsString;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplementationDecl::*method_pointer_2559bbd8f46152d382a304a5c55bb201)() const = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplementationDecl::*method_pointer_d9cf6809232951e18f8c4944254fafeb)() = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_079b14ef66a6549cb1e16bc8f8fb3fce)() const = &::clang::ObjCImplementationDecl::getSuperClassLoc;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_3966e080ca1d5837b1cde073da4c5259)() const = &::clang::ObjCImplementationDecl::hasDestructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_d99255eea3ca53f8874798ac275e2454)() const = &::clang::ObjCImplementationDecl::hasNonZeroConstructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_672d264b9cfb5974aadd869433088b75)() const = &::clang::ObjCImplementationDecl::ivar_empty;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_be30fae5c3945987afd9970aba6bde91)() const = &::clang::ObjCImplementationDecl::ivar_size;
    void  (::clang::ObjCImplementationDecl::*method_pointer_d0ceaa1ca9c551c2ac041f44110932bf)(bool ) = &::clang::ObjCImplementationDecl::setHasDestructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_3f97cb76932a5c339db8805d0b4ce60f)(bool ) = &::clang::ObjCImplementationDecl::setHasNonZeroConstructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_07cf8e357bd351f1bb7bccdad76f841f)(class ::clang::SourceLocation ) = &::clang::ObjCImplementationDecl::setIvarLBraceLoc;
    void  (::clang::ObjCImplementationDecl::*method_pointer_7da54b138f285f69bc020018233e5fe5)(class ::clang::SourceLocation ) = &::clang::ObjCImplementationDecl::setIvarRBraceLoc;
    void  (::clang::ObjCImplementationDecl::*method_pointer_dbf4fdbee4a55351b6cb0858fd384147)(unsigned int ) = &::clang::ObjCImplementationDecl::setNumIvarInitializers;
    void  (::clang::ObjCImplementationDecl::*method_pointer_c840b1d90bff59f79bb71f173ec7c67b)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplementationDecl::setSuperClass;
    boost::python::class_< class ::clang::ObjCImplementationDecl, autowig::HeldType< class ::clang::ObjCImplementationDecl >, boost::python::bases< class ::clang::ObjCImplDecl >, boost::noncopyable > class_744be89803015d4fa974827041a9835a("ObjCImplementationDecl", "", boost::python::no_init);
    class_744be89803015d4fa974827041a9835a.def("create", method_pointer_fb38358a339f551b9fddb64c7510aaa0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("create_deserialized", method_pointer_507e78597a405f6bacc77e9d91a0a4f8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("classof", method_pointer_5dd929371a5253f69b812a49ed1e1663, "");
    class_744be89803015d4fa974827041a9835a.def("classof_kind", method_pointer_ca885e3dddf95fa391bdd24838c8742d, "");
    class_744be89803015d4fa974827041a9835a.def("get_ivar_l_brace_loc", method_pointer_ba28e7e9ef0f59a59e17bef1ba3221b9, "");
    class_744be89803015d4fa974827041a9835a.def("get_ivar_r_brace_loc", method_pointer_e13a8b8bc6be530c81388850b7811802, "");
    class_744be89803015d4fa974827041a9835a.def("get_name", method_pointer_b81ecb40871d59f6bfdcc26105622a64, "");
    class_744be89803015d4fa974827041a9835a.def("get_num_ivar_initializers", method_pointer_9204c8dd0a2d571f8876c0d375cf2448, "");
    class_744be89803015d4fa974827041a9835a.def("get_obj_c_runtime_name_as_string", method_pointer_ca99090932825d0ebae2e8a48470c7b5, "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_2559bbd8f46152d382a304a5c55bb201, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_d9cf6809232951e18f8c4944254fafeb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class_loc", method_pointer_079b14ef66a6549cb1e16bc8f8fb3fce, "");
    class_744be89803015d4fa974827041a9835a.def("has_destructors", method_pointer_3966e080ca1d5837b1cde073da4c5259, "");
    class_744be89803015d4fa974827041a9835a.def("has_non_zero_constructors", method_pointer_d99255eea3ca53f8874798ac275e2454, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_empty", method_pointer_672d264b9cfb5974aadd869433088b75, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_size", method_pointer_be30fae5c3945987afd9970aba6bde91, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_destructors", method_pointer_d0ceaa1ca9c551c2ac041f44110932bf, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_non_zero_constructors", method_pointer_3f97cb76932a5c339db8805d0b4ce60f, "");
    class_744be89803015d4fa974827041a9835a.def("set_ivar_l_brace_loc", method_pointer_07cf8e357bd351f1bb7bccdad76f841f, "");
    class_744be89803015d4fa974827041a9835a.def("set_ivar_r_brace_loc", method_pointer_7da54b138f285f69bc020018233e5fe5, "");
    class_744be89803015d4fa974827041a9835a.def("set_num_ivar_initializers", method_pointer_dbf4fdbee4a55351b6cb0858fd384147, "");
    class_744be89803015d4fa974827041a9835a.def("set_super_class", method_pointer_c840b1d90bff59f79bb71f173ec7c67b, "");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof_kind");
    class_744be89803015d4fa974827041a9835a.staticmethod("create");
    class_744be89803015d4fa974827041a9835a.staticmethod("create_deserialized");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplementationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplementationDecl >, autowig::HeldType< class ::clang::ObjCImplDecl > >();
    }

}