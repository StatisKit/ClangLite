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
    bool  (*method_pointer_1884d506221655828906b73c63806d68)(class ::clang::Type  const *) = ::clang::FunctionType::classof;
    bool  (::clang::FunctionType::*method_pointer_e11ae5b005b75913b6cf85b5885010f8)() const = &::clang::FunctionType::getHasRegParm;
    bool  (::clang::FunctionType::*method_pointer_c53fcd87abc85a0e8413f5412def5aea)() const = &::clang::FunctionType::getNoReturnAttr;
    unsigned int  (::clang::FunctionType::*method_pointer_a2917296df2d5689928578cd8220a9a5)() const = &::clang::FunctionType::getRegParmType;
    bool  (::clang::FunctionType::*method_pointer_9f70cd4db514592598ccacc91e96ddeb)() const = &::clang::FunctionType::isConst;
    bool  (::clang::FunctionType::*method_pointer_89cf718c3f5b5134aeb63bddc526f3f3)() const = &::clang::FunctionType::isRestrict;
    bool  (::clang::FunctionType::*method_pointer_94957b763101543587988bd8a96c604f)() const = &::clang::FunctionType::isVolatile;
    boost::python::class_< class ::clang::FunctionType, autowig::HeldType< class ::clang::FunctionType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_808dfaeb3c825011b508a4347f0e64a5("FunctionType", "", boost::python::no_init);
    class_808dfaeb3c825011b508a4347f0e64a5.def("classof", method_pointer_1884d506221655828906b73c63806d68, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_has_reg_parm", method_pointer_e11ae5b005b75913b6cf85b5885010f8, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_no_return_attr", method_pointer_c53fcd87abc85a0e8413f5412def5aea, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_reg_parm_type", method_pointer_a2917296df2d5689928578cd8220a9a5, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_const", method_pointer_9f70cd4db514592598ccacc91e96ddeb, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_restrict", method_pointer_89cf718c3f5b5134aeb63bddc526f3f3, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_volatile", method_pointer_94957b763101543587988bd8a96c604f, "");
    class_808dfaeb3c825011b508a4347f0e64a5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionType >, autowig::HeldType< class ::clang::Type > >();
    }

}