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
    bool  (*method_pointer_87d198e1651b56b59657c3ded4365f3f)(class ::clang::Type  const *) = ::clang::FunctionType::classof;
    bool  (::clang::FunctionType::*method_pointer_4a6884cd8ca6564cb3ec7e14c669e19f)() const = &::clang::FunctionType::getHasRegParm;
    bool  (::clang::FunctionType::*method_pointer_b9652ce473205eb3983c20571153b0c2)() const = &::clang::FunctionType::getNoReturnAttr;
    unsigned int  (::clang::FunctionType::*method_pointer_130674ce5369595db1960c5c0a19b0c7)() const = &::clang::FunctionType::getRegParmType;
    bool  (::clang::FunctionType::*method_pointer_dcef1a6b29c251bd8689667ae1f6c75e)() const = &::clang::FunctionType::isConst;
    bool  (::clang::FunctionType::*method_pointer_f7eb2e594d0e55dcab301f3dd2911458)() const = &::clang::FunctionType::isRestrict;
    bool  (::clang::FunctionType::*method_pointer_406fb387726d56eca80ce933f1ff3de3)() const = &::clang::FunctionType::isVolatile;
    boost::python::class_< class ::clang::FunctionType, autowig::HeldType< class ::clang::FunctionType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_808dfaeb3c825011b508a4347f0e64a5("FunctionType", "", boost::python::no_init);
    class_808dfaeb3c825011b508a4347f0e64a5.def("classof", method_pointer_87d198e1651b56b59657c3ded4365f3f, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_has_reg_parm", method_pointer_4a6884cd8ca6564cb3ec7e14c669e19f, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_no_return_attr", method_pointer_b9652ce473205eb3983c20571153b0c2, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_reg_parm_type", method_pointer_130674ce5369595db1960c5c0a19b0c7, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_const", method_pointer_dcef1a6b29c251bd8689667ae1f6c75e, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_restrict", method_pointer_f7eb2e594d0e55dcab301f3dd2911458, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_volatile", method_pointer_406fb387726d56eca80ce933f1ff3de3, "");
    class_808dfaeb3c825011b508a4347f0e64a5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionType >, autowig::HeldType< class ::clang::Type > >();
    }

}