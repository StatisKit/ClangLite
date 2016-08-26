#include "_clanglite.h"


namespace autowig
{
}


void wrapper_0a741a99c7fd512dbe7c31ae23782c5f()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_6ae6f68fe99a5a2ea48c99f84625a964)(class ::clang::Decl  const *) = ::clang::ValueDecl::classof;
    bool  (*method_pointer_3789e7186a0650bfa15d81bfc698c830)(enum ::clang::Decl::Kind ) = ::clang::ValueDecl::classofKind;
    class ::clang::QualType  (::clang::ValueDecl::*method_pointer_60b53de437f75870ad84305e4a9bfab5)() const = &::clang::ValueDecl::getType;
    bool  (::clang::ValueDecl::*method_pointer_a1fb49fc07125cc2854b9afec1dfb6b4)() const = &::clang::ValueDecl::isWeak;
    void  (::clang::ValueDecl::*method_pointer_427de4683d8252cfa525025714f035ff)(class ::clang::QualType ) = &::clang::ValueDecl::setType;
    boost::python::class_< class ::clang::ValueDecl, autowig::HeldType< class ::clang::ValueDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_0a741a99c7fd512dbe7c31ae23782c5f("ValueDecl", "", boost::python::no_init);
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("classof", method_pointer_6ae6f68fe99a5a2ea48c99f84625a964, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("classof_kind", method_pointer_3789e7186a0650bfa15d81bfc698c830, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("get_type", method_pointer_60b53de437f75870ad84305e4a9bfab5, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("is_weak", method_pointer_a1fb49fc07125cc2854b9afec1dfb6b4, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("set_type", method_pointer_427de4683d8252cfa525025714f035ff, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.staticmethod("classof_kind");
    class_0a741a99c7fd512dbe7c31ae23782c5f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ValueDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ValueDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}