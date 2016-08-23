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
    bool  (*method_pointer_5219bfa679fa5d0cbe15a7bf67208b75)(class ::clang::Type  const *) = ::clang::FunctionType::classof;
    bool  (::clang::FunctionType::*method_pointer_1e57059f73ec566ab5b009e340bd8005)() const = &::clang::FunctionType::getHasRegParm;
    bool  (::clang::FunctionType::*method_pointer_ecaade147175554dbdb262804bdcb67b)() const = &::clang::FunctionType::getNoReturnAttr;
    unsigned int  (::clang::FunctionType::*method_pointer_20c1fa05f3e65c859383cca586160739)() const = &::clang::FunctionType::getRegParmType;
    bool  (::clang::FunctionType::*method_pointer_756afc21074a581aba29fe6e30384445)() const = &::clang::FunctionType::isConst;
    bool  (::clang::FunctionType::*method_pointer_71952b8f6a725596aa3c29370851c765)() const = &::clang::FunctionType::isRestrict;
    bool  (::clang::FunctionType::*method_pointer_4b74d5a64ba057a1bb491ee915e39c45)() const = &::clang::FunctionType::isVolatile;
    boost::python::class_< class ::clang::FunctionType, autowig::HeldType< class ::clang::FunctionType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_808dfaeb3c825011b508a4347f0e64a5("FunctionType", "", boost::python::no_init);
    class_808dfaeb3c825011b508a4347f0e64a5.def("classof", method_pointer_5219bfa679fa5d0cbe15a7bf67208b75, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_has_reg_parm", method_pointer_1e57059f73ec566ab5b009e340bd8005, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_no_return_attr", method_pointer_ecaade147175554dbdb262804bdcb67b, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_reg_parm_type", method_pointer_20c1fa05f3e65c859383cca586160739, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_const", method_pointer_756afc21074a581aba29fe6e30384445, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_restrict", method_pointer_71952b8f6a725596aa3c29370851c765, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_volatile", method_pointer_4b74d5a64ba057a1bb491ee915e39c45, "");
    class_808dfaeb3c825011b508a4347f0e64a5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionType >, autowig::HeldType< class ::clang::Type > >();
    }

}