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


void wrapper_1d580556003654da9f00e93300e8c7d9()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_b1b4be3137705b0d881ec800f5ea82fd)(class ::clang::Type  const *) = ::clang::AttributedType::classof;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_9785832ed6595dc199b390a9cd21fce7)() const = &::clang::AttributedType::desugar;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_1f8c21c3251f5448a9c7d3ca5adb6771)() const = &::clang::AttributedType::getEquivalentType;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_c87e1bbc757152a9a908d86217c49938)() const = &::clang::AttributedType::getModifiedType;
    bool  (::clang::AttributedType::*method_pointer_8ff2a1ca794f5a6889a014d72e22e830)() const = &::clang::AttributedType::isCallingConv;
    bool  (::clang::AttributedType::*method_pointer_f893156669735d76bd301a2b5e0ea6cc)() const = &::clang::AttributedType::isMSTypeSpec;
    bool  (::clang::AttributedType::*method_pointer_e23d54809ba25f9cbc969d55b7955e5f)() const = &::clang::AttributedType::isQualifier;
    bool  (::clang::AttributedType::*method_pointer_f161aaca523f5dfd8b49838e11e6862f)() const = &::clang::AttributedType::isSugared;
    boost::python::class_< class ::clang::AttributedType, autowig::HeldType< class ::clang::AttributedType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_1d580556003654da9f00e93300e8c7d9("AttributedType", "", boost::python::no_init);
    class_1d580556003654da9f00e93300e8c7d9.def("classof", method_pointer_b1b4be3137705b0d881ec800f5ea82fd, "");
    class_1d580556003654da9f00e93300e8c7d9.def("desugar", method_pointer_9785832ed6595dc199b390a9cd21fce7, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_equivalent_type", method_pointer_1f8c21c3251f5448a9c7d3ca5adb6771, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_modified_type", method_pointer_c87e1bbc757152a9a908d86217c49938, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_calling_conv", method_pointer_8ff2a1ca794f5a6889a014d72e22e830, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_ms_type_spec", method_pointer_f893156669735d76bd301a2b5e0ea6cc, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_qualifier", method_pointer_e23d54809ba25f9cbc969d55b7955e5f, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_sugared", method_pointer_f161aaca523f5dfd8b49838e11e6862f, "");
    class_1d580556003654da9f00e93300e8c7d9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AttributedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AttributedType >, autowig::HeldType< class ::clang::Type > >();
    }

}