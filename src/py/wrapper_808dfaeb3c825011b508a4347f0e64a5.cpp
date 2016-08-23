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
    bool  (*method_pointer_5741f434eb465866a5f4e8f51f1f8a33)(class ::clang::Type  const *) = ::clang::FunctionType::classof;
    class ::clang::QualType  (::clang::FunctionType::*method_pointer_95211c79676d573fa75cfb53844b9702)(class ::clang::ASTContext  &) const = &::clang::FunctionType::getCallResultType;
    bool  (::clang::FunctionType::*method_pointer_27ee9952862552fc932c71c2c053ab58)() const = &::clang::FunctionType::getHasRegParm;
    bool  (::clang::FunctionType::*method_pointer_34d2b7c89055587093387ac2050f2370)() const = &::clang::FunctionType::getNoReturnAttr;
    unsigned int  (::clang::FunctionType::*method_pointer_9ca309c013025de387f7c46af4f277db)() const = &::clang::FunctionType::getRegParmType;
    class ::clang::QualType  (::clang::FunctionType::*method_pointer_a792fc82a508555191c4214ac089a114)() const = &::clang::FunctionType::getReturnType;
    bool  (::clang::FunctionType::*method_pointer_3e6f78adb6bb5caaa762d1f4410aba60)() const = &::clang::FunctionType::isConst;
    bool  (::clang::FunctionType::*method_pointer_575a1c9ed0135273a9b39a53ddb6064d)() const = &::clang::FunctionType::isRestrict;
    bool  (::clang::FunctionType::*method_pointer_adc98d34cd0c5eb080b800da642442f7)() const = &::clang::FunctionType::isVolatile;
    boost::python::class_< class ::clang::FunctionType, autowig::HeldType< class ::clang::FunctionType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_808dfaeb3c825011b508a4347f0e64a5("FunctionType", "", boost::python::no_init);
    class_808dfaeb3c825011b508a4347f0e64a5.def("classof", method_pointer_5741f434eb465866a5f4e8f51f1f8a33, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_call_result_type", method_pointer_95211c79676d573fa75cfb53844b9702, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_has_reg_parm", method_pointer_27ee9952862552fc932c71c2c053ab58, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_no_return_attr", method_pointer_34d2b7c89055587093387ac2050f2370, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_reg_parm_type", method_pointer_9ca309c013025de387f7c46af4f277db, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_return_type", method_pointer_a792fc82a508555191c4214ac089a114, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_const", method_pointer_3e6f78adb6bb5caaa762d1f4410aba60, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_restrict", method_pointer_575a1c9ed0135273a9b39a53ddb6064d, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_volatile", method_pointer_adc98d34cd0c5eb080b800da642442f7, "");
    class_808dfaeb3c825011b508a4347f0e64a5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionType >, autowig::HeldType< class ::clang::Type > >();
    }

}