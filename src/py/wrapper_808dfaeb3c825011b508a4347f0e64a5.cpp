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
    bool  (*method_pointer_3eed64e8f85e5651b762018e246f4b13)(class ::clang::Type  const *) = ::clang::FunctionType::classof;
    class ::clang::QualType  (::clang::FunctionType::*method_pointer_a686b1619201547fbd2e7ad6174b2a6c)(class ::clang::ASTContext  &) const = &::clang::FunctionType::getCallResultType;
    bool  (::clang::FunctionType::*method_pointer_2635899060d95029b2b1fdddc0474a0a)() const = &::clang::FunctionType::getHasRegParm;
    bool  (::clang::FunctionType::*method_pointer_088699b7619051948aad2bf1f5ebf943)() const = &::clang::FunctionType::getNoReturnAttr;
    unsigned int  (::clang::FunctionType::*method_pointer_c6f2098e2ba05245aef0b06750335139)() const = &::clang::FunctionType::getRegParmType;
    class ::clang::QualType  (::clang::FunctionType::*method_pointer_3279b5827f9e54ff8181acf7f73ff037)() const = &::clang::FunctionType::getReturnType;
    bool  (::clang::FunctionType::*method_pointer_7c050f8c4e0357288205388e964e3634)() const = &::clang::FunctionType::isConst;
    bool  (::clang::FunctionType::*method_pointer_c61bb7d4e8555b49a4d820eef7a34495)() const = &::clang::FunctionType::isRestrict;
    bool  (::clang::FunctionType::*method_pointer_4c41dae40f3e585eb52bcf36b2f5376e)() const = &::clang::FunctionType::isVolatile;
    boost::python::class_< class ::clang::FunctionType, autowig::HeldType< class ::clang::FunctionType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_808dfaeb3c825011b508a4347f0e64a5("FunctionType", "", boost::python::no_init);
    class_808dfaeb3c825011b508a4347f0e64a5.def("classof", method_pointer_3eed64e8f85e5651b762018e246f4b13, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_call_result_type", method_pointer_a686b1619201547fbd2e7ad6174b2a6c, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_has_reg_parm", method_pointer_2635899060d95029b2b1fdddc0474a0a, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_no_return_attr", method_pointer_088699b7619051948aad2bf1f5ebf943, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_reg_parm_type", method_pointer_c6f2098e2ba05245aef0b06750335139, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_return_type", method_pointer_3279b5827f9e54ff8181acf7f73ff037, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_const", method_pointer_7c050f8c4e0357288205388e964e3634, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_restrict", method_pointer_c61bb7d4e8555b49a4d820eef7a34495, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_volatile", method_pointer_4c41dae40f3e585eb52bcf36b2f5376e, "");
    class_808dfaeb3c825011b508a4347f0e64a5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionType >, autowig::HeldType< class ::clang::Type > >();
    }

}