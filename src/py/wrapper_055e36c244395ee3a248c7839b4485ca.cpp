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


void wrapper_055e36c244395ee3a248c7839b4485ca()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::IndirectFieldDecl  * (*method_pointer_12ce4b68ba8d57838779875d644e7182)(class ::clang::ASTContext  &, unsigned int ) = ::clang::IndirectFieldDecl::CreateDeserialized;
    bool  (*method_pointer_7cbfffc6e80152c9bfcd0aabe8e16309)(class ::clang::Decl  const *) = ::clang::IndirectFieldDecl::classof;
    bool  (*method_pointer_4ccdd4b66ed051bbab9035add112c359)(enum ::clang::Decl::Kind ) = ::clang::IndirectFieldDecl::classofKind;
    class ::clang::FieldDecl  * (::clang::IndirectFieldDecl::*method_pointer_723bb1d7e01e507f9204b6bad6f43dde)() const = &::clang::IndirectFieldDecl::getAnonField;
    class ::clang::IndirectFieldDecl  * (::clang::IndirectFieldDecl::*method_pointer_2e8fb15aa5e8570cb8e6259789e66bc6)() = &::clang::IndirectFieldDecl::getCanonicalDecl;
    class ::clang::IndirectFieldDecl  const * (::clang::IndirectFieldDecl::*method_pointer_0ffe410b229f5d97bffee577e6e6c650)() const = &::clang::IndirectFieldDecl::getCanonicalDecl;
    unsigned int  (::clang::IndirectFieldDecl::*method_pointer_c895dcd3dfe45f87b911248c949e9f23)() const = &::clang::IndirectFieldDecl::getChainingSize;
    class ::clang::VarDecl  * (::clang::IndirectFieldDecl::*method_pointer_942235c6e9c357539f4fa7055b4bc562)() const = &::clang::IndirectFieldDecl::getVarDecl;
    boost::python::class_< class ::clang::IndirectFieldDecl, autowig::HeldType< class ::clang::IndirectFieldDecl >, boost::python::bases< class ::clang::ValueDecl >, boost::noncopyable > class_055e36c244395ee3a248c7839b4485ca("IndirectFieldDecl", "", boost::python::no_init);
    class_055e36c244395ee3a248c7839b4485ca.def("create_deserialized", method_pointer_12ce4b68ba8d57838779875d644e7182, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.def("classof", method_pointer_7cbfffc6e80152c9bfcd0aabe8e16309, "");
    class_055e36c244395ee3a248c7839b4485ca.def("classof_kind", method_pointer_4ccdd4b66ed051bbab9035add112c359, "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_anon_field", method_pointer_723bb1d7e01e507f9204b6bad6f43dde, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_canonical_decl", method_pointer_2e8fb15aa5e8570cb8e6259789e66bc6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_canonical_decl", method_pointer_0ffe410b229f5d97bffee577e6e6c650, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_chaining_size", method_pointer_c895dcd3dfe45f87b911248c949e9f23, "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_var_decl", method_pointer_942235c6e9c357539f4fa7055b4bc562, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.staticmethod("classof_kind");
    class_055e36c244395ee3a248c7839b4485ca.staticmethod("create_deserialized");
    class_055e36c244395ee3a248c7839b4485ca.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::IndirectFieldDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::IndirectFieldDecl >, autowig::HeldType< class ::clang::ValueDecl > >();
    }

}