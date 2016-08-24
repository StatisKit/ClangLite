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
    bool  (*method_pointer_fde2cc5e256255bab17df2601a6bcaf3)(class ::clang::Type  const *) = ::clang::FunctionType::classof;
    class ::clang::QualType  (::clang::FunctionType::*method_pointer_c121af4a36595973b818bcf008222e9a)(class ::clang::ASTContext  &) const = &::clang::FunctionType::getCallResultType;
    bool  (::clang::FunctionType::*method_pointer_a655bc13e8d15e088838e871c61c1d85)() const = &::clang::FunctionType::getHasRegParm;
    bool  (::clang::FunctionType::*method_pointer_f1037c83329d52cba975a7621760901f)() const = &::clang::FunctionType::getNoReturnAttr;
    unsigned int  (::clang::FunctionType::*method_pointer_c6ec3118e26950dea7d43e2b5a8034b2)() const = &::clang::FunctionType::getRegParmType;
    class ::clang::QualType  (::clang::FunctionType::*method_pointer_fa34a6d9f3d45dd68befd49869a73f67)() const = &::clang::FunctionType::getReturnType;
    bool  (::clang::FunctionType::*method_pointer_79f1169d8e1a53de96545fc7eb410853)() const = &::clang::FunctionType::isConst;
    bool  (::clang::FunctionType::*method_pointer_c19be3c4449c54b08d8734e04a797b20)() const = &::clang::FunctionType::isRestrict;
    bool  (::clang::FunctionType::*method_pointer_8fdadeefb0e45df38492a0058535fb0e)() const = &::clang::FunctionType::isVolatile;
    boost::python::class_< class ::clang::FunctionType, autowig::HeldType< class ::clang::FunctionType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_808dfaeb3c825011b508a4347f0e64a5("FunctionType", "", boost::python::no_init);
    class_808dfaeb3c825011b508a4347f0e64a5.def("classof", method_pointer_fde2cc5e256255bab17df2601a6bcaf3, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_call_result_type", method_pointer_c121af4a36595973b818bcf008222e9a, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_has_reg_parm", method_pointer_a655bc13e8d15e088838e871c61c1d85, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_no_return_attr", method_pointer_f1037c83329d52cba975a7621760901f, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_reg_parm_type", method_pointer_c6ec3118e26950dea7d43e2b5a8034b2, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_return_type", method_pointer_fa34a6d9f3d45dd68befd49869a73f67, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_const", method_pointer_79f1169d8e1a53de96545fc7eb410853, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_restrict", method_pointer_c19be3c4449c54b08d8734e04a797b20, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_volatile", method_pointer_8fdadeefb0e45df38492a0058535fb0e, "");
    class_808dfaeb3c825011b508a4347f0e64a5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionType >, autowig::HeldType< class ::clang::Type > >();
    }

}