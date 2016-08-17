#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_0a741a99c7fd512dbe7c31ae23782c5f()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_59f92f9c6346571db16f9047864bfd0f)(enum ::clang::Decl::Kind ) = ::clang::ValueDecl::classofKind;
    bool  (::clang::ValueDecl::*method_pointer_c4716226994b5c5780617000fdf22145)() const = &::clang::ValueDecl::isWeak;
    bool  (*method_pointer_9f88694c2b8a52ba8a21cccf535ced4a)(class ::clang::Decl  const *) = ::clang::ValueDecl::classof;
    boost::python::class_< class ::clang::ValueDecl, autowig::HeldType< class ::clang::ValueDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_0a741a99c7fd512dbe7c31ae23782c5f("ValueDecl", "", boost::python::no_init);
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("classof_kind", method_pointer_59f92f9c6346571db16f9047864bfd0f, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("is_weak", method_pointer_c4716226994b5c5780617000fdf22145, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("classof", method_pointer_9f88694c2b8a52ba8a21cccf535ced4a, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.staticmethod("classof_kind");
    class_0a741a99c7fd512dbe7c31ae23782c5f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ValueDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ValueDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}