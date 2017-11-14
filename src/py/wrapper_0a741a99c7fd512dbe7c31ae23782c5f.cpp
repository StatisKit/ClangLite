#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::ValueDecl const volatile * get_pointer<class ::clang::ValueDecl const volatile >(class ::clang::ValueDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_0a741a99c7fd512dbe7c31ae23782c5f()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::QualType  (::clang::ValueDecl::*method_pointer_a773e62dc9625132888de78d331a6fe3)() const = &::clang::ValueDecl::getType;
    void  (::clang::ValueDecl::*method_pointer_08a928e5caf659ec85a014c1ed7b7628)(class ::clang::QualType ) = &::clang::ValueDecl::setType;
    bool  (::clang::ValueDecl::*method_pointer_e81322cddd4f5b8da24350123ebceeb9)() const = &::clang::ValueDecl::isWeak;
    bool  (*method_pointer_7a510c3bc8da52fca159716eb9803e33)(class ::clang::Decl const *) = ::clang::ValueDecl::classof;
    bool  (*method_pointer_90a08fa61e3357a3afda17d23421937f)(enum ::clang::Decl::Kind ) = ::clang::ValueDecl::classofKind;
    boost::python::class_< class ::clang::ValueDecl, autowig::Held< class ::clang::ValueDecl >::Type, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_0a741a99c7fd512dbe7c31ae23782c5f("ValueDecl", "", boost::python::no_init);
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("get_type", method_pointer_a773e62dc9625132888de78d331a6fe3, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("set_type", method_pointer_08a928e5caf659ec85a014c1ed7b7628, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("is_weak", method_pointer_e81322cddd4f5b8da24350123ebceeb9, "Determine whether this symbol is weakly-imported, or declared with the\nweak or weak-ref attr.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("classof", method_pointer_7a510c3bc8da52fca159716eb9803e33, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("classof_kind", method_pointer_90a08fa61e3357a3afda17d23421937f, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.staticmethod("classof_kind");
    class_0a741a99c7fd512dbe7c31ae23782c5f.staticmethod("classof");

    if(autowig::Held< class ::clang::ValueDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::ValueDecl >::Type, autowig::Held< class ::clang::NamedDecl >::Type >();
    }

}