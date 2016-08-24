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
    class ::clang::ObjCImplementationDecl  * (*method_pointer_631f31842971579bb99f6e62ca4e2d37)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::ObjCInterfaceDecl  *, class ::clang::ObjCInterfaceDecl  *, class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation ) = ::clang::ObjCImplementationDecl::Create;
    class ::clang::ObjCImplementationDecl  * (*method_pointer_081395ef01a752e0831ca9a2d70a505b)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCImplementationDecl::CreateDeserialized;
    bool  (*method_pointer_b920f301b3d85ee2947b95013309381d)(class ::clang::Decl  const *) = ::clang::ObjCImplementationDecl::classof;
    bool  (*method_pointer_25154d25707651a29e285ace0bef5b58)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplementationDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_ff364d8f66695c40a325e580902a7e45)() const = &::clang::ObjCImplementationDecl::getIvarLBraceLoc;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_200ce652a524508bafe25bd1d00af5aa)() const = &::clang::ObjCImplementationDecl::getIvarRBraceLoc;
    class ::llvm::StringRef  (::clang::ObjCImplementationDecl::*method_pointer_5de4fcb33b7153f4b2f6613b325fe08e)() const = &::clang::ObjCImplementationDecl::getName;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_5bab6504f77d580fa915f5c3a912fe0f)() const = &::clang::ObjCImplementationDecl::getNumIvarInitializers;
    class ::llvm::StringRef  (::clang::ObjCImplementationDecl::*method_pointer_cb7deb6f6e945f548bc25a89b189dd9e)() const = &::clang::ObjCImplementationDecl::getObjCRuntimeNameAsString;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplementationDecl::*method_pointer_2418295978935042bc416ccf762701b8)() = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplementationDecl::*method_pointer_6041fdae9d3954c297ad809029fa8074)() const = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_74dc0dcbf5a552b8ba26e9c348da873f)() const = &::clang::ObjCImplementationDecl::getSuperClassLoc;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_2cbbe02d69d857a7be20af75603980fe)() const = &::clang::ObjCImplementationDecl::hasDestructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_b8cc6383bf4a5ed7a5c8b6844f222254)() const = &::clang::ObjCImplementationDecl::hasNonZeroConstructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_ca3595139a1159ca8441d8ac3f8f3e28)() const = &::clang::ObjCImplementationDecl::ivar_empty;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_c3e6238fa16d55ed82ffbd9b1802410e)() const = &::clang::ObjCImplementationDecl::ivar_size;
    void  (::clang::ObjCImplementationDecl::*method_pointer_737e944c38965fa1bed875901d00824c)(bool ) = &::clang::ObjCImplementationDecl::setHasDestructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_7e32ce3cb0c35c139b5fe60eb28fe8d0)(bool ) = &::clang::ObjCImplementationDecl::setHasNonZeroConstructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_341788b514de5600bd12f0e63d562271)(class ::clang::SourceLocation ) = &::clang::ObjCImplementationDecl::setIvarLBraceLoc;
    void  (::clang::ObjCImplementationDecl::*method_pointer_870cb59def2b5ff881a8eadd55ead059)(class ::clang::SourceLocation ) = &::clang::ObjCImplementationDecl::setIvarRBraceLoc;
    void  (::clang::ObjCImplementationDecl::*method_pointer_f38b91ec10005b51926fd668a9147d7d)(unsigned int ) = &::clang::ObjCImplementationDecl::setNumIvarInitializers;
    void  (::clang::ObjCImplementationDecl::*method_pointer_c7c0f50f24ea57479a7a706753fb8062)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplementationDecl::setSuperClass;
    boost::python::class_< class ::clang::ObjCImplementationDecl, autowig::HeldType< class ::clang::ObjCImplementationDecl >, boost::python::bases< class ::clang::ObjCImplDecl >, boost::noncopyable > class_744be89803015d4fa974827041a9835a("ObjCImplementationDecl", "", boost::python::no_init);
    class_744be89803015d4fa974827041a9835a.def("create", method_pointer_631f31842971579bb99f6e62ca4e2d37, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("create_deserialized", method_pointer_081395ef01a752e0831ca9a2d70a505b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("classof", method_pointer_b920f301b3d85ee2947b95013309381d, "");
    class_744be89803015d4fa974827041a9835a.def("classof_kind", method_pointer_25154d25707651a29e285ace0bef5b58, "");
    class_744be89803015d4fa974827041a9835a.def("get_ivar_l_brace_loc", method_pointer_ff364d8f66695c40a325e580902a7e45, "");
    class_744be89803015d4fa974827041a9835a.def("get_ivar_r_brace_loc", method_pointer_200ce652a524508bafe25bd1d00af5aa, "");
    class_744be89803015d4fa974827041a9835a.def("get_name", method_pointer_5de4fcb33b7153f4b2f6613b325fe08e, "");
    class_744be89803015d4fa974827041a9835a.def("get_num_ivar_initializers", method_pointer_5bab6504f77d580fa915f5c3a912fe0f, "");
    class_744be89803015d4fa974827041a9835a.def("get_obj_c_runtime_name_as_string", method_pointer_cb7deb6f6e945f548bc25a89b189dd9e, "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_2418295978935042bc416ccf762701b8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_6041fdae9d3954c297ad809029fa8074, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class_loc", method_pointer_74dc0dcbf5a552b8ba26e9c348da873f, "");
    class_744be89803015d4fa974827041a9835a.def("has_destructors", method_pointer_2cbbe02d69d857a7be20af75603980fe, "");
    class_744be89803015d4fa974827041a9835a.def("has_non_zero_constructors", method_pointer_b8cc6383bf4a5ed7a5c8b6844f222254, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_empty", method_pointer_ca3595139a1159ca8441d8ac3f8f3e28, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_size", method_pointer_c3e6238fa16d55ed82ffbd9b1802410e, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_destructors", method_pointer_737e944c38965fa1bed875901d00824c, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_non_zero_constructors", method_pointer_7e32ce3cb0c35c139b5fe60eb28fe8d0, "");
    class_744be89803015d4fa974827041a9835a.def("set_ivar_l_brace_loc", method_pointer_341788b514de5600bd12f0e63d562271, "");
    class_744be89803015d4fa974827041a9835a.def("set_ivar_r_brace_loc", method_pointer_870cb59def2b5ff881a8eadd55ead059, "");
    class_744be89803015d4fa974827041a9835a.def("set_num_ivar_initializers", method_pointer_f38b91ec10005b51926fd668a9147d7d, "");
    class_744be89803015d4fa974827041a9835a.def("set_super_class", method_pointer_c7c0f50f24ea57479a7a706753fb8062, "");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof_kind");
    class_744be89803015d4fa974827041a9835a.staticmethod("create");
    class_744be89803015d4fa974827041a9835a.staticmethod("create_deserialized");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplementationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplementationDecl >, autowig::HeldType< class ::clang::ObjCImplDecl > >();
    }

}