#include "_clanglite.h"


namespace autowig
{
}


void wrapper_e6f4659cd31f536d8a173fe6b97a9e5a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_de6fa7eb890d5c5c8eed9b04f2564657)(class ::clang::Type  const *) = ::clang::IncompleteArrayType::classof;
    class ::clang::QualType  (::clang::IncompleteArrayType::*method_pointer_6604e9b5fc385349a4face43d8abfaab)() const = &::clang::IncompleteArrayType::desugar;
    bool  (::clang::IncompleteArrayType::*method_pointer_d0c89cb4b7ad5ecbb11887328ca7553a)() const = &::clang::IncompleteArrayType::isSugared;
    boost::python::class_< class ::clang::IncompleteArrayType, autowig::HeldType< class ::clang::IncompleteArrayType >, boost::python::bases< class ::clang::ArrayType >, boost::noncopyable > class_e6f4659cd31f536d8a173fe6b97a9e5a("IncompleteArrayType", "", boost::python::no_init);
    class_e6f4659cd31f536d8a173fe6b97a9e5a.def("classof", method_pointer_de6fa7eb890d5c5c8eed9b04f2564657, "");
    class_e6f4659cd31f536d8a173fe6b97a9e5a.def("desugar", method_pointer_6604e9b5fc385349a4face43d8abfaab, "");
    class_e6f4659cd31f536d8a173fe6b97a9e5a.def("is_sugared", method_pointer_d0c89cb4b7ad5ecbb11887328ca7553a, "");
    class_e6f4659cd31f536d8a173fe6b97a9e5a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::IncompleteArrayType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::IncompleteArrayType >, autowig::HeldType< class ::clang::ArrayType > >();
    }

}