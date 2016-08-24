#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_c36c84c61d245be2a9de47ae3c87a824()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_915fa88814565833a197b76050ac8c75)(class ::clang::Type  const *) = ::clang::PointerType::classof;
    class ::clang::QualType  (::clang::PointerType::*method_pointer_a9fa476ebb095d0ba5a2e3cbf968b4cb)() const = &::clang::PointerType::desugar;
    class ::clang::QualType  (::clang::PointerType::*method_pointer_065885d2388d5f48a4e4fc7048a428e5)() const = &::clang::PointerType::getPointeeType;
    bool  (::clang::PointerType::*method_pointer_9dc548f4e61e5663b9cc5538ed5be86a)() const = &::clang::PointerType::isSugared;
    boost::python::class_< class ::clang::PointerType, autowig::HeldType< class ::clang::PointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_c36c84c61d245be2a9de47ae3c87a824("PointerType", "", boost::python::no_init);
    class_c36c84c61d245be2a9de47ae3c87a824.def("classof", method_pointer_915fa88814565833a197b76050ac8c75, "");
    class_c36c84c61d245be2a9de47ae3c87a824.def("desugar", method_pointer_a9fa476ebb095d0ba5a2e3cbf968b4cb, "");
    class_c36c84c61d245be2a9de47ae3c87a824.def("get_pointee_type", method_pointer_065885d2388d5f48a4e4fc7048a428e5, "");
    class_c36c84c61d245be2a9de47ae3c87a824.def("is_sugared", method_pointer_9dc548f4e61e5663b9cc5538ed5be86a, "");
    class_c36c84c61d245be2a9de47ae3c87a824.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::PointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::PointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}