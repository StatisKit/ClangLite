#include "_clanglite.h"


namespace autowig
{
}


void wrapper_744be89803015d4fa974827041a9835a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCImplementationDecl  * (*method_pointer_cd4ada0f20c155b39174d14bd8ace047)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::ObjCInterfaceDecl  *, class ::clang::ObjCInterfaceDecl  *, class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation ) = ::clang::ObjCImplementationDecl::Create;
    class ::clang::ObjCImplementationDecl  * (*method_pointer_8b4710640083571cadd8acca209b3c35)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCImplementationDecl::CreateDeserialized;
    bool  (*method_pointer_ca452be3f4fb5459accd6bd394c77078)(class ::clang::Decl  const *) = ::clang::ObjCImplementationDecl::classof;
    bool  (*method_pointer_c679172fc84d51d7b6eda2881698d3c0)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplementationDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_554ab2eeb71656fe8de59be38fe783c0)() const = &::clang::ObjCImplementationDecl::getIvarLBraceLoc;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_42fb1626edea553690bd0fccc7dd0e65)() const = &::clang::ObjCImplementationDecl::getIvarRBraceLoc;
    class ::llvm::StringRef  (::clang::ObjCImplementationDecl::*method_pointer_bfbcc829f6405a5badd01428644ea46a)() const = &::clang::ObjCImplementationDecl::getName;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_13f580bb7f6753dbb2a6a7103e602a89)() const = &::clang::ObjCImplementationDecl::getNumIvarInitializers;
    class ::llvm::StringRef  (::clang::ObjCImplementationDecl::*method_pointer_17b05066236a5cbbbc9049a814e2333b)() const = &::clang::ObjCImplementationDecl::getObjCRuntimeNameAsString;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplementationDecl::*method_pointer_e8ff4d379eda56d7bcd2bb6a2d758021)() = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplementationDecl::*method_pointer_239dbd72a45a55adb8a4e8bf0110875f)() const = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_c0d99744d0015177b02b6b43d6889c1a)() const = &::clang::ObjCImplementationDecl::getSuperClassLoc;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_74dcf88c938c5feea797951a97221d78)() const = &::clang::ObjCImplementationDecl::hasDestructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_31fafd6830635ccebbea56844586e71d)() const = &::clang::ObjCImplementationDecl::hasNonZeroConstructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_9bae5678d62e58ab83aee2fb9f91ab91)() const = &::clang::ObjCImplementationDecl::ivar_empty;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_e9c5ddf49ec75a4d9ae250da285d7bf4)() const = &::clang::ObjCImplementationDecl::ivar_size;
    void  (::clang::ObjCImplementationDecl::*method_pointer_da9de72de62156a097cbfb5289865b2c)(bool ) = &::clang::ObjCImplementationDecl::setHasDestructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_0ccc385502855118b2803aef6c91ffb5)(bool ) = &::clang::ObjCImplementationDecl::setHasNonZeroConstructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_07d5be7b89075a9eb7b41c82107cd981)(class ::clang::SourceLocation ) = &::clang::ObjCImplementationDecl::setIvarLBraceLoc;
    void  (::clang::ObjCImplementationDecl::*method_pointer_951aa196ab3354e49459684221df9bb4)(class ::clang::SourceLocation ) = &::clang::ObjCImplementationDecl::setIvarRBraceLoc;
    void  (::clang::ObjCImplementationDecl::*method_pointer_6d2eb40d1fb454efa5e9e594bfdd75b1)(unsigned int ) = &::clang::ObjCImplementationDecl::setNumIvarInitializers;
    void  (::clang::ObjCImplementationDecl::*method_pointer_eeebcc2d5c005adfa38c0bbe3909a89a)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplementationDecl::setSuperClass;
    boost::python::class_< class ::clang::ObjCImplementationDecl, autowig::HeldType< class ::clang::ObjCImplementationDecl >, boost::python::bases< class ::clang::ObjCImplDecl >, boost::noncopyable > class_744be89803015d4fa974827041a9835a("ObjCImplementationDecl", "", boost::python::no_init);
    class_744be89803015d4fa974827041a9835a.def("create", method_pointer_cd4ada0f20c155b39174d14bd8ace047, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("create_deserialized", method_pointer_8b4710640083571cadd8acca209b3c35, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("classof", method_pointer_ca452be3f4fb5459accd6bd394c77078, "");
    class_744be89803015d4fa974827041a9835a.def("classof_kind", method_pointer_c679172fc84d51d7b6eda2881698d3c0, "");
    class_744be89803015d4fa974827041a9835a.def("get_ivar_l_brace_loc", method_pointer_554ab2eeb71656fe8de59be38fe783c0, "");
    class_744be89803015d4fa974827041a9835a.def("get_ivar_r_brace_loc", method_pointer_42fb1626edea553690bd0fccc7dd0e65, "");
    class_744be89803015d4fa974827041a9835a.def("get_name", method_pointer_bfbcc829f6405a5badd01428644ea46a, "");
    class_744be89803015d4fa974827041a9835a.def("get_num_ivar_initializers", method_pointer_13f580bb7f6753dbb2a6a7103e602a89, "");
    class_744be89803015d4fa974827041a9835a.def("get_obj_c_runtime_name_as_string", method_pointer_17b05066236a5cbbbc9049a814e2333b, "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_e8ff4d379eda56d7bcd2bb6a2d758021, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_239dbd72a45a55adb8a4e8bf0110875f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class_loc", method_pointer_c0d99744d0015177b02b6b43d6889c1a, "");
    class_744be89803015d4fa974827041a9835a.def("has_destructors", method_pointer_74dcf88c938c5feea797951a97221d78, "");
    class_744be89803015d4fa974827041a9835a.def("has_non_zero_constructors", method_pointer_31fafd6830635ccebbea56844586e71d, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_empty", method_pointer_9bae5678d62e58ab83aee2fb9f91ab91, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_size", method_pointer_e9c5ddf49ec75a4d9ae250da285d7bf4, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_destructors", method_pointer_da9de72de62156a097cbfb5289865b2c, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_non_zero_constructors", method_pointer_0ccc385502855118b2803aef6c91ffb5, "");
    class_744be89803015d4fa974827041a9835a.def("set_ivar_l_brace_loc", method_pointer_07d5be7b89075a9eb7b41c82107cd981, "");
    class_744be89803015d4fa974827041a9835a.def("set_ivar_r_brace_loc", method_pointer_951aa196ab3354e49459684221df9bb4, "");
    class_744be89803015d4fa974827041a9835a.def("set_num_ivar_initializers", method_pointer_6d2eb40d1fb454efa5e9e594bfdd75b1, "");
    class_744be89803015d4fa974827041a9835a.def("set_super_class", method_pointer_eeebcc2d5c005adfa38c0bbe3909a89a, "");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof_kind");
    class_744be89803015d4fa974827041a9835a.staticmethod("create");
    class_744be89803015d4fa974827041a9835a.staticmethod("create_deserialized");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplementationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplementationDecl >, autowig::HeldType< class ::clang::ObjCImplDecl > >();
    }

}