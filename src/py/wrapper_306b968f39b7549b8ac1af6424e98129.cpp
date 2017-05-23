#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::BuiltinType const volatile * get_pointer<class ::clang::BuiltinType const volatile >(class ::clang::BuiltinType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_306b968f39b7549b8ac1af6424e98129()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    enum ::clang::BuiltinType::Kind  (::clang::BuiltinType::*method_pointer_4c6b87968bc350b9bb7bd67643805c23)() const = &::clang::BuiltinType::getKind;
    bool  (::clang::BuiltinType::*method_pointer_60ef763e5619521cb2b67cc928eb3ae1)() const = &::clang::BuiltinType::isSugared;
    class ::clang::QualType  (::clang::BuiltinType::*method_pointer_f491b13b48c45bea81af0f791fdd2809)() const = &::clang::BuiltinType::desugar;
    bool  (::clang::BuiltinType::*method_pointer_65efb5d0b4ea5fb4be5b457176fcd129)() const = &::clang::BuiltinType::isInteger;
    bool  (::clang::BuiltinType::*method_pointer_c77f34bd0fc75530a96024e6ee0d882f)() const = &::clang::BuiltinType::isSignedInteger;
    bool  (::clang::BuiltinType::*method_pointer_65b0aae6f18656d8a77c7befd25f9683)() const = &::clang::BuiltinType::isUnsignedInteger;
    bool  (::clang::BuiltinType::*method_pointer_bcc2b01746cf565ab8f65f756956ebde)() const = &::clang::BuiltinType::isFloatingPoint;
    bool  (*method_pointer_11291808a2395e85adef3b2f835ffa3c)(enum ::clang::BuiltinType::Kind ) = ::clang::BuiltinType::isPlaceholderTypeKind;
    bool  (::clang::BuiltinType::*method_pointer_ffea49b93ca25bdbb9f51a39efb57b9e)() const = &::clang::BuiltinType::isPlaceholderType;
    bool  (::clang::BuiltinType::*method_pointer_bc0e1f2e01a2531f9fa833758bce8e94)() const = &::clang::BuiltinType::isNonOverloadPlaceholderType;
    bool  (*method_pointer_d23fb10d8a45585998ed63b8061521b7)(class ::clang::Type const *) = ::clang::BuiltinType::classof;
    boost::python::class_< class ::clang::BuiltinType, autowig::Held< class ::clang::BuiltinType >::Type, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_306b968f39b7549b8ac1af6424e98129("BuiltinType", "", boost::python::no_init);
    class_306b968f39b7549b8ac1af6424e98129.def("get_kind", method_pointer_4c6b87968bc350b9bb7bd67643805c23, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_sugared", method_pointer_60ef763e5619521cb2b67cc928eb3ae1, "");
    class_306b968f39b7549b8ac1af6424e98129.def("desugar", method_pointer_f491b13b48c45bea81af0f791fdd2809, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_integer", method_pointer_65efb5d0b4ea5fb4be5b457176fcd129, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_signed_integer", method_pointer_c77f34bd0fc75530a96024e6ee0d882f, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_unsigned_integer", method_pointer_65b0aae6f18656d8a77c7befd25f9683, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_floating_point", method_pointer_bcc2b01746cf565ab8f65f756956ebde, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type_kind", method_pointer_11291808a2395e85adef3b2f835ffa3c, ":Parameter:\n    `K` (:py:obj:`clanglite.clang.BuiltinType.kind`) - Undocumented\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type", method_pointer_ffea49b93ca25bdbb9f51a39efb57b9e, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_306b968f39b7549b8ac1af6424e98129.def("is_non_overload_placeholder_type", method_pointer_bc0e1f2e01a2531f9fa833758bce8e94, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_306b968f39b7549b8ac1af6424e98129.def("classof", method_pointer_d23fb10d8a45585998ed63b8061521b7, "");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("classof");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("is_placeholder_type_kind");

    if(autowig::Held< class ::clang::BuiltinType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::BuiltinType >::Type, autowig::Held< class ::clang::Type >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::BuiltinType >::Type, boost::python::objects::make_ptr_instance< class ::clang::BuiltinType, boost::python::objects::pointer_holder< autowig::Held< class ::clang::BuiltinType >::Type, class ::clang::BuiltinType > > >();
    }

}