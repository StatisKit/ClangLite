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
    bool  (*method_pointer_416f92c2231051c3ac0915ced24554d9)(class ::clang::Decl  const *) = ::clang::TypeDecl::classof;
    bool  (*method_pointer_9b2b96b0310e5fcdb1037dbcb439fe09)(enum ::clang::Decl::Kind ) = ::clang::TypeDecl::classofKind;
    class ::clang::SourceLocation  (::clang::TypeDecl::*method_pointer_ad1517a93ca951d296ba2ae3879d1576)() const = &::clang::TypeDecl::getLocStart;
    class ::clang::Type  const * (::clang::TypeDecl::*method_pointer_7204918089d75dec9dd250066ae4c0cf)() const = &::clang::TypeDecl::getTypeForDecl;
    void  (::clang::TypeDecl::*method_pointer_6701b38f9bc155b6a31aa0609d125dad)(class ::clang::SourceLocation ) = &::clang::TypeDecl::setLocStart;
    void  (::clang::TypeDecl::*method_pointer_a6dd0551885955c9b5e812aef3baadb5)(class ::clang::Type  const *) = &::clang::TypeDecl::setTypeForDecl;
    boost::python::class_< class ::clang::TypeDecl, autowig::HeldType< class ::clang::TypeDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_945af159c3a0553abed1af6e2d31e631("TypeDecl", "", boost::python::no_init);
    class_945af159c3a0553abed1af6e2d31e631.def("classof", method_pointer_416f92c2231051c3ac0915ced24554d9, "");
    class_945af159c3a0553abed1af6e2d31e631.def("classof_kind", method_pointer_9b2b96b0310e5fcdb1037dbcb439fe09, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_loc_start", method_pointer_ad1517a93ca951d296ba2ae3879d1576, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_type_for_decl", method_pointer_7204918089d75dec9dd250066ae4c0cf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_loc_start", method_pointer_6701b38f9bc155b6a31aa0609d125dad, "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_type_for_decl", method_pointer_a6dd0551885955c9b5e812aef3baadb5, "");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof_kind");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypeDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypeDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}