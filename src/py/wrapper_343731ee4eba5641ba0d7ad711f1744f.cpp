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
    bool  (*method_pointer_d23b27ce25045cd8b50808c295c48d90)(class ::clang::Type  const *) = ::clang::AutoType::classof;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_aeb2f55736fa5e49865c904b38017984)() const = &::clang::AutoType::desugar;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_062f446ac7f354bd8dcc48a277c6a369)() const = &::clang::AutoType::getDeducedType;
    bool  (::clang::AutoType::*method_pointer_926330febd065e138434f4e151796e4a)() const = &::clang::AutoType::isDecltypeAuto;
    bool  (::clang::AutoType::*method_pointer_fbd0155e356b5f85b1ac64d7223dfac6)() const = &::clang::AutoType::isDeduced;
    bool  (::clang::AutoType::*method_pointer_5005dcc24d1e5ae789c76ccad5e6824e)() const = &::clang::AutoType::isSugared;
    boost::python::class_< class ::clang::AutoType, autowig::HeldType< class ::clang::AutoType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_343731ee4eba5641ba0d7ad711f1744f("AutoType", "", boost::python::no_init);
    class_343731ee4eba5641ba0d7ad711f1744f.def("classof", method_pointer_d23b27ce25045cd8b50808c295c48d90, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("desugar", method_pointer_aeb2f55736fa5e49865c904b38017984, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("get_deduced_type", method_pointer_062f446ac7f354bd8dcc48a277c6a369, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_decltype_auto", method_pointer_926330febd065e138434f4e151796e4a, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_deduced", method_pointer_fbd0155e356b5f85b1ac64d7223dfac6, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_sugared", method_pointer_5005dcc24d1e5ae789c76ccad5e6824e, "");
    class_343731ee4eba5641ba0d7ad711f1744f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AutoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AutoType >, autowig::HeldType< class ::clang::Type > >();
    }

}