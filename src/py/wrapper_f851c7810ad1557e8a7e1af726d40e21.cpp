#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::ConstantArrayType const volatile * get_pointer<class ::clang::ConstantArrayType const volatile >(class ::clang::ConstantArrayType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f851c7810ad1557e8a7e1af726d40e21()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::ConstantArrayType::*method_pointer_80541c3ebe145f59b6f7608c856cb1f3)() const = &::clang::ConstantArrayType::isSugared;
    class ::clang::QualType  (::clang::ConstantArrayType::*method_pointer_fbc2e7f4543d584a904fb8834cc5b698)() const = &::clang::ConstantArrayType::desugar;
    unsigned int  (*method_pointer_a044f250cb3f50f0a99c10f0554ce254)(class ::clang::ASTContext &) = ::clang::ConstantArrayType::getMaxSizeBits;
    bool  (*method_pointer_8f70bd4f364656b9b53df83b653acc78)(class ::clang::Type const *) = ::clang::ConstantArrayType::classof;
    boost::python::class_< class ::clang::ConstantArrayType, autowig::Held< class ::clang::ConstantArrayType >::Type, boost::python::bases< class ::clang::ArrayType >, boost::noncopyable > class_f851c7810ad1557e8a7e1af726d40e21("ConstantArrayType", "", boost::python::no_init);
    class_f851c7810ad1557e8a7e1af726d40e21.def("is_sugared", method_pointer_80541c3ebe145f59b6f7608c856cb1f3, "");
    class_f851c7810ad1557e8a7e1af726d40e21.def("desugar", method_pointer_fbc2e7f4543d584a904fb8834cc5b698, "");
    class_f851c7810ad1557e8a7e1af726d40e21.def("get_max_size_bits", method_pointer_a044f250cb3f50f0a99c10f0554ce254, "Determine the maximum number of active bits that an array's size can\nrequire, which limits the maximum size of the array.\n\n:Parameter:\n    `Context` (:py:class:`clanglite.clang.ASTContext`) - Undocumented\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_f851c7810ad1557e8a7e1af726d40e21.def("classof", method_pointer_8f70bd4f364656b9b53df83b653acc78, "");
    class_f851c7810ad1557e8a7e1af726d40e21.staticmethod("get_max_size_bits");
    class_f851c7810ad1557e8a7e1af726d40e21.staticmethod("classof");

    if(autowig::Held< class ::clang::ConstantArrayType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::ConstantArrayType >::Type, autowig::Held< class ::clang::ArrayType >::Type >();
    }

}