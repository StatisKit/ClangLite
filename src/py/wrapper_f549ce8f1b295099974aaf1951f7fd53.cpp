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
    bool  (*method_pointer_0c213d7a8b635229ae8561131223a7b2)(class ::clang::Type  const *) = ::clang::VectorType::classof;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_3e80eb8932445ce696834e052345b681)() const = &::clang::VectorType::desugar;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_fc89f86b31aa5c29aff4da6a64a3b231)() const = &::clang::VectorType::getElementType;
    unsigned int  (::clang::VectorType::*method_pointer_ee25f5680ad15e7cb61165c6ac14e9c1)() const = &::clang::VectorType::getNumElements;
    bool  (::clang::VectorType::*method_pointer_03ab0369a9fc5e6faba4df3ae9871a04)() const = &::clang::VectorType::isSugared;
    bool  (*method_pointer_a317c262319d5adaa5a019a2fc87df42)(unsigned int ) = ::clang::VectorType::isVectorSizeTooLarge;
    boost::python::class_< class ::clang::VectorType, autowig::HeldType< class ::clang::VectorType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_f549ce8f1b295099974aaf1951f7fd53("VectorType", "", boost::python::no_init);
    class_f549ce8f1b295099974aaf1951f7fd53.def("classof", method_pointer_0c213d7a8b635229ae8561131223a7b2, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("desugar", method_pointer_3e80eb8932445ce696834e052345b681, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_element_type", method_pointer_fc89f86b31aa5c29aff4da6a64a3b231, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_num_elements", method_pointer_ee25f5680ad15e7cb61165c6ac14e9c1, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_sugared", method_pointer_03ab0369a9fc5e6faba4df3ae9871a04, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_vector_size_too_large", method_pointer_a317c262319d5adaa5a019a2fc87df42, "");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("is_vector_size_too_large");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VectorType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VectorType >, autowig::HeldType< class ::clang::Type > >();
    }

}