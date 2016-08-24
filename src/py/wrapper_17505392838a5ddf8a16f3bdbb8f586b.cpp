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
    bool  (*method_pointer_54639f646f56571dbb5ab0f15f0c182e)(class ::clang::Type  const *) = ::clang::AtomicType::classof;
    class ::clang::QualType  (::clang::AtomicType::*method_pointer_15bafe19d8d1546c90c44739f2b824e1)() const = &::clang::AtomicType::desugar;
    class ::clang::QualType  (::clang::AtomicType::*method_pointer_e0d9af054aca5aa48cb84f7f8791c18c)() const = &::clang::AtomicType::getValueType;
    bool  (::clang::AtomicType::*method_pointer_dd090da5452557318a47062879f6dee2)() const = &::clang::AtomicType::isSugared;
    boost::python::class_< class ::clang::AtomicType, autowig::HeldType< class ::clang::AtomicType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_17505392838a5ddf8a16f3bdbb8f586b("AtomicType", "", boost::python::no_init);
    class_17505392838a5ddf8a16f3bdbb8f586b.def("classof", method_pointer_54639f646f56571dbb5ab0f15f0c182e, "");
    class_17505392838a5ddf8a16f3bdbb8f586b.def("desugar", method_pointer_15bafe19d8d1546c90c44739f2b824e1, "");
    class_17505392838a5ddf8a16f3bdbb8f586b.def("get_value_type", method_pointer_e0d9af054aca5aa48cb84f7f8791c18c, "");
    class_17505392838a5ddf8a16f3bdbb8f586b.def("is_sugared", method_pointer_dd090da5452557318a47062879f6dee2, "");
    class_17505392838a5ddf8a16f3bdbb8f586b.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AtomicType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AtomicType >, autowig::HeldType< class ::clang::Type > >();
    }

}