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
    class ::clang::ObjCImplementationDecl  * (*method_pointer_30e43f390f1151a7ad50ab0a7ac8263f)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::ObjCInterfaceDecl  *, class ::clang::ObjCInterfaceDecl  *, class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation ) = ::clang::ObjCImplementationDecl::Create;
    class ::clang::ObjCImplementationDecl  * (*method_pointer_6c5bdaf8d9a855c4aa4f11474c7837a9)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCImplementationDecl::CreateDeserialized;
    bool  (*method_pointer_92ad3e0c02d0512fbe74656622db332f)(class ::clang::Decl  const *) = ::clang::ObjCImplementationDecl::classof;
    bool  (*method_pointer_e98e1e9a574851008daa5a3eb3304773)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplementationDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_977af45dfb705da185de07b8c31eb58d)() const = &::clang::ObjCImplementationDecl::getIvarLBraceLoc;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_b9fdcfeaf93558c8b9319ef876348d4e)() const = &::clang::ObjCImplementationDecl::getIvarRBraceLoc;
    class ::llvm::StringRef  (::clang::ObjCImplementationDecl::*method_pointer_5ca7543df3965f2ab21e9180fc7bac2b)() const = &::clang::ObjCImplementationDecl::getName;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_67428b61b081527994198012c0947045)() const = &::clang::ObjCImplementationDecl::getNumIvarInitializers;
    class ::llvm::StringRef  (::clang::ObjCImplementationDecl::*method_pointer_7cf88f926bc0594db4fa08fb235d3483)() const = &::clang::ObjCImplementationDecl::getObjCRuntimeNameAsString;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplementationDecl::*method_pointer_0967a93ee15c576c9ca188f4cde376c9)() = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplementationDecl::*method_pointer_6c81a65bda06508686a6e49f297f5a1f)() const = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_8ba7967e7905519a848fa8aeb2cc986d)() const = &::clang::ObjCImplementationDecl::getSuperClassLoc;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_8a64beef1faf5c138df798701b4f8cf7)() const = &::clang::ObjCImplementationDecl::hasDestructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_5a3c9f0cac7652418894360f152f9042)() const = &::clang::ObjCImplementationDecl::hasNonZeroConstructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_a2d27d16f07458139861c6698a8ab54e)() const = &::clang::ObjCImplementationDecl::ivar_empty;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_d1fedda244c351f4b09037c62e0970d7)() const = &::clang::ObjCImplementationDecl::ivar_size;
    void  (::clang::ObjCImplementationDecl::*method_pointer_c3729cf1b609592fb08d886a48bd6b26)(bool ) = &::clang::ObjCImplementationDecl::setHasDestructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_164373df5b3c5267acc837684110aa42)(bool ) = &::clang::ObjCImplementationDecl::setHasNonZeroConstructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_cf806722a4145288b5182cf6c5534c8c)(class ::clang::SourceLocation ) = &::clang::ObjCImplementationDecl::setIvarLBraceLoc;
    void  (::clang::ObjCImplementationDecl::*method_pointer_bc95580c782957d58997f3460dac54f0)(class ::clang::SourceLocation ) = &::clang::ObjCImplementationDecl::setIvarRBraceLoc;
    void  (::clang::ObjCImplementationDecl::*method_pointer_07e3f0e6266e503bb7a20a4158e9af32)(unsigned int ) = &::clang::ObjCImplementationDecl::setNumIvarInitializers;
    void  (::clang::ObjCImplementationDecl::*method_pointer_8650465541d95488b0e44d7a1ee93cca)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplementationDecl::setSuperClass;
    boost::python::class_< class ::clang::ObjCImplementationDecl, autowig::HeldType< class ::clang::ObjCImplementationDecl >, boost::python::bases< class ::clang::ObjCImplDecl >, boost::noncopyable > class_744be89803015d4fa974827041a9835a("ObjCImplementationDecl", "", boost::python::no_init);
    class_744be89803015d4fa974827041a9835a.def("create", method_pointer_30e43f390f1151a7ad50ab0a7ac8263f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("create_deserialized", method_pointer_6c5bdaf8d9a855c4aa4f11474c7837a9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("classof", method_pointer_92ad3e0c02d0512fbe74656622db332f, "");
    class_744be89803015d4fa974827041a9835a.def("classof_kind", method_pointer_e98e1e9a574851008daa5a3eb3304773, "");
    class_744be89803015d4fa974827041a9835a.def("get_ivar_l_brace_loc", method_pointer_977af45dfb705da185de07b8c31eb58d, "");
    class_744be89803015d4fa974827041a9835a.def("get_ivar_r_brace_loc", method_pointer_b9fdcfeaf93558c8b9319ef876348d4e, "");
    class_744be89803015d4fa974827041a9835a.def("get_name", method_pointer_5ca7543df3965f2ab21e9180fc7bac2b, "");
    class_744be89803015d4fa974827041a9835a.def("get_num_ivar_initializers", method_pointer_67428b61b081527994198012c0947045, "");
    class_744be89803015d4fa974827041a9835a.def("get_obj_c_runtime_name_as_string", method_pointer_7cf88f926bc0594db4fa08fb235d3483, "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_0967a93ee15c576c9ca188f4cde376c9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_6c81a65bda06508686a6e49f297f5a1f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class_loc", method_pointer_8ba7967e7905519a848fa8aeb2cc986d, "");
    class_744be89803015d4fa974827041a9835a.def("has_destructors", method_pointer_8a64beef1faf5c138df798701b4f8cf7, "");
    class_744be89803015d4fa974827041a9835a.def("has_non_zero_constructors", method_pointer_5a3c9f0cac7652418894360f152f9042, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_empty", method_pointer_a2d27d16f07458139861c6698a8ab54e, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_size", method_pointer_d1fedda244c351f4b09037c62e0970d7, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_destructors", method_pointer_c3729cf1b609592fb08d886a48bd6b26, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_non_zero_constructors", method_pointer_164373df5b3c5267acc837684110aa42, "");
    class_744be89803015d4fa974827041a9835a.def("set_ivar_l_brace_loc", method_pointer_cf806722a4145288b5182cf6c5534c8c, "");
    class_744be89803015d4fa974827041a9835a.def("set_ivar_r_brace_loc", method_pointer_bc95580c782957d58997f3460dac54f0, "");
    class_744be89803015d4fa974827041a9835a.def("set_num_ivar_initializers", method_pointer_07e3f0e6266e503bb7a20a4158e9af32, "");
    class_744be89803015d4fa974827041a9835a.def("set_super_class", method_pointer_8650465541d95488b0e44d7a1ee93cca, "");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof_kind");
    class_744be89803015d4fa974827041a9835a.staticmethod("create");
    class_744be89803015d4fa974827041a9835a.staticmethod("create_deserialized");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplementationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplementationDecl >, autowig::HeldType< class ::clang::ObjCImplDecl > >();
    }

}