#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::ReferenceType const volatile * get_pointer<class ::clang::ReferenceType const volatile >(class ::clang::ReferenceType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c250e00bbfb75b9aacb637fd13b46571()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::ReferenceType::*method_pointer_d82dfd1b5b9759de8236ce45be69383a)() const = &::clang::ReferenceType::isSpelledAsLValue;
    bool  (::clang::ReferenceType::*method_pointer_b79fafc81e6056fba1f8591507f7c279)() const = &::clang::ReferenceType::isInnerRef;
    class ::clang::QualType  (::clang::ReferenceType::*method_pointer_160344a51e7b5a56971161cf9532f92d)() const = &::clang::ReferenceType::getPointeeTypeAsWritten;
    class ::clang::QualType  (::clang::ReferenceType::*method_pointer_8620fa47fb275d07b12daca1cfdc9743)() const = &::clang::ReferenceType::getPointeeType;
    bool  (*method_pointer_81835e39dcd75ddeac44000b376fd6e9)(class ::clang::Type const *) = ::clang::ReferenceType::classof;
    boost::python::class_< class ::clang::ReferenceType, autowig::Held< class ::clang::ReferenceType >::Type, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_c250e00bbfb75b9aacb637fd13b46571("ReferenceType", "", boost::python::no_init);
    class_c250e00bbfb75b9aacb637fd13b46571.def("is_spelled_as_l_value", method_pointer_d82dfd1b5b9759de8236ce45be69383a, "");
    class_c250e00bbfb75b9aacb637fd13b46571.def("is_inner_ref", method_pointer_b79fafc81e6056fba1f8591507f7c279, "");
    class_c250e00bbfb75b9aacb637fd13b46571.def("get_pointee_type_as_written", method_pointer_160344a51e7b5a56971161cf9532f92d, "");
    class_c250e00bbfb75b9aacb637fd13b46571.def("get_pointee_type", method_pointer_8620fa47fb275d07b12daca1cfdc9743, "");
    class_c250e00bbfb75b9aacb637fd13b46571.def("classof", method_pointer_81835e39dcd75ddeac44000b376fd6e9, "");
    class_c250e00bbfb75b9aacb637fd13b46571.staticmethod("classof");

    if(autowig::Held< class ::clang::ReferenceType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::ReferenceType >::Type, autowig::Held< class ::clang::Type >::Type >();
    }

}