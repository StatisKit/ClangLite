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


void wrapper_89cd23d27d8a5d2aadb4907c3b1a773c()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_d78c61ec9b6251169918a04d2ff7a4a0)(class ::clang::Type  const *) = ::clang::ExtVectorType::classof;
    class ::clang::QualType  (::clang::ExtVectorType::*method_pointer_b6133b2008e1560cb56e2b4638329775)() const = &::clang::ExtVectorType::desugar;
    int  (*method_pointer_5ee21a9ac0025324864ddee06738cd88)(char ) = ::clang::ExtVectorType::getAccessorIdx;
    int  (*method_pointer_a359cef760155e7e97355a1c58820fcc)(char ) = ::clang::ExtVectorType::getNumericAccessorIdx;
    int  (*method_pointer_e0510e04439b5fed8bfb4b2a3a702f8a)(char ) = ::clang::ExtVectorType::getPointAccessorIdx;
    bool  (::clang::ExtVectorType::*method_pointer_9aa782d58f615bc094c6866cfcd744bb)(char ) const = &::clang::ExtVectorType::isAccessorWithinNumElements;
    bool  (::clang::ExtVectorType::*method_pointer_631e27aac0495359be98a39498deb420)() const = &::clang::ExtVectorType::isSugared;
    boost::python::class_< class ::clang::ExtVectorType, autowig::HeldType< class ::clang::ExtVectorType >, boost::python::bases< class ::clang::VectorType >, boost::noncopyable > class_89cd23d27d8a5d2aadb4907c3b1a773c("ExtVectorType", "", boost::python::no_init);
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("classof", method_pointer_d78c61ec9b6251169918a04d2ff7a4a0, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("desugar", method_pointer_b6133b2008e1560cb56e2b4638329775, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("get_accessor_idx", method_pointer_5ee21a9ac0025324864ddee06738cd88, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("get_numeric_accessor_idx", method_pointer_a359cef760155e7e97355a1c58820fcc, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("get_point_accessor_idx", method_pointer_e0510e04439b5fed8bfb4b2a3a702f8a, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("is_accessor_within_num_elements", method_pointer_9aa782d58f615bc094c6866cfcd744bb, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("is_sugared", method_pointer_631e27aac0495359be98a39498deb420, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.staticmethod("classof");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.staticmethod("get_numeric_accessor_idx");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.staticmethod("get_accessor_idx");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.staticmethod("get_point_accessor_idx");

    if(std::is_class< autowig::HeldType< class ::clang::ExtVectorType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ExtVectorType >, autowig::HeldType< class ::clang::VectorType > >();
    }

}