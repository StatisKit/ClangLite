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
    bool  (*method_pointer_9a5e5c0714db57609088583a8532dea7)(class ::clang::Decl  const *) = ::clang::ValueDecl::classof;
    bool  (*method_pointer_fbe6c2c468aa5d87901b13318d031fa7)(enum ::clang::Decl::Kind ) = ::clang::ValueDecl::classofKind;
    class ::clang::QualType  (::clang::ValueDecl::*method_pointer_856afe4cbd4e573481bfd551f8ad7e39)() const = &::clang::ValueDecl::getType;
    bool  (::clang::ValueDecl::*method_pointer_4752adabaf6c5ada9b7651c15e1e74a3)() const = &::clang::ValueDecl::isWeak;
    void  (::clang::ValueDecl::*method_pointer_da3ca51e2e02549488e2cf15135f24d1)(class ::clang::QualType ) = &::clang::ValueDecl::setType;
    boost::python::class_< class ::clang::ValueDecl, autowig::HeldType< class ::clang::ValueDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_0a741a99c7fd512dbe7c31ae23782c5f("ValueDecl", "", boost::python::no_init);
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("classof", method_pointer_9a5e5c0714db57609088583a8532dea7, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("classof_kind", method_pointer_fbe6c2c468aa5d87901b13318d031fa7, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("get_type", method_pointer_856afe4cbd4e573481bfd551f8ad7e39, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("is_weak", method_pointer_4752adabaf6c5ada9b7651c15e1e74a3, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("set_type", method_pointer_da3ca51e2e02549488e2cf15135f24d1, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.staticmethod("classof_kind");
    class_0a741a99c7fd512dbe7c31ae23782c5f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ValueDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ValueDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}