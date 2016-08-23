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
    bool  (*method_pointer_9be2db791ad055c891523a5edcc018f6)(class ::clang::Type  const *) = ::clang::ParenType::classof;
    class ::clang::QualType  (::clang::ParenType::*method_pointer_7a5954523fdf54de87f18651d4c71c65)() const = &::clang::ParenType::desugar;
    class ::clang::QualType  (::clang::ParenType::*method_pointer_dc03ad88e4535420840f9b7cff34b091)() const = &::clang::ParenType::getInnerType;
    bool  (::clang::ParenType::*method_pointer_2529bcd6ee83500097bb91011c68ab69)() const = &::clang::ParenType::isSugared;
    boost::python::class_< class ::clang::ParenType, autowig::HeldType< class ::clang::ParenType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_e0f3aeacd4b75f1a90a27af45ebd888b("ParenType", "", boost::python::no_init);
    class_e0f3aeacd4b75f1a90a27af45ebd888b.def("classof", method_pointer_9be2db791ad055c891523a5edcc018f6, "");
    class_e0f3aeacd4b75f1a90a27af45ebd888b.def("desugar", method_pointer_7a5954523fdf54de87f18651d4c71c65, "");
    class_e0f3aeacd4b75f1a90a27af45ebd888b.def("get_inner_type", method_pointer_dc03ad88e4535420840f9b7cff34b091, "");
    class_e0f3aeacd4b75f1a90a27af45ebd888b.def("is_sugared", method_pointer_2529bcd6ee83500097bb91011c68ab69, "");
    class_e0f3aeacd4b75f1a90a27af45ebd888b.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ParenType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ParenType >, autowig::HeldType< class ::clang::Type > >();
    }

}