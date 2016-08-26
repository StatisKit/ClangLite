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
    class ::clang::ObjCCategoryImplDecl  * (*method_pointer_eef040eae5db555d8c76fac7b27c414a)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCCategoryImplDecl::CreateDeserialized;
    bool  (*method_pointer_ecf91ca98de755659801c9a759ed6bd8)(class ::clang::Decl  const *) = ::clang::ObjCCategoryImplDecl::classof;
    bool  (*method_pointer_4e799f220f845ff98d358f05639ea1d5)(enum ::clang::Decl::Kind ) = ::clang::ObjCCategoryImplDecl::classofKind;
    class ::clang::ObjCCategoryDecl  * (::clang::ObjCCategoryImplDecl::*method_pointer_a1324cbc11c25c22ac58e50f44aa1c8a)() const = &::clang::ObjCCategoryImplDecl::getCategoryDecl;
    boost::python::class_< class ::clang::ObjCCategoryImplDecl, autowig::HeldType< class ::clang::ObjCCategoryImplDecl >, boost::python::bases< class ::clang::ObjCImplDecl >, boost::noncopyable > class_7289d815af725e0c81cacbe193055c17("ObjCCategoryImplDecl", "", boost::python::no_init);
    class_7289d815af725e0c81cacbe193055c17.def("create_deserialized", method_pointer_eef040eae5db555d8c76fac7b27c414a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7289d815af725e0c81cacbe193055c17.def("classof", method_pointer_ecf91ca98de755659801c9a759ed6bd8, "");
    class_7289d815af725e0c81cacbe193055c17.def("classof_kind", method_pointer_4e799f220f845ff98d358f05639ea1d5, "");
    class_7289d815af725e0c81cacbe193055c17.def("get_category_decl", method_pointer_a1324cbc11c25c22ac58e50f44aa1c8a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7289d815af725e0c81cacbe193055c17.staticmethod("classof_kind");
    class_7289d815af725e0c81cacbe193055c17.staticmethod("create_deserialized");
    class_7289d815af725e0c81cacbe193055c17.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCCategoryImplDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCCategoryImplDecl >, autowig::HeldType< class ::clang::ObjCImplDecl > >();
    }

}