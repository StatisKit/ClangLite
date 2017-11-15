#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::FunctionProtoType const volatile * get_pointer<class ::clang::FunctionProtoType const volatile >(class ::clang::FunctionProtoType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ee4ed14ebca95be7b6de45571cde69c6()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_d10cc5c2ce6559e9976f1116e65e642d)() const = &::clang::FunctionProtoType::getNumParams;
    class ::clang::QualType  (::clang::FunctionProtoType::*method_pointer_1e4ae8b7cd2352bab8fa67a90d4efb89)(unsigned int ) const = &::clang::FunctionProtoType::getParamType;
    bool  (::clang::FunctionProtoType::*method_pointer_0b4efe0272ce5cc789165a5993408fc0)() const = &::clang::FunctionProtoType::hasExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_c135a8126d59577d907b39b03db9ac35)() const = &::clang::FunctionProtoType::hasDynamicExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_8c1ee4080781567b8aa0a80f5740aead)() const = &::clang::FunctionProtoType::hasNoexceptExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_10b375a238d458cba8731ae7e76efd37)() const = &::clang::FunctionProtoType::hasDependentExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_1f5d39441de45321b634b68dfbd058a1)() const = &::clang::FunctionProtoType::hasInstantiationDependentExceptionSpec;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_339862439a62516cbac1a5873fe313dd)() const = &::clang::FunctionProtoType::getNumExceptions;
    class ::clang::QualType  (::clang::FunctionProtoType::*method_pointer_5a80b7e5a8ef5694aa05f10491e1d7c7)(unsigned int ) const = &::clang::FunctionProtoType::getExceptionType;
    class ::clang::FunctionDecl * (::clang::FunctionProtoType::*method_pointer_b86b82fdb78b5eb19e72012e2792fdd2)() const = &::clang::FunctionProtoType::getExceptionSpecDecl;
    class ::clang::FunctionDecl * (::clang::FunctionProtoType::*method_pointer_10674a0526505c36ae180b867b1ec04a)() const = &::clang::FunctionProtoType::getExceptionSpecTemplate;
    bool  (::clang::FunctionProtoType::*method_pointer_66466fdf5c8653b79aff8b5220591fe9)() const = &::clang::FunctionProtoType::isVariadic;
    bool  (::clang::FunctionProtoType::*method_pointer_91f6dda29e375d87bafc504e3b63c27b)() const = &::clang::FunctionProtoType::isTemplateVariadic;
    bool  (::clang::FunctionProtoType::*method_pointer_0cf1ce972ff85b7cad53a1a98ab55dd1)() const = &::clang::FunctionProtoType::hasTrailingReturn;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_be012cb6b9fd5a9e8812af6e5d01c3c2)() const = &::clang::FunctionProtoType::getTypeQuals;
    ::clang::FunctionProtoType::param_type_iterator  (::clang::FunctionProtoType::*method_pointer_128491a3add05122b30f4fd64cda0b07)() const = &::clang::FunctionProtoType::param_type_begin;
    ::clang::FunctionProtoType::param_type_iterator  (::clang::FunctionProtoType::*method_pointer_b4727c7672ab5855938da66d8eb475c6)() const = &::clang::FunctionProtoType::param_type_end;
    ::clang::FunctionProtoType::exception_iterator  (::clang::FunctionProtoType::*method_pointer_c0764b61d3165d71b301d7df526f8fea)() const = &::clang::FunctionProtoType::exception_begin;
    ::clang::FunctionProtoType::exception_iterator  (::clang::FunctionProtoType::*method_pointer_d3f2b7fcd84d551ca494293821b5fc9e)() const = &::clang::FunctionProtoType::exception_end;
    bool  (::clang::FunctionProtoType::*method_pointer_9288aaa177e752c48120c1bd8b35de6a)() const = &::clang::FunctionProtoType::hasExtParameterInfos;
    bool  (::clang::FunctionProtoType::*method_pointer_e5c4c374711a5676b764fd570b815ed7)(unsigned int ) const = &::clang::FunctionProtoType::isParamConsumed;
    bool  (::clang::FunctionProtoType::*method_pointer_4431c239cb0b5c79b5e1961ff59c3c9a)() const = &::clang::FunctionProtoType::isSugared;
    class ::clang::QualType  (::clang::FunctionProtoType::*method_pointer_3e4352de276d5f02a21bec41024815e6)() const = &::clang::FunctionProtoType::desugar;
    bool  (*method_pointer_90cd2e9fa2ab58c7b3af7a31371c9b11)(class ::clang::Type const *) = ::clang::FunctionProtoType::classof;
    boost::python::class_< class ::clang::FunctionProtoType, autowig::Held< class ::clang::FunctionProtoType >::Type, boost::python::bases< class ::clang::FunctionType >, boost::noncopyable > class_ee4ed14ebca95be7b6de45571cde69c6("FunctionProtoType", "", boost::python::no_init);
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_num_params", method_pointer_d10cc5c2ce6559e9976f1116e65e642d, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_param_type", method_pointer_1e4ae8b7cd2352bab8fa67a90d4efb89, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_exception_spec", method_pointer_0b4efe0272ce5cc789165a5993408fc0, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_dynamic_exception_spec", method_pointer_c135a8126d59577d907b39b03db9ac35, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_noexcept_exception_spec", method_pointer_8c1ee4080781567b8aa0a80f5740aead, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_dependent_exception_spec", method_pointer_10b375a238d458cba8731ae7e76efd37, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_instantiation_dependent_exception_spec", method_pointer_1f5d39441de45321b634b68dfbd058a1, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_num_exceptions", method_pointer_339862439a62516cbac1a5873fe313dd, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_exception_type", method_pointer_5a80b7e5a8ef5694aa05f10491e1d7c7, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_exception_spec_decl", method_pointer_b86b82fdb78b5eb19e72012e2792fdd2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "If this function type has an exception specification which hasn't been\ndetermined yet (either because it has not been evaluated or because it\nhas not been instantiated), this is the function whose exception\nspecification is represented by this type.\n\n:Return Type:\n    :py:class:`clanglite.clang.FunctionDecl`\n\n");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_exception_spec_template", method_pointer_10674a0526505c36ae180b867b1ec04a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "If this function type has an uninstantiated exception specification,\nthis is the function whose exception specification should be\ninstantiated to find the exception specification for this type.\n\n:Return Type:\n    :py:class:`clanglite.clang.FunctionDecl`\n\n");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_variadic", method_pointer_66466fdf5c8653b79aff8b5220591fe9, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_template_variadic", method_pointer_91f6dda29e375d87bafc504e3b63c27b, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_trailing_return", method_pointer_0cf1ce972ff85b7cad53a1a98ab55dd1, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_type_quals", method_pointer_be012cb6b9fd5a9e8812af6e5d01c3c2, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("param_type_begin", method_pointer_128491a3add05122b30f4fd64cda0b07, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("param_type_end", method_pointer_b4727c7672ab5855938da66d8eb475c6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("exception_begin", method_pointer_c0764b61d3165d71b301d7df526f8fea, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("exception_end", method_pointer_d3f2b7fcd84d551ca494293821b5fc9e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_ext_parameter_infos", method_pointer_9288aaa177e752c48120c1bd8b35de6a, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_param_consumed", method_pointer_e5c4c374711a5676b764fd570b815ed7, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_sugared", method_pointer_4431c239cb0b5c79b5e1961ff59c3c9a, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("desugar", method_pointer_3e4352de276d5f02a21bec41024815e6, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("classof", method_pointer_90cd2e9fa2ab58c7b3af7a31371c9b11, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.staticmethod("classof");

    if(autowig::Held< class ::clang::FunctionProtoType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::FunctionProtoType >::Type, autowig::Held< class ::clang::FunctionType >::Type >();
    }

}