#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_945af159c3a0553abed1af6e2d31e631()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_710817759faf596191b76255db245e64)(class ::clang::Decl  const *) = ::clang::TypeDecl::classof;
    bool  (*method_pointer_5dd067dc6d7f5764a3ab6888fb0294ad)(enum ::clang::Decl::Kind ) = ::clang::TypeDecl::classofKind;
    class ::clang::SourceLocation  (::clang::TypeDecl::*method_pointer_4345a718b79651098a73523c3e36af9a)() const = &::clang::TypeDecl::getLocStart;
    class ::clang::Type  const * (::clang::TypeDecl::*method_pointer_61aaa27d999f51c695feea06f644b573)() const = &::clang::TypeDecl::getTypeForDecl;
    void  (::clang::TypeDecl::*method_pointer_6075bad8180e575c965e29d9c3f915c6)(class ::clang::SourceLocation ) = &::clang::TypeDecl::setLocStart;
    void  (::clang::TypeDecl::*method_pointer_080933c54bf150f098eafe555ee00edb)(class ::clang::Type  const *) = &::clang::TypeDecl::setTypeForDecl;
    boost::python::class_< class ::clang::TypeDecl, autowig::HeldType< class ::clang::TypeDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_945af159c3a0553abed1af6e2d31e631("TypeDecl", "", boost::python::no_init);
    class_945af159c3a0553abed1af6e2d31e631.def("classof", method_pointer_710817759faf596191b76255db245e64, "");
    class_945af159c3a0553abed1af6e2d31e631.def("classof_kind", method_pointer_5dd067dc6d7f5764a3ab6888fb0294ad, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_loc_start", method_pointer_4345a718b79651098a73523c3e36af9a, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_type_for_decl", method_pointer_61aaa27d999f51c695feea06f644b573, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_loc_start", method_pointer_6075bad8180e575c965e29d9c3f915c6, "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_type_for_decl", method_pointer_080933c54bf150f098eafe555ee00edb, "");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof_kind");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypeDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypeDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}