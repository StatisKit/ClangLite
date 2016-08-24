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
    class ::clang::ObjCImplementationDecl  * (*method_pointer_37f5d15486c25e239138bc2301003454)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::ObjCInterfaceDecl  *, class ::clang::ObjCInterfaceDecl  *, class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation ) = ::clang::ObjCImplementationDecl::Create;
    class ::clang::ObjCImplementationDecl  * (*method_pointer_1fcce785bda158ef858f956b50ddd086)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCImplementationDecl::CreateDeserialized;
    bool  (*method_pointer_545534de16335c1094fe47ee4f9c3f5b)(class ::clang::Decl  const *) = ::clang::ObjCImplementationDecl::classof;
    bool  (*method_pointer_f335808b3cc857a3937a4a1e15f7fd41)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplementationDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_52b2c5ef7c045013986b4119e67a5168)() const = &::clang::ObjCImplementationDecl::getIvarLBraceLoc;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_47176f954d825b89929fc90bf793afbe)() const = &::clang::ObjCImplementationDecl::getIvarRBraceLoc;
    class ::llvm::StringRef  (::clang::ObjCImplementationDecl::*method_pointer_0c7781ea8b8256dd8c2a7a48ad514786)() const = &::clang::ObjCImplementationDecl::getName;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_1b00dfa154fe56febd6babc33fb548d2)() const = &::clang::ObjCImplementationDecl::getNumIvarInitializers;
    class ::llvm::StringRef  (::clang::ObjCImplementationDecl::*method_pointer_35317dc6bafd5c73b0ee86c3be42ab48)() const = &::clang::ObjCImplementationDecl::getObjCRuntimeNameAsString;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplementationDecl::*method_pointer_66d1478557925a1082acc70751e97c38)() const = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplementationDecl::*method_pointer_1683b72c55e95f5cbd52e185c318ea12)() = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_3a7749dc6d415357b40581f801a3ccfb)() const = &::clang::ObjCImplementationDecl::getSuperClassLoc;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_4d17a37c32ea5ff0a421950198ec90fb)() const = &::clang::ObjCImplementationDecl::hasDestructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_8e746b939e055195962f6df1867c9627)() const = &::clang::ObjCImplementationDecl::hasNonZeroConstructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_055ba97eb220531f868e10794fc0e724)() const = &::clang::ObjCImplementationDecl::ivar_empty;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_00e02153fd025c95b31ad012db31519e)() const = &::clang::ObjCImplementationDecl::ivar_size;
    void  (::clang::ObjCImplementationDecl::*method_pointer_986c9e7c4160591ca2610d07566ab25f)(bool ) = &::clang::ObjCImplementationDecl::setHasDestructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_82df4c3fe79b56d9bb148d6878175134)(bool ) = &::clang::ObjCImplementationDecl::setHasNonZeroConstructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_3c579683082751b0991b0fd91dec6e12)(class ::clang::SourceLocation ) = &::clang::ObjCImplementationDecl::setIvarLBraceLoc;
    void  (::clang::ObjCImplementationDecl::*method_pointer_560204804cd951058718c60e2d8287fc)(class ::clang::SourceLocation ) = &::clang::ObjCImplementationDecl::setIvarRBraceLoc;
    void  (::clang::ObjCImplementationDecl::*method_pointer_3404a4518e405a7aa046ff021c4b0a49)(unsigned int ) = &::clang::ObjCImplementationDecl::setNumIvarInitializers;
    void  (::clang::ObjCImplementationDecl::*method_pointer_78c5edba7a37502c88c9eacd2ac66136)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplementationDecl::setSuperClass;
    boost::python::class_< class ::clang::ObjCImplementationDecl, autowig::HeldType< class ::clang::ObjCImplementationDecl >, boost::python::bases< class ::clang::ObjCImplDecl >, boost::noncopyable > class_744be89803015d4fa974827041a9835a("ObjCImplementationDecl", "", boost::python::no_init);
    class_744be89803015d4fa974827041a9835a.def("create", method_pointer_37f5d15486c25e239138bc2301003454, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("create_deserialized", method_pointer_1fcce785bda158ef858f956b50ddd086, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("classof", method_pointer_545534de16335c1094fe47ee4f9c3f5b, "");
    class_744be89803015d4fa974827041a9835a.def("classof_kind", method_pointer_f335808b3cc857a3937a4a1e15f7fd41, "");
    class_744be89803015d4fa974827041a9835a.def("get_ivar_l_brace_loc", method_pointer_52b2c5ef7c045013986b4119e67a5168, "");
    class_744be89803015d4fa974827041a9835a.def("get_ivar_r_brace_loc", method_pointer_47176f954d825b89929fc90bf793afbe, "");
    class_744be89803015d4fa974827041a9835a.def("get_name", method_pointer_0c7781ea8b8256dd8c2a7a48ad514786, "");
    class_744be89803015d4fa974827041a9835a.def("get_num_ivar_initializers", method_pointer_1b00dfa154fe56febd6babc33fb548d2, "");
    class_744be89803015d4fa974827041a9835a.def("get_obj_c_runtime_name_as_string", method_pointer_35317dc6bafd5c73b0ee86c3be42ab48, "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_66d1478557925a1082acc70751e97c38, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_1683b72c55e95f5cbd52e185c318ea12, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class_loc", method_pointer_3a7749dc6d415357b40581f801a3ccfb, "");
    class_744be89803015d4fa974827041a9835a.def("has_destructors", method_pointer_4d17a37c32ea5ff0a421950198ec90fb, "");
    class_744be89803015d4fa974827041a9835a.def("has_non_zero_constructors", method_pointer_8e746b939e055195962f6df1867c9627, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_empty", method_pointer_055ba97eb220531f868e10794fc0e724, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_size", method_pointer_00e02153fd025c95b31ad012db31519e, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_destructors", method_pointer_986c9e7c4160591ca2610d07566ab25f, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_non_zero_constructors", method_pointer_82df4c3fe79b56d9bb148d6878175134, "");
    class_744be89803015d4fa974827041a9835a.def("set_ivar_l_brace_loc", method_pointer_3c579683082751b0991b0fd91dec6e12, "");
    class_744be89803015d4fa974827041a9835a.def("set_ivar_r_brace_loc", method_pointer_560204804cd951058718c60e2d8287fc, "");
    class_744be89803015d4fa974827041a9835a.def("set_num_ivar_initializers", method_pointer_3404a4518e405a7aa046ff021c4b0a49, "");
    class_744be89803015d4fa974827041a9835a.def("set_super_class", method_pointer_78c5edba7a37502c88c9eacd2ac66136, "");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof_kind");
    class_744be89803015d4fa974827041a9835a.staticmethod("create");
    class_744be89803015d4fa974827041a9835a.staticmethod("create_deserialized");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplementationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplementationDecl >, autowig::HeldType< class ::clang::ObjCImplDecl > >();
    }

}