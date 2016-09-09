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


void wrapper_0a741a99c7fd512dbe7c31ae23782c5f()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_aa6c7ef727cf5f8f8d93118095981384)(class ::clang::Decl  const *) = ::clang::ValueDecl::classof;
    bool  (*method_pointer_fc2cc9f2cd97596f8426c7d53dff1200)(enum ::clang::Decl::Kind ) = ::clang::ValueDecl::classofKind;
    class ::clang::QualType  (::clang::ValueDecl::*method_pointer_e9b2462a0bbb5a6b9a209b57d845535c)() const = &::clang::ValueDecl::getType;
    bool  (::clang::ValueDecl::*method_pointer_52a16b80f3945101965cce6c7104c72b)() const = &::clang::ValueDecl::isWeak;
    void  (::clang::ValueDecl::*method_pointer_49166638add95536ba1bbb17819a179d)(class ::clang::QualType ) = &::clang::ValueDecl::setType;
    boost::python::class_< class ::clang::ValueDecl, autowig::HeldType< class ::clang::ValueDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_0a741a99c7fd512dbe7c31ae23782c5f("ValueDecl", "", boost::python::no_init);
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("classof", method_pointer_aa6c7ef727cf5f8f8d93118095981384, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("classof_kind", method_pointer_fc2cc9f2cd97596f8426c7d53dff1200, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("get_type", method_pointer_e9b2462a0bbb5a6b9a209b57d845535c, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("is_weak", method_pointer_52a16b80f3945101965cce6c7104c72b, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("set_type", method_pointer_49166638add95536ba1bbb17819a179d, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.staticmethod("classof_kind");
    class_0a741a99c7fd512dbe7c31ae23782c5f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ValueDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ValueDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}