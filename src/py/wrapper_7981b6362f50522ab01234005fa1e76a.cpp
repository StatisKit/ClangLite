#include "_clanglite.h"


namespace autowig
{
}


void wrapper_7981b6362f50522ab01234005fa1e76a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_1a68163a801351648fb8d99b2340cb05)(class ::clang::Type  const *) = ::clang::ArrayType::classof;
    class ::clang::QualType  (::clang::ArrayType::*method_pointer_31399ea9124e5701807b915188bb1b97)() const = &::clang::ArrayType::getElementType;
    unsigned int  (::clang::ArrayType::*method_pointer_bc0e7491d3065d4ba5f4857a99f01225)() const = &::clang::ArrayType::getIndexTypeCVRQualifiers;
    boost::python::class_< class ::clang::ArrayType, autowig::HeldType< class ::clang::ArrayType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_7981b6362f50522ab01234005fa1e76a("ArrayType", "", boost::python::no_init);
    class_7981b6362f50522ab01234005fa1e76a.def("classof", method_pointer_1a68163a801351648fb8d99b2340cb05, "");
    class_7981b6362f50522ab01234005fa1e76a.def("get_element_type", method_pointer_31399ea9124e5701807b915188bb1b97, "");
    class_7981b6362f50522ab01234005fa1e76a.def("get_index_type_cvr_qualifiers", method_pointer_bc0e7491d3065d4ba5f4857a99f01225, "");
    class_7981b6362f50522ab01234005fa1e76a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ArrayType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ArrayType >, autowig::HeldType< class ::clang::Type > >();
    }

}