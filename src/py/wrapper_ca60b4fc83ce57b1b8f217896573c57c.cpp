#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_ca60b4fc83ce57b1b8f217896573c57c()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_50e86ae644da5cf3b52236c110a30ba8)(class ::clang::Type  const *) = ::clang::LValueReferenceType::classof;
    class ::clang::QualType  (::clang::LValueReferenceType::*method_pointer_7346d3709b01546e9e772f4892d89f1e)() const = &::clang::LValueReferenceType::desugar;
    bool  (::clang::LValueReferenceType::*method_pointer_5c93082648bd502cae9bb698113ea4dc)() const = &::clang::LValueReferenceType::isSugared;
    boost::python::class_< class ::clang::LValueReferenceType, autowig::HeldType< class ::clang::LValueReferenceType >, boost::python::bases< class ::clang::ReferenceType >, boost::noncopyable > class_ca60b4fc83ce57b1b8f217896573c57c("LValueReferenceType", "", boost::python::no_init);
    class_ca60b4fc83ce57b1b8f217896573c57c.def("classof", method_pointer_50e86ae644da5cf3b52236c110a30ba8, "");
    class_ca60b4fc83ce57b1b8f217896573c57c.def("desugar", method_pointer_7346d3709b01546e9e772f4892d89f1e, "");
    class_ca60b4fc83ce57b1b8f217896573c57c.def("is_sugared", method_pointer_5c93082648bd502cae9bb698113ea4dc, "");
    class_ca60b4fc83ce57b1b8f217896573c57c.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::LValueReferenceType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::LValueReferenceType >, autowig::HeldType< class ::clang::ReferenceType > >();
    }

}