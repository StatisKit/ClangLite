#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::VectorType const volatile * get_pointer<class ::clang::VectorType const volatile >(class ::clang::VectorType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f549ce8f1b295099974aaf1951f7fd53()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_ffcaa330e2dc535d95b40688e6d494fc)() const = &::clang::VectorType::getElementType;
    unsigned int  (::clang::VectorType::*method_pointer_9b34064c120c5e4a8e79709be23a1e94)() const = &::clang::VectorType::getNumElements;
    bool  (*method_pointer_e1976e64e9325da4ae729d86966be033)(unsigned int ) = ::clang::VectorType::isVectorSizeTooLarge;
    bool  (::clang::VectorType::*method_pointer_7b0d5ea7849b530ba95ee64a0ae7cf99)() const = &::clang::VectorType::isSugared;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_b4ac00710d675f7b9b91549eec4bc982)() const = &::clang::VectorType::desugar;
    bool  (*method_pointer_2240ddb2f68f58d6a74904d9d1da833f)(class ::clang::Type const *) = ::clang::VectorType::classof;
    boost::python::class_< class ::clang::VectorType, autowig::Held< class ::clang::VectorType >::Type, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_f549ce8f1b295099974aaf1951f7fd53("VectorType", "", boost::python::no_init);
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_element_type", method_pointer_ffcaa330e2dc535d95b40688e6d494fc, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_num_elements", method_pointer_9b34064c120c5e4a8e79709be23a1e94, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_vector_size_too_large", method_pointer_e1976e64e9325da4ae729d86966be033, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_sugared", method_pointer_7b0d5ea7849b530ba95ee64a0ae7cf99, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("desugar", method_pointer_b4ac00710d675f7b9b91549eec4bc982, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("classof", method_pointer_2240ddb2f68f58d6a74904d9d1da833f, "");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("is_vector_size_too_large");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("classof");

    if(autowig::Held< class ::clang::VectorType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::VectorType >::Type, autowig::Held< class ::clang::Type >::Type >();
    }

}