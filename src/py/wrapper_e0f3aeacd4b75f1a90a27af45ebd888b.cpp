#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_e0f3aeacd4b75f1a90a27af45ebd888b()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_6cfd3b02bfd75b28a43b7b9d9723c68e)(class ::clang::Type  const *) = ::clang::ParenType::classof;
    class ::clang::QualType  (::clang::ParenType::*method_pointer_8cd1f29f79335d14bf071be09f9346c2)() const = &::clang::ParenType::desugar;
    class ::clang::QualType  (::clang::ParenType::*method_pointer_454664d4a9a15b3895ae4e28d1eae7e2)() const = &::clang::ParenType::getInnerType;
    bool  (::clang::ParenType::*method_pointer_0fa0989bde3e506aaf9a3b97febb738e)() const = &::clang::ParenType::isSugared;
    boost::python::class_< class ::clang::ParenType, autowig::HeldType< class ::clang::ParenType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_e0f3aeacd4b75f1a90a27af45ebd888b("ParenType", "", boost::python::no_init);
    class_e0f3aeacd4b75f1a90a27af45ebd888b.def("classof", method_pointer_6cfd3b02bfd75b28a43b7b9d9723c68e, "");
    class_e0f3aeacd4b75f1a90a27af45ebd888b.def("desugar", method_pointer_8cd1f29f79335d14bf071be09f9346c2, "");
    class_e0f3aeacd4b75f1a90a27af45ebd888b.def("get_inner_type", method_pointer_454664d4a9a15b3895ae4e28d1eae7e2, "");
    class_e0f3aeacd4b75f1a90a27af45ebd888b.def("is_sugared", method_pointer_0fa0989bde3e506aaf9a3b97febb738e, "");
    class_e0f3aeacd4b75f1a90a27af45ebd888b.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ParenType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ParenType >, autowig::HeldType< class ::clang::Type > >();
    }

}