#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::ObjCTypeParamType const volatile * get_pointer<class ::clang::ObjCTypeParamType const volatile >(class ::clang::ObjCTypeParamType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_fb096fe49e3450f3b997520c4a6283ec()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::ObjCTypeParamType::*method_pointer_62ac0ac2a8d65fc08f4ded4f8a9fedb1)() const = &::clang::ObjCTypeParamType::isSugared;
    class ::clang::QualType  (::clang::ObjCTypeParamType::*method_pointer_60960340744551e39ef488e2263f8a34)() const = &::clang::ObjCTypeParamType::desugar;
    bool  (*method_pointer_2479339096ef5751bf5c8c9dbeedc791)(class ::clang::Type const *) = ::clang::ObjCTypeParamType::classof;
    class ::clang::ObjCTypeParamDecl * (::clang::ObjCTypeParamType::*method_pointer_e6b8591b3caa5f608c2368b460108cd7)() const = &::clang::ObjCTypeParamType::getDecl;
    boost::python::class_< class ::clang::ObjCTypeParamType, autowig::Held< class ::clang::ObjCTypeParamType >::Type, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_fb096fe49e3450f3b997520c4a6283ec("ObjCTypeParamType", "", boost::python::no_init);
    class_fb096fe49e3450f3b997520c4a6283ec.def("is_sugared", method_pointer_62ac0ac2a8d65fc08f4ded4f8a9fedb1, "");
    class_fb096fe49e3450f3b997520c4a6283ec.def("desugar", method_pointer_60960340744551e39ef488e2263f8a34, "");
    class_fb096fe49e3450f3b997520c4a6283ec.def("classof", method_pointer_2479339096ef5751bf5c8c9dbeedc791, "");
    class_fb096fe49e3450f3b997520c4a6283ec.def("get_decl", method_pointer_e6b8591b3caa5f608c2368b460108cd7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fb096fe49e3450f3b997520c4a6283ec.staticmethod("classof");

    if(autowig::Held< class ::clang::ObjCTypeParamType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::ObjCTypeParamType >::Type, autowig::Held< class ::clang::Type >::Type >();
    }

}