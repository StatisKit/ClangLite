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
    class ::clang::ObjCImplementationDecl  * (*method_pointer_30de8d313f4955c8a40225ffe0739bf6)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::ObjCInterfaceDecl  *, class ::clang::ObjCInterfaceDecl  *, class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation ) = ::clang::ObjCImplementationDecl::Create;
    class ::clang::ObjCImplementationDecl  * (*method_pointer_18ee08a7b8ec5db5a3a7db11041de72c)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCImplementationDecl::CreateDeserialized;
    bool  (*method_pointer_159f6611f9505649b10bc495bef1836c)(class ::clang::Decl  const *) = ::clang::ObjCImplementationDecl::classof;
    bool  (*method_pointer_adf0b80bebf75205853e462596c2c37f)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplementationDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_c72ca10d993d544eac481a86f27b3626)() const = &::clang::ObjCImplementationDecl::getIvarLBraceLoc;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_640ec6fa11015dabb6f1560dabb612df)() const = &::clang::ObjCImplementationDecl::getIvarRBraceLoc;
    class ::llvm::StringRef  (::clang::ObjCImplementationDecl::*method_pointer_0a92f5e4395a57f29b0bc941cc3746bd)() const = &::clang::ObjCImplementationDecl::getName;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_d253d0580d735e049a90b59f256d1c1c)() const = &::clang::ObjCImplementationDecl::getNumIvarInitializers;
    class ::llvm::StringRef  (::clang::ObjCImplementationDecl::*method_pointer_60df1c12ab5f5a718292d2d2e37b6825)() const = &::clang::ObjCImplementationDecl::getObjCRuntimeNameAsString;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplementationDecl::*method_pointer_4f161ad41975550bb6373b8af7c48c46)() = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplementationDecl::*method_pointer_4bb3a6b91a6c5965aae2349265e42273)() const = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_646330fc72545beda2828ea7d7532a79)() const = &::clang::ObjCImplementationDecl::getSuperClassLoc;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_4bd29b597d5f58f89e5653da059b0dd9)() const = &::clang::ObjCImplementationDecl::hasDestructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_220e08bb0fab5f3992b01688ff3096cd)() const = &::clang::ObjCImplementationDecl::hasNonZeroConstructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_965a3ee429d35201921dce852a2c0ab8)() const = &::clang::ObjCImplementationDecl::ivar_empty;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_c0f46dfc4bef50bca053c16c2bb5862d)() const = &::clang::ObjCImplementationDecl::ivar_size;
    void  (::clang::ObjCImplementationDecl::*method_pointer_0150d75e2b315939aea1de5c6a37b4ba)(bool ) = &::clang::ObjCImplementationDecl::setHasDestructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_f9442e75c32d5983a7659b560a508ca5)(bool ) = &::clang::ObjCImplementationDecl::setHasNonZeroConstructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_557c7ca4e3f154f6bb75845915815dba)(class ::clang::SourceLocation ) = &::clang::ObjCImplementationDecl::setIvarLBraceLoc;
    void  (::clang::ObjCImplementationDecl::*method_pointer_2f6bf4d3f7965b7ea1902f92d74d007d)(class ::clang::SourceLocation ) = &::clang::ObjCImplementationDecl::setIvarRBraceLoc;
    void  (::clang::ObjCImplementationDecl::*method_pointer_682bd79562f95cadb9d640573120d8b3)(unsigned int ) = &::clang::ObjCImplementationDecl::setNumIvarInitializers;
    void  (::clang::ObjCImplementationDecl::*method_pointer_e40d0a0c605b52a1a72d9746fce392b5)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplementationDecl::setSuperClass;
    boost::python::class_< class ::clang::ObjCImplementationDecl, autowig::HeldType< class ::clang::ObjCImplementationDecl >, boost::python::bases< class ::clang::ObjCImplDecl >, boost::noncopyable > class_744be89803015d4fa974827041a9835a("ObjCImplementationDecl", "", boost::python::no_init);
    class_744be89803015d4fa974827041a9835a.def("create", method_pointer_30de8d313f4955c8a40225ffe0739bf6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("create_deserialized", method_pointer_18ee08a7b8ec5db5a3a7db11041de72c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("classof", method_pointer_159f6611f9505649b10bc495bef1836c, "");
    class_744be89803015d4fa974827041a9835a.def("classof_kind", method_pointer_adf0b80bebf75205853e462596c2c37f, "");
    class_744be89803015d4fa974827041a9835a.def("get_ivar_l_brace_loc", method_pointer_c72ca10d993d544eac481a86f27b3626, "");
    class_744be89803015d4fa974827041a9835a.def("get_ivar_r_brace_loc", method_pointer_640ec6fa11015dabb6f1560dabb612df, "");
    class_744be89803015d4fa974827041a9835a.def("get_name", method_pointer_0a92f5e4395a57f29b0bc941cc3746bd, "");
    class_744be89803015d4fa974827041a9835a.def("get_num_ivar_initializers", method_pointer_d253d0580d735e049a90b59f256d1c1c, "");
    class_744be89803015d4fa974827041a9835a.def("get_obj_c_runtime_name_as_string", method_pointer_60df1c12ab5f5a718292d2d2e37b6825, "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_4f161ad41975550bb6373b8af7c48c46, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_4bb3a6b91a6c5965aae2349265e42273, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class_loc", method_pointer_646330fc72545beda2828ea7d7532a79, "");
    class_744be89803015d4fa974827041a9835a.def("has_destructors", method_pointer_4bd29b597d5f58f89e5653da059b0dd9, "");
    class_744be89803015d4fa974827041a9835a.def("has_non_zero_constructors", method_pointer_220e08bb0fab5f3992b01688ff3096cd, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_empty", method_pointer_965a3ee429d35201921dce852a2c0ab8, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_size", method_pointer_c0f46dfc4bef50bca053c16c2bb5862d, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_destructors", method_pointer_0150d75e2b315939aea1de5c6a37b4ba, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_non_zero_constructors", method_pointer_f9442e75c32d5983a7659b560a508ca5, "");
    class_744be89803015d4fa974827041a9835a.def("set_ivar_l_brace_loc", method_pointer_557c7ca4e3f154f6bb75845915815dba, "");
    class_744be89803015d4fa974827041a9835a.def("set_ivar_r_brace_loc", method_pointer_2f6bf4d3f7965b7ea1902f92d74d007d, "");
    class_744be89803015d4fa974827041a9835a.def("set_num_ivar_initializers", method_pointer_682bd79562f95cadb9d640573120d8b3, "");
    class_744be89803015d4fa974827041a9835a.def("set_super_class", method_pointer_e40d0a0c605b52a1a72d9746fce392b5, "");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof_kind");
    class_744be89803015d4fa974827041a9835a.staticmethod("create");
    class_744be89803015d4fa974827041a9835a.staticmethod("create_deserialized");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplementationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplementationDecl >, autowig::HeldType< class ::clang::ObjCImplDecl > >();
    }

}