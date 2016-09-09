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


void wrapper_39040e7b8b3d52478768b96bddf0e676()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCCompatibleAliasDecl  * (*method_pointer_a58d4aa7c1d0577d88c2a0986556bb47)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCCompatibleAliasDecl::CreateDeserialized;
    bool  (*method_pointer_40a9d729f0ee56dd85e6d3967acdea20)(class ::clang::Decl  const *) = ::clang::ObjCCompatibleAliasDecl::classof;
    bool  (*method_pointer_45646db164675b16a26255fb84012901)(enum ::clang::Decl::Kind ) = ::clang::ObjCCompatibleAliasDecl::classofKind;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCCompatibleAliasDecl::*method_pointer_25332119c6dc5b77add809d38e968a52)() = &::clang::ObjCCompatibleAliasDecl::getClassInterface;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCCompatibleAliasDecl::*method_pointer_94ea6e9118e853ecb3bd977b5e50a7ca)() const = &::clang::ObjCCompatibleAliasDecl::getClassInterface;
    void  (::clang::ObjCCompatibleAliasDecl::*method_pointer_fa3dcc11ba805d6c8e87f353a626fb10)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCCompatibleAliasDecl::setClassInterface;
    boost::python::class_< class ::clang::ObjCCompatibleAliasDecl, autowig::HeldType< class ::clang::ObjCCompatibleAliasDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_39040e7b8b3d52478768b96bddf0e676("ObjCCompatibleAliasDecl", "", boost::python::no_init);
    class_39040e7b8b3d52478768b96bddf0e676.def("create_deserialized", method_pointer_a58d4aa7c1d0577d88c2a0986556bb47, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_39040e7b8b3d52478768b96bddf0e676.def("classof", method_pointer_40a9d729f0ee56dd85e6d3967acdea20, "");
    class_39040e7b8b3d52478768b96bddf0e676.def("classof_kind", method_pointer_45646db164675b16a26255fb84012901, "");
    class_39040e7b8b3d52478768b96bddf0e676.def("get_class_interface", method_pointer_25332119c6dc5b77add809d38e968a52, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_39040e7b8b3d52478768b96bddf0e676.def("get_class_interface", method_pointer_94ea6e9118e853ecb3bd977b5e50a7ca, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_39040e7b8b3d52478768b96bddf0e676.def("set_class_interface", method_pointer_fa3dcc11ba805d6c8e87f353a626fb10, "");
    class_39040e7b8b3d52478768b96bddf0e676.staticmethod("classof_kind");
    class_39040e7b8b3d52478768b96bddf0e676.staticmethod("create_deserialized");
    class_39040e7b8b3d52478768b96bddf0e676.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCCompatibleAliasDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCCompatibleAliasDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}