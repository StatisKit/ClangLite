#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_808dfaeb3c825011b508a4347f0e64a5()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_34a9e2ae7e6a5b0aaff1d2b84604c55e)(class ::clang::Type  const *) = ::clang::FunctionType::classof;
    class ::clang::QualType  (::clang::FunctionType::*method_pointer_73ebd55951ba5b65931570f75e6d472b)(class ::clang::ASTContext  &) const = &::clang::FunctionType::getCallResultType;
    bool  (::clang::FunctionType::*method_pointer_79f12f48dae4507dac1fa42c4196d94b)() const = &::clang::FunctionType::getHasRegParm;
    bool  (::clang::FunctionType::*method_pointer_a1c2bc8a538d51d3af1ca0ac6bc2b94b)() const = &::clang::FunctionType::getNoReturnAttr;
    unsigned int  (::clang::FunctionType::*method_pointer_7c0155037fe858daafeb1fc0100d6ee2)() const = &::clang::FunctionType::getRegParmType;
    class ::clang::QualType  (::clang::FunctionType::*method_pointer_5bd6298167255f639598c7af27a9d2c6)() const = &::clang::FunctionType::getReturnType;
    bool  (::clang::FunctionType::*method_pointer_21440bbe886c5de0a2eaf6ab15a8917d)() const = &::clang::FunctionType::isConst;
    bool  (::clang::FunctionType::*method_pointer_ef4cb42f9613503995168ee69d9de7d1)() const = &::clang::FunctionType::isRestrict;
    bool  (::clang::FunctionType::*method_pointer_5c4aea57decc55eaa22902ad383afcf6)() const = &::clang::FunctionType::isVolatile;
    boost::python::class_< class ::clang::FunctionType, autowig::HeldType< class ::clang::FunctionType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_808dfaeb3c825011b508a4347f0e64a5("FunctionType", "", boost::python::no_init);
    class_808dfaeb3c825011b508a4347f0e64a5.def("classof", method_pointer_34a9e2ae7e6a5b0aaff1d2b84604c55e, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_call_result_type", method_pointer_73ebd55951ba5b65931570f75e6d472b, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_has_reg_parm", method_pointer_79f12f48dae4507dac1fa42c4196d94b, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_no_return_attr", method_pointer_a1c2bc8a538d51d3af1ca0ac6bc2b94b, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_reg_parm_type", method_pointer_7c0155037fe858daafeb1fc0100d6ee2, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_return_type", method_pointer_5bd6298167255f639598c7af27a9d2c6, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_const", method_pointer_21440bbe886c5de0a2eaf6ab15a8917d, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_restrict", method_pointer_ef4cb42f9613503995168ee69d9de7d1, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_volatile", method_pointer_5c4aea57decc55eaa22902ad383afcf6, "");
    class_808dfaeb3c825011b508a4347f0e64a5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionType >, autowig::HeldType< class ::clang::Type > >();
    }

}