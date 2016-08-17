#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_9e743a2cacb25baaabcd1704a696efe3()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    unsigned int  (::clang::DependentTemplateSpecializationType::*method_pointer_40fb9da9d44250d1945e60183a0a33c1)() const = &::clang::DependentTemplateSpecializationType::getNumArgs;
    bool  (*method_pointer_e1f63972bce15123991061e1c056ea3b)(class ::clang::Type  const *) = ::clang::DependentTemplateSpecializationType::classof;
    bool  (::clang::DependentTemplateSpecializationType::*method_pointer_d0d2be8f9c505cea961c9f4dcc4672b4)() const = &::clang::DependentTemplateSpecializationType::isSugared;
    boost::python::class_< class ::clang::DependentTemplateSpecializationType, autowig::HeldType< class ::clang::DependentTemplateSpecializationType >, boost::python::bases< class ::clang::TypeWithKeyword >, boost::noncopyable > class_9e743a2cacb25baaabcd1704a696efe3("DependentTemplateSpecializationType", "", boost::python::no_init);
    class_9e743a2cacb25baaabcd1704a696efe3.def("get_num_args", method_pointer_40fb9da9d44250d1945e60183a0a33c1, "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("classof", method_pointer_e1f63972bce15123991061e1c056ea3b, "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("is_sugared", method_pointer_d0d2be8f9c505cea961c9f4dcc4672b4, "");
    class_9e743a2cacb25baaabcd1704a696efe3.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::DependentTemplateSpecializationType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::DependentTemplateSpecializationType >, autowig::HeldType< class ::clang::TypeWithKeyword > >();
    }

}