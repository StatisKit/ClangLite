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
    class ::clang::ObjCCategoryDecl  * (*method_pointer_fd6ae37d241e56d9bbf377ed85361eda)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCCategoryDecl::CreateDeserialized;
    bool  (::clang::ObjCCategoryDecl::*method_pointer_d75a9828e545510c8aabe9f59d35e2c4)() const = &::clang::ObjCCategoryDecl::IsClassExtension;
    bool  (*method_pointer_847792f759da5e3fbe319c496a861276)(class ::clang::Decl  const *) = ::clang::ObjCCategoryDecl::classof;
    bool  (*method_pointer_115b8ad2dc9450d7929d28bf6fd2041b)(enum ::clang::Decl::Kind ) = ::clang::ObjCCategoryDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCCategoryDecl::*method_pointer_7138bbed7ad15ce0b0fe6f2e5cb972c1)() const = &::clang::ObjCCategoryDecl::getCategoryNameLoc;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCCategoryDecl::*method_pointer_0326ce1c2294568086ce7769f1ca1fb1)() = &::clang::ObjCCategoryDecl::getClassInterface;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCCategoryDecl::*method_pointer_254e3ef1b7e0568f8d95b00cc895b1e0)() const = &::clang::ObjCCategoryDecl::getClassInterface;
    class ::clang::ObjCCategoryImplDecl  * (::clang::ObjCCategoryDecl::*method_pointer_89b0f11501b854098eb7050d9e23d818)() const = &::clang::ObjCCategoryDecl::getImplementation;
    class ::clang::SourceLocation  (::clang::ObjCCategoryDecl::*method_pointer_ddcc9565a34153c1b21a01ec6940de8b)() const = &::clang::ObjCCategoryDecl::getIvarLBraceLoc;
    class ::clang::SourceLocation  (::clang::ObjCCategoryDecl::*method_pointer_bc3d8dd61d2f55d08e337bada96a9e25)() const = &::clang::ObjCCategoryDecl::getIvarRBraceLoc;
    class ::clang::ObjCCategoryDecl  * (::clang::ObjCCategoryDecl::*method_pointer_06241eab5ea25815877c9ae6a707be50)() const = &::clang::ObjCCategoryDecl::getNextClassCategory;
    class ::clang::ObjCCategoryDecl  * (::clang::ObjCCategoryDecl::*method_pointer_f3c72b826abe5bd6bac1bd1e61b492ec)() const = &::clang::ObjCCategoryDecl::getNextClassCategoryRaw;
    bool  (::clang::ObjCCategoryDecl::*method_pointer_8a46d057b6b052b7909c8c8e0944c3c8)() const = &::clang::ObjCCategoryDecl::ivar_empty;
    unsigned int  (::clang::ObjCCategoryDecl::*method_pointer_9159a2abac235af1be7968a54df2a32b)() const = &::clang::ObjCCategoryDecl::ivar_size;
    unsigned int  (::clang::ObjCCategoryDecl::*method_pointer_0ff465163dbc537db20da721e015fe5b)() const = &::clang::ObjCCategoryDecl::protocol_size;
    void  (::clang::ObjCCategoryDecl::*method_pointer_475f6dc4cfc756e8968111f7b29c4cfb)(class ::clang::SourceLocation ) = &::clang::ObjCCategoryDecl::setCategoryNameLoc;
    void  (::clang::ObjCCategoryDecl::*method_pointer_92f23e5fb425503bbf434770367477b4)(class ::clang::ObjCCategoryImplDecl  *) = &::clang::ObjCCategoryDecl::setImplementation;
    void  (::clang::ObjCCategoryDecl::*method_pointer_1b151da5144b59a4af2397a2e0b35d37)(class ::clang::SourceLocation ) = &::clang::ObjCCategoryDecl::setIvarLBraceLoc;
    void  (::clang::ObjCCategoryDecl::*method_pointer_f8b063ce11b2550187192fbd23543b75)(class ::clang::SourceLocation ) = &::clang::ObjCCategoryDecl::setIvarRBraceLoc;
    boost::python::class_< class ::clang::ObjCCategoryDecl, autowig::HeldType< class ::clang::ObjCCategoryDecl >, boost::python::bases< class ::clang::ObjCContainerDecl >, boost::noncopyable > class_38c4ce0111b15a6cb3ab07a527312f9a("ObjCCategoryDecl", "", boost::python::no_init);
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("create_deserialized", method_pointer_fd6ae37d241e56d9bbf377ed85361eda, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("is_class_extension", method_pointer_d75a9828e545510c8aabe9f59d35e2c4, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("classof", method_pointer_847792f759da5e3fbe319c496a861276, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("classof_kind", method_pointer_115b8ad2dc9450d7929d28bf6fd2041b, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_category_name_loc", method_pointer_7138bbed7ad15ce0b0fe6f2e5cb972c1, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_class_interface", method_pointer_0326ce1c2294568086ce7769f1ca1fb1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_class_interface", method_pointer_254e3ef1b7e0568f8d95b00cc895b1e0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_implementation", method_pointer_89b0f11501b854098eb7050d9e23d818, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_ivar_l_brace_loc", method_pointer_ddcc9565a34153c1b21a01ec6940de8b, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_ivar_r_brace_loc", method_pointer_bc3d8dd61d2f55d08e337bada96a9e25, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_next_class_category", method_pointer_06241eab5ea25815877c9ae6a707be50, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_next_class_category_raw", method_pointer_f3c72b826abe5bd6bac1bd1e61b492ec, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("ivar_empty", method_pointer_8a46d057b6b052b7909c8c8e0944c3c8, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("ivar_size", method_pointer_9159a2abac235af1be7968a54df2a32b, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("protocol_size", method_pointer_0ff465163dbc537db20da721e015fe5b, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("set_category_name_loc", method_pointer_475f6dc4cfc756e8968111f7b29c4cfb, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("set_implementation", method_pointer_92f23e5fb425503bbf434770367477b4, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("set_ivar_l_brace_loc", method_pointer_1b151da5144b59a4af2397a2e0b35d37, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("set_ivar_r_brace_loc", method_pointer_f8b063ce11b2550187192fbd23543b75, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.staticmethod("classof_kind");
    class_38c4ce0111b15a6cb3ab07a527312f9a.staticmethod("create_deserialized");
    class_38c4ce0111b15a6cb3ab07a527312f9a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCCategoryDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCCategoryDecl >, autowig::HeldType< class ::clang::ObjCContainerDecl > >();
    }

}