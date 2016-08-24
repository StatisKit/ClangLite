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
    class ::clang::ObjCCategoryDecl  * (*method_pointer_b9e38211fb9e560db553e7f8bde3d3ba)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCCategoryDecl::CreateDeserialized;
    bool  (::clang::ObjCCategoryDecl::*method_pointer_8e7a9ff2ffce530b9d44ddbeedc34547)() const = &::clang::ObjCCategoryDecl::IsClassExtension;
    bool  (*method_pointer_801edf7d75a152ed8041997f412c2a31)(class ::clang::Decl  const *) = ::clang::ObjCCategoryDecl::classof;
    bool  (*method_pointer_45abb544d02a54b79fa2c50d40d8b4ec)(enum ::clang::Decl::Kind ) = ::clang::ObjCCategoryDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCCategoryDecl::*method_pointer_1b4bdf5c106259f78bacd040a88542ae)() const = &::clang::ObjCCategoryDecl::getCategoryNameLoc;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCCategoryDecl::*method_pointer_0eca78ee6d33555092a8fdd114f761f4)() const = &::clang::ObjCCategoryDecl::getClassInterface;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCCategoryDecl::*method_pointer_989925fe8daf5d94b44762461cb2fa49)() = &::clang::ObjCCategoryDecl::getClassInterface;
    class ::clang::ObjCCategoryImplDecl  * (::clang::ObjCCategoryDecl::*method_pointer_201958728d7550bd8bd4df0fee672508)() const = &::clang::ObjCCategoryDecl::getImplementation;
    class ::clang::SourceLocation  (::clang::ObjCCategoryDecl::*method_pointer_48d5be0a91ea556794d9d9759940fffb)() const = &::clang::ObjCCategoryDecl::getIvarLBraceLoc;
    class ::clang::SourceLocation  (::clang::ObjCCategoryDecl::*method_pointer_d5b925af815a5ec3bcda0ab86cd3ebda)() const = &::clang::ObjCCategoryDecl::getIvarRBraceLoc;
    class ::clang::ObjCCategoryDecl  * (::clang::ObjCCategoryDecl::*method_pointer_9708615e1da056e3a1b17f3bb7241908)() const = &::clang::ObjCCategoryDecl::getNextClassCategory;
    class ::clang::ObjCCategoryDecl  * (::clang::ObjCCategoryDecl::*method_pointer_59977e4b533f5c5e9f82c20f7ea5bd46)() const = &::clang::ObjCCategoryDecl::getNextClassCategoryRaw;
    bool  (::clang::ObjCCategoryDecl::*method_pointer_15f95b73a69f5a73880d4f87ca49a446)() const = &::clang::ObjCCategoryDecl::ivar_empty;
    unsigned int  (::clang::ObjCCategoryDecl::*method_pointer_21fd64c87ca5597d8c889495cec5f84a)() const = &::clang::ObjCCategoryDecl::ivar_size;
    unsigned int  (::clang::ObjCCategoryDecl::*method_pointer_9920f50b9009555ca46cc8368fb75626)() const = &::clang::ObjCCategoryDecl::protocol_size;
    void  (::clang::ObjCCategoryDecl::*method_pointer_d700937599225ce2bdd83442ef6c9e1e)(class ::clang::SourceLocation ) = &::clang::ObjCCategoryDecl::setCategoryNameLoc;
    void  (::clang::ObjCCategoryDecl::*method_pointer_226c6d315dcb5ea09c8f07a80b9c3b08)(class ::clang::ObjCCategoryImplDecl  *) = &::clang::ObjCCategoryDecl::setImplementation;
    void  (::clang::ObjCCategoryDecl::*method_pointer_097033f102885e01bee8ecd89d09ac46)(class ::clang::SourceLocation ) = &::clang::ObjCCategoryDecl::setIvarLBraceLoc;
    void  (::clang::ObjCCategoryDecl::*method_pointer_642b2469427c527ca3f6402c9c72b117)(class ::clang::SourceLocation ) = &::clang::ObjCCategoryDecl::setIvarRBraceLoc;
    boost::python::class_< class ::clang::ObjCCategoryDecl, autowig::HeldType< class ::clang::ObjCCategoryDecl >, boost::python::bases< class ::clang::ObjCContainerDecl >, boost::noncopyable > class_38c4ce0111b15a6cb3ab07a527312f9a("ObjCCategoryDecl", "", boost::python::no_init);
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("create_deserialized", method_pointer_b9e38211fb9e560db553e7f8bde3d3ba, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("is_class_extension", method_pointer_8e7a9ff2ffce530b9d44ddbeedc34547, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("classof", method_pointer_801edf7d75a152ed8041997f412c2a31, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("classof_kind", method_pointer_45abb544d02a54b79fa2c50d40d8b4ec, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_category_name_loc", method_pointer_1b4bdf5c106259f78bacd040a88542ae, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_class_interface", method_pointer_0eca78ee6d33555092a8fdd114f761f4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_class_interface", method_pointer_989925fe8daf5d94b44762461cb2fa49, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_implementation", method_pointer_201958728d7550bd8bd4df0fee672508, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_ivar_l_brace_loc", method_pointer_48d5be0a91ea556794d9d9759940fffb, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_ivar_r_brace_loc", method_pointer_d5b925af815a5ec3bcda0ab86cd3ebda, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_next_class_category", method_pointer_9708615e1da056e3a1b17f3bb7241908, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_next_class_category_raw", method_pointer_59977e4b533f5c5e9f82c20f7ea5bd46, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("ivar_empty", method_pointer_15f95b73a69f5a73880d4f87ca49a446, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("ivar_size", method_pointer_21fd64c87ca5597d8c889495cec5f84a, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("protocol_size", method_pointer_9920f50b9009555ca46cc8368fb75626, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("set_category_name_loc", method_pointer_d700937599225ce2bdd83442ef6c9e1e, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("set_implementation", method_pointer_226c6d315dcb5ea09c8f07a80b9c3b08, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("set_ivar_l_brace_loc", method_pointer_097033f102885e01bee8ecd89d09ac46, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("set_ivar_r_brace_loc", method_pointer_642b2469427c527ca3f6402c9c72b117, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.staticmethod("classof_kind");
    class_38c4ce0111b15a6cb3ab07a527312f9a.staticmethod("create_deserialized");
    class_38c4ce0111b15a6cb3ab07a527312f9a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCCategoryDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCCategoryDecl >, autowig::HeldType< class ::clang::ObjCContainerDecl > >();
    }

}