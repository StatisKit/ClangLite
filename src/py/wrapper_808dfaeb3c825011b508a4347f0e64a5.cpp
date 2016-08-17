#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_808dfaeb3c825011b508a4347f0e64a5()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    unsigned int  (::clang::FunctionType::*method_pointer_95085e4dfe71556f9d06bb5b7169c31e)() const = &::clang::FunctionType::getRegParmType;
    bool  (::clang::FunctionType::*method_pointer_8c5c26b1abe0590198bf7c026a4f5b3a)() const = &::clang::FunctionType::isVolatile;
    bool  (*method_pointer_648568a2ee46529f84842902be412cda)(class ::clang::Type  const *) = ::clang::FunctionType::classof;
    bool  (::clang::FunctionType::*method_pointer_31816911104d5b548b1bc322716cb72a)() const = &::clang::FunctionType::isConst;
    bool  (::clang::FunctionType::*method_pointer_c0cf830e1d375c53943fd6d9f2916b50)() const = &::clang::FunctionType::isRestrict;
    bool  (::clang::FunctionType::*method_pointer_08eb2e308cbb5103965d6fe836047985)() const = &::clang::FunctionType::getNoReturnAttr;
    bool  (::clang::FunctionType::*method_pointer_398e22d870555c8dbfee62bad975512c)() const = &::clang::FunctionType::getHasRegParm;
    boost::python::class_< class ::clang::FunctionType, autowig::HeldType< class ::clang::FunctionType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_808dfaeb3c825011b508a4347f0e64a5("FunctionType", "", boost::python::no_init);
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_reg_parm_type", method_pointer_95085e4dfe71556f9d06bb5b7169c31e, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_volatile", method_pointer_8c5c26b1abe0590198bf7c026a4f5b3a, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("classof", method_pointer_648568a2ee46529f84842902be412cda, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_const", method_pointer_31816911104d5b548b1bc322716cb72a, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_restrict", method_pointer_c0cf830e1d375c53943fd6d9f2916b50, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_no_return_attr", method_pointer_08eb2e308cbb5103965d6fe836047985, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_has_reg_parm", method_pointer_398e22d870555c8dbfee62bad975512c, "");
    class_808dfaeb3c825011b508a4347f0e64a5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionType >, autowig::HeldType< class ::clang::Type > >();
    }

}