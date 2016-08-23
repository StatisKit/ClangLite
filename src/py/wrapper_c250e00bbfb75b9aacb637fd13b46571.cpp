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
    bool  (*method_pointer_da42e6f83e7b5fca85e2254700a7cad1)(class ::clang::Type  const *) = ::clang::ReferenceType::classof;
    class ::clang::QualType  (::clang::ReferenceType::*method_pointer_5d2f2e56a81656d0a9047a0786f687d4)() const = &::clang::ReferenceType::getPointeeType;
    class ::clang::QualType  (::clang::ReferenceType::*method_pointer_8e614f953cbc5c6f8ba30665cc050d8c)() const = &::clang::ReferenceType::getPointeeTypeAsWritten;
    bool  (::clang::ReferenceType::*method_pointer_803d80cc523f52c594e07e1aa22b9946)() const = &::clang::ReferenceType::isInnerRef;
    bool  (::clang::ReferenceType::*method_pointer_1015a6f3b31a59078d2a2ffaf67dc661)() const = &::clang::ReferenceType::isSpelledAsLValue;
    boost::python::class_< class ::clang::ReferenceType, autowig::HeldType< class ::clang::ReferenceType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_c250e00bbfb75b9aacb637fd13b46571("ReferenceType", "", boost::python::no_init);
    class_c250e00bbfb75b9aacb637fd13b46571.def("classof", method_pointer_da42e6f83e7b5fca85e2254700a7cad1, "");
    class_c250e00bbfb75b9aacb637fd13b46571.def("get_pointee_type", method_pointer_5d2f2e56a81656d0a9047a0786f687d4, "");
    class_c250e00bbfb75b9aacb637fd13b46571.def("get_pointee_type_as_written", method_pointer_8e614f953cbc5c6f8ba30665cc050d8c, "");
    class_c250e00bbfb75b9aacb637fd13b46571.def("is_inner_ref", method_pointer_803d80cc523f52c594e07e1aa22b9946, "");
    class_c250e00bbfb75b9aacb637fd13b46571.def("is_spelled_as_l_value", method_pointer_1015a6f3b31a59078d2a2ffaf67dc661, "");
    class_c250e00bbfb75b9aacb637fd13b46571.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ReferenceType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ReferenceType >, autowig::HeldType< class ::clang::Type > >();
    }

}