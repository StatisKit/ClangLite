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
    class ::clang::ObjCImplementationDecl  * (*method_pointer_0e9091d6606351fc9cc82f359a827961)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::ObjCInterfaceDecl  *, class ::clang::ObjCInterfaceDecl  *, class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation ) = ::clang::ObjCImplementationDecl::Create;
    class ::clang::ObjCImplementationDecl  * (*method_pointer_060ad93e64715c37a87c8f2ad44706d1)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCImplementationDecl::CreateDeserialized;
    bool  (*method_pointer_85c7ddf2fd215c3c885f6319feb947a6)(class ::clang::Decl  const *) = ::clang::ObjCImplementationDecl::classof;
    bool  (*method_pointer_5177cbcf1ad45cdc9c6661b4a07b1b84)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplementationDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_85bd06b91c85568b9de6d0bb74da6c99)() const = &::clang::ObjCImplementationDecl::getIvarLBraceLoc;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_e2c46d7c33e1562b91b3b36b47a09aef)() const = &::clang::ObjCImplementationDecl::getIvarRBraceLoc;
    class ::llvm::StringRef  (::clang::ObjCImplementationDecl::*method_pointer_c69e2cded9235515a789468997305142)() const = &::clang::ObjCImplementationDecl::getName;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_5e8cda1cea7256589c9777c020843dc8)() const = &::clang::ObjCImplementationDecl::getNumIvarInitializers;
    class ::llvm::StringRef  (::clang::ObjCImplementationDecl::*method_pointer_f7721fd144aa5c358942e3aec2c73206)() const = &::clang::ObjCImplementationDecl::getObjCRuntimeNameAsString;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplementationDecl::*method_pointer_077552709f745195a778d5b208f88f8b)() = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplementationDecl::*method_pointer_f3e98d9f9b5456afaffcb445a92f2255)() const = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_a7968888895a5618baf840555ecaac67)() const = &::clang::ObjCImplementationDecl::getSuperClassLoc;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_c7eaabbf9f9d59c0b7721f4c2c47bad3)() const = &::clang::ObjCImplementationDecl::hasDestructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_3c0a3721fd085482802d5f08ab8f8d3a)() const = &::clang::ObjCImplementationDecl::hasNonZeroConstructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_7fc15c64fcf958debd4d3c8bada3798b)() const = &::clang::ObjCImplementationDecl::ivar_empty;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_75132ed06b585cc7a9ca4d68e02494e8)() const = &::clang::ObjCImplementationDecl::ivar_size;
    void  (::clang::ObjCImplementationDecl::*method_pointer_f7f62a6a81bc5d80a271bcacf73fb947)(bool ) = &::clang::ObjCImplementationDecl::setHasDestructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_55f9040a7d5b5492aa1679f54f51b33c)(bool ) = &::clang::ObjCImplementationDecl::setHasNonZeroConstructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_798039df11105ec0afc8bc2fa2c22a5a)(class ::clang::SourceLocation ) = &::clang::ObjCImplementationDecl::setIvarLBraceLoc;
    void  (::clang::ObjCImplementationDecl::*method_pointer_34a88eacb68854a5ae7fa7b94b46d10f)(class ::clang::SourceLocation ) = &::clang::ObjCImplementationDecl::setIvarRBraceLoc;
    void  (::clang::ObjCImplementationDecl::*method_pointer_3ad82d3149145244af8b4df87d482ef1)(unsigned int ) = &::clang::ObjCImplementationDecl::setNumIvarInitializers;
    void  (::clang::ObjCImplementationDecl::*method_pointer_5ad7b22c87b25039b2ccafccf276b54e)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplementationDecl::setSuperClass;
    boost::python::class_< class ::clang::ObjCImplementationDecl, autowig::HeldType< class ::clang::ObjCImplementationDecl >, boost::python::bases< class ::clang::ObjCImplDecl >, boost::noncopyable > class_744be89803015d4fa974827041a9835a("ObjCImplementationDecl", "", boost::python::no_init);
    class_744be89803015d4fa974827041a9835a.def("create", method_pointer_0e9091d6606351fc9cc82f359a827961, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("create_deserialized", method_pointer_060ad93e64715c37a87c8f2ad44706d1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("classof", method_pointer_85c7ddf2fd215c3c885f6319feb947a6, "");
    class_744be89803015d4fa974827041a9835a.def("classof_kind", method_pointer_5177cbcf1ad45cdc9c6661b4a07b1b84, "");
    class_744be89803015d4fa974827041a9835a.def("get_ivar_l_brace_loc", method_pointer_85bd06b91c85568b9de6d0bb74da6c99, "");
    class_744be89803015d4fa974827041a9835a.def("get_ivar_r_brace_loc", method_pointer_e2c46d7c33e1562b91b3b36b47a09aef, "");
    class_744be89803015d4fa974827041a9835a.def("get_name", method_pointer_c69e2cded9235515a789468997305142, "");
    class_744be89803015d4fa974827041a9835a.def("get_num_ivar_initializers", method_pointer_5e8cda1cea7256589c9777c020843dc8, "");
    class_744be89803015d4fa974827041a9835a.def("get_obj_c_runtime_name_as_string", method_pointer_f7721fd144aa5c358942e3aec2c73206, "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_077552709f745195a778d5b208f88f8b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_f3e98d9f9b5456afaffcb445a92f2255, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class_loc", method_pointer_a7968888895a5618baf840555ecaac67, "");
    class_744be89803015d4fa974827041a9835a.def("has_destructors", method_pointer_c7eaabbf9f9d59c0b7721f4c2c47bad3, "");
    class_744be89803015d4fa974827041a9835a.def("has_non_zero_constructors", method_pointer_3c0a3721fd085482802d5f08ab8f8d3a, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_empty", method_pointer_7fc15c64fcf958debd4d3c8bada3798b, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_size", method_pointer_75132ed06b585cc7a9ca4d68e02494e8, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_destructors", method_pointer_f7f62a6a81bc5d80a271bcacf73fb947, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_non_zero_constructors", method_pointer_55f9040a7d5b5492aa1679f54f51b33c, "");
    class_744be89803015d4fa974827041a9835a.def("set_ivar_l_brace_loc", method_pointer_798039df11105ec0afc8bc2fa2c22a5a, "");
    class_744be89803015d4fa974827041a9835a.def("set_ivar_r_brace_loc", method_pointer_34a88eacb68854a5ae7fa7b94b46d10f, "");
    class_744be89803015d4fa974827041a9835a.def("set_num_ivar_initializers", method_pointer_3ad82d3149145244af8b4df87d482ef1, "");
    class_744be89803015d4fa974827041a9835a.def("set_super_class", method_pointer_5ad7b22c87b25039b2ccafccf276b54e, "");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof_kind");
    class_744be89803015d4fa974827041a9835a.staticmethod("create");
    class_744be89803015d4fa974827041a9835a.staticmethod("create_deserialized");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplementationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplementationDecl >, autowig::HeldType< class ::clang::ObjCImplDecl > >();
    }

}