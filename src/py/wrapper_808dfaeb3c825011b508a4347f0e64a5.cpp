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
    bool  (*method_pointer_1a5b0a12196d5ed4be72fa600923f885)(class ::clang::Type  const *) = ::clang::FunctionType::classof;
    class ::clang::QualType  (::clang::FunctionType::*method_pointer_557f30967c435847a00826c1af3296eb)(class ::clang::ASTContext  &) const = &::clang::FunctionType::getCallResultType;
    bool  (::clang::FunctionType::*method_pointer_80fa401080be575e8bc527b216469ec6)() const = &::clang::FunctionType::getHasRegParm;
    bool  (::clang::FunctionType::*method_pointer_72aaa841d0d75bf188588c002006e9e5)() const = &::clang::FunctionType::getNoReturnAttr;
    unsigned int  (::clang::FunctionType::*method_pointer_d3f9136cd5515bde8c8f20354a452f25)() const = &::clang::FunctionType::getRegParmType;
    class ::clang::QualType  (::clang::FunctionType::*method_pointer_6f9a712bc0ec5ab78b0fe1ec0b29a9bf)() const = &::clang::FunctionType::getReturnType;
    bool  (::clang::FunctionType::*method_pointer_cf536a438c9251008ac7dafe9a937602)() const = &::clang::FunctionType::isConst;
    bool  (::clang::FunctionType::*method_pointer_19955dd19a9b5a67bc8b2b52de3b24fd)() const = &::clang::FunctionType::isRestrict;
    bool  (::clang::FunctionType::*method_pointer_dc85768536fd562485960e4ad50152ce)() const = &::clang::FunctionType::isVolatile;
    boost::python::class_< class ::clang::FunctionType, autowig::HeldType< class ::clang::FunctionType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_808dfaeb3c825011b508a4347f0e64a5("FunctionType", "", boost::python::no_init);
    class_808dfaeb3c825011b508a4347f0e64a5.def("classof", method_pointer_1a5b0a12196d5ed4be72fa600923f885, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_call_result_type", method_pointer_557f30967c435847a00826c1af3296eb, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_has_reg_parm", method_pointer_80fa401080be575e8bc527b216469ec6, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_no_return_attr", method_pointer_72aaa841d0d75bf188588c002006e9e5, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_reg_parm_type", method_pointer_d3f9136cd5515bde8c8f20354a452f25, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_return_type", method_pointer_6f9a712bc0ec5ab78b0fe1ec0b29a9bf, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_const", method_pointer_cf536a438c9251008ac7dafe9a937602, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_restrict", method_pointer_19955dd19a9b5a67bc8b2b52de3b24fd, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_volatile", method_pointer_dc85768536fd562485960e4ad50152ce, "");
    class_808dfaeb3c825011b508a4347f0e64a5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionType >, autowig::HeldType< class ::clang::Type > >();
    }

}