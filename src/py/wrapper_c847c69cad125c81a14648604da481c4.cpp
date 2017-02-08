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
/* File authors: Pierre Fernique <pfernique@gmail.com> (31)                       */
/*                                                                                */
/**********************************************************************************/

#include "_clanglite.h"


namespace autowig
{
}


void wrapper_c847c69cad125c81a14648604da481c4()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TemplateArgumentList  * (*method_pointer_beceb3a40e74577388d418f3bb1a8b4b)(class ::clang::ASTContext  &, class ::clang::TemplateArgument  const *, unsigned int ) = ::clang::TemplateArgumentList::CreateCopy;
    class ::clang::TemplateArgument  const * (::clang::TemplateArgumentList::*method_pointer_b2e7f794f81c5c088595b54621d87c31)() const = &::clang::TemplateArgumentList::data;
    class ::clang::TemplateArgument  const & (::clang::TemplateArgumentList::*method_pointer_f154f17d327f57a8963d98387a6bd93e)(unsigned int ) const = &::clang::TemplateArgumentList::get;
    class ::clang::TemplateArgument  const & (::clang::TemplateArgumentList::*method_pointer_ec8660e8c3ad550fa88f33fe96e6cf9b)(unsigned int ) const = &::clang::TemplateArgumentList::operator[];
    unsigned int  (::clang::TemplateArgumentList::*method_pointer_4c4f473885bc53339e93466d3e2c5c71)() const = &::clang::TemplateArgumentList::size;
    boost::python::class_< class ::clang::TemplateArgumentList, autowig::HeldType< class ::clang::TemplateArgumentList >, boost::noncopyable > class_c847c69cad125c81a14648604da481c4("TemplateArgumentList", "", boost::python::no_init);
    class_c847c69cad125c81a14648604da481c4.def("create_copy", method_pointer_beceb3a40e74577388d418f3bb1a8b4b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_c847c69cad125c81a14648604da481c4.def("data", method_pointer_b2e7f794f81c5c088595b54621d87c31, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_c847c69cad125c81a14648604da481c4.def("get", method_pointer_f154f17d327f57a8963d98387a6bd93e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c847c69cad125c81a14648604da481c4.def("__getitem__", method_pointer_ec8660e8c3ad550fa88f33fe96e6cf9b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c847c69cad125c81a14648604da481c4.def("size", method_pointer_4c4f473885bc53339e93466d3e2c5c71, "");
    class_c847c69cad125c81a14648604da481c4.staticmethod("create_copy");

}