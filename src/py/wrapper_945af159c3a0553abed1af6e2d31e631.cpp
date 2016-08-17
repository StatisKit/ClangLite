#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_945af159c3a0553abed1af6e2d31e631()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_00b34d4cb29657ad9200d941bfb53018)(enum ::clang::Decl::Kind ) = ::clang::TypeDecl::classofKind;
    void  (::clang::TypeDecl::*method_pointer_60a64937d20b5796985dfa27b5ec2ed5)(class ::clang::Type  const *) = &::clang::TypeDecl::setTypeForDecl;
    class ::clang::Type  const * (::clang::TypeDecl::*method_pointer_0abb9c43289d5df0af8b0215fcfb2c34)() const = &::clang::TypeDecl::getTypeForDecl;
    bool  (*method_pointer_9924c03ef67a52f6b6dcbe3986f082f1)(class ::clang::Decl  const *) = ::clang::TypeDecl::classof;
    boost::python::class_< class ::clang::TypeDecl, autowig::HeldType< class ::clang::TypeDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_945af159c3a0553abed1af6e2d31e631("TypeDecl", "", boost::python::no_init);
    class_945af159c3a0553abed1af6e2d31e631.def("classof_kind", method_pointer_00b34d4cb29657ad9200d941bfb53018, "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_type_for_decl", method_pointer_60a64937d20b5796985dfa27b5ec2ed5, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_type_for_decl", method_pointer_0abb9c43289d5df0af8b0215fcfb2c34, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_945af159c3a0553abed1af6e2d31e631.def("classof", method_pointer_9924c03ef67a52f6b6dcbe3986f082f1, "");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof_kind");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypeDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypeDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}