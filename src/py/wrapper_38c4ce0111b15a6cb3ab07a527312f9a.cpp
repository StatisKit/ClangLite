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
    class ::clang::ObjCCategoryDecl  * (*method_pointer_26e020da6c905a35b761f43535927cff)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCCategoryDecl::CreateDeserialized;
    bool  (::clang::ObjCCategoryDecl::*method_pointer_fc47edf7a486518d9b92cc7bc167a41f)() const = &::clang::ObjCCategoryDecl::IsClassExtension;
    bool  (*method_pointer_891acb8cced2513db24589a7ab0ff535)(class ::clang::Decl  const *) = ::clang::ObjCCategoryDecl::classof;
    bool  (*method_pointer_6fa66229e88358b5a222cce0394e261c)(enum ::clang::Decl::Kind ) = ::clang::ObjCCategoryDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCCategoryDecl::*method_pointer_23d0c22d9a305f9d935f941c54e37f44)() const = &::clang::ObjCCategoryDecl::getCategoryNameLoc;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCCategoryDecl::*method_pointer_b410148f6e4c542f978a7c2f0694b144)() = &::clang::ObjCCategoryDecl::getClassInterface;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCCategoryDecl::*method_pointer_a039f07cabd65f318ecc5e879fcf89e7)() const = &::clang::ObjCCategoryDecl::getClassInterface;
    class ::clang::ObjCCategoryImplDecl  * (::clang::ObjCCategoryDecl::*method_pointer_e1c6df53a99b57d6b9bf708e12c88d6d)() const = &::clang::ObjCCategoryDecl::getImplementation;
    class ::clang::SourceLocation  (::clang::ObjCCategoryDecl::*method_pointer_61090241f3865b928f1bc3c0987b69ff)() const = &::clang::ObjCCategoryDecl::getIvarLBraceLoc;
    class ::clang::SourceLocation  (::clang::ObjCCategoryDecl::*method_pointer_2f1aaadd64725e4fa3997f01678d3d71)() const = &::clang::ObjCCategoryDecl::getIvarRBraceLoc;
    class ::clang::ObjCCategoryDecl  * (::clang::ObjCCategoryDecl::*method_pointer_f63b277b5a0450b89c99bc004c9a8581)() const = &::clang::ObjCCategoryDecl::getNextClassCategory;
    class ::clang::ObjCCategoryDecl  * (::clang::ObjCCategoryDecl::*method_pointer_92afe72753e951db8977f0f99e660238)() const = &::clang::ObjCCategoryDecl::getNextClassCategoryRaw;
    bool  (::clang::ObjCCategoryDecl::*method_pointer_57a9fe728ab057aabaf756f803e40237)() const = &::clang::ObjCCategoryDecl::ivar_empty;
    unsigned int  (::clang::ObjCCategoryDecl::*method_pointer_df2842c525c55d9a8d99f3e457a09990)() const = &::clang::ObjCCategoryDecl::ivar_size;
    unsigned int  (::clang::ObjCCategoryDecl::*method_pointer_249b9691f9245be38d509430e93e9522)() const = &::clang::ObjCCategoryDecl::protocol_size;
    void  (::clang::ObjCCategoryDecl::*method_pointer_34db231e58fe5e7fae509c1d188951e4)(class ::clang::SourceLocation ) = &::clang::ObjCCategoryDecl::setCategoryNameLoc;
    void  (::clang::ObjCCategoryDecl::*method_pointer_7a461a2513405a0aa801aca92184e650)(class ::clang::ObjCCategoryImplDecl  *) = &::clang::ObjCCategoryDecl::setImplementation;
    void  (::clang::ObjCCategoryDecl::*method_pointer_b895820af4835eb6a022c1a32da221bd)(class ::clang::SourceLocation ) = &::clang::ObjCCategoryDecl::setIvarLBraceLoc;
    void  (::clang::ObjCCategoryDecl::*method_pointer_340a8d2f86d35c43b06732353a2f6d10)(class ::clang::SourceLocation ) = &::clang::ObjCCategoryDecl::setIvarRBraceLoc;
    boost::python::class_< class ::clang::ObjCCategoryDecl, autowig::HeldType< class ::clang::ObjCCategoryDecl >, boost::python::bases< class ::clang::ObjCContainerDecl >, boost::noncopyable > class_38c4ce0111b15a6cb3ab07a527312f9a("ObjCCategoryDecl", "", boost::python::no_init);
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("create_deserialized", method_pointer_26e020da6c905a35b761f43535927cff, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("is_class_extension", method_pointer_fc47edf7a486518d9b92cc7bc167a41f, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("classof", method_pointer_891acb8cced2513db24589a7ab0ff535, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("classof_kind", method_pointer_6fa66229e88358b5a222cce0394e261c, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_category_name_loc", method_pointer_23d0c22d9a305f9d935f941c54e37f44, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_class_interface", method_pointer_b410148f6e4c542f978a7c2f0694b144, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_class_interface", method_pointer_a039f07cabd65f318ecc5e879fcf89e7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_implementation", method_pointer_e1c6df53a99b57d6b9bf708e12c88d6d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_ivar_l_brace_loc", method_pointer_61090241f3865b928f1bc3c0987b69ff, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_ivar_r_brace_loc", method_pointer_2f1aaadd64725e4fa3997f01678d3d71, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_next_class_category", method_pointer_f63b277b5a0450b89c99bc004c9a8581, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_next_class_category_raw", method_pointer_92afe72753e951db8977f0f99e660238, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("ivar_empty", method_pointer_57a9fe728ab057aabaf756f803e40237, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("ivar_size", method_pointer_df2842c525c55d9a8d99f3e457a09990, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("protocol_size", method_pointer_249b9691f9245be38d509430e93e9522, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("set_category_name_loc", method_pointer_34db231e58fe5e7fae509c1d188951e4, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("set_implementation", method_pointer_7a461a2513405a0aa801aca92184e650, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("set_ivar_l_brace_loc", method_pointer_b895820af4835eb6a022c1a32da221bd, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("set_ivar_r_brace_loc", method_pointer_340a8d2f86d35c43b06732353a2f6d10, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.staticmethod("classof_kind");
    class_38c4ce0111b15a6cb3ab07a527312f9a.staticmethod("create_deserialized");
    class_38c4ce0111b15a6cb3ab07a527312f9a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCCategoryDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCCategoryDecl >, autowig::HeldType< class ::clang::ObjCContainerDecl > >();
    }

}