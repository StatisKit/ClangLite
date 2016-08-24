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
    bool  (*method_pointer_093c2e340e15584bac456ef9cd3baba4)(class ::clang::Type  const *) = ::clang::FunctionType::classof;
    class ::clang::QualType  (::clang::FunctionType::*method_pointer_fa7e744d939756718841d7045bb8d8e7)(class ::clang::ASTContext  &) const = &::clang::FunctionType::getCallResultType;
    bool  (::clang::FunctionType::*method_pointer_866784996415524d9c5ac2f775f8b971)() const = &::clang::FunctionType::getHasRegParm;
    bool  (::clang::FunctionType::*method_pointer_5e8f3b4c98f25a9db6bd7475ced8bf94)() const = &::clang::FunctionType::getNoReturnAttr;
    unsigned int  (::clang::FunctionType::*method_pointer_386ee1f8aa5e5323bb21cdcd9bbf09a7)() const = &::clang::FunctionType::getRegParmType;
    class ::clang::QualType  (::clang::FunctionType::*method_pointer_8f362eee4abd5f68a97275f1ec989e3b)() const = &::clang::FunctionType::getReturnType;
    bool  (::clang::FunctionType::*method_pointer_1c4040e976b456658775d447bd6a6153)() const = &::clang::FunctionType::isConst;
    bool  (::clang::FunctionType::*method_pointer_72e62386d7f05ee3b5cc08c10e7a8f18)() const = &::clang::FunctionType::isRestrict;
    bool  (::clang::FunctionType::*method_pointer_ec86c60827ef50a489753c5aab685a4e)() const = &::clang::FunctionType::isVolatile;
    boost::python::class_< class ::clang::FunctionType, autowig::HeldType< class ::clang::FunctionType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_808dfaeb3c825011b508a4347f0e64a5("FunctionType", "", boost::python::no_init);
    class_808dfaeb3c825011b508a4347f0e64a5.def("classof", method_pointer_093c2e340e15584bac456ef9cd3baba4, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_call_result_type", method_pointer_fa7e744d939756718841d7045bb8d8e7, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_has_reg_parm", method_pointer_866784996415524d9c5ac2f775f8b971, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_no_return_attr", method_pointer_5e8f3b4c98f25a9db6bd7475ced8bf94, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_reg_parm_type", method_pointer_386ee1f8aa5e5323bb21cdcd9bbf09a7, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_return_type", method_pointer_8f362eee4abd5f68a97275f1ec989e3b, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_const", method_pointer_1c4040e976b456658775d447bd6a6153, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_restrict", method_pointer_72e62386d7f05ee3b5cc08c10e7a8f18, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_volatile", method_pointer_ec86c60827ef50a489753c5aab685a4e, "");
    class_808dfaeb3c825011b508a4347f0e64a5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionType >, autowig::HeldType< class ::clang::Type > >();
    }

}