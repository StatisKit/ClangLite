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
    bool  (*method_pointer_5ca4f7c7af525ebc987f4e5fbdb2d9d6)(class ::clang::Type  const *) = ::clang::ParenType::classof;
    bool  (::clang::ParenType::*method_pointer_3074d6df8e0b5fddb72f98bdf4eadd4a)() const = &::clang::ParenType::isSugared;
    boost::python::class_< class ::clang::ParenType, autowig::HeldType< class ::clang::ParenType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_e0f3aeacd4b75f1a90a27af45ebd888b("ParenType", "", boost::python::no_init);
    class_e0f3aeacd4b75f1a90a27af45ebd888b.def("classof", method_pointer_5ca4f7c7af525ebc987f4e5fbdb2d9d6, "");
    class_e0f3aeacd4b75f1a90a27af45ebd888b.def("is_sugared", method_pointer_3074d6df8e0b5fddb72f98bdf4eadd4a, "");
    class_e0f3aeacd4b75f1a90a27af45ebd888b.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ParenType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ParenType >, autowig::HeldType< class ::clang::Type > >();
    }

}