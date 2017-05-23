#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::LocInfoType const volatile * get_pointer<class ::clang::LocInfoType const volatile >(class ::clang::LocInfoType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_566b7f2eb62955db8f0e90ccbfe7d271()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::QualType  (::clang::LocInfoType::*method_pointer_17ad20496426564296186df2d35a6ec8)() const = &::clang::LocInfoType::getType;
    bool  (*method_pointer_da558ebce5c65d4db67332b50c26fe29)(class ::clang::Type const *) = ::clang::LocInfoType::classof;
    boost::python::class_< class ::clang::LocInfoType, autowig::Held< class ::clang::LocInfoType >::Type, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_566b7f2eb62955db8f0e90ccbfe7d271("LocInfoType", "Holds a QualType and a TypeSourceInfo\\* that came out of a declarator\nparsing.\n\nLocInfoType is a 'transient' type, only needed for passing to/from\nParser and Sema, when we want to preserve type source info for a parsed\ntype. It will not participate in the type system semantics in any way.\n\n", boost::python::no_init);
    class_566b7f2eb62955db8f0e90ccbfe7d271.def("get_type", method_pointer_17ad20496426564296186df2d35a6ec8, "");
    class_566b7f2eb62955db8f0e90ccbfe7d271.def("classof", method_pointer_da558ebce5c65d4db67332b50c26fe29, "");
    class_566b7f2eb62955db8f0e90ccbfe7d271.staticmethod("classof");

    if(autowig::Held< class ::clang::LocInfoType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::LocInfoType >::Type, autowig::Held< class ::clang::Type >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::LocInfoType >::Type, boost::python::objects::make_ptr_instance< class ::clang::LocInfoType, boost::python::objects::pointer_holder< autowig::Held< class ::clang::LocInfoType >::Type, class ::clang::LocInfoType > > >();
    }

}