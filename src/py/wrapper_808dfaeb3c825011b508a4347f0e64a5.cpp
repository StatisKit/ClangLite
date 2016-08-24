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
    bool  (*method_pointer_7e8eddb4a55052de8745ebb2b64d2819)(class ::clang::Type  const *) = ::clang::FunctionType::classof;
    class ::clang::QualType  (::clang::FunctionType::*method_pointer_ff8e2282f18852ad8b9292ab4d57a2f9)(class ::clang::ASTContext  &) const = &::clang::FunctionType::getCallResultType;
    bool  (::clang::FunctionType::*method_pointer_336ee58cdcaa58cf8cde7e20cc3eef9a)() const = &::clang::FunctionType::getHasRegParm;
    bool  (::clang::FunctionType::*method_pointer_1a22ae8d5e8958c385c23fa62fce2ac7)() const = &::clang::FunctionType::getNoReturnAttr;
    unsigned int  (::clang::FunctionType::*method_pointer_f0a70849d9c4504d90ed405f784b3141)() const = &::clang::FunctionType::getRegParmType;
    class ::clang::QualType  (::clang::FunctionType::*method_pointer_dca4bc0e622e5f87938bcc3e0ec24ece)() const = &::clang::FunctionType::getReturnType;
    bool  (::clang::FunctionType::*method_pointer_f2a85100c5715883b0844a5ef48bda74)() const = &::clang::FunctionType::isConst;
    bool  (::clang::FunctionType::*method_pointer_f3b9b73c59de50ada64a794d5ee49120)() const = &::clang::FunctionType::isRestrict;
    bool  (::clang::FunctionType::*method_pointer_ec947c7578735474a16b3bcb25231fc9)() const = &::clang::FunctionType::isVolatile;
    boost::python::class_< class ::clang::FunctionType, autowig::HeldType< class ::clang::FunctionType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_808dfaeb3c825011b508a4347f0e64a5("FunctionType", "", boost::python::no_init);
    class_808dfaeb3c825011b508a4347f0e64a5.def("classof", method_pointer_7e8eddb4a55052de8745ebb2b64d2819, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_call_result_type", method_pointer_ff8e2282f18852ad8b9292ab4d57a2f9, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_has_reg_parm", method_pointer_336ee58cdcaa58cf8cde7e20cc3eef9a, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_no_return_attr", method_pointer_1a22ae8d5e8958c385c23fa62fce2ac7, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_reg_parm_type", method_pointer_f0a70849d9c4504d90ed405f784b3141, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_return_type", method_pointer_dca4bc0e622e5f87938bcc3e0ec24ece, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_const", method_pointer_f2a85100c5715883b0844a5ef48bda74, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_restrict", method_pointer_f3b9b73c59de50ada64a794d5ee49120, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_volatile", method_pointer_ec947c7578735474a16b3bcb25231fc9, "");
    class_808dfaeb3c825011b508a4347f0e64a5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionType >, autowig::HeldType< class ::clang::Type > >();
    }

}