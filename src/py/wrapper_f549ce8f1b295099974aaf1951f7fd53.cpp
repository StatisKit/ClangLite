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


void wrapper_f549ce8f1b295099974aaf1951f7fd53()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_78eaec6459885109bfea2f3b79b82e09)(class ::clang::Type  const *) = ::clang::VectorType::classof;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_0808d22fda9e54d8a5f37a55291a8177)() const = &::clang::VectorType::desugar;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_b74f1a7b1c6b5870adf1170ffb0effe1)() const = &::clang::VectorType::getElementType;
    unsigned int  (::clang::VectorType::*method_pointer_22c7409b4ee653838dea517c8be350d4)() const = &::clang::VectorType::getNumElements;
    bool  (::clang::VectorType::*method_pointer_febfd142936c5ab09c674b41e233126c)() const = &::clang::VectorType::isSugared;
    bool  (*method_pointer_95934d3541d45a3ab0924c1fdf8d4610)(unsigned int ) = ::clang::VectorType::isVectorSizeTooLarge;
    boost::python::class_< class ::clang::VectorType, autowig::HeldType< class ::clang::VectorType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_f549ce8f1b295099974aaf1951f7fd53("VectorType", "", boost::python::no_init);
    class_f549ce8f1b295099974aaf1951f7fd53.def("classof", method_pointer_78eaec6459885109bfea2f3b79b82e09, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("desugar", method_pointer_0808d22fda9e54d8a5f37a55291a8177, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_element_type", method_pointer_b74f1a7b1c6b5870adf1170ffb0effe1, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_num_elements", method_pointer_22c7409b4ee653838dea517c8be350d4, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_sugared", method_pointer_febfd142936c5ab09c674b41e233126c, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_vector_size_too_large", method_pointer_95934d3541d45a3ab0924c1fdf8d4610, "");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("is_vector_size_too_large");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VectorType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VectorType >, autowig::HeldType< class ::clang::Type > >();
    }

}