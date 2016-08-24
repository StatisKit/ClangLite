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
    bool  (*method_pointer_3257eb4f09b759f9a15367067e6d75a1)(class ::clang::Type  const *) = ::clang::FunctionType::classof;
    class ::clang::QualType  (::clang::FunctionType::*method_pointer_3f559094b62555e99b88c1ab4a13db9e)(class ::clang::ASTContext  &) const = &::clang::FunctionType::getCallResultType;
    bool  (::clang::FunctionType::*method_pointer_f95921d25fe35e1e81b86242d21df771)() const = &::clang::FunctionType::getHasRegParm;
    bool  (::clang::FunctionType::*method_pointer_7b263215ddc9591280f2caffa563d91b)() const = &::clang::FunctionType::getNoReturnAttr;
    unsigned int  (::clang::FunctionType::*method_pointer_10b47984c60c58108629c1f20353f8da)() const = &::clang::FunctionType::getRegParmType;
    class ::clang::QualType  (::clang::FunctionType::*method_pointer_50aee3a986ed540fa741d18bd3526b86)() const = &::clang::FunctionType::getReturnType;
    bool  (::clang::FunctionType::*method_pointer_dcad8a8a89c25e4dab2c79f56220bee3)() const = &::clang::FunctionType::isConst;
    bool  (::clang::FunctionType::*method_pointer_ff059b6cf779578297182e86ba177e1c)() const = &::clang::FunctionType::isRestrict;
    bool  (::clang::FunctionType::*method_pointer_a4bde4c988fa5e80a941a9c3eb80f0c4)() const = &::clang::FunctionType::isVolatile;
    boost::python::class_< class ::clang::FunctionType, autowig::HeldType< class ::clang::FunctionType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_808dfaeb3c825011b508a4347f0e64a5("FunctionType", "", boost::python::no_init);
    class_808dfaeb3c825011b508a4347f0e64a5.def("classof", method_pointer_3257eb4f09b759f9a15367067e6d75a1, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_call_result_type", method_pointer_3f559094b62555e99b88c1ab4a13db9e, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_has_reg_parm", method_pointer_f95921d25fe35e1e81b86242d21df771, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_no_return_attr", method_pointer_7b263215ddc9591280f2caffa563d91b, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_reg_parm_type", method_pointer_10b47984c60c58108629c1f20353f8da, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_return_type", method_pointer_50aee3a986ed540fa741d18bd3526b86, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_const", method_pointer_dcad8a8a89c25e4dab2c79f56220bee3, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_restrict", method_pointer_ff059b6cf779578297182e86ba177e1c, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_volatile", method_pointer_a4bde4c988fa5e80a941a9c3eb80f0c4, "");
    class_808dfaeb3c825011b508a4347f0e64a5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionType >, autowig::HeldType< class ::clang::Type > >();
    }

}