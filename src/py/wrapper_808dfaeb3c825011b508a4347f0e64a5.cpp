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
    bool  (*method_pointer_7cd0e57fd620545e8adc7da82c20c187)(class ::clang::Type  const *) = ::clang::FunctionType::classof;
    bool  (::clang::FunctionType::*method_pointer_a49bc1c5a1315d1dabcba81a3bdba121)() const = &::clang::FunctionType::getHasRegParm;
    bool  (::clang::FunctionType::*method_pointer_a2c9709f2cd054c8a5d09959af77dd67)() const = &::clang::FunctionType::getNoReturnAttr;
    unsigned int  (::clang::FunctionType::*method_pointer_74930e4b5e9e55cf9ebaef1a58d8f68b)() const = &::clang::FunctionType::getRegParmType;
    bool  (::clang::FunctionType::*method_pointer_70f3de5b99c058b1935a44db6a707f81)() const = &::clang::FunctionType::isConst;
    bool  (::clang::FunctionType::*method_pointer_7d84fdb74f1f5df2a80acf38da9d7b97)() const = &::clang::FunctionType::isRestrict;
    bool  (::clang::FunctionType::*method_pointer_bc7d2a0d603b5a9583483b252e758e6f)() const = &::clang::FunctionType::isVolatile;
    boost::python::class_< class ::clang::FunctionType, autowig::HeldType< class ::clang::FunctionType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_808dfaeb3c825011b508a4347f0e64a5("FunctionType", "", boost::python::no_init);
    class_808dfaeb3c825011b508a4347f0e64a5.def("classof", method_pointer_7cd0e57fd620545e8adc7da82c20c187, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_has_reg_parm", method_pointer_a49bc1c5a1315d1dabcba81a3bdba121, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_no_return_attr", method_pointer_a2c9709f2cd054c8a5d09959af77dd67, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_reg_parm_type", method_pointer_74930e4b5e9e55cf9ebaef1a58d8f68b, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_const", method_pointer_70f3de5b99c058b1935a44db6a707f81, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_restrict", method_pointer_7d84fdb74f1f5df2a80acf38da9d7b97, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_volatile", method_pointer_bc7d2a0d603b5a9583483b252e758e6f, "");
    class_808dfaeb3c825011b508a4347f0e64a5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionType >, autowig::HeldType< class ::clang::Type > >();
    }

}