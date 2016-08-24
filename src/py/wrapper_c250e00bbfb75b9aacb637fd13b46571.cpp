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
    bool  (*method_pointer_533627e6e35358be94d6b243b0da5d0d)(class ::clang::Type  const *) = ::clang::ReferenceType::classof;
    class ::clang::QualType  (::clang::ReferenceType::*method_pointer_c2d7ec29b10254bd85a9a5e245b76258)() const = &::clang::ReferenceType::getPointeeType;
    class ::clang::QualType  (::clang::ReferenceType::*method_pointer_a07bc5b0d15f5da7a997e3bda83d92c2)() const = &::clang::ReferenceType::getPointeeTypeAsWritten;
    bool  (::clang::ReferenceType::*method_pointer_6477c1d3778658c5bbb05f76f55bebed)() const = &::clang::ReferenceType::isInnerRef;
    bool  (::clang::ReferenceType::*method_pointer_5b97e678929d58f193939bc355eb4caf)() const = &::clang::ReferenceType::isSpelledAsLValue;
    boost::python::class_< class ::clang::ReferenceType, autowig::HeldType< class ::clang::ReferenceType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_c250e00bbfb75b9aacb637fd13b46571("ReferenceType", "", boost::python::no_init);
    class_c250e00bbfb75b9aacb637fd13b46571.def("classof", method_pointer_533627e6e35358be94d6b243b0da5d0d, "");
    class_c250e00bbfb75b9aacb637fd13b46571.def("get_pointee_type", method_pointer_c2d7ec29b10254bd85a9a5e245b76258, "");
    class_c250e00bbfb75b9aacb637fd13b46571.def("get_pointee_type_as_written", method_pointer_a07bc5b0d15f5da7a997e3bda83d92c2, "");
    class_c250e00bbfb75b9aacb637fd13b46571.def("is_inner_ref", method_pointer_6477c1d3778658c5bbb05f76f55bebed, "");
    class_c250e00bbfb75b9aacb637fd13b46571.def("is_spelled_as_l_value", method_pointer_5b97e678929d58f193939bc355eb4caf, "");
    class_c250e00bbfb75b9aacb637fd13b46571.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ReferenceType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ReferenceType >, autowig::HeldType< class ::clang::Type > >();
    }

}