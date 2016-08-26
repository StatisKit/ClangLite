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
    bool  (*method_pointer_f865eae6f2c85663ad663971096d32e5)(class ::clang::Type  const *) = ::clang::FunctionType::classof;
    class ::clang::QualType  (::clang::FunctionType::*method_pointer_0478431f6a115dcda23cf4f28a77edbc)(class ::clang::ASTContext  &) const = &::clang::FunctionType::getCallResultType;
    bool  (::clang::FunctionType::*method_pointer_6f556a471f56575783ad252aaaaa51e5)() const = &::clang::FunctionType::getHasRegParm;
    bool  (::clang::FunctionType::*method_pointer_98014c0ac4fd5847a9400f4b3b613ab1)() const = &::clang::FunctionType::getNoReturnAttr;
    unsigned int  (::clang::FunctionType::*method_pointer_0e1d3d6aba575fa39daca9a2332eac2e)() const = &::clang::FunctionType::getRegParmType;
    class ::clang::QualType  (::clang::FunctionType::*method_pointer_56045c18b990558da684acb6fff7b333)() const = &::clang::FunctionType::getReturnType;
    bool  (::clang::FunctionType::*method_pointer_93b59c14aff05495b3b41ef8d09f38d0)() const = &::clang::FunctionType::isConst;
    bool  (::clang::FunctionType::*method_pointer_66488686fa8658e7b28c70a241cc7759)() const = &::clang::FunctionType::isRestrict;
    bool  (::clang::FunctionType::*method_pointer_acd28e49ae4d56128be54b52147ba2a1)() const = &::clang::FunctionType::isVolatile;
    boost::python::class_< class ::clang::FunctionType, autowig::HeldType< class ::clang::FunctionType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_808dfaeb3c825011b508a4347f0e64a5("FunctionType", "", boost::python::no_init);
    class_808dfaeb3c825011b508a4347f0e64a5.def("classof", method_pointer_f865eae6f2c85663ad663971096d32e5, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_call_result_type", method_pointer_0478431f6a115dcda23cf4f28a77edbc, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_has_reg_parm", method_pointer_6f556a471f56575783ad252aaaaa51e5, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_no_return_attr", method_pointer_98014c0ac4fd5847a9400f4b3b613ab1, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_reg_parm_type", method_pointer_0e1d3d6aba575fa39daca9a2332eac2e, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_return_type", method_pointer_56045c18b990558da684acb6fff7b333, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_const", method_pointer_93b59c14aff05495b3b41ef8d09f38d0, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_restrict", method_pointer_66488686fa8658e7b28c70a241cc7759, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_volatile", method_pointer_acd28e49ae4d56128be54b52147ba2a1, "");
    class_808dfaeb3c825011b508a4347f0e64a5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionType >, autowig::HeldType< class ::clang::Type > >();
    }

}