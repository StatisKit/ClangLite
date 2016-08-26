#include "_clanglite.h"


namespace autowig
{
}


void wrapper_17505392838a5ddf8a16f3bdbb8f586b()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_feb5d94460995369bc71a829776c0cce)(class ::clang::Type  const *) = ::clang::AtomicType::classof;
    class ::clang::QualType  (::clang::AtomicType::*method_pointer_6b60802dec135ed7ae013bb92e2b002f)() const = &::clang::AtomicType::desugar;
    class ::clang::QualType  (::clang::AtomicType::*method_pointer_a2e22d53a1355c7c955c12cc1b26db40)() const = &::clang::AtomicType::getValueType;
    bool  (::clang::AtomicType::*method_pointer_476830177abe518ca6ebcaa85ec0b5e5)() const = &::clang::AtomicType::isSugared;
    boost::python::class_< class ::clang::AtomicType, autowig::HeldType< class ::clang::AtomicType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_17505392838a5ddf8a16f3bdbb8f586b("AtomicType", "", boost::python::no_init);
    class_17505392838a5ddf8a16f3bdbb8f586b.def("classof", method_pointer_feb5d94460995369bc71a829776c0cce, "");
    class_17505392838a5ddf8a16f3bdbb8f586b.def("desugar", method_pointer_6b60802dec135ed7ae013bb92e2b002f, "");
    class_17505392838a5ddf8a16f3bdbb8f586b.def("get_value_type", method_pointer_a2e22d53a1355c7c955c12cc1b26db40, "");
    class_17505392838a5ddf8a16f3bdbb8f586b.def("is_sugared", method_pointer_476830177abe518ca6ebcaa85ec0b5e5, "");
    class_17505392838a5ddf8a16f3bdbb8f586b.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AtomicType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AtomicType >, autowig::HeldType< class ::clang::Type > >();
    }

}