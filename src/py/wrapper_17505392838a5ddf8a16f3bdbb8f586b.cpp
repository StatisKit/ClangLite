#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_17505392838a5ddf8a16f3bdbb8f586b()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_5e615c8e46a25c68a80608ca2b0b0069)(class ::clang::Type  const *) = ::clang::AtomicType::classof;
    class ::clang::QualType  (::clang::AtomicType::*method_pointer_41211099c66050bb80d36c93ba40e50c)() const = &::clang::AtomicType::desugar;
    class ::clang::QualType  (::clang::AtomicType::*method_pointer_8aa4a2deef1f56f186dd2c349d85b364)() const = &::clang::AtomicType::getValueType;
    bool  (::clang::AtomicType::*method_pointer_c271b822a0fb584e9f081ca444b5bf87)() const = &::clang::AtomicType::isSugared;
    boost::python::class_< class ::clang::AtomicType, autowig::HeldType< class ::clang::AtomicType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_17505392838a5ddf8a16f3bdbb8f586b("AtomicType", "", boost::python::no_init);
    class_17505392838a5ddf8a16f3bdbb8f586b.def("classof", method_pointer_5e615c8e46a25c68a80608ca2b0b0069, "");
    class_17505392838a5ddf8a16f3bdbb8f586b.def("desugar", method_pointer_41211099c66050bb80d36c93ba40e50c, "");
    class_17505392838a5ddf8a16f3bdbb8f586b.def("get_value_type", method_pointer_8aa4a2deef1f56f186dd2c349d85b364, "");
    class_17505392838a5ddf8a16f3bdbb8f586b.def("is_sugared", method_pointer_c271b822a0fb584e9f081ca444b5bf87, "");
    class_17505392838a5ddf8a16f3bdbb8f586b.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AtomicType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AtomicType >, autowig::HeldType< class ::clang::Type > >();
    }

}