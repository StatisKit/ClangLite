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
    bool  (*method_pointer_3a10105b37b55476943c26162dcb9785)(class ::clang::Type  const *) = ::clang::AutoType::classof;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_2350b4f6536456d99fa220fbe1859db1)() const = &::clang::AutoType::desugar;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_e2f2609935b959a48d0240b7f4e3719f)() const = &::clang::AutoType::getDeducedType;
    bool  (::clang::AutoType::*method_pointer_6edce823ba9b530a9480355ab4bec123)() const = &::clang::AutoType::isDecltypeAuto;
    bool  (::clang::AutoType::*method_pointer_e13e2f76424d5f11b860487acb82efe6)() const = &::clang::AutoType::isDeduced;
    bool  (::clang::AutoType::*method_pointer_64e558f21afb59c6b9a7a1e6bf5123a6)() const = &::clang::AutoType::isSugared;
    boost::python::class_< class ::clang::AutoType, autowig::HeldType< class ::clang::AutoType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_343731ee4eba5641ba0d7ad711f1744f("AutoType", "", boost::python::no_init);
    class_343731ee4eba5641ba0d7ad711f1744f.def("classof", method_pointer_3a10105b37b55476943c26162dcb9785, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("desugar", method_pointer_2350b4f6536456d99fa220fbe1859db1, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("get_deduced_type", method_pointer_e2f2609935b959a48d0240b7f4e3719f, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_decltype_auto", method_pointer_6edce823ba9b530a9480355ab4bec123, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_deduced", method_pointer_e13e2f76424d5f11b860487acb82efe6, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_sugared", method_pointer_64e558f21afb59c6b9a7a1e6bf5123a6, "");
    class_343731ee4eba5641ba0d7ad711f1744f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AutoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AutoType >, autowig::HeldType< class ::clang::Type > >();
    }

}