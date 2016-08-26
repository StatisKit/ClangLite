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
    bool  (*method_pointer_4ec1a5fc789d5805a4951cfda268a8e2)(class ::clang::Type  const *) = ::clang::VectorType::classof;
    unsigned int  (::clang::VectorType::*method_pointer_3f1860c758785617b024cc5de0ae57a9)() const = &::clang::VectorType::getNumElements;
    bool  (::clang::VectorType::*method_pointer_e7fecc2ac1d0546d8cb45ebf12fa83f4)() const = &::clang::VectorType::isSugared;
    bool  (*method_pointer_029c5fd089f351f4bb6a45865732e693)(unsigned int ) = ::clang::VectorType::isVectorSizeTooLarge;
    boost::python::class_< class ::clang::VectorType, autowig::HeldType< class ::clang::VectorType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_f549ce8f1b295099974aaf1951f7fd53("VectorType", "", boost::python::no_init);
    class_f549ce8f1b295099974aaf1951f7fd53.def("classof", method_pointer_4ec1a5fc789d5805a4951cfda268a8e2, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_num_elements", method_pointer_3f1860c758785617b024cc5de0ae57a9, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_sugared", method_pointer_e7fecc2ac1d0546d8cb45ebf12fa83f4, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_vector_size_too_large", method_pointer_029c5fd089f351f4bb6a45865732e693, "");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("is_vector_size_too_large");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VectorType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VectorType >, autowig::HeldType< class ::clang::Type > >();
    }

}