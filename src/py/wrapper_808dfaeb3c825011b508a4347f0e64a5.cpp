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
    bool  (*method_pointer_9d9d71d230f254dca30012cd479988e5)(class ::clang::Type  const *) = ::clang::FunctionType::classof;
    bool  (::clang::FunctionType::*method_pointer_f0fdce2945645626b74a9ff8a443bc8f)() const = &::clang::FunctionType::getHasRegParm;
    bool  (::clang::FunctionType::*method_pointer_b506030962575da18a9c9d2dbf7e693e)() const = &::clang::FunctionType::getNoReturnAttr;
    unsigned int  (::clang::FunctionType::*method_pointer_7994d1f5544556b691de8a338974b9be)() const = &::clang::FunctionType::getRegParmType;
    bool  (::clang::FunctionType::*method_pointer_d4a1b3ce2f1b5c2e8251fb69fff8b76a)() const = &::clang::FunctionType::isConst;
    bool  (::clang::FunctionType::*method_pointer_78ceb8360cd250fbad270c5c5abe5d59)() const = &::clang::FunctionType::isRestrict;
    bool  (::clang::FunctionType::*method_pointer_a70a4d0f21c558e8af7cbdc3ac505de3)() const = &::clang::FunctionType::isVolatile;
    boost::python::class_< class ::clang::FunctionType, autowig::HeldType< class ::clang::FunctionType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_808dfaeb3c825011b508a4347f0e64a5("FunctionType", "", boost::python::no_init);
    class_808dfaeb3c825011b508a4347f0e64a5.def("classof", method_pointer_9d9d71d230f254dca30012cd479988e5, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_has_reg_parm", method_pointer_f0fdce2945645626b74a9ff8a443bc8f, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_no_return_attr", method_pointer_b506030962575da18a9c9d2dbf7e693e, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_reg_parm_type", method_pointer_7994d1f5544556b691de8a338974b9be, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_const", method_pointer_d4a1b3ce2f1b5c2e8251fb69fff8b76a, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_restrict", method_pointer_78ceb8360cd250fbad270c5c5abe5d59, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_volatile", method_pointer_a70a4d0f21c558e8af7cbdc3ac505de3, "");
    class_808dfaeb3c825011b508a4347f0e64a5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionType >, autowig::HeldType< class ::clang::Type > >();
    }

}