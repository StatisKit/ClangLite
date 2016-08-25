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
    bool  (*method_pointer_45aaf1c77c9455ddb8f03d8c063d6b8c)(class ::clang::Type  const *) = ::clang::FunctionType::classof;
    class ::clang::QualType  (::clang::FunctionType::*method_pointer_a498d2a349125fe4ac284b06577c6445)(class ::clang::ASTContext  &) const = &::clang::FunctionType::getCallResultType;
    bool  (::clang::FunctionType::*method_pointer_97a27a476e62563bb3f697efbf17aab3)() const = &::clang::FunctionType::getHasRegParm;
    bool  (::clang::FunctionType::*method_pointer_4b35797962da5326a4e2c331bad8d4a9)() const = &::clang::FunctionType::getNoReturnAttr;
    unsigned int  (::clang::FunctionType::*method_pointer_dab50c478b9f5f53bc5eeae9b86a287a)() const = &::clang::FunctionType::getRegParmType;
    class ::clang::QualType  (::clang::FunctionType::*method_pointer_31546f52f63455ec94f4e058e2640794)() const = &::clang::FunctionType::getReturnType;
    bool  (::clang::FunctionType::*method_pointer_aee2ff04a7f85a75903bda11382737e5)() const = &::clang::FunctionType::isConst;
    bool  (::clang::FunctionType::*method_pointer_aada73bec0b3541ba064cc3c6dda7884)() const = &::clang::FunctionType::isRestrict;
    bool  (::clang::FunctionType::*method_pointer_0c481ecd727b5c49bcc225d87c1ec5d3)() const = &::clang::FunctionType::isVolatile;
    boost::python::class_< class ::clang::FunctionType, autowig::HeldType< class ::clang::FunctionType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_808dfaeb3c825011b508a4347f0e64a5("FunctionType", "", boost::python::no_init);
    class_808dfaeb3c825011b508a4347f0e64a5.def("classof", method_pointer_45aaf1c77c9455ddb8f03d8c063d6b8c, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_call_result_type", method_pointer_a498d2a349125fe4ac284b06577c6445, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_has_reg_parm", method_pointer_97a27a476e62563bb3f697efbf17aab3, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_no_return_attr", method_pointer_4b35797962da5326a4e2c331bad8d4a9, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_reg_parm_type", method_pointer_dab50c478b9f5f53bc5eeae9b86a287a, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_return_type", method_pointer_31546f52f63455ec94f4e058e2640794, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_const", method_pointer_aee2ff04a7f85a75903bda11382737e5, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_restrict", method_pointer_aada73bec0b3541ba064cc3c6dda7884, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_volatile", method_pointer_0c481ecd727b5c49bcc225d87c1ec5d3, "");
    class_808dfaeb3c825011b508a4347f0e64a5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionType >, autowig::HeldType< class ::clang::Type > >();
    }

}