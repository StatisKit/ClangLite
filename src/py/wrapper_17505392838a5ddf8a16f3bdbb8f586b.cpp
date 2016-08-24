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
    bool  (*method_pointer_c23d7ba8351c5b008e882d988c4f12b4)(class ::clang::Type  const *) = ::clang::AtomicType::classof;
    class ::clang::QualType  (::clang::AtomicType::*method_pointer_6a54d5a678b4500c850b4e6d00602b61)() const = &::clang::AtomicType::desugar;
    class ::clang::QualType  (::clang::AtomicType::*method_pointer_e25c33db38df523a8fe1ac47559677d6)() const = &::clang::AtomicType::getValueType;
    bool  (::clang::AtomicType::*method_pointer_666e883ecd9b5a8f9111dfa71cc15e5e)() const = &::clang::AtomicType::isSugared;
    boost::python::class_< class ::clang::AtomicType, autowig::HeldType< class ::clang::AtomicType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_17505392838a5ddf8a16f3bdbb8f586b("AtomicType", "", boost::python::no_init);
    class_17505392838a5ddf8a16f3bdbb8f586b.def("classof", method_pointer_c23d7ba8351c5b008e882d988c4f12b4, "");
    class_17505392838a5ddf8a16f3bdbb8f586b.def("desugar", method_pointer_6a54d5a678b4500c850b4e6d00602b61, "");
    class_17505392838a5ddf8a16f3bdbb8f586b.def("get_value_type", method_pointer_e25c33db38df523a8fe1ac47559677d6, "");
    class_17505392838a5ddf8a16f3bdbb8f586b.def("is_sugared", method_pointer_666e883ecd9b5a8f9111dfa71cc15e5e, "");
    class_17505392838a5ddf8a16f3bdbb8f586b.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AtomicType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AtomicType >, autowig::HeldType< class ::clang::Type > >();
    }

}