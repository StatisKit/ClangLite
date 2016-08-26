#include "_clanglite.h"


namespace autowig
{
}


void wrapper_f851c7810ad1557e8a7e1af726d40e21()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_cf81d18ac84e55f2860c9d91c0a0109f)(class ::clang::Type  const *) = ::clang::ConstantArrayType::classof;
    class ::clang::QualType  (::clang::ConstantArrayType::*method_pointer_f99919c529d959f7b14aa7591fd96dbe)() const = &::clang::ConstantArrayType::desugar;
    unsigned int  (*method_pointer_ba8abac3dc455496bc9d0c9f53f7dd44)(class ::clang::ASTContext  &) = ::clang::ConstantArrayType::getMaxSizeBits;
    bool  (::clang::ConstantArrayType::*method_pointer_6ded0fa52feb53d9a2faace770a048e3)() const = &::clang::ConstantArrayType::isSugared;
    boost::python::class_< class ::clang::ConstantArrayType, autowig::HeldType< class ::clang::ConstantArrayType >, boost::python::bases< class ::clang::ArrayType >, boost::noncopyable > class_f851c7810ad1557e8a7e1af726d40e21("ConstantArrayType", "", boost::python::no_init);
    class_f851c7810ad1557e8a7e1af726d40e21.def("classof", method_pointer_cf81d18ac84e55f2860c9d91c0a0109f, "");
    class_f851c7810ad1557e8a7e1af726d40e21.def("desugar", method_pointer_f99919c529d959f7b14aa7591fd96dbe, "");
    class_f851c7810ad1557e8a7e1af726d40e21.def("get_max_size_bits", method_pointer_ba8abac3dc455496bc9d0c9f53f7dd44, "");
    class_f851c7810ad1557e8a7e1af726d40e21.def("is_sugared", method_pointer_6ded0fa52feb53d9a2faace770a048e3, "");
    class_f851c7810ad1557e8a7e1af726d40e21.staticmethod("get_max_size_bits");
    class_f851c7810ad1557e8a7e1af726d40e21.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ConstantArrayType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ConstantArrayType >, autowig::HeldType< class ::clang::ArrayType > >();
    }

}