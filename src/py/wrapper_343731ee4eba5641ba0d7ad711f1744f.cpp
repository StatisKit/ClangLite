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
    bool  (*method_pointer_76c7ae90d56a5c838190ec04480513ba)(class ::clang::Type  const *) = ::clang::AutoType::classof;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_1835a6a39b7954d8a03c19bdd83ffe33)() const = &::clang::AutoType::desugar;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_003ee759310a5fb4b2b740b030cd00b0)() const = &::clang::AutoType::getDeducedType;
    bool  (::clang::AutoType::*method_pointer_f4970f4b774e54a79bd959a4a7263230)() const = &::clang::AutoType::isDecltypeAuto;
    bool  (::clang::AutoType::*method_pointer_e139a8cc329f5c07bf5ae485b17b1514)() const = &::clang::AutoType::isDeduced;
    bool  (::clang::AutoType::*method_pointer_839ba21cc8795a549b72cffe6aabd2a0)() const = &::clang::AutoType::isSugared;
    boost::python::class_< class ::clang::AutoType, autowig::HeldType< class ::clang::AutoType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_343731ee4eba5641ba0d7ad711f1744f("AutoType", "", boost::python::no_init);
    class_343731ee4eba5641ba0d7ad711f1744f.def("classof", method_pointer_76c7ae90d56a5c838190ec04480513ba, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("desugar", method_pointer_1835a6a39b7954d8a03c19bdd83ffe33, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("get_deduced_type", method_pointer_003ee759310a5fb4b2b740b030cd00b0, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_decltype_auto", method_pointer_f4970f4b774e54a79bd959a4a7263230, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_deduced", method_pointer_e139a8cc329f5c07bf5ae485b17b1514, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_sugared", method_pointer_839ba21cc8795a549b72cffe6aabd2a0, "");
    class_343731ee4eba5641ba0d7ad711f1744f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AutoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AutoType >, autowig::HeldType< class ::clang::Type > >();
    }

}