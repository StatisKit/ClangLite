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
    bool  (*method_pointer_d5077877698550b5a1cc60cc7953fc75)(class ::clang::Type  const *) = ::clang::FunctionType::classof;
    bool  (::clang::FunctionType::*method_pointer_c52cac9b5b9b50dda5a5243bf330182c)() const = &::clang::FunctionType::getHasRegParm;
    bool  (::clang::FunctionType::*method_pointer_02c660913d0f5bf690f8874d516d6da6)() const = &::clang::FunctionType::getNoReturnAttr;
    unsigned int  (::clang::FunctionType::*method_pointer_e5e300432a8b5ed1846a75435d3db018)() const = &::clang::FunctionType::getRegParmType;
    bool  (::clang::FunctionType::*method_pointer_d6cb8d5f640d5379873df488e7fa6718)() const = &::clang::FunctionType::isConst;
    bool  (::clang::FunctionType::*method_pointer_86676caa81775950b190ccb98852e085)() const = &::clang::FunctionType::isRestrict;
    bool  (::clang::FunctionType::*method_pointer_86ed52c084ed527da34d0020ed0d5bb2)() const = &::clang::FunctionType::isVolatile;
    boost::python::class_< class ::clang::FunctionType, autowig::HeldType< class ::clang::FunctionType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_808dfaeb3c825011b508a4347f0e64a5("FunctionType", "", boost::python::no_init);
    class_808dfaeb3c825011b508a4347f0e64a5.def("classof", method_pointer_d5077877698550b5a1cc60cc7953fc75, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_has_reg_parm", method_pointer_c52cac9b5b9b50dda5a5243bf330182c, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_no_return_attr", method_pointer_02c660913d0f5bf690f8874d516d6da6, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_reg_parm_type", method_pointer_e5e300432a8b5ed1846a75435d3db018, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_const", method_pointer_d6cb8d5f640d5379873df488e7fa6718, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_restrict", method_pointer_86676caa81775950b190ccb98852e085, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_volatile", method_pointer_86ed52c084ed527da34d0020ed0d5bb2, "");
    class_808dfaeb3c825011b508a4347f0e64a5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionType >, autowig::HeldType< class ::clang::Type > >();
    }

}