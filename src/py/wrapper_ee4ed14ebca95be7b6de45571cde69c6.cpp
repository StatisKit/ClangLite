#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_ee4ed14ebca95be7b6de45571cde69c6()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_57d7e60cc26e5d9e92c7a6fd6b8e7553)(class ::clang::Type  const *) = ::clang::FunctionProtoType::classof;
    class ::clang::FunctionDecl  * (::clang::FunctionProtoType::*method_pointer_0c94ed386be25605b564abb0392b49ac)() const = &::clang::FunctionProtoType::getExceptionSpecDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionProtoType::*method_pointer_30f8d7a6b0115f28b8610b7a885b2505)() const = &::clang::FunctionProtoType::getExceptionSpecTemplate;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_b7c63eb67c865ea49ab6e2f8daa39c71)() const = &::clang::FunctionProtoType::getNumExceptions;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_71c82fad284c592db307b3d4b21350a4)() const = &::clang::FunctionProtoType::getNumParams;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_75e9b9e0bce75f009464f7dbec6c0e14)() const = &::clang::FunctionProtoType::getTypeQuals;
    bool  (::clang::FunctionProtoType::*method_pointer_ef9df290514651b4aa850814ccde112a)() const = &::clang::FunctionProtoType::hasAnyConsumedParams;
    bool  (::clang::FunctionProtoType::*method_pointer_c5a0e1d4a12d5438946500f79fed47fa)() const = &::clang::FunctionProtoType::hasDependentExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_ad658fdd4a145f1db2f3b92d38b2929b)() const = &::clang::FunctionProtoType::hasDynamicExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_b7544316f609532585cba90d8af7ef10)() const = &::clang::FunctionProtoType::hasExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_5b08f6b127b25e098142f9a8bd8eafb4)() const = &::clang::FunctionProtoType::hasNoexceptExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_3be322b57ca855b4a962e2a2375f003b)() const = &::clang::FunctionProtoType::hasTrailingReturn;
    bool  (::clang::FunctionProtoType::*method_pointer_780703f8828d5f6c9765c5d13a5fcff3)(unsigned int ) const = &::clang::FunctionProtoType::isParamConsumed;
    bool  (::clang::FunctionProtoType::*method_pointer_98b89a30312d5ab28f47bcbb65dcf221)() const = &::clang::FunctionProtoType::isSugared;
    bool  (::clang::FunctionProtoType::*method_pointer_ee57e79864bf5b8fab6535463f919b42)() const = &::clang::FunctionProtoType::isTemplateVariadic;
    bool  (::clang::FunctionProtoType::*method_pointer_a4f640dbed0c528a81519350c4be90be)() const = &::clang::FunctionProtoType::isVariadic;
    boost::python::class_< class ::clang::FunctionProtoType, autowig::HeldType< class ::clang::FunctionProtoType >, boost::python::bases< class ::clang::FunctionType >, boost::noncopyable > class_ee4ed14ebca95be7b6de45571cde69c6("FunctionProtoType", "", boost::python::no_init);
    class_ee4ed14ebca95be7b6de45571cde69c6.def("classof", method_pointer_57d7e60cc26e5d9e92c7a6fd6b8e7553, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_exception_spec_decl", method_pointer_0c94ed386be25605b564abb0392b49ac, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_exception_spec_template", method_pointer_30f8d7a6b0115f28b8610b7a885b2505, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_num_exceptions", method_pointer_b7c63eb67c865ea49ab6e2f8daa39c71, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_num_params", method_pointer_71c82fad284c592db307b3d4b21350a4, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_type_quals", method_pointer_75e9b9e0bce75f009464f7dbec6c0e14, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_any_consumed_params", method_pointer_ef9df290514651b4aa850814ccde112a, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_dependent_exception_spec", method_pointer_c5a0e1d4a12d5438946500f79fed47fa, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_dynamic_exception_spec", method_pointer_ad658fdd4a145f1db2f3b92d38b2929b, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_exception_spec", method_pointer_b7544316f609532585cba90d8af7ef10, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_noexcept_exception_spec", method_pointer_5b08f6b127b25e098142f9a8bd8eafb4, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_trailing_return", method_pointer_3be322b57ca855b4a962e2a2375f003b, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_param_consumed", method_pointer_780703f8828d5f6c9765c5d13a5fcff3, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_sugared", method_pointer_98b89a30312d5ab28f47bcbb65dcf221, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_template_variadic", method_pointer_ee57e79864bf5b8fab6535463f919b42, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_variadic", method_pointer_a4f640dbed0c528a81519350c4be90be, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionProtoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionProtoType >, autowig::HeldType< class ::clang::FunctionType > >();
    }

}