#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_bda52e5bd7bb54feb63e41eb6b39b7c5()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_c07a2a5bb12a5f33b95ba9c1356c7c8a)(class ::clang::Type  const *) = ::clang::BlockPointerType::classof;
    class ::clang::QualType  (::clang::BlockPointerType::*method_pointer_f966b410c9e95d63aec225e8ea357539)() const = &::clang::BlockPointerType::desugar;
    class ::clang::QualType  (::clang::BlockPointerType::*method_pointer_981f105792fc5263821bac364246f824)() const = &::clang::BlockPointerType::getPointeeType;
    bool  (::clang::BlockPointerType::*method_pointer_8efacdb801795c30ad80e2470803ce1a)() const = &::clang::BlockPointerType::isSugared;
    boost::python::class_< class ::clang::BlockPointerType, autowig::HeldType< class ::clang::BlockPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_bda52e5bd7bb54feb63e41eb6b39b7c5("BlockPointerType", "", boost::python::no_init);
    class_bda52e5bd7bb54feb63e41eb6b39b7c5.def("classof", method_pointer_c07a2a5bb12a5f33b95ba9c1356c7c8a, "");
    class_bda52e5bd7bb54feb63e41eb6b39b7c5.def("desugar", method_pointer_f966b410c9e95d63aec225e8ea357539, "");
    class_bda52e5bd7bb54feb63e41eb6b39b7c5.def("get_pointee_type", method_pointer_981f105792fc5263821bac364246f824, "");
    class_bda52e5bd7bb54feb63e41eb6b39b7c5.def("is_sugared", method_pointer_8efacdb801795c30ad80e2470803ce1a, "");
    class_bda52e5bd7bb54feb63e41eb6b39b7c5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::BlockPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BlockPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}