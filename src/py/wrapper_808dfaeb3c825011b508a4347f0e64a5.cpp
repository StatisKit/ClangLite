#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_808dfaeb3c825011b508a4347f0e64a5()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_da8c955696f25c6b82531fe6eed1c262)(class ::clang::Type  const *) = ::clang::FunctionType::classof;
    bool  (::clang::FunctionType::*method_pointer_97a6ce51bf595804a2159aff8059c463)() const = &::clang::FunctionType::getHasRegParm;
    bool  (::clang::FunctionType::*method_pointer_857a3c125f4f52edaa677038b69884ef)() const = &::clang::FunctionType::getNoReturnAttr;
    unsigned int  (::clang::FunctionType::*method_pointer_a8cb07a44fdb52d8af4454fdc9fa61d0)() const = &::clang::FunctionType::getRegParmType;
    bool  (::clang::FunctionType::*method_pointer_c868f989dc1d52b9b0148fe8656642c2)() const = &::clang::FunctionType::isConst;
    bool  (::clang::FunctionType::*method_pointer_613cba5c244752c2a0135f75fd4ed749)() const = &::clang::FunctionType::isRestrict;
    bool  (::clang::FunctionType::*method_pointer_384ad61564ff5a54af4cd59f67f56a96)() const = &::clang::FunctionType::isVolatile;
    boost::python::class_< class ::clang::FunctionType, autowig::HeldType< class ::clang::FunctionType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_808dfaeb3c825011b508a4347f0e64a5("FunctionType", "", boost::python::no_init);
    class_808dfaeb3c825011b508a4347f0e64a5.def("classof", method_pointer_da8c955696f25c6b82531fe6eed1c262, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_has_reg_parm", method_pointer_97a6ce51bf595804a2159aff8059c463, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_no_return_attr", method_pointer_857a3c125f4f52edaa677038b69884ef, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_reg_parm_type", method_pointer_a8cb07a44fdb52d8af4454fdc9fa61d0, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_const", method_pointer_c868f989dc1d52b9b0148fe8656642c2, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_restrict", method_pointer_613cba5c244752c2a0135f75fd4ed749, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_volatile", method_pointer_384ad61564ff5a54af4cd59f67f56a96, "");
    class_808dfaeb3c825011b508a4347f0e64a5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionType >, autowig::HeldType< class ::clang::Type > >();
    }

}