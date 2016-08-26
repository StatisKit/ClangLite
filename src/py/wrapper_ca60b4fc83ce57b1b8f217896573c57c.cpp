#include "_clanglite.h"


namespace autowig
{
}


void wrapper_ca60b4fc83ce57b1b8f217896573c57c()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_6c97f0d265b656948f15ba385895c302)(class ::clang::Type  const *) = ::clang::LValueReferenceType::classof;
    class ::clang::QualType  (::clang::LValueReferenceType::*method_pointer_e595da3a711159a9a581bc27bcb1a506)() const = &::clang::LValueReferenceType::desugar;
    bool  (::clang::LValueReferenceType::*method_pointer_b852f213ce4b5e9fa49c8dc1850e3436)() const = &::clang::LValueReferenceType::isSugared;
    boost::python::class_< class ::clang::LValueReferenceType, autowig::HeldType< class ::clang::LValueReferenceType >, boost::python::bases< class ::clang::ReferenceType >, boost::noncopyable > class_ca60b4fc83ce57b1b8f217896573c57c("LValueReferenceType", "", boost::python::no_init);
    class_ca60b4fc83ce57b1b8f217896573c57c.def("classof", method_pointer_6c97f0d265b656948f15ba385895c302, "");
    class_ca60b4fc83ce57b1b8f217896573c57c.def("desugar", method_pointer_e595da3a711159a9a581bc27bcb1a506, "");
    class_ca60b4fc83ce57b1b8f217896573c57c.def("is_sugared", method_pointer_b852f213ce4b5e9fa49c8dc1850e3436, "");
    class_ca60b4fc83ce57b1b8f217896573c57c.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::LValueReferenceType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::LValueReferenceType >, autowig::HeldType< class ::clang::ReferenceType > >();
    }

}