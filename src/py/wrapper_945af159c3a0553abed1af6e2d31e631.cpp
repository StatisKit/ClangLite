#include "_clanglite.h"


namespace autowig
{
}


void wrapper_945af159c3a0553abed1af6e2d31e631()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_735a7c7793b6528eb455355f9e210e98)(class ::clang::Decl  const *) = ::clang::TypeDecl::classof;
    bool  (*method_pointer_9f39a567c63d55a49715fe9cd6287bb3)(enum ::clang::Decl::Kind ) = ::clang::TypeDecl::classofKind;
    class ::clang::SourceLocation  (::clang::TypeDecl::*method_pointer_c5f0c47f6f095ee3add04c24438f0cfd)() const = &::clang::TypeDecl::getLocStart;
    class ::clang::Type  const * (::clang::TypeDecl::*method_pointer_0bb3a3a097195162ba890fb3c9b38acb)() const = &::clang::TypeDecl::getTypeForDecl;
    void  (::clang::TypeDecl::*method_pointer_49d4f2a208e75878a4d4880e347ed39c)(class ::clang::SourceLocation ) = &::clang::TypeDecl::setLocStart;
    void  (::clang::TypeDecl::*method_pointer_c95dcb98791d5e2f975a3f9059585e6e)(class ::clang::Type  const *) = &::clang::TypeDecl::setTypeForDecl;
    boost::python::class_< class ::clang::TypeDecl, autowig::HeldType< class ::clang::TypeDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_945af159c3a0553abed1af6e2d31e631("TypeDecl", "", boost::python::no_init);
    class_945af159c3a0553abed1af6e2d31e631.def("classof", method_pointer_735a7c7793b6528eb455355f9e210e98, "");
    class_945af159c3a0553abed1af6e2d31e631.def("classof_kind", method_pointer_9f39a567c63d55a49715fe9cd6287bb3, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_loc_start", method_pointer_c5f0c47f6f095ee3add04c24438f0cfd, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_type_for_decl", method_pointer_0bb3a3a097195162ba890fb3c9b38acb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_loc_start", method_pointer_49d4f2a208e75878a4d4880e347ed39c, "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_type_for_decl", method_pointer_c95dcb98791d5e2f975a3f9059585e6e, "");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof_kind");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypeDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypeDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}