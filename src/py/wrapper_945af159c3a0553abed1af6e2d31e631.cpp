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
    class ::clang::Type  const * (::clang::TypeDecl::*method_pointer_092ebe777ce959e8b0ff6c8fb59524eb)() const = &::clang::TypeDecl::getTypeForDecl;
    bool  (*method_pointer_f49f3ca4ab455249b84cf840b2e04611)(enum ::clang::Decl::Kind ) = ::clang::TypeDecl::classofKind;
    bool  (*method_pointer_fa544d0cb6ce52b1a2fdcdaed2d0a7bd)(class ::clang::Decl  const *) = ::clang::TypeDecl::classof;
    void  (::clang::TypeDecl::*method_pointer_b85022a67d365d33b1851cd1f49e5eff)(class ::clang::Type  const *) = &::clang::TypeDecl::setTypeForDecl;
    boost::python::class_< class ::clang::TypeDecl, autowig::HeldType< class ::clang::TypeDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_945af159c3a0553abed1af6e2d31e631("TypeDecl", "", boost::python::no_init);
    class_945af159c3a0553abed1af6e2d31e631.def("get_type_for_decl", method_pointer_092ebe777ce959e8b0ff6c8fb59524eb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_945af159c3a0553abed1af6e2d31e631.def("classof_kind", method_pointer_f49f3ca4ab455249b84cf840b2e04611, "");
    class_945af159c3a0553abed1af6e2d31e631.def("classof", method_pointer_fa544d0cb6ce52b1a2fdcdaed2d0a7bd, "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_type_for_decl", method_pointer_b85022a67d365d33b1851cd1f49e5eff, "");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof_kind");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypeDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypeDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}