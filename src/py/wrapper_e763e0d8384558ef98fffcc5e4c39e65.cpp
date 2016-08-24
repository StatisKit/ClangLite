#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_e763e0d8384558ef98fffcc5e4c39e65()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ImportDecl  * (*method_pointer_4d041cbf982e51f2846af07839eef7a7)(class ::clang::ASTContext  &, unsigned int , unsigned int ) = ::clang::ImportDecl::CreateDeserialized;
    bool  (*method_pointer_01ff9ef913575f69ad755eec058f2fa9)(class ::clang::Decl  const *) = ::clang::ImportDecl::classof;
    bool  (*method_pointer_073856b7a5dc5316add11e2d06bd03ea)(enum ::clang::Decl::Kind ) = ::clang::ImportDecl::classofKind;
    boost::python::class_< class ::clang::ImportDecl, autowig::HeldType< class ::clang::ImportDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_e763e0d8384558ef98fffcc5e4c39e65("ImportDecl", "", boost::python::no_init);
    class_e763e0d8384558ef98fffcc5e4c39e65.def("create_deserialized", method_pointer_4d041cbf982e51f2846af07839eef7a7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e763e0d8384558ef98fffcc5e4c39e65.def("classof", method_pointer_01ff9ef913575f69ad755eec058f2fa9, "");
    class_e763e0d8384558ef98fffcc5e4c39e65.def("classof_kind", method_pointer_073856b7a5dc5316add11e2d06bd03ea, "");
    class_e763e0d8384558ef98fffcc5e4c39e65.staticmethod("classof_kind");
    class_e763e0d8384558ef98fffcc5e4c39e65.staticmethod("create_deserialized");
    class_e763e0d8384558ef98fffcc5e4c39e65.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ImportDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ImportDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}