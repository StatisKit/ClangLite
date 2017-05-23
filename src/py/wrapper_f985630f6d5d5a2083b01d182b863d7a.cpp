#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::CXXConversionDecl const volatile * get_pointer<class ::clang::CXXConversionDecl const volatile >(class ::clang::CXXConversionDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f985630f6d5d5a2083b01d182b863d7a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::CXXConversionDecl * (*method_pointer_0815cb9bc0a851ad9ae4ae10f68d0926)(class ::clang::ASTContext &, unsigned int ) = ::clang::CXXConversionDecl::CreateDeserialized;
    bool  (::clang::CXXConversionDecl::*method_pointer_b4733c362c665875aff5ef5a8a70745d)() const = &::clang::CXXConversionDecl::isExplicitSpecified;
    bool  (::clang::CXXConversionDecl::*method_pointer_5b3e7e42899a5c67b92301839b5dc5b7)() const = &::clang::CXXConversionDecl::isExplicit;
    class ::clang::QualType  (::clang::CXXConversionDecl::*method_pointer_a459079147cd5f398695c74ecfc9edb3)() const = &::clang::CXXConversionDecl::getConversionType;
    bool  (::clang::CXXConversionDecl::*method_pointer_8e165126c20a5a07a4ce8507d498eccc)() const = &::clang::CXXConversionDecl::isLambdaToBlockPointerConversion;
    bool  (*method_pointer_72c075270ab55948a64a14f23390aeb9)(class ::clang::Decl const *) = ::clang::CXXConversionDecl::classof;
    bool  (*method_pointer_c5688187cda35852bb303e549692e958)(enum ::clang::Decl::Kind ) = ::clang::CXXConversionDecl::classofKind;
    boost::python::class_< class ::clang::CXXConversionDecl, autowig::Held< class ::clang::CXXConversionDecl >::Type, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_f985630f6d5d5a2083b01d182b863d7a("CXXConversionDecl", "Represents a C++ conversion function within a class.\n\nFor example:\n\n", boost::python::no_init);
    class_f985630f6d5d5a2083b01d182b863d7a.def("create_deserialized", method_pointer_0815cb9bc0a851ad9ae4ae10f68d0926, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("is_explicit_specified", method_pointer_b4733c362c665875aff5ef5a8a70745d, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_f985630f6d5d5a2083b01d182b863d7a.def("is_explicit", method_pointer_5b3e7e42899a5c67b92301839b5dc5b7, "Whether this is an explicit conversion operator (C++11 and later).\n\nExplicit conversion operators are only considered for direct\ninitialization, e.g., when the user has explicitly written a cast.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_f985630f6d5d5a2083b01d182b863d7a.def("get_conversion_type", method_pointer_a459079147cd5f398695c74ecfc9edb3, "Returns the type that this conversion function is converting to.\n\n:Return Type:\n    :py:class:`clanglite.clang.QualType`\n\n");
    class_f985630f6d5d5a2083b01d182b863d7a.def("is_lambda_to_block_pointer_conversion", method_pointer_8e165126c20a5a07a4ce8507d498eccc, "Determine whether this conversion function is a conversion from a lambda\nclosure type to a block pointer.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_f985630f6d5d5a2083b01d182b863d7a.def("classof", method_pointer_72c075270ab55948a64a14f23390aeb9, "");
    class_f985630f6d5d5a2083b01d182b863d7a.def("classof_kind", method_pointer_c5688187cda35852bb303e549692e958, "");
    class_f985630f6d5d5a2083b01d182b863d7a.staticmethod("classof_kind");
    class_f985630f6d5d5a2083b01d182b863d7a.staticmethod("create_deserialized");
    class_f985630f6d5d5a2083b01d182b863d7a.staticmethod("classof");

    if(autowig::Held< class ::clang::CXXConversionDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::CXXConversionDecl >::Type, autowig::Held< class ::clang::CXXMethodDecl >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::CXXConversionDecl >::Type, boost::python::objects::make_ptr_instance< class ::clang::CXXConversionDecl, boost::python::objects::pointer_holder< autowig::Held< class ::clang::CXXConversionDecl >::Type, class ::clang::CXXConversionDecl > > >();
    }

}