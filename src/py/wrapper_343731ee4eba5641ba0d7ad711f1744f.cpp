#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_343731ee4eba5641ba0d7ad711f1744f()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_b21f55c02079517a96307a5a044786c2)(class ::clang::Type  const *) = ::clang::AutoType::classof;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_a5f89d7ce11d547ca4326999ac10fc1d)() const = &::clang::AutoType::desugar;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_15548c5df69b5b66b92765b9bceafaee)() const = &::clang::AutoType::getDeducedType;
    bool  (::clang::AutoType::*method_pointer_af93ca45efc9543c8e425750f6be9ac1)() const = &::clang::AutoType::isDecltypeAuto;
    bool  (::clang::AutoType::*method_pointer_ca56c34b49705e689fc7eeccffff4136)() const = &::clang::AutoType::isDeduced;
    bool  (::clang::AutoType::*method_pointer_b1ebe04117bc5b94bd8af8206efafae1)() const = &::clang::AutoType::isSugared;
    boost::python::class_< class ::clang::AutoType, autowig::HeldType< class ::clang::AutoType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_343731ee4eba5641ba0d7ad711f1744f("AutoType", "", boost::python::no_init);
    class_343731ee4eba5641ba0d7ad711f1744f.def("classof", method_pointer_b21f55c02079517a96307a5a044786c2, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("desugar", method_pointer_a5f89d7ce11d547ca4326999ac10fc1d, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("get_deduced_type", method_pointer_15548c5df69b5b66b92765b9bceafaee, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_decltype_auto", method_pointer_af93ca45efc9543c8e425750f6be9ac1, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_deduced", method_pointer_ca56c34b49705e689fc7eeccffff4136, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_sugared", method_pointer_b1ebe04117bc5b94bd8af8206efafae1, "");
    class_343731ee4eba5641ba0d7ad711f1744f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AutoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AutoType >, autowig::HeldType< class ::clang::Type > >();
    }

}