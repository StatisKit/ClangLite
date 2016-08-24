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
    bool  (*method_pointer_112c3aa892af5fa38f28c5afa938edf1)(class ::clang::Decl  const *) = ::clang::ValueDecl::classof;
    bool  (*method_pointer_b3ceb9f6290c5e02bf73a9a1e5cb9ea3)(enum ::clang::Decl::Kind ) = ::clang::ValueDecl::classofKind;
    class ::clang::QualType  (::clang::ValueDecl::*method_pointer_570be73c53b45282a6ed51a54b6afbd1)() const = &::clang::ValueDecl::getType;
    bool  (::clang::ValueDecl::*method_pointer_78f9fa6874795cb38a575cd9bc0c5557)() const = &::clang::ValueDecl::isWeak;
    void  (::clang::ValueDecl::*method_pointer_eb0442ef51af5451842a1b14fba6fb1d)(class ::clang::QualType ) = &::clang::ValueDecl::setType;
    boost::python::class_< class ::clang::ValueDecl, autowig::HeldType< class ::clang::ValueDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_0a741a99c7fd512dbe7c31ae23782c5f("ValueDecl", "", boost::python::no_init);
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("classof", method_pointer_112c3aa892af5fa38f28c5afa938edf1, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("classof_kind", method_pointer_b3ceb9f6290c5e02bf73a9a1e5cb9ea3, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("get_type", method_pointer_570be73c53b45282a6ed51a54b6afbd1, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("is_weak", method_pointer_78f9fa6874795cb38a575cd9bc0c5557, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("set_type", method_pointer_eb0442ef51af5451842a1b14fba6fb1d, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.staticmethod("classof_kind");
    class_0a741a99c7fd512dbe7c31ae23782c5f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ValueDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ValueDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}