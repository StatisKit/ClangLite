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
    bool  (*method_pointer_e8362a63e3be5437b31a99f338f0cc75)(class ::clang::Type  const *) = ::clang::FunctionType::classof;
    class ::clang::QualType  (::clang::FunctionType::*method_pointer_2dc3fd2fed6f5e7882eb6e16a6b3d42e)(class ::clang::ASTContext  &) const = &::clang::FunctionType::getCallResultType;
    bool  (::clang::FunctionType::*method_pointer_995aac71c984531bbbc741975c8bbefc)() const = &::clang::FunctionType::getHasRegParm;
    bool  (::clang::FunctionType::*method_pointer_2c1200a2553c52c6abc5999375036877)() const = &::clang::FunctionType::getNoReturnAttr;
    unsigned int  (::clang::FunctionType::*method_pointer_e7d64e80b4dd5451af62f6a8e2610ba6)() const = &::clang::FunctionType::getRegParmType;
    class ::clang::QualType  (::clang::FunctionType::*method_pointer_a072d55831c553959b8fa12871608e7e)() const = &::clang::FunctionType::getReturnType;
    bool  (::clang::FunctionType::*method_pointer_09bb7129024e523b86eb55d06f509f8e)() const = &::clang::FunctionType::isConst;
    bool  (::clang::FunctionType::*method_pointer_2163207ef1935f9bab31a0c9a45bb969)() const = &::clang::FunctionType::isRestrict;
    bool  (::clang::FunctionType::*method_pointer_7acee63fea14514f8985c951e1ab79e6)() const = &::clang::FunctionType::isVolatile;
    boost::python::class_< class ::clang::FunctionType, autowig::HeldType< class ::clang::FunctionType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_808dfaeb3c825011b508a4347f0e64a5("FunctionType", "", boost::python::no_init);
    class_808dfaeb3c825011b508a4347f0e64a5.def("classof", method_pointer_e8362a63e3be5437b31a99f338f0cc75, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_call_result_type", method_pointer_2dc3fd2fed6f5e7882eb6e16a6b3d42e, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_has_reg_parm", method_pointer_995aac71c984531bbbc741975c8bbefc, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_no_return_attr", method_pointer_2c1200a2553c52c6abc5999375036877, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_reg_parm_type", method_pointer_e7d64e80b4dd5451af62f6a8e2610ba6, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_return_type", method_pointer_a072d55831c553959b8fa12871608e7e, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_const", method_pointer_09bb7129024e523b86eb55d06f509f8e, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_restrict", method_pointer_2163207ef1935f9bab31a0c9a45bb969, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_volatile", method_pointer_7acee63fea14514f8985c951e1ab79e6, "");
    class_808dfaeb3c825011b508a4347f0e64a5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionType >, autowig::HeldType< class ::clang::Type > >();
    }

}