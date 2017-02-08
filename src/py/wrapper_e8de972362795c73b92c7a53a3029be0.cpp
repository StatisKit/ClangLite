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
/* File authors: Pierre Fernique <pfernique@gmail.com> (36)                       */
/*                                                                                */
/**********************************************************************************/

#include "_clanglite.h"


namespace autowig
{
}


void wrapper_e8de972362795c73b92c7a53a3029be0()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::BlockDecl  * (*method_pointer_e71b3fe1e7e85a6eb9227db61c12f084)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::SourceLocation ) = ::clang::BlockDecl::Create;
    class ::clang::BlockDecl  * (*method_pointer_ceaabfde7a0a5c98a969ac0f1458743c)(class ::clang::ASTContext  &, unsigned int ) = ::clang::BlockDecl::CreateDeserialized;
    bool  (::clang::BlockDecl::*method_pointer_8f204ff2a3a95c17a744769ec02f5abe)() const = &::clang::BlockDecl::blockMissingReturnType;
    bool  (::clang::BlockDecl::*method_pointer_3c4584e12f1a5723afac7f94f2828754)() const = &::clang::BlockDecl::capturesCXXThis;
    bool  (::clang::BlockDecl::*method_pointer_33b458d810275281b703abf772d29c31)(class ::clang::VarDecl  const *) const = &::clang::BlockDecl::capturesVariable;
    class ::clang::BlockDecl  * (*method_pointer_f1ea83e214a75de4a3cdb59bbb28bd21)(class ::clang::DeclContext  const *) = ::clang::BlockDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_84effd7a853b585c93cc4db25dbb6f25)(class ::clang::BlockDecl  const *) = ::clang::BlockDecl::castToDeclContext;
    bool  (*method_pointer_d99e542d8aa15233b505c6e1dfb72ea5)(class ::clang::Decl  const *) = ::clang::BlockDecl::classof;
    bool  (*method_pointer_5a545e58073a5a41ab311c6f495571a5)(enum ::clang::Decl::Kind ) = ::clang::BlockDecl::classofKind;
    class ::clang::Decl  * (::clang::BlockDecl::*method_pointer_50a3491339b15eca8964bdecd93f2f97)() const = &::clang::BlockDecl::getBlockManglingContextDecl;
    unsigned int  (::clang::BlockDecl::*method_pointer_356a7315d3db54568fe09bf0591a1588)() const = &::clang::BlockDecl::getBlockManglingNumber;
    class ::clang::SourceLocation  (::clang::BlockDecl::*method_pointer_881bab98964250b7b7ae7b5973044c95)() const = &::clang::BlockDecl::getCaretLocation;
    unsigned int  (::clang::BlockDecl::*method_pointer_b069e0d4ff595ace9fc2c20461bbdd5a)() const = &::clang::BlockDecl::getNumCaptures;
    unsigned int  (::clang::BlockDecl::*method_pointer_5cbd93f83f5657dea091580c54a194ea)() const = &::clang::BlockDecl::getNumParams;
    class ::clang::ParmVarDecl  * (::clang::BlockDecl::*method_pointer_5aa7afc64c095df3a6e8cad40063b5c3)(unsigned int ) = &::clang::BlockDecl::getParamDecl;
    class ::clang::ParmVarDecl  const * (::clang::BlockDecl::*method_pointer_09b6e53af1cc5730acdd8b8a7c4fa556)(unsigned int ) const = &::clang::BlockDecl::getParamDecl;
    bool  (::clang::BlockDecl::*method_pointer_a11b25ee17ab5a70bee67546e5ddf9c9)() const = &::clang::BlockDecl::hasCaptures;
    bool  (::clang::BlockDecl::*method_pointer_e42263b543705c6db5143bb05cee98bf)() const = &::clang::BlockDecl::isConversionFromLambda;
    bool  (::clang::BlockDecl::*method_pointer_736ba23f663154f79f2d16ee941e3070)() const = &::clang::BlockDecl::isVariadic;
    bool  (::clang::BlockDecl::*method_pointer_823b2899e3785b018847f83bc78dcebb)() const = &::clang::BlockDecl::param_empty;
    unsigned int  (::clang::BlockDecl::*method_pointer_570548c468f65a59a83310f1efbade04)() const = &::clang::BlockDecl::param_size;
    void  (::clang::BlockDecl::*method_pointer_7c1ef01c6efa5c4a90aa30c044bb0447)(unsigned int , class ::clang::Decl  *) = &::clang::BlockDecl::setBlockMangling;
    void  (::clang::BlockDecl::*method_pointer_ec32fecb3fe15289b16e5f53ee29b435)(bool ) = &::clang::BlockDecl::setBlockMissingReturnType;
    void  (::clang::BlockDecl::*method_pointer_b14b52681c31552294d7cb57af7fb8d3)(bool ) = &::clang::BlockDecl::setIsConversionFromLambda;
    void  (::clang::BlockDecl::*method_pointer_1ed2098b23b55c01bb7f105e49042c00)(bool ) = &::clang::BlockDecl::setIsVariadic;
    boost::python::class_< class ::clang::BlockDecl, autowig::HeldType< class ::clang::BlockDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_e8de972362795c73b92c7a53a3029be0("BlockDecl", "", boost::python::no_init);
    class_e8de972362795c73b92c7a53a3029be0.def("create", method_pointer_e71b3fe1e7e85a6eb9227db61c12f084, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("create_deserialized", method_pointer_ceaabfde7a0a5c98a969ac0f1458743c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("block_missing_return_type", method_pointer_8f204ff2a3a95c17a744769ec02f5abe, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_cxx_this", method_pointer_3c4584e12f1a5723afac7f94f2828754, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_variable", method_pointer_33b458d810275281b703abf772d29c31, "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_from_decl_context", method_pointer_f1ea83e214a75de4a3cdb59bbb28bd21, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_to_decl_context", method_pointer_84effd7a853b585c93cc4db25dbb6f25, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof", method_pointer_d99e542d8aa15233b505c6e1dfb72ea5, "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof_kind", method_pointer_5a545e58073a5a41ab311c6f495571a5, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_context_decl", method_pointer_50a3491339b15eca8964bdecd93f2f97, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_number", method_pointer_356a7315d3db54568fe09bf0591a1588, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_caret_location", method_pointer_881bab98964250b7b7ae7b5973044c95, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_captures", method_pointer_b069e0d4ff595ace9fc2c20461bbdd5a, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_params", method_pointer_5cbd93f83f5657dea091580c54a194ea, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_5aa7afc64c095df3a6e8cad40063b5c3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_09b6e53af1cc5730acdd8b8a7c4fa556, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("has_captures", method_pointer_a11b25ee17ab5a70bee67546e5ddf9c9, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_conversion_from_lambda", method_pointer_e42263b543705c6db5143bb05cee98bf, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_variadic", method_pointer_736ba23f663154f79f2d16ee941e3070, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_empty", method_pointer_823b2899e3785b018847f83bc78dcebb, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_size", method_pointer_570548c468f65a59a83310f1efbade04, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_mangling", method_pointer_7c1ef01c6efa5c4a90aa30c044bb0447, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_missing_return_type", method_pointer_ec32fecb3fe15289b16e5f53ee29b435, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_conversion_from_lambda", method_pointer_b14b52681c31552294d7cb57af7fb8d3, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_variadic", method_pointer_1ed2098b23b55c01bb7f105e49042c00, "");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("cast_from_decl_context");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("cast_to_decl_context");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("create");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("classof_kind");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("classof");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("create_deserialized");

    if(std::is_class< autowig::HeldType< class ::clang::BlockDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BlockDecl >, autowig::HeldType< class ::clang::Decl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BlockDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}