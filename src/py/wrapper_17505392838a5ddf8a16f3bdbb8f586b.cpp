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
    bool  (*method_pointer_9a46b15a1d7f509fa907ee9d1209a2bb)(class ::clang::Type  const *) = ::clang::AtomicType::classof;
    class ::clang::QualType  (::clang::AtomicType::*method_pointer_d8c8cd44a3f95592a9e4d82a53e7ba70)() const = &::clang::AtomicType::desugar;
    class ::clang::QualType  (::clang::AtomicType::*method_pointer_bcfb360ee6645bb099be05f6614bafb7)() const = &::clang::AtomicType::getValueType;
    bool  (::clang::AtomicType::*method_pointer_d3b1b02b8b2957048a0408312f2ca8e4)() const = &::clang::AtomicType::isSugared;
    boost::python::class_< class ::clang::AtomicType, autowig::HeldType< class ::clang::AtomicType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_17505392838a5ddf8a16f3bdbb8f586b("AtomicType", "", boost::python::no_init);
    class_17505392838a5ddf8a16f3bdbb8f586b.def("classof", method_pointer_9a46b15a1d7f509fa907ee9d1209a2bb, "");
    class_17505392838a5ddf8a16f3bdbb8f586b.def("desugar", method_pointer_d8c8cd44a3f95592a9e4d82a53e7ba70, "");
    class_17505392838a5ddf8a16f3bdbb8f586b.def("get_value_type", method_pointer_bcfb360ee6645bb099be05f6614bafb7, "");
    class_17505392838a5ddf8a16f3bdbb8f586b.def("is_sugared", method_pointer_d3b1b02b8b2957048a0408312f2ca8e4, "");
    class_17505392838a5ddf8a16f3bdbb8f586b.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AtomicType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AtomicType >, autowig::HeldType< class ::clang::Type > >();
    }

}