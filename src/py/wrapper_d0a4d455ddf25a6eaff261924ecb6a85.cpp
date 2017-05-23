#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::FunctionNoProtoType const volatile * get_pointer<class ::clang::FunctionNoProtoType const volatile >(class ::clang::FunctionNoProtoType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_d0a4d455ddf25a6eaff261924ecb6a85()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::FunctionNoProtoType::*method_pointer_ecc5ed301c775d62a6f5af09361eb6dd)() const = &::clang::FunctionNoProtoType::isSugared;
    class ::clang::QualType  (::clang::FunctionNoProtoType::*method_pointer_15ea3562414d5b9c8be2bf144c80e054)() const = &::clang::FunctionNoProtoType::desugar;
    bool  (*method_pointer_3a1685f7e81552eb81ef07faedd449c5)(class ::clang::Type const *) = ::clang::FunctionNoProtoType::classof;
    boost::python::class_< class ::clang::FunctionNoProtoType, autowig::Held< class ::clang::FunctionNoProtoType >::Type, boost::python::bases< class ::clang::FunctionType >, boost::noncopyable > class_d0a4d455ddf25a6eaff261924ecb6a85("FunctionNoProtoType", "", boost::python::no_init);
    class_d0a4d455ddf25a6eaff261924ecb6a85.def("is_sugared", method_pointer_ecc5ed301c775d62a6f5af09361eb6dd, "");
    class_d0a4d455ddf25a6eaff261924ecb6a85.def("desugar", method_pointer_15ea3562414d5b9c8be2bf144c80e054, "");
    class_d0a4d455ddf25a6eaff261924ecb6a85.def("classof", method_pointer_3a1685f7e81552eb81ef07faedd449c5, "");
    class_d0a4d455ddf25a6eaff261924ecb6a85.staticmethod("classof");

    if(autowig::Held< class ::clang::FunctionNoProtoType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::FunctionNoProtoType >::Type, autowig::Held< class ::clang::FunctionType >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::FunctionNoProtoType >::Type, boost::python::objects::make_ptr_instance< class ::clang::FunctionNoProtoType, boost::python::objects::pointer_holder< autowig::Held< class ::clang::FunctionNoProtoType >::Type, class ::clang::FunctionNoProtoType > > >();
    }

}