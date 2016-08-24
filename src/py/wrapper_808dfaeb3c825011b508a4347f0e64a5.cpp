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
    bool  (*method_pointer_62fb1724d0f151f4b9351c9be75e9fdb)(class ::clang::Type  const *) = ::clang::FunctionType::classof;
    class ::clang::QualType  (::clang::FunctionType::*method_pointer_d0688bc883675909b495766f136016ac)(class ::clang::ASTContext  &) const = &::clang::FunctionType::getCallResultType;
    bool  (::clang::FunctionType::*method_pointer_caa655c1120056498cd03116f4bce0e4)() const = &::clang::FunctionType::getHasRegParm;
    bool  (::clang::FunctionType::*method_pointer_12435131712d57ec816d9068425220d6)() const = &::clang::FunctionType::getNoReturnAttr;
    unsigned int  (::clang::FunctionType::*method_pointer_7ca8062193455a808aa92ee96ec7953c)() const = &::clang::FunctionType::getRegParmType;
    class ::clang::QualType  (::clang::FunctionType::*method_pointer_8f8b4165ea915ad29ee97fe3d6736afe)() const = &::clang::FunctionType::getReturnType;
    bool  (::clang::FunctionType::*method_pointer_88f9c931192d54369e5b1a815dc4d6c6)() const = &::clang::FunctionType::isConst;
    bool  (::clang::FunctionType::*method_pointer_327ab4603b7d51f3aa485cfd79fdf7f5)() const = &::clang::FunctionType::isRestrict;
    bool  (::clang::FunctionType::*method_pointer_867f450c2d1d5b11adb4f8b64564dddb)() const = &::clang::FunctionType::isVolatile;
    boost::python::class_< class ::clang::FunctionType, autowig::HeldType< class ::clang::FunctionType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_808dfaeb3c825011b508a4347f0e64a5("FunctionType", "", boost::python::no_init);
    class_808dfaeb3c825011b508a4347f0e64a5.def("classof", method_pointer_62fb1724d0f151f4b9351c9be75e9fdb, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_call_result_type", method_pointer_d0688bc883675909b495766f136016ac, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_has_reg_parm", method_pointer_caa655c1120056498cd03116f4bce0e4, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_no_return_attr", method_pointer_12435131712d57ec816d9068425220d6, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_reg_parm_type", method_pointer_7ca8062193455a808aa92ee96ec7953c, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_return_type", method_pointer_8f8b4165ea915ad29ee97fe3d6736afe, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_const", method_pointer_88f9c931192d54369e5b1a815dc4d6c6, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_restrict", method_pointer_327ab4603b7d51f3aa485cfd79fdf7f5, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_volatile", method_pointer_867f450c2d1d5b11adb4f8b64564dddb, "");
    class_808dfaeb3c825011b508a4347f0e64a5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionType >, autowig::HeldType< class ::clang::Type > >();
    }

}