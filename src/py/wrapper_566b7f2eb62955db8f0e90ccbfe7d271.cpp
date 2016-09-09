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


void wrapper_566b7f2eb62955db8f0e90ccbfe7d271()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_798e26b09a575e98bd9d607c4c88daa2)(class ::clang::Type  const *) = ::clang::LocInfoType::classof;
    class ::clang::QualType  (::clang::LocInfoType::*method_pointer_a94db80dcd3a5049bbf35ff95f8acc31)() const = &::clang::LocInfoType::getType;
    boost::python::class_< class ::clang::LocInfoType, autowig::HeldType< class ::clang::LocInfoType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_566b7f2eb62955db8f0e90ccbfe7d271("LocInfoType", "", boost::python::no_init);
    class_566b7f2eb62955db8f0e90ccbfe7d271.def("classof", method_pointer_798e26b09a575e98bd9d607c4c88daa2, "");
    class_566b7f2eb62955db8f0e90ccbfe7d271.def("get_type", method_pointer_a94db80dcd3a5049bbf35ff95f8acc31, "");
    class_566b7f2eb62955db8f0e90ccbfe7d271.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::LocInfoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::LocInfoType >, autowig::HeldType< class ::clang::Type > >();
    }

}