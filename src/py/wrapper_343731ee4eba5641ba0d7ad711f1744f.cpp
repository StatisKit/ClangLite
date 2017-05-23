#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::AutoType const volatile * get_pointer<class ::clang::AutoType const volatile >(class ::clang::AutoType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_343731ee4eba5641ba0d7ad711f1744f()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::AutoType::*method_pointer_de0a3b96d4815be7b60dacb054abd96b)() const = &::clang::AutoType::isDecltypeAuto;
    bool  (::clang::AutoType::*method_pointer_5b463201522750ee986f1f1558fa5caa)() const = &::clang::AutoType::isSugared;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_60eb018b23e2515aaa4a7ce2831e6f3f)() const = &::clang::AutoType::desugar;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_29c74fdc996b586d8e0c97a9801cc064)() const = &::clang::AutoType::getDeducedType;
    bool  (::clang::AutoType::*method_pointer_727dc1f261325c19b899b5076259e761)() const = &::clang::AutoType::isDeduced;
    bool  (*method_pointer_c30808f8af3a5cf2a526472cb1fc6d79)(class ::clang::Type const *) = ::clang::AutoType::classof;
    boost::python::class_< class ::clang::AutoType, autowig::Held< class ::clang::AutoType >::Type, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_343731ee4eba5641ba0d7ad711f1744f("AutoType", "Represents a C++11 auto or C++14 decltype(auto) type.\n\nThese types are usually a placeholder for a deduced type. However,\nbefore the initializer is attached, or if the initializer is\ntype-dependent, there is no deduced type and an auto type is canonical.\nIn the latter case, it is also a dependent type.\n\n", boost::python::no_init);
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_decltype_auto", method_pointer_de0a3b96d4815be7b60dacb054abd96b, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_sugared", method_pointer_5b463201522750ee986f1f1558fa5caa, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("desugar", method_pointer_60eb018b23e2515aaa4a7ce2831e6f3f, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("get_deduced_type", method_pointer_29c74fdc996b586d8e0c97a9801cc064, "Get the type deduced for this auto type, or null if it's either not been\ndeduced or was deduced to a dependent type.\n\n:Return Type:\n    :py:class:`clanglite.clang.QualType`\n\n");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_deduced", method_pointer_727dc1f261325c19b899b5076259e761, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("classof", method_pointer_c30808f8af3a5cf2a526472cb1fc6d79, "");
    class_343731ee4eba5641ba0d7ad711f1744f.staticmethod("classof");

    if(autowig::Held< class ::clang::AutoType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::AutoType >::Type, autowig::Held< class ::clang::Type >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::AutoType >::Type, boost::python::objects::make_ptr_instance< class ::clang::AutoType, boost::python::objects::pointer_holder< autowig::Held< class ::clang::AutoType >::Type, class ::clang::AutoType > > >();
    }

}