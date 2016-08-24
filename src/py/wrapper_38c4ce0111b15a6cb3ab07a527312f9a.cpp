#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_38c4ce0111b15a6cb3ab07a527312f9a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCCategoryDecl  * (*method_pointer_f0d3a84d082a577bb7f505c433085894)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCCategoryDecl::CreateDeserialized;
    bool  (::clang::ObjCCategoryDecl::*method_pointer_cbebeb8b70515e2eaf15825487362493)() const = &::clang::ObjCCategoryDecl::IsClassExtension;
    bool  (*method_pointer_3aaab5b9438557ca84ceffa72309d96d)(class ::clang::Decl  const *) = ::clang::ObjCCategoryDecl::classof;
    bool  (*method_pointer_71d09e9d39b75600a9d78c9b29c7c768)(enum ::clang::Decl::Kind ) = ::clang::ObjCCategoryDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCCategoryDecl::*method_pointer_c6ff17209bcc5832ab9ba21487a6ed31)() const = &::clang::ObjCCategoryDecl::getCategoryNameLoc;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCCategoryDecl::*method_pointer_bd9c6d9b77615217b90f7ccad829fd3d)() const = &::clang::ObjCCategoryDecl::getClassInterface;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCCategoryDecl::*method_pointer_c56bef89bff55262aad04ec28d96e7d9)() = &::clang::ObjCCategoryDecl::getClassInterface;
    class ::clang::ObjCCategoryImplDecl  * (::clang::ObjCCategoryDecl::*method_pointer_f2afade4310c50fc8d38aadfc78e4a07)() const = &::clang::ObjCCategoryDecl::getImplementation;
    class ::clang::SourceLocation  (::clang::ObjCCategoryDecl::*method_pointer_f8a0233ded745c85b44e0f2029c13572)() const = &::clang::ObjCCategoryDecl::getIvarLBraceLoc;
    class ::clang::SourceLocation  (::clang::ObjCCategoryDecl::*method_pointer_e97cf7786d0a5acf8adeba81867b3302)() const = &::clang::ObjCCategoryDecl::getIvarRBraceLoc;
    class ::clang::ObjCCategoryDecl  * (::clang::ObjCCategoryDecl::*method_pointer_e0fb577720755d96a9e7b8b17c3fe594)() const = &::clang::ObjCCategoryDecl::getNextClassCategory;
    class ::clang::ObjCCategoryDecl  * (::clang::ObjCCategoryDecl::*method_pointer_d8ad2bb2471e5b119cff96413d41c0e6)() const = &::clang::ObjCCategoryDecl::getNextClassCategoryRaw;
    bool  (::clang::ObjCCategoryDecl::*method_pointer_126bbf9c3bf85b0aa908b95937527037)() const = &::clang::ObjCCategoryDecl::ivar_empty;
    unsigned int  (::clang::ObjCCategoryDecl::*method_pointer_91046635f7265626b3c82a34c180c72c)() const = &::clang::ObjCCategoryDecl::ivar_size;
    unsigned int  (::clang::ObjCCategoryDecl::*method_pointer_bfb1b4138015532690e3a460408ac0f4)() const = &::clang::ObjCCategoryDecl::protocol_size;
    void  (::clang::ObjCCategoryDecl::*method_pointer_f45dc77284ef5c68bccb99dc948717a4)(class ::clang::SourceLocation ) = &::clang::ObjCCategoryDecl::setCategoryNameLoc;
    void  (::clang::ObjCCategoryDecl::*method_pointer_d2cee8ac3f275c29afbd85e324c26470)(class ::clang::ObjCCategoryImplDecl  *) = &::clang::ObjCCategoryDecl::setImplementation;
    void  (::clang::ObjCCategoryDecl::*method_pointer_4e32f69d4554559ba26db41a75864a63)(class ::clang::SourceLocation ) = &::clang::ObjCCategoryDecl::setIvarLBraceLoc;
    void  (::clang::ObjCCategoryDecl::*method_pointer_9d89f5047a4f5ecb885c55ca716cc3f2)(class ::clang::SourceLocation ) = &::clang::ObjCCategoryDecl::setIvarRBraceLoc;
    boost::python::class_< class ::clang::ObjCCategoryDecl, autowig::HeldType< class ::clang::ObjCCategoryDecl >, boost::python::bases< class ::clang::ObjCContainerDecl >, boost::noncopyable > class_38c4ce0111b15a6cb3ab07a527312f9a("ObjCCategoryDecl", "", boost::python::no_init);
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("create_deserialized", method_pointer_f0d3a84d082a577bb7f505c433085894, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("is_class_extension", method_pointer_cbebeb8b70515e2eaf15825487362493, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("classof", method_pointer_3aaab5b9438557ca84ceffa72309d96d, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("classof_kind", method_pointer_71d09e9d39b75600a9d78c9b29c7c768, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_category_name_loc", method_pointer_c6ff17209bcc5832ab9ba21487a6ed31, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_class_interface", method_pointer_bd9c6d9b77615217b90f7ccad829fd3d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_class_interface", method_pointer_c56bef89bff55262aad04ec28d96e7d9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_implementation", method_pointer_f2afade4310c50fc8d38aadfc78e4a07, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_ivar_l_brace_loc", method_pointer_f8a0233ded745c85b44e0f2029c13572, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_ivar_r_brace_loc", method_pointer_e97cf7786d0a5acf8adeba81867b3302, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_next_class_category", method_pointer_e0fb577720755d96a9e7b8b17c3fe594, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_next_class_category_raw", method_pointer_d8ad2bb2471e5b119cff96413d41c0e6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("ivar_empty", method_pointer_126bbf9c3bf85b0aa908b95937527037, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("ivar_size", method_pointer_91046635f7265626b3c82a34c180c72c, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("protocol_size", method_pointer_bfb1b4138015532690e3a460408ac0f4, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("set_category_name_loc", method_pointer_f45dc77284ef5c68bccb99dc948717a4, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("set_implementation", method_pointer_d2cee8ac3f275c29afbd85e324c26470, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("set_ivar_l_brace_loc", method_pointer_4e32f69d4554559ba26db41a75864a63, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("set_ivar_r_brace_loc", method_pointer_9d89f5047a4f5ecb885c55ca716cc3f2, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.staticmethod("classof_kind");
    class_38c4ce0111b15a6cb3ab07a527312f9a.staticmethod("create_deserialized");
    class_38c4ce0111b15a6cb3ab07a527312f9a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCCategoryDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCCategoryDecl >, autowig::HeldType< class ::clang::ObjCContainerDecl > >();
    }

}