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
    bool  (*method_pointer_1e728375ae905ec990eca43d99dbfe88)(class ::clang::Decl  const *) = ::clang::ValueDecl::classof;
    bool  (*method_pointer_94fbe8bca0dd5fcd92a53904fd82843f)(enum ::clang::Decl::Kind ) = ::clang::ValueDecl::classofKind;
    class ::clang::QualType  (::clang::ValueDecl::*method_pointer_228ffd285ad85e97b879cc0ab41bf316)() const = &::clang::ValueDecl::getType;
    bool  (::clang::ValueDecl::*method_pointer_e3680a867faf5029b3973afc6a10421c)() const = &::clang::ValueDecl::isWeak;
    void  (::clang::ValueDecl::*method_pointer_9d0396d3255753fa8a6fcfa098837dbc)(class ::clang::QualType ) = &::clang::ValueDecl::setType;
    boost::python::class_< class ::clang::ValueDecl, autowig::HeldType< class ::clang::ValueDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_0a741a99c7fd512dbe7c31ae23782c5f("ValueDecl", "", boost::python::no_init);
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("classof", method_pointer_1e728375ae905ec990eca43d99dbfe88, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("classof_kind", method_pointer_94fbe8bca0dd5fcd92a53904fd82843f, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("get_type", method_pointer_228ffd285ad85e97b879cc0ab41bf316, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("is_weak", method_pointer_e3680a867faf5029b3973afc6a10421c, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("set_type", method_pointer_9d0396d3255753fa8a6fcfa098837dbc, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.staticmethod("classof_kind");
    class_0a741a99c7fd512dbe7c31ae23782c5f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ValueDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ValueDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}