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
    bool  (*method_pointer_a3c8d2efca5b5dd78ce4618dc938e53c)(class ::clang::Type  const *) = ::clang::FunctionType::classof;
    class ::clang::QualType  (::clang::FunctionType::*method_pointer_1bf05855f45c5bcb97435fa6f8243841)(class ::clang::ASTContext  &) const = &::clang::FunctionType::getCallResultType;
    bool  (::clang::FunctionType::*method_pointer_1ff19defaa7e5103b16309e200dfe80b)() const = &::clang::FunctionType::getHasRegParm;
    bool  (::clang::FunctionType::*method_pointer_5de194f7b06652419f362ba387b0e8c2)() const = &::clang::FunctionType::getNoReturnAttr;
    unsigned int  (::clang::FunctionType::*method_pointer_c5a971b179f85b35bedc8b657d933a85)() const = &::clang::FunctionType::getRegParmType;
    class ::clang::QualType  (::clang::FunctionType::*method_pointer_c779ddd9c1c55e1a9de30edfd3750e98)() const = &::clang::FunctionType::getReturnType;
    bool  (::clang::FunctionType::*method_pointer_5221ed64a670592d8fa799f6e9344dd6)() const = &::clang::FunctionType::isConst;
    bool  (::clang::FunctionType::*method_pointer_02e20746336f560999841d52436d19a5)() const = &::clang::FunctionType::isRestrict;
    bool  (::clang::FunctionType::*method_pointer_3c9633706174529d8d50a65ad1402523)() const = &::clang::FunctionType::isVolatile;
    boost::python::class_< class ::clang::FunctionType, autowig::HeldType< class ::clang::FunctionType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_808dfaeb3c825011b508a4347f0e64a5("FunctionType", "", boost::python::no_init);
    class_808dfaeb3c825011b508a4347f0e64a5.def("classof", method_pointer_a3c8d2efca5b5dd78ce4618dc938e53c, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_call_result_type", method_pointer_1bf05855f45c5bcb97435fa6f8243841, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_has_reg_parm", method_pointer_1ff19defaa7e5103b16309e200dfe80b, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_no_return_attr", method_pointer_5de194f7b06652419f362ba387b0e8c2, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_reg_parm_type", method_pointer_c5a971b179f85b35bedc8b657d933a85, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_return_type", method_pointer_c779ddd9c1c55e1a9de30edfd3750e98, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_const", method_pointer_5221ed64a670592d8fa799f6e9344dd6, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_restrict", method_pointer_02e20746336f560999841d52436d19a5, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_volatile", method_pointer_3c9633706174529d8d50a65ad1402523, "");
    class_808dfaeb3c825011b508a4347f0e64a5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionType >, autowig::HeldType< class ::clang::Type > >();
    }

}