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
    bool  (*method_pointer_db6c3583300a54d191fff850e776c281)(class ::clang::Type  const *) = ::clang::VectorType::classof;
    unsigned int  (::clang::VectorType::*method_pointer_d6e80c96f60452c3ba177bc25957eb26)() const = &::clang::VectorType::getNumElements;
    bool  (::clang::VectorType::*method_pointer_f28a0e45b3b35ed98770c4ea46532136)() const = &::clang::VectorType::isSugared;
    bool  (*method_pointer_d6a7b75096075a7593259e950143b6d4)(unsigned int ) = ::clang::VectorType::isVectorSizeTooLarge;
    boost::python::class_< class ::clang::VectorType, autowig::HeldType< class ::clang::VectorType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_f549ce8f1b295099974aaf1951f7fd53("VectorType", "", boost::python::no_init);
    class_f549ce8f1b295099974aaf1951f7fd53.def("classof", method_pointer_db6c3583300a54d191fff850e776c281, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_num_elements", method_pointer_d6e80c96f60452c3ba177bc25957eb26, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_sugared", method_pointer_f28a0e45b3b35ed98770c4ea46532136, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_vector_size_too_large", method_pointer_d6a7b75096075a7593259e950143b6d4, "");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("is_vector_size_too_large");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VectorType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VectorType >, autowig::HeldType< class ::clang::Type > >();
    }

}