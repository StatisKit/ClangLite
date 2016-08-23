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
    bool  (*method_pointer_7dc47751b9bc55d489dee62b7b2b884b)(class ::clang::Type  const *) = ::clang::FunctionType::classof;
    bool  (::clang::FunctionType::*method_pointer_970133d9d44d55cc873e536fb3304b5b)() const = &::clang::FunctionType::getHasRegParm;
    bool  (::clang::FunctionType::*method_pointer_d48f81745cfb5b9a990ab39d32d8846e)() const = &::clang::FunctionType::getNoReturnAttr;
    unsigned int  (::clang::FunctionType::*method_pointer_c7ab9e782be65d08add824c9380de7d5)() const = &::clang::FunctionType::getRegParmType;
    bool  (::clang::FunctionType::*method_pointer_efff150e18735e0abf297e2b45f7b961)() const = &::clang::FunctionType::isConst;
    bool  (::clang::FunctionType::*method_pointer_a75530d283685578bbda524fd8e0d8cb)() const = &::clang::FunctionType::isRestrict;
    bool  (::clang::FunctionType::*method_pointer_3b681cddafb45161b2034cf927b85028)() const = &::clang::FunctionType::isVolatile;
    boost::python::class_< class ::clang::FunctionType, autowig::HeldType< class ::clang::FunctionType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_808dfaeb3c825011b508a4347f0e64a5("FunctionType", "", boost::python::no_init);
    class_808dfaeb3c825011b508a4347f0e64a5.def("classof", method_pointer_7dc47751b9bc55d489dee62b7b2b884b, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_has_reg_parm", method_pointer_970133d9d44d55cc873e536fb3304b5b, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_no_return_attr", method_pointer_d48f81745cfb5b9a990ab39d32d8846e, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_reg_parm_type", method_pointer_c7ab9e782be65d08add824c9380de7d5, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_const", method_pointer_efff150e18735e0abf297e2b45f7b961, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_restrict", method_pointer_a75530d283685578bbda524fd8e0d8cb, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_volatile", method_pointer_3b681cddafb45161b2034cf927b85028, "");
    class_808dfaeb3c825011b508a4347f0e64a5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionType >, autowig::HeldType< class ::clang::Type > >();
    }

}