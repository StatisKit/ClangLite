#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::DependentNameType const volatile * get_pointer<class ::clang::DependentNameType const volatile >(class ::clang::DependentNameType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_411e70b105bb5141b394c3e9e429e0b0()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::DependentNameType::*method_pointer_e9382f0de3af5ecab4a0b8bac03a20e8)() const = &::clang::DependentNameType::isSugared;
    class ::clang::QualType  (::clang::DependentNameType::*method_pointer_c155e08860d951389c669e2d2fa816d9)() const = &::clang::DependentNameType::desugar;
    bool  (*method_pointer_e0286efa07e65ec883a9cf4bfa594a48)(class ::clang::Type const *) = ::clang::DependentNameType::classof;
    boost::python::class_< class ::clang::DependentNameType, autowig::Held< class ::clang::DependentNameType >::Type, boost::python::bases< class ::clang::TypeWithKeyword >, boost::noncopyable > class_411e70b105bb5141b394c3e9e429e0b0("DependentNameType", "Represents a qualified type name for which the type name is dependent.\n\nDependentNameType represents a class of dependent types that involve a\npossibly dependent nested-name-specifier (e.g., 'T::') followed by a\nname of a type. The DependentNameType may start with a 'typename' (for a\ntypename-specifier), 'class', 'struct', 'union', or 'enum' (for a\ndependent elaborated-type-specifier), or nothing (in contexts where we\nknow that we must be referring to a type, e.g., in a base class\nspecifier). Typically the nested-name-specifier is dependent, but in\nMSVC compatibility mode, this type is used with non-dependent names to\ndelay name lookup until instantiation.\n\n", boost::python::no_init);
    class_411e70b105bb5141b394c3e9e429e0b0.def("is_sugared", method_pointer_e9382f0de3af5ecab4a0b8bac03a20e8, "");
    class_411e70b105bb5141b394c3e9e429e0b0.def("desugar", method_pointer_c155e08860d951389c669e2d2fa816d9, "");
    class_411e70b105bb5141b394c3e9e429e0b0.def("classof", method_pointer_e0286efa07e65ec883a9cf4bfa594a48, "");
    class_411e70b105bb5141b394c3e9e429e0b0.staticmethod("classof");

    if(autowig::Held< class ::clang::DependentNameType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::DependentNameType >::Type, autowig::Held< class ::clang::TypeWithKeyword >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::DependentNameType >::Type, boost::python::objects::make_ptr_instance< class ::clang::DependentNameType, boost::python::objects::pointer_holder< autowig::Held< class ::clang::DependentNameType >::Type, class ::clang::DependentNameType > > >();
    }

}