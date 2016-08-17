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
    bool  (::clang::FunctionType::*method_pointer_ed2ee877ddfd53ada44496db665f60b7)() const = &::clang::FunctionType::isConst;
    bool  (::clang::FunctionType::*method_pointer_74cdab6d6a8a5441964d3e3b59be2044)() const = &::clang::FunctionType::getNoReturnAttr;
    bool  (::clang::FunctionType::*method_pointer_7a18e7e63c8854d8b4502e6d74f689e7)() const = &::clang::FunctionType::isRestrict;
    bool  (::clang::FunctionType::*method_pointer_fef88c254bf85712a2b8bf45e27773e8)() const = &::clang::FunctionType::getHasRegParm;
    unsigned int  (::clang::FunctionType::*method_pointer_cd63d14d96b05e52ac7bb6b06d5e36e2)() const = &::clang::FunctionType::getRegParmType;
    bool  (*method_pointer_438b8ca7f4cb5c70a4b018c60dbfdd7d)(class ::clang::Type  const *) = ::clang::FunctionType::classof;
    bool  (::clang::FunctionType::*method_pointer_3ff761e17b835d9a954fc5607fa2d3f1)() const = &::clang::FunctionType::isVolatile;
    boost::python::class_< class ::clang::FunctionType, autowig::HeldType< class ::clang::FunctionType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_808dfaeb3c825011b508a4347f0e64a5("FunctionType", "", boost::python::no_init);
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_const", method_pointer_ed2ee877ddfd53ada44496db665f60b7, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_no_return_attr", method_pointer_74cdab6d6a8a5441964d3e3b59be2044, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_restrict", method_pointer_7a18e7e63c8854d8b4502e6d74f689e7, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_has_reg_parm", method_pointer_fef88c254bf85712a2b8bf45e27773e8, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_reg_parm_type", method_pointer_cd63d14d96b05e52ac7bb6b06d5e36e2, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("classof", method_pointer_438b8ca7f4cb5c70a4b018c60dbfdd7d, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_volatile", method_pointer_3ff761e17b835d9a954fc5607fa2d3f1, "");
    class_808dfaeb3c825011b508a4347f0e64a5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionType >, autowig::HeldType< class ::clang::Type > >();
    }

}