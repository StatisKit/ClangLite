#include "_clanglite.h"


namespace autowig
{
}


void wrapper_a17549d1336953b08ed02070ee0558cb()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_e997dd8869f75aca94fcf3aee0021a16)(class ::clang::Type  const *) = ::clang::RValueReferenceType::classof;
    class ::clang::QualType  (::clang::RValueReferenceType::*method_pointer_6fe82fa3a10a598eb0b85c916152da67)() const = &::clang::RValueReferenceType::desugar;
    bool  (::clang::RValueReferenceType::*method_pointer_b8ef12a27a88558fb33e047ab255c5dd)() const = &::clang::RValueReferenceType::isSugared;
    boost::python::class_< class ::clang::RValueReferenceType, autowig::HeldType< class ::clang::RValueReferenceType >, boost::python::bases< class ::clang::ReferenceType >, boost::noncopyable > class_a17549d1336953b08ed02070ee0558cb("RValueReferenceType", "", boost::python::no_init);
    class_a17549d1336953b08ed02070ee0558cb.def("classof", method_pointer_e997dd8869f75aca94fcf3aee0021a16, "");
    class_a17549d1336953b08ed02070ee0558cb.def("desugar", method_pointer_6fe82fa3a10a598eb0b85c916152da67, "");
    class_a17549d1336953b08ed02070ee0558cb.def("is_sugared", method_pointer_b8ef12a27a88558fb33e047ab255c5dd, "");
    class_a17549d1336953b08ed02070ee0558cb.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RValueReferenceType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RValueReferenceType >, autowig::HeldType< class ::clang::ReferenceType > >();
    }

}