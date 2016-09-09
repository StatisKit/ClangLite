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


void wrapper_a049632b742a55ecb3317bc028db1124()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_b955809bc45d5e64a1423c0cb766e87f)(class ::clang::Decl  const *) = ::clang::NamedDecl::classof;
    bool  (*method_pointer_49c707d6987853e4880e28ecf5288124)(enum ::clang::Decl::Kind ) = ::clang::NamedDecl::classofKind;
    bool  (::clang::NamedDecl::*method_pointer_f7da0859758c569ea6986e6c9630004b)(class ::clang::NamedDecl  *, bool ) const = &::clang::NamedDecl::declarationReplaces;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_1ef6db40af0650169b55d136d9266fc3)() const = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_dbd3ce35005b5b64861fc743d7f99f59)() = &::clang::NamedDecl::getMostRecentDecl;
    class ::llvm::StringRef  (::clang::NamedDecl::*method_pointer_2ada965dc2f0523ba1d7b78a6414ff17)() const = &::clang::NamedDecl::getName;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_efed60635cab595f99d87e21cc14d12f)() = &::clang::NamedDecl::getUnderlyingDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_45d10eb6555c50689a4fb80d57c61584)() const = &::clang::NamedDecl::getUnderlyingDecl;
    bool  (::clang::NamedDecl::*method_pointer_19fd7878ed255edc91823f43d616ffec)() const = &::clang::NamedDecl::hasExternalFormalLinkage;
    bool  (::clang::NamedDecl::*method_pointer_f1672c044bf85cd4830677743dc5888a)() const = &::clang::NamedDecl::hasLinkage;
    bool  (::clang::NamedDecl::*method_pointer_5f0c3efaf1735d3793d9cff9fec7a36f)() const = &::clang::NamedDecl::hasLinkageBeenComputed;
    bool  (::clang::NamedDecl::*method_pointer_8c87fb20535e5bfcababf20d51baaba0)() const = &::clang::NamedDecl::isCXXClassMember;
    bool  (::clang::NamedDecl::*method_pointer_6726c21e35435fa28ef2976a1f94d33c)() const = &::clang::NamedDecl::isCXXInstanceMember;
    bool  (::clang::NamedDecl::*method_pointer_ca920f4fb3e4597b81a25ed6bcfab1cd)() const = &::clang::NamedDecl::isExternallyVisible;
    bool  (::clang::NamedDecl::*method_pointer_dc54e9851cd0505f8b4614415f3e5666)() const = &::clang::NamedDecl::isHidden;
    bool  (::clang::NamedDecl::*method_pointer_7bd011b798725ad8a2d4e22c219830f9)() const = &::clang::NamedDecl::isLinkageValid;
    void  (::clang::NamedDecl::*method_pointer_e568fe0a1f2858c3be03d3fa3fd33eaa)(bool ) = &::clang::NamedDecl::setHidden;
    struct function_group
    {
        static class ::boost::python::str  function_c9549762d1ec5c918a660633e76d36ec(class ::clang::NamedDecl  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::NamedDecl, autowig::HeldType< class ::clang::NamedDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_a049632b742a55ecb3317bc028db1124("NamedDecl", "", boost::python::no_init);
    class_a049632b742a55ecb3317bc028db1124.def("classof", method_pointer_b955809bc45d5e64a1423c0cb766e87f, "");
    class_a049632b742a55ecb3317bc028db1124.def("classof_kind", method_pointer_49c707d6987853e4880e28ecf5288124, "");
    class_a049632b742a55ecb3317bc028db1124.def("declaration_replaces", method_pointer_f7da0859758c569ea6986e6c9630004b, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_1ef6db40af0650169b55d136d9266fc3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_dbd3ce35005b5b64861fc743d7f99f59, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", method_pointer_2ada965dc2f0523ba1d7b78a6414ff17, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_efed60635cab595f99d87e21cc14d12f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_45d10eb6555c50689a4fb80d57c61584, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("has_external_formal_linkage", method_pointer_19fd7878ed255edc91823f43d616ffec, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage", method_pointer_f1672c044bf85cd4830677743dc5888a, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage_been_computed", method_pointer_5f0c3efaf1735d3793d9cff9fec7a36f, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_class_member", method_pointer_8c87fb20535e5bfcababf20d51baaba0, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_instance_member", method_pointer_6726c21e35435fa28ef2976a1f94d33c, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_externally_visible", method_pointer_ca920f4fb3e4597b81a25ed6bcfab1cd, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_hidden", method_pointer_dc54e9851cd0505f8b4614415f3e5666, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_linkage_valid", method_pointer_7bd011b798725ad8a2d4e22c219830f9, "");
    class_a049632b742a55ecb3317bc028db1124.def("set_hidden", method_pointer_e568fe0a1f2858c3be03d3fa3fd33eaa, "");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof_kind");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", function_group::function_c9549762d1ec5c918a660633e76d36ec, "");

    if(std::is_class< autowig::HeldType< class ::clang::NamedDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamedDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}