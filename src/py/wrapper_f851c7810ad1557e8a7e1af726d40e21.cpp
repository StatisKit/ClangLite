#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_f851c7810ad1557e8a7e1af726d40e21()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_b670ab31191953bfb68fe38d3e30bf2e)(class ::clang::Type  const *) = ::clang::ConstantArrayType::classof;
    unsigned int  (*method_pointer_4c92661c5d1a5524823525c443e546c0)(class ::clang::ASTContext  &) = ::clang::ConstantArrayType::getMaxSizeBits;
    bool  (::clang::ConstantArrayType::*method_pointer_d377cd5227d65f0fb7b948d4d953b56b)() const = &::clang::ConstantArrayType::isSugared;
    boost::python::class_< class ::clang::ConstantArrayType, autowig::HeldType< class ::clang::ConstantArrayType >, boost::python::bases< class ::clang::ArrayType >, boost::noncopyable > class_f851c7810ad1557e8a7e1af726d40e21("ConstantArrayType", "", boost::python::no_init);
    class_f851c7810ad1557e8a7e1af726d40e21.def("classof", method_pointer_b670ab31191953bfb68fe38d3e30bf2e, "");
    class_f851c7810ad1557e8a7e1af726d40e21.def("get_max_size_bits", method_pointer_4c92661c5d1a5524823525c443e546c0, "");
    class_f851c7810ad1557e8a7e1af726d40e21.def("is_sugared", method_pointer_d377cd5227d65f0fb7b948d4d953b56b, "");
    class_f851c7810ad1557e8a7e1af726d40e21.staticmethod("get_max_size_bits");
    class_f851c7810ad1557e8a7e1af726d40e21.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ConstantArrayType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ConstantArrayType >, autowig::HeldType< class ::clang::ArrayType > >();
    }

}