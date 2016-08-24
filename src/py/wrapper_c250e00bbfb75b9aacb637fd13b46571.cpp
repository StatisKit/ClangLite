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
    bool  (*method_pointer_fe5e92a4ccaa5909985e7fbbae7c27b0)(class ::clang::Type  const *) = ::clang::ReferenceType::classof;
    class ::clang::QualType  (::clang::ReferenceType::*method_pointer_543ce45c61c7588594ae3a50c6d57f1a)() const = &::clang::ReferenceType::getPointeeType;
    class ::clang::QualType  (::clang::ReferenceType::*method_pointer_78bb066f18eb513385af9df31b7474ad)() const = &::clang::ReferenceType::getPointeeTypeAsWritten;
    bool  (::clang::ReferenceType::*method_pointer_e556ff37cb8754ffbcb4ae1a1b2be7c6)() const = &::clang::ReferenceType::isInnerRef;
    bool  (::clang::ReferenceType::*method_pointer_07b97bb3492e594d82b21f0931b183b2)() const = &::clang::ReferenceType::isSpelledAsLValue;
    boost::python::class_< class ::clang::ReferenceType, autowig::HeldType< class ::clang::ReferenceType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_c250e00bbfb75b9aacb637fd13b46571("ReferenceType", "", boost::python::no_init);
    class_c250e00bbfb75b9aacb637fd13b46571.def("classof", method_pointer_fe5e92a4ccaa5909985e7fbbae7c27b0, "");
    class_c250e00bbfb75b9aacb637fd13b46571.def("get_pointee_type", method_pointer_543ce45c61c7588594ae3a50c6d57f1a, "");
    class_c250e00bbfb75b9aacb637fd13b46571.def("get_pointee_type_as_written", method_pointer_78bb066f18eb513385af9df31b7474ad, "");
    class_c250e00bbfb75b9aacb637fd13b46571.def("is_inner_ref", method_pointer_e556ff37cb8754ffbcb4ae1a1b2be7c6, "");
    class_c250e00bbfb75b9aacb637fd13b46571.def("is_spelled_as_l_value", method_pointer_07b97bb3492e594d82b21f0931b183b2, "");
    class_c250e00bbfb75b9aacb637fd13b46571.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ReferenceType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ReferenceType >, autowig::HeldType< class ::clang::Type > >();
    }

}