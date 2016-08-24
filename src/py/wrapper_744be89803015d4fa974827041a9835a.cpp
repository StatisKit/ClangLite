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
    class ::clang::ObjCImplementationDecl  * (*method_pointer_7395d9f7efa157d79762bf512ad8229e)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::ObjCInterfaceDecl  *, class ::clang::ObjCInterfaceDecl  *, class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation ) = ::clang::ObjCImplementationDecl::Create;
    class ::clang::ObjCImplementationDecl  * (*method_pointer_01431b8aff2e5fa49b93345358661aa5)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCImplementationDecl::CreateDeserialized;
    bool  (*method_pointer_632e49370cd45cbd9e99d65fb097b7cb)(class ::clang::Decl  const *) = ::clang::ObjCImplementationDecl::classof;
    bool  (*method_pointer_edb4b803f1ab54b8897c16feef886cfc)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplementationDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_d2c5376149895f9db23dfb01b619faf3)() const = &::clang::ObjCImplementationDecl::getIvarLBraceLoc;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_88f7828896955337af42547214264567)() const = &::clang::ObjCImplementationDecl::getIvarRBraceLoc;
    class ::llvm::StringRef  (::clang::ObjCImplementationDecl::*method_pointer_42abbc82beff5f8a81f62f81bddd18c3)() const = &::clang::ObjCImplementationDecl::getName;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_efdd550f9eb3597eb20e046457102775)() const = &::clang::ObjCImplementationDecl::getNumIvarInitializers;
    class ::llvm::StringRef  (::clang::ObjCImplementationDecl::*method_pointer_af5bcd8534af5f6aa71cd17a7933051a)() const = &::clang::ObjCImplementationDecl::getObjCRuntimeNameAsString;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplementationDecl::*method_pointer_086d5d94e686556cb8e88f4cc497c504)() = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplementationDecl::*method_pointer_5d24eedd0556577eb901e8219f6c6140)() const = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_d0e0b9678e415cc48566bb8a4d4b2627)() const = &::clang::ObjCImplementationDecl::getSuperClassLoc;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_8e7afd7ff8d0584881c62a3afed8e00a)() const = &::clang::ObjCImplementationDecl::hasDestructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_89689d8215035dbc87b7b4141c405518)() const = &::clang::ObjCImplementationDecl::hasNonZeroConstructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_e6290283e5245a99a56ad595c91385b7)() const = &::clang::ObjCImplementationDecl::ivar_empty;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_02bff7e5ff825072a8760df7f6293619)() const = &::clang::ObjCImplementationDecl::ivar_size;
    void  (::clang::ObjCImplementationDecl::*method_pointer_28af2bff946c52dea821c5654e870ac4)(bool ) = &::clang::ObjCImplementationDecl::setHasDestructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_dd9fb59cff925ff0bbd9ada2b2b89c94)(bool ) = &::clang::ObjCImplementationDecl::setHasNonZeroConstructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_8cec7cacefe25d71aa85b93c5951c936)(class ::clang::SourceLocation ) = &::clang::ObjCImplementationDecl::setIvarLBraceLoc;
    void  (::clang::ObjCImplementationDecl::*method_pointer_7db45f5888dc5ed3a4c9e6d070bc5248)(class ::clang::SourceLocation ) = &::clang::ObjCImplementationDecl::setIvarRBraceLoc;
    void  (::clang::ObjCImplementationDecl::*method_pointer_ba6907fa511d54edb2991d154115aeb9)(unsigned int ) = &::clang::ObjCImplementationDecl::setNumIvarInitializers;
    void  (::clang::ObjCImplementationDecl::*method_pointer_e8d8597e4af156fead9f3a620ec1e711)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplementationDecl::setSuperClass;
    boost::python::class_< class ::clang::ObjCImplementationDecl, autowig::HeldType< class ::clang::ObjCImplementationDecl >, boost::python::bases< class ::clang::ObjCImplDecl >, boost::noncopyable > class_744be89803015d4fa974827041a9835a("ObjCImplementationDecl", "", boost::python::no_init);
    class_744be89803015d4fa974827041a9835a.def("create", method_pointer_7395d9f7efa157d79762bf512ad8229e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("create_deserialized", method_pointer_01431b8aff2e5fa49b93345358661aa5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("classof", method_pointer_632e49370cd45cbd9e99d65fb097b7cb, "");
    class_744be89803015d4fa974827041a9835a.def("classof_kind", method_pointer_edb4b803f1ab54b8897c16feef886cfc, "");
    class_744be89803015d4fa974827041a9835a.def("get_ivar_l_brace_loc", method_pointer_d2c5376149895f9db23dfb01b619faf3, "");
    class_744be89803015d4fa974827041a9835a.def("get_ivar_r_brace_loc", method_pointer_88f7828896955337af42547214264567, "");
    class_744be89803015d4fa974827041a9835a.def("get_name", method_pointer_42abbc82beff5f8a81f62f81bddd18c3, "");
    class_744be89803015d4fa974827041a9835a.def("get_num_ivar_initializers", method_pointer_efdd550f9eb3597eb20e046457102775, "");
    class_744be89803015d4fa974827041a9835a.def("get_obj_c_runtime_name_as_string", method_pointer_af5bcd8534af5f6aa71cd17a7933051a, "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_086d5d94e686556cb8e88f4cc497c504, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_5d24eedd0556577eb901e8219f6c6140, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class_loc", method_pointer_d0e0b9678e415cc48566bb8a4d4b2627, "");
    class_744be89803015d4fa974827041a9835a.def("has_destructors", method_pointer_8e7afd7ff8d0584881c62a3afed8e00a, "");
    class_744be89803015d4fa974827041a9835a.def("has_non_zero_constructors", method_pointer_89689d8215035dbc87b7b4141c405518, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_empty", method_pointer_e6290283e5245a99a56ad595c91385b7, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_size", method_pointer_02bff7e5ff825072a8760df7f6293619, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_destructors", method_pointer_28af2bff946c52dea821c5654e870ac4, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_non_zero_constructors", method_pointer_dd9fb59cff925ff0bbd9ada2b2b89c94, "");
    class_744be89803015d4fa974827041a9835a.def("set_ivar_l_brace_loc", method_pointer_8cec7cacefe25d71aa85b93c5951c936, "");
    class_744be89803015d4fa974827041a9835a.def("set_ivar_r_brace_loc", method_pointer_7db45f5888dc5ed3a4c9e6d070bc5248, "");
    class_744be89803015d4fa974827041a9835a.def("set_num_ivar_initializers", method_pointer_ba6907fa511d54edb2991d154115aeb9, "");
    class_744be89803015d4fa974827041a9835a.def("set_super_class", method_pointer_e8d8597e4af156fead9f3a620ec1e711, "");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof_kind");
    class_744be89803015d4fa974827041a9835a.staticmethod("create");
    class_744be89803015d4fa974827041a9835a.staticmethod("create_deserialized");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplementationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplementationDecl >, autowig::HeldType< class ::clang::ObjCImplDecl > >();
    }

}