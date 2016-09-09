/**********************************************************************************/
/*                                                                                */
/* PyClangLite: Python bindings for Clang                                         */
/*                                                                                */
/* Homepage: http://pyclanglite.readthedocs.io/                                   */
/*                                                                                */
/* Copyright (c) 2016 Pierre Fernique                                             */
/*                                                                                */
/* This software is distributed under the CeCILL-C license. You should have       */
/* received a copy of the legalcode along with this work. If not, see             */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/* File authors: Pierre Fernique <pfernique@gmail.com> (35)                       */
/*                                                                                */
/**********************************************************************************/

#include "_clanglite.h"


namespace autowig
{
}


void wrapper_ee4ed14ebca95be7b6de45571cde69c6()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_6f3ebf50fd455fe7bc98cb20587879a2)(class ::clang::Type  const *) = ::clang::FunctionProtoType::classof;
    class ::clang::QualType  (::clang::FunctionProtoType::*method_pointer_45d088c3d38757388d1568d62ff33fdd)() const = &::clang::FunctionProtoType::desugar;
    class ::clang::FunctionDecl  * (::clang::FunctionProtoType::*method_pointer_10ce64047c2751b285fae241f43a2407)() const = &::clang::FunctionProtoType::getExceptionSpecDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionProtoType::*method_pointer_018bdabeb83254c2813c8d05c5ced70f)() const = &::clang::FunctionProtoType::getExceptionSpecTemplate;
    class ::clang::QualType  (::clang::FunctionProtoType::*method_pointer_bd7fd69373b85912949efd8fae1ed47f)(unsigned int ) const = &::clang::FunctionProtoType::getExceptionType;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_5235f18c2bb0520690651275d2a24dbb)() const = &::clang::FunctionProtoType::getNumExceptions;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_9f3b63e98ee6591aa472b0d78a364ff7)() const = &::clang::FunctionProtoType::getNumParams;
    class ::clang::QualType  (::clang::FunctionProtoType::*method_pointer_b3246def90b05192854c6b5059dde3fa)(unsigned int ) const = &::clang::FunctionProtoType::getParamType;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_60b157732fc85892a1662a5d5926427f)() const = &::clang::FunctionProtoType::getTypeQuals;
    bool  (::clang::FunctionProtoType::*method_pointer_d5791b793ad15023826b2a934cad1afb)() const = &::clang::FunctionProtoType::hasAnyConsumedParams;
    bool  (::clang::FunctionProtoType::*method_pointer_e20e409b9e555317959cdbed5ebc19a4)() const = &::clang::FunctionProtoType::hasDependentExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_c08e39df525b5caca3171e05dcf5f1b1)() const = &::clang::FunctionProtoType::hasDynamicExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_d6102fc9ebd259d9bfcc549f1bd1fa13)() const = &::clang::FunctionProtoType::hasExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_ca31b924fb21505db896d33da4f8cb83)() const = &::clang::FunctionProtoType::hasNoexceptExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_a5b0a1af43ed5c3d89b59d84860c5be5)() const = &::clang::FunctionProtoType::hasTrailingReturn;
    bool  (::clang::FunctionProtoType::*method_pointer_38b7cc6c740154fb93d52e85381d19d9)(unsigned int ) const = &::clang::FunctionProtoType::isParamConsumed;
    bool  (::clang::FunctionProtoType::*method_pointer_83b611092ba957498814a963f9e25c2b)() const = &::clang::FunctionProtoType::isSugared;
    bool  (::clang::FunctionProtoType::*method_pointer_1a6836b273c35ea1b57797dba284332b)() const = &::clang::FunctionProtoType::isTemplateVariadic;
    bool  (::clang::FunctionProtoType::*method_pointer_18758466d96b5b27993b6c53ee2e6875)() const = &::clang::FunctionProtoType::isVariadic;
    boost::python::class_< class ::clang::FunctionProtoType, autowig::HeldType< class ::clang::FunctionProtoType >, boost::python::bases< class ::clang::FunctionType >, boost::noncopyable > class_ee4ed14ebca95be7b6de45571cde69c6("FunctionProtoType", "", boost::python::no_init);
    class_ee4ed14ebca95be7b6de45571cde69c6.def("classof", method_pointer_6f3ebf50fd455fe7bc98cb20587879a2, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("desugar", method_pointer_45d088c3d38757388d1568d62ff33fdd, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_exception_spec_decl", method_pointer_10ce64047c2751b285fae241f43a2407, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_exception_spec_template", method_pointer_018bdabeb83254c2813c8d05c5ced70f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_exception_type", method_pointer_bd7fd69373b85912949efd8fae1ed47f, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_num_exceptions", method_pointer_5235f18c2bb0520690651275d2a24dbb, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_num_params", method_pointer_9f3b63e98ee6591aa472b0d78a364ff7, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_param_type", method_pointer_b3246def90b05192854c6b5059dde3fa, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_type_quals", method_pointer_60b157732fc85892a1662a5d5926427f, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_any_consumed_params", method_pointer_d5791b793ad15023826b2a934cad1afb, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_dependent_exception_spec", method_pointer_e20e409b9e555317959cdbed5ebc19a4, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_dynamic_exception_spec", method_pointer_c08e39df525b5caca3171e05dcf5f1b1, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_exception_spec", method_pointer_d6102fc9ebd259d9bfcc549f1bd1fa13, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_noexcept_exception_spec", method_pointer_ca31b924fb21505db896d33da4f8cb83, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_trailing_return", method_pointer_a5b0a1af43ed5c3d89b59d84860c5be5, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_param_consumed", method_pointer_38b7cc6c740154fb93d52e85381d19d9, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_sugared", method_pointer_83b611092ba957498814a963f9e25c2b, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_template_variadic", method_pointer_1a6836b273c35ea1b57797dba284332b, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_variadic", method_pointer_18758466d96b5b27993b6c53ee2e6875, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionProtoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionProtoType >, autowig::HeldType< class ::clang::FunctionType > >();
    }

}