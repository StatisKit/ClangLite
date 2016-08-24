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
    bool  (*method_pointer_9e7963d4d08c5f86943eaac8243677a9)(class ::clang::Decl  const *) = ::clang::TypeDecl::classof;
    bool  (*method_pointer_f781e0a813bc5d148fa30c4e08290f4a)(enum ::clang::Decl::Kind ) = ::clang::TypeDecl::classofKind;
    class ::clang::SourceLocation  (::clang::TypeDecl::*method_pointer_bc3f79545fd353abb3636428c66e0c17)() const = &::clang::TypeDecl::getLocStart;
    class ::clang::Type  const * (::clang::TypeDecl::*method_pointer_94acb902ffce5822b41aee3613d9b76b)() const = &::clang::TypeDecl::getTypeForDecl;
    void  (::clang::TypeDecl::*method_pointer_5c3c747de882569bb3aa3b1badfc9186)(class ::clang::SourceLocation ) = &::clang::TypeDecl::setLocStart;
    void  (::clang::TypeDecl::*method_pointer_9c66240f45805db28e654c7bc71cb6e4)(class ::clang::Type  const *) = &::clang::TypeDecl::setTypeForDecl;
    boost::python::class_< class ::clang::TypeDecl, autowig::HeldType< class ::clang::TypeDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_945af159c3a0553abed1af6e2d31e631("TypeDecl", "", boost::python::no_init);
    class_945af159c3a0553abed1af6e2d31e631.def("classof", method_pointer_9e7963d4d08c5f86943eaac8243677a9, "");
    class_945af159c3a0553abed1af6e2d31e631.def("classof_kind", method_pointer_f781e0a813bc5d148fa30c4e08290f4a, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_loc_start", method_pointer_bc3f79545fd353abb3636428c66e0c17, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_type_for_decl", method_pointer_94acb902ffce5822b41aee3613d9b76b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_loc_start", method_pointer_5c3c747de882569bb3aa3b1badfc9186, "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_type_for_decl", method_pointer_9c66240f45805db28e654c7bc71cb6e4, "");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof_kind");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypeDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypeDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}