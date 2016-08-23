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
    bool  (*method_pointer_2cb7cf1c314a57fda6006ad5275db7da)(class ::clang::Decl  const *) = ::clang::TypeDecl::classof;
    bool  (*method_pointer_637318c7377c5b8b9eae68288827f8cb)(enum ::clang::Decl::Kind ) = ::clang::TypeDecl::classofKind;
    class ::clang::Type  const * (::clang::TypeDecl::*method_pointer_7e7cefc418375dd5b662a5873bba4ac8)() const = &::clang::TypeDecl::getTypeForDecl;
    void  (::clang::TypeDecl::*method_pointer_68dc8702a8f45320be321df20be84499)(class ::clang::Type  const *) = &::clang::TypeDecl::setTypeForDecl;
    boost::python::class_< class ::clang::TypeDecl, autowig::HeldType< class ::clang::TypeDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_945af159c3a0553abed1af6e2d31e631("TypeDecl", "", boost::python::no_init);
    class_945af159c3a0553abed1af6e2d31e631.def("classof", method_pointer_2cb7cf1c314a57fda6006ad5275db7da, "");
    class_945af159c3a0553abed1af6e2d31e631.def("classof_kind", method_pointer_637318c7377c5b8b9eae68288827f8cb, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_type_for_decl", method_pointer_7e7cefc418375dd5b662a5873bba4ac8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_type_for_decl", method_pointer_68dc8702a8f45320be321df20be84499, "");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof_kind");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypeDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypeDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}