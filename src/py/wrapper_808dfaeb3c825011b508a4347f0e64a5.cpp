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
    bool  (*method_pointer_4466c0a9ad205ac3becd806653419c03)(class ::clang::Type  const *) = ::clang::FunctionType::classof;
    class ::clang::QualType  (::clang::FunctionType::*method_pointer_9cb9fcb5bb8058009c9e64aca9a2544b)(class ::clang::ASTContext  &) const = &::clang::FunctionType::getCallResultType;
    bool  (::clang::FunctionType::*method_pointer_23914536c1455c0aa9c3e635a1738a19)() const = &::clang::FunctionType::getHasRegParm;
    bool  (::clang::FunctionType::*method_pointer_f342ad0d81915e3d9586aa18b94834e5)() const = &::clang::FunctionType::getNoReturnAttr;
    unsigned int  (::clang::FunctionType::*method_pointer_a582537d48f756e0a9a82c28e03d7489)() const = &::clang::FunctionType::getRegParmType;
    class ::clang::QualType  (::clang::FunctionType::*method_pointer_c595e019309a53de8130c630f5490c62)() const = &::clang::FunctionType::getReturnType;
    bool  (::clang::FunctionType::*method_pointer_302e433fe8b750a793b529dde0af0b54)() const = &::clang::FunctionType::isConst;
    bool  (::clang::FunctionType::*method_pointer_e9a5ddf0a4d651e29021d8f878409712)() const = &::clang::FunctionType::isRestrict;
    bool  (::clang::FunctionType::*method_pointer_1d65127d70d756b9afa064920dc482ce)() const = &::clang::FunctionType::isVolatile;
    boost::python::class_< class ::clang::FunctionType, autowig::HeldType< class ::clang::FunctionType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_808dfaeb3c825011b508a4347f0e64a5("FunctionType", "", boost::python::no_init);
    class_808dfaeb3c825011b508a4347f0e64a5.def("classof", method_pointer_4466c0a9ad205ac3becd806653419c03, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_call_result_type", method_pointer_9cb9fcb5bb8058009c9e64aca9a2544b, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_has_reg_parm", method_pointer_23914536c1455c0aa9c3e635a1738a19, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_no_return_attr", method_pointer_f342ad0d81915e3d9586aa18b94834e5, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_reg_parm_type", method_pointer_a582537d48f756e0a9a82c28e03d7489, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_return_type", method_pointer_c595e019309a53de8130c630f5490c62, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_const", method_pointer_302e433fe8b750a793b529dde0af0b54, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_restrict", method_pointer_e9a5ddf0a4d651e29021d8f878409712, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_volatile", method_pointer_1d65127d70d756b9afa064920dc482ce, "");
    class_808dfaeb3c825011b508a4347f0e64a5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionType >, autowig::HeldType< class ::clang::Type > >();
    }

}