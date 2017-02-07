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
/* File authors: Pierre Fernique <pfernique@gmail.com> (37)                       */
/*                                                                                */
/**********************************************************************************/

#include "_clanglite.h"


namespace autowig
{
}


void wrapper_808dfaeb3c825011b508a4347f0e64a5()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_6493ec084a4952098157ef66ce3a21f7)(class ::clang::Type  const *) = ::clang::FunctionType::classof;
    class ::clang::QualType  (::clang::FunctionType::*method_pointer_eb9330d505f15ffe81d1d8c44d3c202d)(const class ::clang::ASTContext  &) const = &::clang::FunctionType::getCallResultType;
    bool  (::clang::FunctionType::*method_pointer_7add434352e75f32b8912b0cfd8b03d5)() const = &::clang::FunctionType::getHasRegParm;
    bool  (::clang::FunctionType::*method_pointer_0c19ff001e005eb6be66c6df03ff86c5)() const = &::clang::FunctionType::getNoReturnAttr;
    unsigned int  (::clang::FunctionType::*method_pointer_217bfbdf128c581fb90ed5b483fa8539)() const = &::clang::FunctionType::getRegParmType;
    class ::clang::QualType  (::clang::FunctionType::*method_pointer_61e6803144355b53a6c703231cc14f83)() const = &::clang::FunctionType::getReturnType;
    bool  (::clang::FunctionType::*method_pointer_cd276ccb68265ce693f937e501dc8fe5)() const = &::clang::FunctionType::isConst;
    bool  (::clang::FunctionType::*method_pointer_3590ef04828e50ae95dee104398a7d3f)() const = &::clang::FunctionType::isRestrict;
    bool  (::clang::FunctionType::*method_pointer_6f4c10dd572454fb97fd1431aeb10878)() const = &::clang::FunctionType::isVolatile;
    boost::python::class_< class ::clang::FunctionType, autowig::HeldType< class ::clang::FunctionType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_808dfaeb3c825011b508a4347f0e64a5("FunctionType", "", boost::python::no_init);
    class_808dfaeb3c825011b508a4347f0e64a5.def("classof", method_pointer_6493ec084a4952098157ef66ce3a21f7, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_call_result_type", method_pointer_eb9330d505f15ffe81d1d8c44d3c202d, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_has_reg_parm", method_pointer_7add434352e75f32b8912b0cfd8b03d5, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_no_return_attr", method_pointer_0c19ff001e005eb6be66c6df03ff86c5, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_reg_parm_type", method_pointer_217bfbdf128c581fb90ed5b483fa8539, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_return_type", method_pointer_61e6803144355b53a6c703231cc14f83, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_const", method_pointer_cd276ccb68265ce693f937e501dc8fe5, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_restrict", method_pointer_3590ef04828e50ae95dee104398a7d3f, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_volatile", method_pointer_6f4c10dd572454fb97fd1431aeb10878, "");
    class_808dfaeb3c825011b508a4347f0e64a5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionType >, autowig::HeldType< class ::clang::Type > >();
    }

}