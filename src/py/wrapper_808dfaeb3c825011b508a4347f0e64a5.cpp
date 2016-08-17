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
    bool  (::clang::FunctionType::*method_pointer_bae21082a5ed50cda97808594df7878e)() const = &::clang::FunctionType::isVolatile;
    bool  (::clang::FunctionType::*method_pointer_aafe685be4cf5556bdd8ecb54663fefe)() const = &::clang::FunctionType::isRestrict;
    unsigned int  (::clang::FunctionType::*method_pointer_95f70ed8a5b25572a7141f73275e2b86)() const = &::clang::FunctionType::getRegParmType;
    bool  (::clang::FunctionType::*method_pointer_b6ff4425e2015d6ba48847d3e5b8faab)() const = &::clang::FunctionType::isConst;
    bool  (::clang::FunctionType::*method_pointer_24b8279b6f7a50b9a7378df2241f03fd)() const = &::clang::FunctionType::getNoReturnAttr;
    bool  (::clang::FunctionType::*method_pointer_df8ce3445468581a96dfcf45263ead5e)() const = &::clang::FunctionType::getHasRegParm;
    bool  (*method_pointer_55b94823c39b5c91807418f611a349f2)(class ::clang::Type  const *) = ::clang::FunctionType::classof;
    boost::python::class_< class ::clang::FunctionType, autowig::HeldType< class ::clang::FunctionType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_808dfaeb3c825011b508a4347f0e64a5("FunctionType", "", boost::python::no_init);
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_volatile", method_pointer_bae21082a5ed50cda97808594df7878e, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_restrict", method_pointer_aafe685be4cf5556bdd8ecb54663fefe, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_reg_parm_type", method_pointer_95f70ed8a5b25572a7141f73275e2b86, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_const", method_pointer_b6ff4425e2015d6ba48847d3e5b8faab, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_no_return_attr", method_pointer_24b8279b6f7a50b9a7378df2241f03fd, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_has_reg_parm", method_pointer_df8ce3445468581a96dfcf45263ead5e, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("classof", method_pointer_55b94823c39b5c91807418f611a349f2, "");
    class_808dfaeb3c825011b508a4347f0e64a5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionType >, autowig::HeldType< class ::clang::Type > >();
    }

}