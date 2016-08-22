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
    bool  (*method_pointer_bbb92e395b3e5f6aae5a7a94f5404812)(class ::clang::Type  const *) = ::clang::FunctionType::classof;
    bool  (::clang::FunctionType::*method_pointer_94b69a97a8d65f169d40db175a92d011)() const = &::clang::FunctionType::getHasRegParm;
    bool  (::clang::FunctionType::*method_pointer_453327908d6854088d71edfd7eb34936)() const = &::clang::FunctionType::getNoReturnAttr;
    unsigned int  (::clang::FunctionType::*method_pointer_1251e8fd8029585fa31ab33416e18dc1)() const = &::clang::FunctionType::getRegParmType;
    bool  (::clang::FunctionType::*method_pointer_4a060125a8335db19e3b991f538a9982)() const = &::clang::FunctionType::isConst;
    bool  (::clang::FunctionType::*method_pointer_c8c1790c5a7d5779a42f616b2ec49294)() const = &::clang::FunctionType::isRestrict;
    bool  (::clang::FunctionType::*method_pointer_66e75283f4015873b056b5561b52d176)() const = &::clang::FunctionType::isVolatile;
    boost::python::class_< class ::clang::FunctionType, autowig::HeldType< class ::clang::FunctionType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_808dfaeb3c825011b508a4347f0e64a5("FunctionType", "", boost::python::no_init);
    class_808dfaeb3c825011b508a4347f0e64a5.def("classof", method_pointer_bbb92e395b3e5f6aae5a7a94f5404812, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_has_reg_parm", method_pointer_94b69a97a8d65f169d40db175a92d011, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_no_return_attr", method_pointer_453327908d6854088d71edfd7eb34936, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_reg_parm_type", method_pointer_1251e8fd8029585fa31ab33416e18dc1, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_const", method_pointer_4a060125a8335db19e3b991f538a9982, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_restrict", method_pointer_c8c1790c5a7d5779a42f616b2ec49294, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_volatile", method_pointer_66e75283f4015873b056b5561b52d176, "");
    class_808dfaeb3c825011b508a4347f0e64a5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionType >, autowig::HeldType< class ::clang::Type > >();
    }

}