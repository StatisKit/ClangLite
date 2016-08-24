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
    bool  (*method_pointer_ca6fca80e9e95bb6a558a115763cb30a)(class ::clang::Type  const *) = ::clang::FunctionType::classof;
    class ::clang::QualType  (::clang::FunctionType::*method_pointer_84b256bef71e59d7a819b8596a91c6e3)(class ::clang::ASTContext  &) const = &::clang::FunctionType::getCallResultType;
    bool  (::clang::FunctionType::*method_pointer_e84929973b3b58e1982f838da9044962)() const = &::clang::FunctionType::getHasRegParm;
    bool  (::clang::FunctionType::*method_pointer_d6eb66f7af65563ab53a0d10d8143a05)() const = &::clang::FunctionType::getNoReturnAttr;
    unsigned int  (::clang::FunctionType::*method_pointer_5e7f5e68f42f5533b1a423e11a02327e)() const = &::clang::FunctionType::getRegParmType;
    class ::clang::QualType  (::clang::FunctionType::*method_pointer_7c71c5afc84a5bdd88224f2820870910)() const = &::clang::FunctionType::getReturnType;
    bool  (::clang::FunctionType::*method_pointer_828295e44e3859c1808290931286f463)() const = &::clang::FunctionType::isConst;
    bool  (::clang::FunctionType::*method_pointer_1300e461b9375389814df2c5d6c5c2aa)() const = &::clang::FunctionType::isRestrict;
    bool  (::clang::FunctionType::*method_pointer_5a0d9683ee405a77a781538fe605e655)() const = &::clang::FunctionType::isVolatile;
    boost::python::class_< class ::clang::FunctionType, autowig::HeldType< class ::clang::FunctionType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_808dfaeb3c825011b508a4347f0e64a5("FunctionType", "", boost::python::no_init);
    class_808dfaeb3c825011b508a4347f0e64a5.def("classof", method_pointer_ca6fca80e9e95bb6a558a115763cb30a, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_call_result_type", method_pointer_84b256bef71e59d7a819b8596a91c6e3, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_has_reg_parm", method_pointer_e84929973b3b58e1982f838da9044962, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_no_return_attr", method_pointer_d6eb66f7af65563ab53a0d10d8143a05, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_reg_parm_type", method_pointer_5e7f5e68f42f5533b1a423e11a02327e, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_return_type", method_pointer_7c71c5afc84a5bdd88224f2820870910, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_const", method_pointer_828295e44e3859c1808290931286f463, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_restrict", method_pointer_1300e461b9375389814df2c5d6c5c2aa, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_volatile", method_pointer_5a0d9683ee405a77a781538fe605e655, "");
    class_808dfaeb3c825011b508a4347f0e64a5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionType >, autowig::HeldType< class ::clang::Type > >();
    }

}