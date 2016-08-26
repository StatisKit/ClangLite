#include "_clanglite.h"


namespace autowig
{
}


void wrapper_808dfaeb3c825011b508a4347f0e64a5()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_6f367aa175095a24ae6b3a70a840bb42)(class ::clang::Type  const *) = ::clang::FunctionType::classof;
    bool  (::clang::FunctionType::*method_pointer_bd208c3411b051b59e65c63792973823)() const = &::clang::FunctionType::getHasRegParm;
    bool  (::clang::FunctionType::*method_pointer_e0d0326f5dc4597fbb0c8188fada8e32)() const = &::clang::FunctionType::getNoReturnAttr;
    unsigned int  (::clang::FunctionType::*method_pointer_519e1190321b5f339777efb728e968cf)() const = &::clang::FunctionType::getRegParmType;
    bool  (::clang::FunctionType::*method_pointer_5d4517bedd66590fb27b4e2a75957cf3)() const = &::clang::FunctionType::isConst;
    bool  (::clang::FunctionType::*method_pointer_be4eb225232250c68bb7980d86c6faee)() const = &::clang::FunctionType::isRestrict;
    bool  (::clang::FunctionType::*method_pointer_804efd430f825391bee385aeae20a05c)() const = &::clang::FunctionType::isVolatile;
    boost::python::class_< class ::clang::FunctionType, autowig::HeldType< class ::clang::FunctionType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_808dfaeb3c825011b508a4347f0e64a5("FunctionType", "", boost::python::no_init);
    class_808dfaeb3c825011b508a4347f0e64a5.def("classof", method_pointer_6f367aa175095a24ae6b3a70a840bb42, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_has_reg_parm", method_pointer_bd208c3411b051b59e65c63792973823, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_no_return_attr", method_pointer_e0d0326f5dc4597fbb0c8188fada8e32, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_reg_parm_type", method_pointer_519e1190321b5f339777efb728e968cf, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_const", method_pointer_5d4517bedd66590fb27b4e2a75957cf3, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_restrict", method_pointer_be4eb225232250c68bb7980d86c6faee, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_volatile", method_pointer_804efd430f825391bee385aeae20a05c, "");
    class_808dfaeb3c825011b508a4347f0e64a5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionType >, autowig::HeldType< class ::clang::Type > >();
    }

}