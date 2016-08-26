#include "_clanglite.h"


namespace autowig
{
}


void wrapper_7289d815af725e0c81cacbe193055c17()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCCategoryImplDecl  * (*method_pointer_261960d059b25a34845e940e4c54845d)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCCategoryImplDecl::CreateDeserialized;
    bool  (*method_pointer_cb15e463446f540aba1102888b9fc5f6)(class ::clang::Decl  const *) = ::clang::ObjCCategoryImplDecl::classof;
    bool  (*method_pointer_586516ae9d64548fa8576b608cc993f2)(enum ::clang::Decl::Kind ) = ::clang::ObjCCategoryImplDecl::classofKind;
    class ::clang::ObjCCategoryDecl  * (::clang::ObjCCategoryImplDecl::*method_pointer_e8f3eee30f31527ab3ee83c28ec597df)() const = &::clang::ObjCCategoryImplDecl::getCategoryDecl;
    class ::clang::SourceLocation  (::clang::ObjCCategoryImplDecl::*method_pointer_057e5df941c854d0b609fbc05c8d8f8a)() const = &::clang::ObjCCategoryImplDecl::getCategoryNameLoc;
    class ::llvm::StringRef  (::clang::ObjCCategoryImplDecl::*method_pointer_5bf428577118581ba0140471e2b8d96c)() const = &::clang::ObjCCategoryImplDecl::getName;
    boost::python::class_< class ::clang::ObjCCategoryImplDecl, autowig::HeldType< class ::clang::ObjCCategoryImplDecl >, boost::python::bases< class ::clang::ObjCImplDecl >, boost::noncopyable > class_7289d815af725e0c81cacbe193055c17("ObjCCategoryImplDecl", "", boost::python::no_init);
    class_7289d815af725e0c81cacbe193055c17.def("create_deserialized", method_pointer_261960d059b25a34845e940e4c54845d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7289d815af725e0c81cacbe193055c17.def("classof", method_pointer_cb15e463446f540aba1102888b9fc5f6, "");
    class_7289d815af725e0c81cacbe193055c17.def("classof_kind", method_pointer_586516ae9d64548fa8576b608cc993f2, "");
    class_7289d815af725e0c81cacbe193055c17.def("get_category_decl", method_pointer_e8f3eee30f31527ab3ee83c28ec597df, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7289d815af725e0c81cacbe193055c17.def("get_category_name_loc", method_pointer_057e5df941c854d0b609fbc05c8d8f8a, "");
    class_7289d815af725e0c81cacbe193055c17.def("get_name", method_pointer_5bf428577118581ba0140471e2b8d96c, "");
    class_7289d815af725e0c81cacbe193055c17.staticmethod("classof_kind");
    class_7289d815af725e0c81cacbe193055c17.staticmethod("create_deserialized");
    class_7289d815af725e0c81cacbe193055c17.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCCategoryImplDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCCategoryImplDecl >, autowig::HeldType< class ::clang::ObjCImplDecl > >();
    }

}