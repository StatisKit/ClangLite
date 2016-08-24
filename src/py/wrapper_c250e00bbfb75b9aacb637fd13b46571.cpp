#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_c250e00bbfb75b9aacb637fd13b46571()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_44f37bfc6a96592f9627f09bcfefac03)(class ::clang::Type  const *) = ::clang::ReferenceType::classof;
    class ::clang::QualType  (::clang::ReferenceType::*method_pointer_2c3ac0232906518a91a344ce3001cb3d)() const = &::clang::ReferenceType::getPointeeType;
    class ::clang::QualType  (::clang::ReferenceType::*method_pointer_944d82a1f3ed56c6950e7fa3e4e4a14f)() const = &::clang::ReferenceType::getPointeeTypeAsWritten;
    bool  (::clang::ReferenceType::*method_pointer_48d53012b30b580c8272a0ff9a95b533)() const = &::clang::ReferenceType::isInnerRef;
    bool  (::clang::ReferenceType::*method_pointer_a12da77f8dcf5dc2a6a07858a67bce5d)() const = &::clang::ReferenceType::isSpelledAsLValue;
    boost::python::class_< class ::clang::ReferenceType, autowig::HeldType< class ::clang::ReferenceType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_c250e00bbfb75b9aacb637fd13b46571("ReferenceType", "", boost::python::no_init);
    class_c250e00bbfb75b9aacb637fd13b46571.def("classof", method_pointer_44f37bfc6a96592f9627f09bcfefac03, "");
    class_c250e00bbfb75b9aacb637fd13b46571.def("get_pointee_type", method_pointer_2c3ac0232906518a91a344ce3001cb3d, "");
    class_c250e00bbfb75b9aacb637fd13b46571.def("get_pointee_type_as_written", method_pointer_944d82a1f3ed56c6950e7fa3e4e4a14f, "");
    class_c250e00bbfb75b9aacb637fd13b46571.def("is_inner_ref", method_pointer_48d53012b30b580c8272a0ff9a95b533, "");
    class_c250e00bbfb75b9aacb637fd13b46571.def("is_spelled_as_l_value", method_pointer_a12da77f8dcf5dc2a6a07858a67bce5d, "");
    class_c250e00bbfb75b9aacb637fd13b46571.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ReferenceType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ReferenceType >, autowig::HeldType< class ::clang::Type > >();
    }

}