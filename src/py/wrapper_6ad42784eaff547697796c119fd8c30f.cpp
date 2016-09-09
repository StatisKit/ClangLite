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


void wrapper_6ad42784eaff547697796c119fd8c30f()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_c70661cad2c752aeb1e16ee876f037c2)(class ::clang::Decl  const *) = ::clang::TemplateDecl::classof;
    bool  (*method_pointer_e570281e8f0455949e0af68efee6eb05)(enum ::clang::Decl::Kind ) = ::clang::TemplateDecl::classofKind;
    class ::clang::NamedDecl  * (::clang::TemplateDecl::*method_pointer_093a774e0644529fbd4bc0b749b69acc)() const = &::clang::TemplateDecl::getTemplatedDecl;
    boost::python::class_< class ::clang::TemplateDecl, autowig::HeldType< class ::clang::TemplateDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_6ad42784eaff547697796c119fd8c30f("TemplateDecl", "", boost::python::no_init);
    class_6ad42784eaff547697796c119fd8c30f.def("classof", method_pointer_c70661cad2c752aeb1e16ee876f037c2, "");
    class_6ad42784eaff547697796c119fd8c30f.def("classof_kind", method_pointer_e570281e8f0455949e0af68efee6eb05, "");
    class_6ad42784eaff547697796c119fd8c30f.def("get_templated_decl", method_pointer_093a774e0644529fbd4bc0b749b69acc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6ad42784eaff547697796c119fd8c30f.staticmethod("classof_kind");
    class_6ad42784eaff547697796c119fd8c30f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}