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
    bool  (*method_pointer_5da3d6bb00e35820b0958da7b9ed45f2)(class ::clang::Type  const *) = ::clang::FunctionType::classof;
    class ::clang::QualType  (::clang::FunctionType::*method_pointer_c8b1b81696f956c8b23e508c5ac20faf)(class ::clang::ASTContext  &) const = &::clang::FunctionType::getCallResultType;
    bool  (::clang::FunctionType::*method_pointer_3d6699a33ed75285b6e98a084a76c73c)() const = &::clang::FunctionType::getHasRegParm;
    bool  (::clang::FunctionType::*method_pointer_8623b0e761fb56f28ef09528e6889405)() const = &::clang::FunctionType::getNoReturnAttr;
    unsigned int  (::clang::FunctionType::*method_pointer_f9bcbaa21f91587da276ed98b094dfc8)() const = &::clang::FunctionType::getRegParmType;
    class ::clang::QualType  (::clang::FunctionType::*method_pointer_66c6a0a43f255e828170afe2daa5ddde)() const = &::clang::FunctionType::getReturnType;
    bool  (::clang::FunctionType::*method_pointer_30afef9f454754e39365daefc4ca0b40)() const = &::clang::FunctionType::isConst;
    bool  (::clang::FunctionType::*method_pointer_6d90670310005cbbb5cdbef2b245570f)() const = &::clang::FunctionType::isRestrict;
    bool  (::clang::FunctionType::*method_pointer_67b9d89d19285bfe95f2941215b4a34b)() const = &::clang::FunctionType::isVolatile;
    boost::python::class_< class ::clang::FunctionType, autowig::HeldType< class ::clang::FunctionType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_808dfaeb3c825011b508a4347f0e64a5("FunctionType", "", boost::python::no_init);
    class_808dfaeb3c825011b508a4347f0e64a5.def("classof", method_pointer_5da3d6bb00e35820b0958da7b9ed45f2, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_call_result_type", method_pointer_c8b1b81696f956c8b23e508c5ac20faf, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_has_reg_parm", method_pointer_3d6699a33ed75285b6e98a084a76c73c, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_no_return_attr", method_pointer_8623b0e761fb56f28ef09528e6889405, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_reg_parm_type", method_pointer_f9bcbaa21f91587da276ed98b094dfc8, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_return_type", method_pointer_66c6a0a43f255e828170afe2daa5ddde, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_const", method_pointer_30afef9f454754e39365daefc4ca0b40, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_restrict", method_pointer_6d90670310005cbbb5cdbef2b245570f, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_volatile", method_pointer_67b9d89d19285bfe95f2941215b4a34b, "");
    class_808dfaeb3c825011b508a4347f0e64a5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionType >, autowig::HeldType< class ::clang::Type > >();
    }

}