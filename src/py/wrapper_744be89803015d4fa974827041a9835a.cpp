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
    class ::clang::ObjCImplementationDecl  * (*method_pointer_5474b40be95e580eb79cf21830a44ce7)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::ObjCInterfaceDecl  *, class ::clang::ObjCInterfaceDecl  *, class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation ) = ::clang::ObjCImplementationDecl::Create;
    class ::clang::ObjCImplementationDecl  * (*method_pointer_f3cdac40d34158289edb8d8697034e3b)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCImplementationDecl::CreateDeserialized;
    bool  (*method_pointer_574fb3c2cbc15484ae02f8477ddefec8)(class ::clang::Decl  const *) = ::clang::ObjCImplementationDecl::classof;
    bool  (*method_pointer_46b92a53f40a5c1da17a9424501c1170)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplementationDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_db5ad6bba7175ac49c50ddaf269f0583)() const = &::clang::ObjCImplementationDecl::getIvarLBraceLoc;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_624699cc0cbc5e4d9ebfff6261d16592)() const = &::clang::ObjCImplementationDecl::getIvarRBraceLoc;
    class ::llvm::StringRef  (::clang::ObjCImplementationDecl::*method_pointer_aa0993cb54d55bb0ac509eb6e36bf793)() const = &::clang::ObjCImplementationDecl::getName;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_e56b1cf6967f54e9801b1c6e5da51506)() const = &::clang::ObjCImplementationDecl::getNumIvarInitializers;
    class ::llvm::StringRef  (::clang::ObjCImplementationDecl::*method_pointer_9ef0f72e9056568fa89b5e1086e06cdc)() const = &::clang::ObjCImplementationDecl::getObjCRuntimeNameAsString;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplementationDecl::*method_pointer_cd6d08f4e192581a9564057836f77bc3)() const = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplementationDecl::*method_pointer_915706a3f9a556fda5eb9855838e7389)() = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_25c4ed7382e450748706325d317386b1)() const = &::clang::ObjCImplementationDecl::getSuperClassLoc;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_836f4153916657e2a92a3568ff98f68b)() const = &::clang::ObjCImplementationDecl::hasDestructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_85d4c681a3985364a3b48c83e7ef29bf)() const = &::clang::ObjCImplementationDecl::hasNonZeroConstructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_8b04427203dd50f59bd9d300d6f3b76c)() const = &::clang::ObjCImplementationDecl::ivar_empty;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_81703cf1273053c88bdb75de86379c62)() const = &::clang::ObjCImplementationDecl::ivar_size;
    void  (::clang::ObjCImplementationDecl::*method_pointer_768f02f4d9c75b0db89a7ac15ebfc53e)(bool ) = &::clang::ObjCImplementationDecl::setHasDestructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_5275e10b3807505aa0a9197542af19f4)(bool ) = &::clang::ObjCImplementationDecl::setHasNonZeroConstructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_bb7179a608855f6090ca3057afb6bd58)(class ::clang::SourceLocation ) = &::clang::ObjCImplementationDecl::setIvarLBraceLoc;
    void  (::clang::ObjCImplementationDecl::*method_pointer_ba8268651f3456f3b434fd8152e025a3)(class ::clang::SourceLocation ) = &::clang::ObjCImplementationDecl::setIvarRBraceLoc;
    void  (::clang::ObjCImplementationDecl::*method_pointer_167c63dd2d9054d692005267f9fe7da5)(unsigned int ) = &::clang::ObjCImplementationDecl::setNumIvarInitializers;
    void  (::clang::ObjCImplementationDecl::*method_pointer_df0a1a49a30153e79d59d45e48559272)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplementationDecl::setSuperClass;
    boost::python::class_< class ::clang::ObjCImplementationDecl, autowig::HeldType< class ::clang::ObjCImplementationDecl >, boost::python::bases< class ::clang::ObjCImplDecl >, boost::noncopyable > class_744be89803015d4fa974827041a9835a("ObjCImplementationDecl", "", boost::python::no_init);
    class_744be89803015d4fa974827041a9835a.def("create", method_pointer_5474b40be95e580eb79cf21830a44ce7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("create_deserialized", method_pointer_f3cdac40d34158289edb8d8697034e3b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("classof", method_pointer_574fb3c2cbc15484ae02f8477ddefec8, "");
    class_744be89803015d4fa974827041a9835a.def("classof_kind", method_pointer_46b92a53f40a5c1da17a9424501c1170, "");
    class_744be89803015d4fa974827041a9835a.def("get_ivar_l_brace_loc", method_pointer_db5ad6bba7175ac49c50ddaf269f0583, "");
    class_744be89803015d4fa974827041a9835a.def("get_ivar_r_brace_loc", method_pointer_624699cc0cbc5e4d9ebfff6261d16592, "");
    class_744be89803015d4fa974827041a9835a.def("get_name", method_pointer_aa0993cb54d55bb0ac509eb6e36bf793, "");
    class_744be89803015d4fa974827041a9835a.def("get_num_ivar_initializers", method_pointer_e56b1cf6967f54e9801b1c6e5da51506, "");
    class_744be89803015d4fa974827041a9835a.def("get_obj_c_runtime_name_as_string", method_pointer_9ef0f72e9056568fa89b5e1086e06cdc, "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_cd6d08f4e192581a9564057836f77bc3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_915706a3f9a556fda5eb9855838e7389, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class_loc", method_pointer_25c4ed7382e450748706325d317386b1, "");
    class_744be89803015d4fa974827041a9835a.def("has_destructors", method_pointer_836f4153916657e2a92a3568ff98f68b, "");
    class_744be89803015d4fa974827041a9835a.def("has_non_zero_constructors", method_pointer_85d4c681a3985364a3b48c83e7ef29bf, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_empty", method_pointer_8b04427203dd50f59bd9d300d6f3b76c, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_size", method_pointer_81703cf1273053c88bdb75de86379c62, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_destructors", method_pointer_768f02f4d9c75b0db89a7ac15ebfc53e, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_non_zero_constructors", method_pointer_5275e10b3807505aa0a9197542af19f4, "");
    class_744be89803015d4fa974827041a9835a.def("set_ivar_l_brace_loc", method_pointer_bb7179a608855f6090ca3057afb6bd58, "");
    class_744be89803015d4fa974827041a9835a.def("set_ivar_r_brace_loc", method_pointer_ba8268651f3456f3b434fd8152e025a3, "");
    class_744be89803015d4fa974827041a9835a.def("set_num_ivar_initializers", method_pointer_167c63dd2d9054d692005267f9fe7da5, "");
    class_744be89803015d4fa974827041a9835a.def("set_super_class", method_pointer_df0a1a49a30153e79d59d45e48559272, "");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof_kind");
    class_744be89803015d4fa974827041a9835a.staticmethod("create");
    class_744be89803015d4fa974827041a9835a.staticmethod("create_deserialized");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplementationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplementationDecl >, autowig::HeldType< class ::clang::ObjCImplDecl > >();
    }

}