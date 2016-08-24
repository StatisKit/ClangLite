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
    bool  (*method_pointer_555ce8ef65eb55269913929b89f72745)(class ::clang::Type  const *) = ::clang::AutoType::classof;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_312b3437f4015da994ef3b4b8ab8fb57)() const = &::clang::AutoType::desugar;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_5241f2bf64895dd2b906dcbd547b4929)() const = &::clang::AutoType::getDeducedType;
    bool  (::clang::AutoType::*method_pointer_4e6636db70f152b4ba4b78ec1288a73f)() const = &::clang::AutoType::isDecltypeAuto;
    bool  (::clang::AutoType::*method_pointer_5b25cb94d23a590ba0d71291d34575d9)() const = &::clang::AutoType::isDeduced;
    bool  (::clang::AutoType::*method_pointer_5dcf751dcceb5288a9a98590643542bb)() const = &::clang::AutoType::isSugared;
    boost::python::class_< class ::clang::AutoType, autowig::HeldType< class ::clang::AutoType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_343731ee4eba5641ba0d7ad711f1744f("AutoType", "", boost::python::no_init);
    class_343731ee4eba5641ba0d7ad711f1744f.def("classof", method_pointer_555ce8ef65eb55269913929b89f72745, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("desugar", method_pointer_312b3437f4015da994ef3b4b8ab8fb57, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("get_deduced_type", method_pointer_5241f2bf64895dd2b906dcbd547b4929, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_decltype_auto", method_pointer_4e6636db70f152b4ba4b78ec1288a73f, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_deduced", method_pointer_5b25cb94d23a590ba0d71291d34575d9, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_sugared", method_pointer_5dcf751dcceb5288a9a98590643542bb, "");
    class_343731ee4eba5641ba0d7ad711f1744f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AutoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AutoType >, autowig::HeldType< class ::clang::Type > >();
    }

}