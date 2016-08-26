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
    bool  (*method_pointer_a28074b95e1b59869eac2a2728d6f7f8)(class ::clang::Decl  const *) = ::clang::TypeDecl::classof;
    bool  (*method_pointer_9e67b86e58025b93a85a98bd8d917668)(enum ::clang::Decl::Kind ) = ::clang::TypeDecl::classofKind;
    class ::clang::SourceLocation  (::clang::TypeDecl::*method_pointer_0b20a37549b556ee86a44fbc24cf758c)() const = &::clang::TypeDecl::getLocStart;
    class ::clang::Type  const * (::clang::TypeDecl::*method_pointer_348f3dfceb715806a7a54d1b293e6799)() const = &::clang::TypeDecl::getTypeForDecl;
    void  (::clang::TypeDecl::*method_pointer_24820a9a22fa559f994925ab76311364)(class ::clang::SourceLocation ) = &::clang::TypeDecl::setLocStart;
    void  (::clang::TypeDecl::*method_pointer_e7928b8a15ca55a3a3c19a48670fe056)(class ::clang::Type  const *) = &::clang::TypeDecl::setTypeForDecl;
    boost::python::class_< class ::clang::TypeDecl, autowig::HeldType< class ::clang::TypeDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_945af159c3a0553abed1af6e2d31e631("TypeDecl", "", boost::python::no_init);
    class_945af159c3a0553abed1af6e2d31e631.def("classof", method_pointer_a28074b95e1b59869eac2a2728d6f7f8, "");
    class_945af159c3a0553abed1af6e2d31e631.def("classof_kind", method_pointer_9e67b86e58025b93a85a98bd8d917668, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_loc_start", method_pointer_0b20a37549b556ee86a44fbc24cf758c, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_type_for_decl", method_pointer_348f3dfceb715806a7a54d1b293e6799, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_loc_start", method_pointer_24820a9a22fa559f994925ab76311364, "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_type_for_decl", method_pointer_e7928b8a15ca55a3a3c19a48670fe056, "");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof_kind");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypeDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypeDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}