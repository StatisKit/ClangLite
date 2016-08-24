#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_0a741a99c7fd512dbe7c31ae23782c5f()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_b85793f79ce2501294434c0678e0d82e)(class ::clang::Decl  const *) = ::clang::ValueDecl::classof;
    bool  (*method_pointer_003b08421fc1509592919c42bb3dd043)(enum ::clang::Decl::Kind ) = ::clang::ValueDecl::classofKind;
    class ::clang::QualType  (::clang::ValueDecl::*method_pointer_b960f7e6656c578c927d408a998fa9b7)() const = &::clang::ValueDecl::getType;
    bool  (::clang::ValueDecl::*method_pointer_65af77f4dffb50c49bc310c7157b93d8)() const = &::clang::ValueDecl::isWeak;
    void  (::clang::ValueDecl::*method_pointer_b36a17ca386b5a02a771d5f01a39ab9a)(class ::clang::QualType ) = &::clang::ValueDecl::setType;
    boost::python::class_< class ::clang::ValueDecl, autowig::HeldType< class ::clang::ValueDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_0a741a99c7fd512dbe7c31ae23782c5f("ValueDecl", "", boost::python::no_init);
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("classof", method_pointer_b85793f79ce2501294434c0678e0d82e, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("classof_kind", method_pointer_003b08421fc1509592919c42bb3dd043, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("get_type", method_pointer_b960f7e6656c578c927d408a998fa9b7, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("is_weak", method_pointer_65af77f4dffb50c49bc310c7157b93d8, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("set_type", method_pointer_b36a17ca386b5a02a771d5f01a39ab9a, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.staticmethod("classof_kind");
    class_0a741a99c7fd512dbe7c31ae23782c5f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ValueDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ValueDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}