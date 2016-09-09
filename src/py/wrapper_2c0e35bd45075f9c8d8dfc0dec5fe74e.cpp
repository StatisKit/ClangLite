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


void wrapper_2c0e35bd45075f9c8d8dfc0dec5fe74e()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ExternCContextDecl  * (*method_pointer_61cca4b114715995a12ddd88ef3034c0)(class ::clang::DeclContext  const *) = ::clang::ExternCContextDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_bf05cddbcac95548a41f2a5025089c2b)(class ::clang::ExternCContextDecl  const *) = ::clang::ExternCContextDecl::castToDeclContext;
    bool  (*method_pointer_eff10e260fe2566e9f319bd1f4b06c4b)(class ::clang::Decl  const *) = ::clang::ExternCContextDecl::classof;
    bool  (*method_pointer_ba4a4e55b37a5e5f9b4b6e86ccf71ced)(enum ::clang::Decl::Kind ) = ::clang::ExternCContextDecl::classofKind;
    boost::python::class_< class ::clang::ExternCContextDecl, autowig::HeldType< class ::clang::ExternCContextDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_2c0e35bd45075f9c8d8dfc0dec5fe74e("ExternCContextDecl", "", boost::python::no_init);
    class_2c0e35bd45075f9c8d8dfc0dec5fe74e.def("cast_from_decl_context", method_pointer_61cca4b114715995a12ddd88ef3034c0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_2c0e35bd45075f9c8d8dfc0dec5fe74e.def("cast_to_decl_context", method_pointer_bf05cddbcac95548a41f2a5025089c2b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_2c0e35bd45075f9c8d8dfc0dec5fe74e.def("classof", method_pointer_eff10e260fe2566e9f319bd1f4b06c4b, "");
    class_2c0e35bd45075f9c8d8dfc0dec5fe74e.def("classof_kind", method_pointer_ba4a4e55b37a5e5f9b4b6e86ccf71ced, "");
    class_2c0e35bd45075f9c8d8dfc0dec5fe74e.staticmethod("classof_kind");
    class_2c0e35bd45075f9c8d8dfc0dec5fe74e.staticmethod("classof");
    class_2c0e35bd45075f9c8d8dfc0dec5fe74e.staticmethod("cast_from_decl_context");
    class_2c0e35bd45075f9c8d8dfc0dec5fe74e.staticmethod("cast_to_decl_context");

    if(std::is_class< autowig::HeldType< class ::clang::ExternCContextDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ExternCContextDecl >, autowig::HeldType< class ::clang::Decl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ExternCContextDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}