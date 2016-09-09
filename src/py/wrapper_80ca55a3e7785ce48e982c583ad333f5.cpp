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


void wrapper_80ca55a3e7785ce48e982c583ad333f5()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::EnumConstantDecl  * (*method_pointer_2a896139e3185eb3b233706a5498eb4c)(class ::clang::ASTContext  &, unsigned int ) = ::clang::EnumConstantDecl::CreateDeserialized;
    bool  (*method_pointer_037e2743a6225ae09b3528c120df3fc6)(class ::clang::Decl  const *) = ::clang::EnumConstantDecl::classof;
    bool  (*method_pointer_bb6434ed4c2a5fd2a666a011a6897cfb)(enum ::clang::Decl::Kind ) = ::clang::EnumConstantDecl::classofKind;
    class ::clang::EnumConstantDecl  * (::clang::EnumConstantDecl::*method_pointer_76c806365a845abab13b9ee5f03c195b)() = &::clang::EnumConstantDecl::getCanonicalDecl;
    class ::clang::EnumConstantDecl  const * (::clang::EnumConstantDecl::*method_pointer_0060059cc5ee5b2da02a3a3eff907145)() const = &::clang::EnumConstantDecl::getCanonicalDecl;
    boost::python::class_< class ::clang::EnumConstantDecl, autowig::HeldType< class ::clang::EnumConstantDecl >, boost::python::bases< class ::clang::ValueDecl >, boost::noncopyable > class_80ca55a3e7785ce48e982c583ad333f5("EnumConstantDecl", "", boost::python::no_init);
    class_80ca55a3e7785ce48e982c583ad333f5.def("create_deserialized", method_pointer_2a896139e3185eb3b233706a5498eb4c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_80ca55a3e7785ce48e982c583ad333f5.def("classof", method_pointer_037e2743a6225ae09b3528c120df3fc6, "");
    class_80ca55a3e7785ce48e982c583ad333f5.def("classof_kind", method_pointer_bb6434ed4c2a5fd2a666a011a6897cfb, "");
    class_80ca55a3e7785ce48e982c583ad333f5.def("get_canonical_decl", method_pointer_76c806365a845abab13b9ee5f03c195b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_80ca55a3e7785ce48e982c583ad333f5.def("get_canonical_decl", method_pointer_0060059cc5ee5b2da02a3a3eff907145, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_80ca55a3e7785ce48e982c583ad333f5.staticmethod("classof_kind");
    class_80ca55a3e7785ce48e982c583ad333f5.staticmethod("create_deserialized");
    class_80ca55a3e7785ce48e982c583ad333f5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::EnumConstantDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::EnumConstantDecl >, autowig::HeldType< class ::clang::ValueDecl > >();
    }

}