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
    bool  (*method_pointer_72224c7250f65005aa4f185006581f64)(class ::clang::Type  const *) = ::clang::FunctionType::classof;
    class ::clang::QualType  (::clang::FunctionType::*method_pointer_5ed241ca52ba51f9ab73bde4107f5709)(class ::clang::ASTContext  &) const = &::clang::FunctionType::getCallResultType;
    bool  (::clang::FunctionType::*method_pointer_d5291eb13c975a98ab2288a945f55c5d)() const = &::clang::FunctionType::getHasRegParm;
    bool  (::clang::FunctionType::*method_pointer_e9bb4952383251bfb8c330c2af0c0d2b)() const = &::clang::FunctionType::getNoReturnAttr;
    unsigned int  (::clang::FunctionType::*method_pointer_c63221102ce15079ba9ae436304524c7)() const = &::clang::FunctionType::getRegParmType;
    class ::clang::QualType  (::clang::FunctionType::*method_pointer_d2ec56fe29d857688e508ce61e114aff)() const = &::clang::FunctionType::getReturnType;
    bool  (::clang::FunctionType::*method_pointer_087927192b48536ea5e3f405f0dbcc59)() const = &::clang::FunctionType::isConst;
    bool  (::clang::FunctionType::*method_pointer_c21edd5e108556c98dd609e44f2502aa)() const = &::clang::FunctionType::isRestrict;
    bool  (::clang::FunctionType::*method_pointer_2df986d0a1ad5504a43d8ed184e04a83)() const = &::clang::FunctionType::isVolatile;
    boost::python::class_< class ::clang::FunctionType, autowig::HeldType< class ::clang::FunctionType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_808dfaeb3c825011b508a4347f0e64a5("FunctionType", "", boost::python::no_init);
    class_808dfaeb3c825011b508a4347f0e64a5.def("classof", method_pointer_72224c7250f65005aa4f185006581f64, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_call_result_type", method_pointer_5ed241ca52ba51f9ab73bde4107f5709, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_has_reg_parm", method_pointer_d5291eb13c975a98ab2288a945f55c5d, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_no_return_attr", method_pointer_e9bb4952383251bfb8c330c2af0c0d2b, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_reg_parm_type", method_pointer_c63221102ce15079ba9ae436304524c7, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_return_type", method_pointer_d2ec56fe29d857688e508ce61e114aff, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_const", method_pointer_087927192b48536ea5e3f405f0dbcc59, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_restrict", method_pointer_c21edd5e108556c98dd609e44f2502aa, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_volatile", method_pointer_2df986d0a1ad5504a43d8ed184e04a83, "");
    class_808dfaeb3c825011b508a4347f0e64a5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionType >, autowig::HeldType< class ::clang::Type > >();
    }

}